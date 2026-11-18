#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0055[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0,
    0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 165, 0,
    166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0,
    0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0,
    0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 208, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0,
    271, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283,
    0, 284, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 0, 293, 0, 294, 0, 0, 295, 0, 296,
    0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    303, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0,
    310, 0, 311, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0,
    322, 0, 323, 0, 0, 324, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332,
    333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0,
    0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 394, 0,
    0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0,
    0, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0,
    0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 418, 0,
    0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0,
    0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0,
    0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 442, 0,
    0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0,
    0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0,
    0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0,
    0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483,
    0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0,
    490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 0,
    0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0,
    0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0,
    0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 540, 0,
    0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0,
    0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0,
    0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0,
    565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0,
    0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0,
    0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0,
    0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 0, 588,
    0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595,
    0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0,
    605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0,
    0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 0,
    618, 0, 619, 0, 0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0,
    627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630,
    0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0,
    0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0,
    642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0,
    0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0,
    0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 660, 0, 0, 661,
    0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0,
    673, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681,
    0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0,
    0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0,
    0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696,
    0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0,
    702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0,
    0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0,
    0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0,
    0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 731,
    0, 0, 732, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0,
    739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0,
    749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0,
    0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 761, 0,
    762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 0, 783,
    0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0,
    790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0,
    0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799,
    0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 804,
    0, 0, 805, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0,
    812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818,
};
void recomp_unit_0055_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0055[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E0000;
    case 2u: goto L_088E0014;
    case 3u: goto L_088E002C;
    case 4u: goto L_088E003C;
    case 5u: goto L_088E004C;
    case 6u: goto L_088E00A8;
    case 7u: goto L_088E00B8;
    case 8u: goto L_088E00C8;
    case 9u: goto L_088E00D8;
    case 10u: goto L_088E0100;
    case 11u: goto L_088E011C;
    case 12u: goto L_088E012C;
    case 13u: goto L_088E0138;
    case 14u: goto L_088E016C;
    case 15u: goto L_088E0188;
    case 16u: goto L_088E01A0;
    case 17u: goto L_088E01B4;
    case 18u: goto L_088E01BC;
    case 19u: goto L_088E01D4;
    case 20u: goto L_088E01E8;
    case 21u: goto L_088E01FC;
    case 22u: goto L_088E0218;
    case 23u: goto L_088E0230;
    case 24u: goto L_088E0240;
    case 25u: goto L_088E0250;
    case 26u: goto L_088E02A4;
    case 27u: goto L_088E02B4;
    case 28u: goto L_088E02C4;
    case 29u: goto L_088E02D4;
    case 30u: goto L_088E02EC;
    case 31u: goto L_088E0300;
    case 32u: goto L_088E0308;
    case 33u: goto L_088E0320;
    case 34u: goto L_088E0334;
    case 35u: goto L_088E0348;
    case 36u: goto L_088E0364;
    case 37u: goto L_088E037C;
    case 38u: goto L_088E038C;
    case 39u: goto L_088E039C;
    case 40u: goto L_088E03F0;
    case 41u: goto L_088E0400;
    case 42u: goto L_088E0410;
    case 43u: goto L_088E0420;
    case 44u: goto L_088E0430;
    case 45u: goto L_088E0454;
    case 46u: goto L_088E0470;
    case 47u: goto L_088E0498;
    case 48u: goto L_088E04B0;
    case 49u: goto L_088E04C8;
    case 50u: goto L_088E04DC;
    case 51u: goto L_088E04E4;
    case 52u: goto L_088E04FC;
    case 53u: goto L_088E0510;
    case 54u: goto L_088E0524;
    case 55u: goto L_088E0540;
    case 56u: goto L_088E0558;
    case 57u: goto L_088E05A0;
    case 58u: goto L_088E05B8;
    case 59u: goto L_088E05C8;
    case 60u: goto L_088E05D8;
    case 61u: goto L_088E0624;
    case 62u: goto L_088E0634;
    case 63u: goto L_088E0644;
    case 64u: goto L_088E0654;
    case 65u: goto L_088E0664;
    case 66u: goto L_088E067C;
    case 67u: goto L_088E0690;
    case 68u: goto L_088E0698;
    case 69u: goto L_088E06B0;
    case 70u: goto L_088E06C4;
    case 71u: goto L_088E06D8;
    case 72u: goto L_088E06F4;
    case 73u: goto L_088E070C;
    case 74u: goto L_088E071C;
    case 75u: goto L_088E072C;
    case 76u: goto L_088E0778;
    case 77u: goto L_088E0788;
    case 78u: goto L_088E0798;
    case 79u: goto L_088E07A8;
    case 80u: goto L_088E07C0;
    case 81u: goto L_088E07D4;
    case 82u: goto L_088E07DC;
    case 83u: goto L_088E07F4;
    case 84u: goto L_088E0808;
    case 85u: goto L_088E081C;
    case 86u: goto L_088E0838;
    case 87u: goto L_088E0850;
    case 88u: goto L_088E0860;
    case 89u: goto L_088E0870;
    case 90u: goto L_088E08BC;
    case 91u: goto L_088E08CC;
    case 92u: goto L_088E08DC;
    case 93u: goto L_088E08EC;
    case 94u: goto L_088E0904;
    case 95u: goto L_088E0918;
    case 96u: goto L_088E0920;
    case 97u: goto L_088E0938;
    case 98u: goto L_088E0950;
    case 99u: goto L_088E0968;
    case 100u: goto L_088E098C;
    case 101u: goto L_088E09A8;
    case 102u: goto L_088E09C0;
    case 103u: goto L_088E09D8;
    case 104u: goto L_088E09E8;
    case 105u: goto L_088E09F8;
    case 106u: goto L_088E0A4C;
    case 107u: goto L_088E0A5C;
    case 108u: goto L_088E0A6C;
    case 109u: goto L_088E0A7C;
    case 110u: goto L_088E0A8C;
    case 111u: goto L_088E0AA8;
    case 112u: goto L_088E0AB0;
    case 113u: goto L_088E0ABC;
    case 114u: goto L_088E0AD0;
    case 115u: goto L_088E0AE4;
    case 116u: goto L_088E0AEC;
    case 117u: goto L_088E0AFC;
    case 118u: goto L_088E0B20;
    case 119u: goto L_088E0B28;
    case 120u: goto L_088E0B30;
    case 121u: goto L_088E0B54;
    case 122u: goto L_088E0B68;
    case 123u: goto L_088E0B80;
    case 124u: goto L_088E0B88;
    case 125u: goto L_088E0BA0;
    case 126u: goto L_088E0BAC;
    case 127u: goto L_088E0BC0;
    case 128u: goto L_088E0BD0;
    case 129u: goto L_088E0BEC;
    case 130u: goto L_088E0BF8;
    case 131u: goto L_088E0C04;
    case 132u: goto L_088E0C18;
    case 133u: goto L_088E0C24;
    case 134u: goto L_088E0C34;
    case 135u: goto L_088E0C40;
    case 136u: goto L_088E0C48;
    case 137u: goto L_088E0C54;
    case 138u: goto L_088E0C5C;
    case 139u: goto L_088E0C74;
    case 140u: goto L_088E0C88;
    case 141u: goto L_088E0C98;
    case 142u: goto L_088E0CB0;
    case 143u: goto L_088E0CB4;
    case 144u: goto L_088E0CBC;
    case 145u: goto L_088E0CD4;
    case 146u: goto L_088E0CE0;
    case 147u: goto L_088E0CF0;
    case 148u: goto L_088E0D00;
    case 149u: goto L_088E0D1C;
    case 150u: goto L_088E0D28;
    case 151u: goto L_088E0D30;
    case 152u: goto L_088E0D3C;
    case 153u: goto L_088E0D48;
    case 154u: goto L_088E0D5C;
    case 155u: goto L_088E0D68;
    case 156u: goto L_088E0D78;
    case 157u: goto L_088E0D84;
    case 158u: goto L_088E0D8C;
    case 159u: goto L_088E0D98;
    case 160u: goto L_088E0DA0;
    case 161u: goto L_088E0DB8;
    case 162u: goto L_088E0DCC;
    case 163u: goto L_088E0DDC;
    case 164u: goto L_088E0DF4;
    case 165u: goto L_088E0DF8;
    case 166u: goto L_088E0E00;
    case 167u: goto L_088E0E18;
    case 168u: goto L_088E0E24;
    case 169u: goto L_088E0E38;
    case 170u: goto L_088E0E48;
    case 171u: goto L_088E0E64;
    case 172u: goto L_088E0E70;
    case 173u: goto L_088E0E78;
    case 174u: goto L_088E0E84;
    case 175u: goto L_088E0E90;
    case 176u: goto L_088E0EA4;
    case 177u: goto L_088E0EB0;
    case 178u: goto L_088E0EC0;
    case 179u: goto L_088E0ECC;
    case 180u: goto L_088E0ED4;
    case 181u: goto L_088E0EE0;
    case 182u: goto L_088E0EE8;
    case 183u: goto L_088E0F00;
    case 184u: goto L_088E0F14;
    case 185u: goto L_088E0F24;
    case 186u: goto L_088E0F3C;
    case 187u: goto L_088E0F40;
    case 188u: goto L_088E0F48;
    case 189u: goto L_088E0F60;
    case 190u: goto L_088E0F6C;
    case 191u: goto L_088E0F80;
    case 192u: goto L_088E0F90;
    case 193u: goto L_088E0FAC;
    case 194u: goto L_088E0FB8;
    case 195u: goto L_088E0FC0;
    case 196u: goto L_088E0FCC;
    case 197u: goto L_088E0FD8;
    case 198u: goto L_088E0FEC;
    case 199u: goto L_088E0FF8;
    case 200u: goto L_088E1008;
    case 201u: goto L_088E1014;
    case 202u: goto L_088E101C;
    case 203u: goto L_088E1028;
    case 204u: goto L_088E1030;
    case 205u: goto L_088E1048;
    case 206u: goto L_088E105C;
    case 207u: goto L_088E106C;
    case 208u: goto L_088E1084;
    case 209u: goto L_088E1088;
    case 210u: goto L_088E1090;
    case 211u: goto L_088E10A8;
    case 212u: goto L_088E10B4;
    case 213u: goto L_088E10C4;
    case 214u: goto L_088E10D4;
    case 215u: goto L_088E10E4;
    case 216u: goto L_088E1100;
    case 217u: goto L_088E110C;
    case 218u: goto L_088E1114;
    case 219u: goto L_088E112C;
    case 220u: goto L_088E1144;
    case 221u: goto L_088E1158;
    case 222u: goto L_088E116C;
    case 223u: goto L_088E1184;
    case 224u: goto L_088E118C;
    case 225u: goto L_088E1198;
    case 226u: goto L_088E11A4;
    case 227u: goto L_088E11AC;
    case 228u: goto L_088E11C4;
    case 229u: goto L_088E11DC;
    case 230u: goto L_088E11F0;
    case 231u: goto L_088E11F8;
    case 232u: goto L_088E1210;
    case 233u: goto L_088E1224;
    case 234u: goto L_088E1238;
    case 235u: goto L_088E1254;
    case 236u: goto L_088E126C;
    case 237u: goto L_088E127C;
    case 238u: goto L_088E128C;
    case 239u: goto L_088E12E0;
    case 240u: goto L_088E12F0;
    case 241u: goto L_088E1300;
    case 242u: goto L_088E1310;
    case 243u: goto L_088E1340;
    case 244u: goto L_088E1354;
    case 245u: goto L_088E1370;
    case 246u: goto L_088E137C;
    case 247u: goto L_088E13A4;
    case 248u: goto L_088E13C0;
    case 249u: goto L_088E13CC;
    case 250u: goto L_088E13E8;
    case 251u: goto L_088E1400;
    case 252u: goto L_088E1414;
    case 253u: goto L_088E1428;
    case 254u: goto L_088E1440;
    case 255u: goto L_088E1454;
    case 256u: goto L_088E145C;
    case 257u: goto L_088E1474;
    case 258u: goto L_088E148C;
    case 259u: goto L_088E14E8;
    case 260u: goto L_088E150C;
    case 261u: goto L_088E1514;
    case 262u: goto L_088E1520;
    case 263u: goto L_088E1528;
    case 264u: goto L_088E1534;
    case 265u: goto L_088E153C;
    case 266u: goto L_088E1548;
    case 267u: goto L_088E1550;
    case 268u: goto L_088E155C;
    case 269u: goto L_088E1564;
    case 270u: goto L_088E1574;
    case 271u: goto L_088E1580;
    case 272u: goto L_088E1588;
    case 273u: goto L_088E1590;
    case 274u: goto L_088E15A0;
    case 275u: goto L_088E15AC;
    case 276u: goto L_088E15B4;
    case 277u: goto L_088E15C0;
    case 278u: goto L_088E15C8;
    case 279u: goto L_088E15D4;
    case 280u: goto L_088E15DC;
    case 281u: goto L_088E15E8;
    case 282u: goto L_088E15F0;
    case 283u: goto L_088E15FC;
    case 284u: goto L_088E1604;
    case 285u: goto L_088E1610;
    case 286u: goto L_088E1618;
    case 287u: goto L_088E1624;
    case 288u: goto L_088E162C;
    case 289u: goto L_088E1638;
    case 290u: goto L_088E1640;
    case 291u: goto L_088E164C;
    case 292u: goto L_088E1654;
    case 293u: goto L_088E1660;
    case 294u: goto L_088E1668;
    case 295u: goto L_088E1674;
    case 296u: goto L_088E167C;
    case 297u: goto L_088E1688;
    case 298u: goto L_088E1690;
    case 299u: goto L_088E16A0;
    case 300u: goto L_088E16B8;
    case 301u: goto L_088E16D8;
    case 302u: goto L_088E16E4;
    case 303u: goto L_088E1700;
    case 304u: goto L_088E1708;
    case 305u: goto L_088E1714;
    case 306u: goto L_088E1720;
    case 307u: goto L_088E173C;
    case 308u: goto L_088E175C;
    case 309u: goto L_088E1774;
    case 310u: goto L_088E1780;
    case 311u: goto L_088E1788;
    case 312u: goto L_088E1794;
    case 313u: goto L_088E17A0;
    case 314u: goto L_088E17A8;
    case 315u: goto L_088E17B4;
    case 316u: goto L_088E17C0;
    case 317u: goto L_088E17C8;
    case 318u: goto L_088E17D4;
    case 319u: goto L_088E17E0;
    case 320u: goto L_088E17E8;
    case 321u: goto L_088E17F4;
    case 322u: goto L_088E1800;
    case 323u: goto L_088E1808;
    case 324u: goto L_088E1814;
    case 325u: goto L_088E1820;
    case 326u: goto L_088E1828;
    case 327u: goto L_088E1834;
    case 328u: goto L_088E1840;
    case 329u: goto L_088E1848;
    case 330u: goto L_088E1854;
    case 331u: goto L_088E1864;
    case 332u: goto L_088E187C;
    case 333u: goto L_088E1880;
    case 334u: goto L_088E1888;
    case 335u: goto L_088E18A0;
    case 336u: goto L_088E18AC;
    case 337u: goto L_088E18B8;
    case 338u: goto L_088E18C4;
    case 339u: goto L_088E18E0;
    case 340u: goto L_088E18F8;
    case 341u: goto L_088E196C;
    case 342u: goto L_088E198C;
    case 343u: goto L_088E1998;
    case 344u: goto L_088E19B4;
    case 345u: goto L_088E19BC;
    case 346u: goto L_088E19C8;
    case 347u: goto L_088E19D4;
    case 348u: goto L_088E19F0;
    case 349u: goto L_088E1A08;
    case 350u: goto L_088E1A18;
    case 351u: goto L_088E1A28;
    case 352u: goto L_088E1A8C;
    case 353u: goto L_088E1A9C;
    case 354u: goto L_088E1AAC;
    case 355u: goto L_088E1ABC;
    case 356u: goto L_088E1ACC;
    case 357u: goto L_088E1AF8;
    case 358u: goto L_088E1B14;
    case 359u: goto L_088E1B28;
    case 360u: goto L_088E1B3C;
    case 361u: goto L_088E1B58;
    case 362u: goto L_088E1B80;
    case 363u: goto L_088E1B9C;
    case 364u: goto L_088E1BA8;
    case 365u: goto L_088E1BBC;
    case 366u: goto L_088E1BD0;
    case 367u: goto L_088E1BEC;
    case 368u: goto L_088E1C14;
    case 369u: goto L_088E1C30;
    case 370u: goto L_088E1C3C;
    case 371u: goto L_088E1C50;
    case 372u: goto L_088E1C64;
    case 373u: goto L_088E1C80;
    case 374u: goto L_088E1CA8;
    case 375u: goto L_088E1CC4;
    case 376u: goto L_088E1CD0;
    case 377u: goto L_088E1CE0;
    case 378u: goto L_088E1CF0;
    case 379u: goto L_088E1D00;
    case 380u: goto L_088E1D10;
    case 381u: goto L_088E1D20;
    case 382u: goto L_088E1D2C;
    case 383u: goto L_088E1D44;
    case 384u: goto L_088E1D50;
    case 385u: goto L_088E1D64;
    case 386u: goto L_088E1D70;
    case 387u: goto L_088E1D84;
    case 388u: goto L_088E1D98;
    case 389u: goto L_088E1DA8;
    case 390u: goto L_088E1DB8;
    case 391u: goto L_088E1DC4;
    case 392u: goto L_088E1DD8;
    case 393u: goto L_088E1DE4;
    case 394u: goto L_088E1DF8;
    case 395u: goto L_088E1E04;
    case 396u: goto L_088E1E18;
    case 397u: goto L_088E1E24;
    case 398u: goto L_088E1E38;
    case 399u: goto L_088E1E44;
    case 400u: goto L_088E1E58;
    case 401u: goto L_088E1E64;
    case 402u: goto L_088E1E78;
    case 403u: goto L_088E1E84;
    case 404u: goto L_088E1E98;
    case 405u: goto L_088E1EA4;
    case 406u: goto L_088E1EB8;
    case 407u: goto L_088E1EC4;
    case 408u: goto L_088E1ED8;
    case 409u: goto L_088E1EE4;
    case 410u: goto L_088E1EF8;
    case 411u: goto L_088E1F08;
    case 412u: goto L_088E1F18;
    case 413u: goto L_088E1F24;
    case 414u: goto L_088E1F38;
    case 415u: goto L_088E1F48;
    case 416u: goto L_088E1F58;
    case 417u: goto L_088E1F64;
    case 418u: goto L_088E1F78;
    case 419u: goto L_088E1F84;
    case 420u: goto L_088E1F98;
    case 421u: goto L_088E1FA4;
    case 422u: goto L_088E1FB8;
    case 423u: goto L_088E1FC8;
    case 424u: goto L_088E1FD8;
    case 425u: goto L_088E1FE4;
    case 426u: goto L_088E1FF8;
    case 427u: goto L_088E2008;
    case 428u: goto L_088E2018;
    case 429u: goto L_088E2028;
    case 430u: goto L_088E2038;
    case 431u: goto L_088E2048;
    case 432u: goto L_088E2058;
    case 433u: goto L_088E2064;
    case 434u: goto L_088E2078;
    case 435u: goto L_088E2084;
    case 436u: goto L_088E2098;
    case 437u: goto L_088E20A4;
    case 438u: goto L_088E20B8;
    case 439u: goto L_088E20C4;
    case 440u: goto L_088E20D8;
    case 441u: goto L_088E20E4;
    case 442u: goto L_088E20F8;
    case 443u: goto L_088E2104;
    case 444u: goto L_088E2118;
    case 445u: goto L_088E2124;
    case 446u: goto L_088E2138;
    case 447u: goto L_088E2144;
    case 448u: goto L_088E2158;
    case 449u: goto L_088E2164;
    case 450u: goto L_088E2178;
    case 451u: goto L_088E2184;
    case 452u: goto L_088E2198;
    case 453u: goto L_088E21A4;
    case 454u: goto L_088E21D0;
    case 455u: goto L_088E21F0;
    case 456u: goto L_088E2200;
    case 457u: goto L_088E2210;
    case 458u: goto L_088E2228;
    case 459u: goto L_088E223C;
    case 460u: goto L_088E2244;
    case 461u: goto L_088E225C;
    case 462u: goto L_088E2274;
    case 463u: goto L_088E228C;
    case 464u: goto L_088E22B0;
    case 465u: goto L_088E22B8;
    case 466u: goto L_088E22D0;
    case 467u: goto L_088E22E8;
    case 468u: goto L_088E22F8;
    case 469u: goto L_088E2308;
    case 470u: goto L_088E2364;
    case 471u: goto L_088E2374;
    case 472u: goto L_088E2384;
    case 473u: goto L_088E2394;
    case 474u: goto L_088E23BC;
    case 475u: goto L_088E23D8;
    case 476u: goto L_088E23E8;
    case 477u: goto L_088E23F4;
    case 478u: goto L_088E2428;
    case 479u: goto L_088E2444;
    case 480u: goto L_088E245C;
    case 481u: goto L_088E2464;
    case 482u: goto L_088E2470;
    case 483u: goto L_088E247C;
    case 484u: goto L_088E2484;
    case 485u: goto L_088E249C;
    case 486u: goto L_088E24B4;
    case 487u: goto L_088E24C8;
    case 488u: goto L_088E24D0;
    case 489u: goto L_088E24E8;
    case 490u: goto L_088E2500;
    case 491u: goto L_088E2520;
    case 492u: goto L_088E2544;
    case 493u: goto L_088E254C;
    case 494u: goto L_088E2558;
    case 495u: goto L_088E2560;
    case 496u: goto L_088E256C;
    case 497u: goto L_088E2574;
    case 498u: goto L_088E258C;
    case 499u: goto L_088E25A4;
    case 500u: goto L_088E25B4;
    case 501u: goto L_088E25C4;
    case 502u: goto L_088E2620;
    case 503u: goto L_088E2630;
    case 504u: goto L_088E2640;
    case 505u: goto L_088E2650;
    case 506u: goto L_088E2678;
    case 507u: goto L_088E2694;
    case 508u: goto L_088E26A4;
    case 509u: goto L_088E26B0;
    case 510u: goto L_088E26C4;
    case 511u: goto L_088E26D0;
    case 512u: goto L_088E26EC;
    case 513u: goto L_088E26F8;
    case 514u: goto L_088E272C;
    case 515u: goto L_088E2748;
    case 516u: goto L_088E2760;
    case 517u: goto L_088E2774;
    case 518u: goto L_088E2788;
    case 519u: goto L_088E27A0;
    case 520u: goto L_088E27A8;
    case 521u: goto L_088E27B4;
    case 522u: goto L_088E27C0;
    case 523u: goto L_088E27C8;
    case 524u: goto L_088E27E0;
    case 525u: goto L_088E27F8;
    case 526u: goto L_088E280C;
    case 527u: goto L_088E2814;
    case 528u: goto L_088E282C;
    case 529u: goto L_088E2844;
    case 530u: goto L_088E2868;
    case 531u: goto L_088E2890;
    case 532u: goto L_088E289C;
    case 533u: goto L_088E28A4;
    case 534u: goto L_088E28AC;
    case 535u: goto L_088E28BC;
    case 536u: goto L_088E28CC;
    case 537u: goto L_088E28D8;
    case 538u: goto L_088E28E0;
    case 539u: goto L_088E28E8;
    case 540u: goto L_088E28F8;
    case 541u: goto L_088E2908;
    case 542u: goto L_088E2914;
    case 543u: goto L_088E291C;
    case 544u: goto L_088E2924;
    case 545u: goto L_088E2934;
    case 546u: goto L_088E2944;
    case 547u: goto L_088E2950;
    case 548u: goto L_088E2958;
    case 549u: goto L_088E2960;
    case 550u: goto L_088E2970;
    case 551u: goto L_088E2988;
    case 552u: goto L_088E29A0;
    case 553u: goto L_088E29B0;
    case 554u: goto L_088E29C0;
    case 555u: goto L_088E2A14;
    case 556u: goto L_088E2A24;
    case 557u: goto L_088E2A34;
    case 558u: goto L_088E2A44;
    case 559u: goto L_088E2A6C;
    case 560u: goto L_088E2A88;
    case 561u: goto L_088E2A98;
    case 562u: goto L_088E2AB4;
    case 563u: goto L_088E2ACC;
    case 564u: goto L_088E2AE8;
    case 565u: goto L_088E2B00;
    case 566u: goto L_088E2B1C;
    case 567u: goto L_088E2B2C;
    case 568u: goto L_088E2B54;
    case 569u: goto L_088E2B70;
    case 570u: goto L_088E2B88;
    case 571u: goto L_088E2BAC;
    case 572u: goto L_088E2BB4;
    case 573u: goto L_088E2BCC;
    case 574u: goto L_088E2BE4;
    case 575u: goto L_088E2C08;
    case 576u: goto L_088E2C10;
    case 577u: goto L_088E2C28;
    case 578u: goto L_088E2C40;
    case 579u: goto L_088E2C64;
    case 580u: goto L_088E2C6C;
    case 581u: goto L_088E2C84;
    case 582u: goto L_088E2C9C;
    case 583u: goto L_088E2CB0;
    case 584u: goto L_088E2CC4;
    case 585u: goto L_088E2CDC;
    case 586u: goto L_088E2CE4;
    case 587u: goto L_088E2CF0;
    case 588u: goto L_088E2CFC;
    case 589u: goto L_088E2D04;
    case 590u: goto L_088E2D1C;
    case 591u: goto L_088E2D34;
    case 592u: goto L_088E2D48;
    case 593u: goto L_088E2D50;
    case 594u: goto L_088E2D68;
    case 595u: goto L_088E2D7C;
    case 596u: goto L_088E2D90;
    case 597u: goto L_088E2DAC;
    case 598u: goto L_088E2DC4;
    case 599u: goto L_088E2DD4;
    case 600u: goto L_088E2DE4;
    case 601u: goto L_088E2E38;
    case 602u: goto L_088E2E48;
    case 603u: goto L_088E2E58;
    case 604u: goto L_088E2E68;
    case 605u: goto L_088E2E80;
    case 606u: goto L_088E2E94;
    case 607u: goto L_088E2EA8;
    case 608u: goto L_088E2EC0;
    case 609u: goto L_088E2ED4;
    case 610u: goto L_088E2EDC;
    case 611u: goto L_088E2EF4;
    case 612u: goto L_088E2F0C;
    case 613u: goto L_088E2F34;
    case 614u: goto L_088E2F58;
    case 615u: goto L_088E2F60;
    case 616u: goto L_088E2F6C;
    case 617u: goto L_088E2F74;
    case 618u: goto L_088E2F80;
    case 619u: goto L_088E2F88;
    case 620u: goto L_088E2F94;
    case 621u: goto L_088E2F9C;
    case 622u: goto L_088E2FA8;
    case 623u: goto L_088E2FB0;
    case 624u: goto L_088E2FC8;
    case 625u: goto L_088E2FE0;
    case 626u: goto L_088E2FF0;
    case 627u: goto L_088E3000;
    case 628u: goto L_088E305C;
    case 629u: goto L_088E306C;
    case 630u: goto L_088E307C;
    case 631u: goto L_088E308C;
    case 632u: goto L_088E30B4;
    case 633u: goto L_088E30D0;
    case 634u: goto L_088E30E0;
    case 635u: goto L_088E30EC;
    case 636u: goto L_088E3108;
    case 637u: goto L_088E3114;
    case 638u: goto L_088E3130;
    case 639u: goto L_088E313C;
    case 640u: goto L_088E3158;
    case 641u: goto L_088E3164;
    case 642u: goto L_088E3180;
    case 643u: goto L_088E318C;
    case 644u: goto L_088E31C0;
    case 645u: goto L_088E31DC;
    case 646u: goto L_088E31F4;
    case 647u: goto L_088E3208;
    case 648u: goto L_088E3210;
    case 649u: goto L_088E3228;
    case 650u: goto L_088E3240;
    case 651u: goto L_088E3278;
    case 652u: goto L_088E329C;
    case 653u: goto L_088E32A4;
    case 654u: goto L_088E32B0;
    case 655u: goto L_088E32B8;
    case 656u: goto L_088E32C4;
    case 657u: goto L_088E32CC;
    case 658u: goto L_088E32D8;
    case 659u: goto L_088E32E0;
    case 660u: goto L_088E32F0;
    case 661u: goto L_088E32FC;
    case 662u: goto L_088E3304;
    case 663u: goto L_088E330C;
    case 664u: goto L_088E331C;
    case 665u: goto L_088E3328;
    case 666u: goto L_088E3330;
    case 667u: goto L_088E3340;
    case 668u: goto L_088E334C;
    case 669u: goto L_088E3354;
    case 670u: goto L_088E335C;
    case 671u: goto L_088E336C;
    case 672u: goto L_088E3378;
    case 673u: goto L_088E3380;
    case 674u: goto L_088E3390;
    case 675u: goto L_088E339C;
    case 676u: goto L_088E33A4;
    case 677u: goto L_088E33AC;
    case 678u: goto L_088E33BC;
    case 679u: goto L_088E33D4;
    case 680u: goto L_088E33EC;
    case 681u: goto L_088E33FC;
    case 682u: goto L_088E340C;
    case 683u: goto L_088E3468;
    case 684u: goto L_088E3478;
    case 685u: goto L_088E3488;
    case 686u: goto L_088E3498;
    case 687u: goto L_088E34C0;
    case 688u: goto L_088E34DC;
    case 689u: goto L_088E34EC;
    case 690u: goto L_088E34F8;
    case 691u: goto L_088E3514;
    case 692u: goto L_088E3520;
    case 693u: goto L_088E353C;
    case 694u: goto L_088E3548;
    case 695u: goto L_088E3564;
    case 696u: goto L_088E357C;
    case 697u: goto L_088E3598;
    case 698u: goto L_088E35B0;
    case 699u: goto L_088E35BC;
    case 700u: goto L_088E35D8;
    case 701u: goto L_088E35E4;
    case 702u: goto L_088E3600;
    case 703u: goto L_088E360C;
    case 704u: goto L_088E3640;
    case 705u: goto L_088E365C;
    case 706u: goto L_088E3674;
    case 707u: goto L_088E3698;
    case 708u: goto L_088E36A0;
    case 709u: goto L_088E36B8;
    case 710u: goto L_088E36D0;
    case 711u: goto L_088E36D8;
    case 712u: goto L_088E36E4;
    case 713u: goto L_088E36F0;
    case 714u: goto L_088E36F8;
    case 715u: goto L_088E3710;
    case 716u: goto L_088E3728;
    case 717u: goto L_088E373C;
    case 718u: goto L_088E3744;
    case 719u: goto L_088E375C;
    case 720u: goto L_088E3770;
    case 721u: goto L_088E3784;
    case 722u: goto L_088E37A0;
    case 723u: goto L_088E37B8;
    case 724u: goto L_088E37C8;
    case 725u: goto L_088E37D8;
    case 726u: goto L_088E382C;
    case 727u: goto L_088E383C;
    case 728u: goto L_088E384C;
    case 729u: goto L_088E385C;
    case 730u: goto L_088E3874;
    case 731u: goto L_088E387C;
    case 732u: goto L_088E3888;
    case 733u: goto L_088E3894;
    case 734u: goto L_088E389C;
    case 735u: goto L_088E38B4;
    case 736u: goto L_088E38CC;
    case 737u: goto L_088E38E0;
    case 738u: goto L_088E38E8;
    case 739u: goto L_088E3900;
    case 740u: goto L_088E3914;
    case 741u: goto L_088E3928;
    case 742u: goto L_088E3944;
    case 743u: goto L_088E395C;
    case 744u: goto L_088E396C;
    case 745u: goto L_088E397C;
    case 746u: goto L_088E39D0;
    case 747u: goto L_088E39E0;
    case 748u: goto L_088E39F0;
    case 749u: goto L_088E3A00;
    case 750u: goto L_088E3A18;
    case 751u: goto L_088E3A2C;
    case 752u: goto L_088E3A40;
    case 753u: goto L_088E3A58;
    case 754u: goto L_088E3A6C;
    case 755u: goto L_088E3A74;
    case 756u: goto L_088E3A8C;
    case 757u: goto L_088E3AA4;
    case 758u: goto L_088E3AC0;
    case 759u: goto L_088E3AE4;
    case 760u: goto L_088E3AEC;
    case 761u: goto L_088E3AF8;
    case 762u: goto L_088E3B00;
    case 763u: goto L_088E3B18;
    case 764u: goto L_088E3B30;
    case 765u: goto L_088E3B40;
    case 766u: goto L_088E3B50;
    case 767u: goto L_088E3BAC;
    case 768u: goto L_088E3BBC;
    case 769u: goto L_088E3BCC;
    case 770u: goto L_088E3BDC;
    case 771u: goto L_088E3BEC;
    case 772u: goto L_088E3C14;
    case 773u: goto L_088E3C30;
    case 774u: goto L_088E3C40;
    case 775u: goto L_088E3C4C;
    case 776u: goto L_088E3C68;
    case 777u: goto L_088E3C74;
    case 778u: goto L_088E3CA8;
    case 779u: goto L_088E3CC4;
    case 780u: goto L_088E3CDC;
    case 781u: goto L_088E3CE4;
    case 782u: goto L_088E3CF0;
    case 783u: goto L_088E3CFC;
    case 784u: goto L_088E3D04;
    case 785u: goto L_088E3D1C;
    case 786u: goto L_088E3D34;
    case 787u: goto L_088E3D48;
    case 788u: goto L_088E3D50;
    case 789u: goto L_088E3D68;
    case 790u: goto L_088E3D80;
    case 791u: goto L_088E3D90;
    case 792u: goto L_088E3DA0;
    case 793u: goto L_088E3DF8;
    case 794u: goto L_088E3E08;
    case 795u: goto L_088E3E18;
    case 796u: goto L_088E3E28;
    case 797u: goto L_088E3E50;
    case 798u: goto L_088E3E6C;
    case 799u: goto L_088E3E7C;
    case 800u: goto L_088E3E88;
    case 801u: goto L_088E3EC0;
    case 802u: goto L_088E3EDC;
    case 803u: goto L_088E3EF4;
    case 804u: goto L_088E3EFC;
    case 805u: goto L_088E3F08;
    case 806u: goto L_088E3F14;
    case 807u: goto L_088E3F1C;
    case 808u: goto L_088E3F34;
    case 809u: goto L_088E3F4C;
    case 810u: goto L_088E3F60;
    case 811u: goto L_088E3F68;
    case 812u: goto L_088E3F80;
    case 813u: goto L_088E3F94;
    case 814u: goto L_088E3FA8;
    case 815u: goto L_088E3FC4;
    case 816u: goto L_088E3FDC;
    case 817u: goto L_088E3FEC;
    case 818u: goto L_088E3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E0000:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088E002Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E002Cu) goto L_088E002C;
    return;
L_088E002C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E003C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E004Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E004Cu) goto L_088E004C;
    return;
L_088E004C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(216));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27368));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(26760));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-96));
    ctx.set_gpr(31, 0x088E00A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E00A8u) goto L_088E00A8;
    return;
L_088E00A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E00B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E00C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 765u, 0x088DFF54u>(ctx, &aot_mem) && ctx.pc == 0x088E00C8u) goto L_088E00C8;
    return;
L_088E00C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E00D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27368)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E0100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E0100u) goto L_088E0100;
    return;
L_088E0100:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26776));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E011Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E011Cu) goto L_088E011C;
    return;
L_088E011C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E012Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E012Cu) goto L_088E012C;
    return;
L_088E012C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088E0138u) goto L_088E0138;
    return;
L_088E0138:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26780));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26784));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26788));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E016Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E016Cu) goto L_088E016C;
    return;
L_088E016C:
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
L_088E0188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27376)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E01B4;
      }
      goto L_088E01A0;
    }
L_088E01A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E01BC;
      }
      goto L_088E01B4;
    }
L_088E01B4:
    ctx.set_gpr(31, 0x088E01BCu);
    // nop
    goto L_088E0218;
L_088E01BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27376)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E01D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E01E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E01E8u) goto L_088E01E8;
    return;
L_088E01E8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E01FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E01FCu) goto L_088E01FC;
    return;
L_088E01FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0218:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(576));
    ctx.set_gpr(31, 0x088E0230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E0230u) goto L_088E0230;
    return;
L_088E0230:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0240:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E0250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E0250u) goto L_088E0250;
    return;
L_088E0250:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26792));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27376));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(692));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(26800));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(468));
    ctx.set_gpr(31, 0x088E02A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E02A4u) goto L_088E02A4;
    return;
L_088E02A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E02B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E02C4u);
    // nop
    goto L_088E0188;
L_088E02C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E02D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27380)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0300;
      }
      goto L_088E02EC;
    }
L_088E02EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0308;
      }
      goto L_088E0300;
    }
L_088E0300:
    ctx.set_gpr(31, 0x088E0308u);
    // nop
    goto L_088E0364;
L_088E0308:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27380)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E0334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x088E0334u) goto L_088E0334;
    return;
L_088E0334:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E0348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E0348u) goto L_088E0348;
    return;
L_088E0348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(908));
    ctx.set_gpr(31, 0x088E037Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E037Cu) goto L_088E037C;
    return;
L_088E037C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E038C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E039Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E039Cu) goto L_088E039C;
    return;
L_088E039C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27380));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(576));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1056));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(26820));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(31, 0x088E03F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E03F0u) goto L_088E03F0;
    return;
L_088E03F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0400:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E0410u);
    // nop
    goto L_088E02D4;
L_088E0410:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0420:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27376)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27380)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E0454u) goto L_088E0454;
    return;
L_088E0454:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26836));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E0470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E0470u) goto L_088E0470;
    return;
L_088E0470:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26840));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26844));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26848));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E0498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0498u) goto L_088E0498;
    return;
L_088E0498:
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
L_088E04B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27388)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E04DC;
      }
      goto L_088E04C8;
    }
L_088E04C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E04E4;
      }
      goto L_088E04DC;
    }
L_088E04DC:
    ctx.set_gpr(31, 0x088E04E4u);
    // nop
    goto L_088E05A0;
L_088E04E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27388)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E04FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E0510u);
    // nop
    goto L_088E0540;
L_088E0510:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15092));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E0524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E0524u) goto L_088E0524;
    return;
L_088E0524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E0558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E0558u) goto L_088E0558;
    return;
L_088E0558:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15276));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6088));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15404));
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
L_088E05A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1480));
    ctx.set_gpr(31, 0x088E05B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E05B8u) goto L_088E05B8;
    return;
L_088E05B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E05C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E05D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E05D8u) goto L_088E05D8;
    return;
L_088E05D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27388));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(908));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1620));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1588));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(26852));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1276));
    ctx.set_gpr(31, 0x088E0624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E0624u) goto L_088E0624;
    return;
L_088E0624:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0634:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E0644u);
    // nop
    goto L_088E04B0;
L_088E0644:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0654:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27380)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27392)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0690;
      }
      goto L_088E067C;
    }
L_088E067C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0698;
      }
      goto L_088E0690;
    }
L_088E0690:
    ctx.set_gpr(31, 0x088E0698u);
    // nop
    goto L_088E06F4;
L_088E0698:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27392)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E06B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E06C4u);
    // nop
    goto L_088E0540;
L_088E06C4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14988));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E06D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E06D8u) goto L_088E06D8;
    return;
L_088E06D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E06F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1820));
    ctx.set_gpr(31, 0x088E070Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E070Cu) goto L_088E070C;
    return;
L_088E070C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E071C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E072Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E072Cu) goto L_088E072C;
    return;
L_088E072C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27392));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(908));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1620));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1928));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(26872));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1712));
    ctx.set_gpr(31, 0x088E0778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E0778u) goto L_088E0778;
    return;
L_088E0778:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0788:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E0798u);
    // nop
    goto L_088E0664;
L_088E0798:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E07A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27396)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07D4;
      }
      goto L_088E07C0;
    }
L_088E07C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E07DC;
      }
      goto L_088E07D4;
    }
L_088E07D4:
    ctx.set_gpr(31, 0x088E07DCu);
    // nop
    goto L_088E0838;
L_088E07DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27396)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E07F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E0808u);
    // nop
    goto L_088E0540;
L_088E0808:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14884));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E081Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E081Cu) goto L_088E081C;
    return;
L_088E081C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    ctx.set_gpr(31, 0x088E0850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E0850u) goto L_088E0850;
    return;
L_088E0850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E0870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E0870u) goto L_088E0870;
    return;
L_088E0870:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27396));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(908));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1620));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2252));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(26900));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2036));
    ctx.set_gpr(31, 0x088E08BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E08BCu) goto L_088E08BC;
    return;
L_088E08BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E08CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E08DCu);
    // nop
    goto L_088E07A8;
L_088E08DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E08EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27400)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0918;
      }
      goto L_088E0904;
    }
L_088E0904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0920;
      }
      goto L_088E0918;
    }
L_088E0918:
    ctx.set_gpr(31, 0x088E0920u);
    // nop
    goto L_088E09C0;
L_088E0920:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27400)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E0950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088E0950u) goto L_088E0950;
    return;
L_088E0950:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E0968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E0968u) goto L_088E0968;
    return;
L_088E0968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x088E098Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088E098Cu) goto L_088E098C;
    return;
L_088E098C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E09A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088E09A8u) goto L_088E09A8;
    return;
L_088E09A8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E09C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2536));
    ctx.set_gpr(31, 0x088E09D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E09D8u) goto L_088E09D8;
    return;
L_088E09D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E09E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E09F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E09F8u) goto L_088E09F8;
    return;
L_088E09F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26924));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27400));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31504));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2684));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2652));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(26932));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2360));
    ctx.set_gpr(31, 0x088E0A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E0A4Cu) goto L_088E0A4C;
    return;
L_088E0A4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0A5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E0A6Cu);
    // nop
    goto L_088E08EC;
L_088E0A6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0A7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26720)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0A8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27404)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B54;
      }
      goto L_088E0AA8;
    }
L_088E0AA8:
    ctx.set_gpr(31, 0x088E0AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E0AB0u) goto L_088E0AB0;
    return;
L_088E0AB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0ABCu) goto L_088E0ABC;
    return;
L_088E0ABC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(27400)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E0AD0u) goto L_088E0AD0;
    return;
L_088E0AD0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27404), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B54;
      }
      goto L_088E0AE4;
    }
L_088E0AE4:
    ctx.set_gpr(31, 0x088E0AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088E0AECu) goto L_088E0AEC;
    return;
L_088E0AEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088E0AFCu) goto L_088E0AFC;
    return;
L_088E0AFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27404)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B28;
      }
      goto L_088E0B20;
    }
L_088E0B20:
    ctx.set_gpr(31, 0x088E0B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E0B28u) goto L_088E0B28;
    return;
L_088E0B28:
    ctx.set_gpr(31, 0x088E0B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088E0B30u) goto L_088E0B30;
    return;
L_088E0B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27404)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27404)));
    ctx.set_gpr(31, 0x088E0B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E0B54u) goto L_088E0B54;
    return;
L_088E0B54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0B68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27404)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B88;
      }
      goto L_088E0B80;
    }
L_088E0B80:
    ctx.set_gpr(31, 0x088E0B88u);
    // nop
    goto L_088E09C0;
L_088E0B88:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27404)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0BA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088E0BC0u);
    // nop
    goto L_088E0BD0;
L_088E0BC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E0BD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E0BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E0BECu) goto L_088E0BEC;
    return;
L_088E0BEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0BF8u) goto L_088E0BF8;
    return;
L_088E0BF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 368u, 0x088D9E94u>(ctx, &aot_mem) && ctx.pc == 0x088E0C04u) goto L_088E0C04;
    return;
L_088E0C04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26964));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0C24;
      }
      goto L_088E0C18;
    }
L_088E0C18:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0C74;
      }
      goto L_088E0C24;
    }
L_088E0C24:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0C5C;
      }
      goto L_088E0C34;
    }
L_088E0C34:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E0C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0C40u) goto L_088E0C40;
    return;
L_088E0C40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0C54;
      }
      goto L_088E0C48;
    }
L_088E0C48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E0C54u) goto L_088E0C54;
    return;
L_088E0C54:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E0C5C;
L_088E0C5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26964));
    ctx.set_gpr(31, 0x088E0C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E0C74u) goto L_088E0C74;
    return;
L_088E0C74:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E0C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E0C88u) goto L_088E0C88;
    return;
L_088E0C88:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0CB4;
      }
      goto L_088E0C98;
    }
L_088E0C98:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0CB4;
      }
      goto L_088E0CB0;
    }
L_088E0CB0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E0CB4;
L_088E0CB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0CE0;
      }
      goto L_088E0CBC;
    }
L_088E0CBC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0CE0;
      }
      goto L_088E0CD4;
    }
L_088E0CD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0CE0u) goto L_088E0CE0;
    return;
L_088E0CE0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E0CF0u) goto L_088E0CF0;
    return;
L_088E0CF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E0D00u) goto L_088E0D00;
    return;
L_088E0D00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D28;
      }
      goto L_088E0D1C;
    }
L_088E0D1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E0D28u) goto L_088E0D28;
    return;
L_088E0D28:
    ctx.set_gpr(31, 0x088E0D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E0D30u) goto L_088E0D30;
    return;
L_088E0D30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0D3Cu) goto L_088E0D3C;
    return;
L_088E0D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 368u, 0x088D9E94u>(ctx, &aot_mem) && ctx.pc == 0x088E0D48u) goto L_088E0D48;
    return;
L_088E0D48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26984));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D68;
      }
      goto L_088E0D5C;
    }
L_088E0D5C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DB8;
      }
      goto L_088E0D68;
    }
L_088E0D68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DA0;
      }
      goto L_088E0D78;
    }
L_088E0D78:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E0D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0D84u) goto L_088E0D84;
    return;
L_088E0D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D98;
      }
      goto L_088E0D8C;
    }
L_088E0D8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E0D98u) goto L_088E0D98;
    return;
L_088E0D98:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E0DA0;
L_088E0DA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26984));
    ctx.set_gpr(31, 0x088E0DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E0DB8u) goto L_088E0DB8;
    return;
L_088E0DB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E0DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E0DCCu) goto L_088E0DCC;
    return;
L_088E0DCC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DF8;
      }
      goto L_088E0DDC;
    }
L_088E0DDC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DF8;
      }
      goto L_088E0DF4;
    }
L_088E0DF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E0DF8;
L_088E0DF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E24;
      }
      goto L_088E0E00;
    }
L_088E0E00:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E24;
      }
      goto L_088E0E18;
    }
L_088E0E18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0E24u) goto L_088E0E24;
    return;
L_088E0E24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E0E38u) goto L_088E0E38;
    return;
L_088E0E38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E0E48u) goto L_088E0E48;
    return;
L_088E0E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E70;
      }
      goto L_088E0E64;
    }
L_088E0E64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E0E70u) goto L_088E0E70;
    return;
L_088E0E70:
    ctx.set_gpr(31, 0x088E0E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E0E78u) goto L_088E0E78;
    return;
L_088E0E78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0E84u) goto L_088E0E84;
    return;
L_088E0E84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 368u, 0x088D9E94u>(ctx, &aot_mem) && ctx.pc == 0x088E0E90u) goto L_088E0E90;
    return;
L_088E0E90:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27000));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EB0;
      }
      goto L_088E0EA4;
    }
L_088E0EA4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F00;
      }
      goto L_088E0EB0;
    }
L_088E0EB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EE8;
      }
      goto L_088E0EC0;
    }
L_088E0EC0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E0ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0ECCu) goto L_088E0ECC;
    return;
L_088E0ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0EE0;
      }
      goto L_088E0ED4;
    }
L_088E0ED4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E0EE0u) goto L_088E0EE0;
    return;
L_088E0EE0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E0EE8;
L_088E0EE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27000));
    ctx.set_gpr(31, 0x088E0F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E0F00u) goto L_088E0F00;
    return;
L_088E0F00:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E0F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E0F14u) goto L_088E0F14;
    return;
L_088E0F14:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F40;
      }
      goto L_088E0F24;
    }
L_088E0F24:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F40;
      }
      goto L_088E0F3C;
    }
L_088E0F3C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E0F40;
L_088E0F40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F6C;
      }
      goto L_088E0F48;
    }
L_088E0F48:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0F6C;
      }
      goto L_088E0F60;
    }
L_088E0F60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0F6Cu) goto L_088E0F6C;
    return;
L_088E0F6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E0F80u) goto L_088E0F80;
    return;
L_088E0F80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E0F90u) goto L_088E0F90;
    return;
L_088E0F90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0FB8;
      }
      goto L_088E0FAC;
    }
L_088E0FAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E0FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E0FB8u) goto L_088E0FB8;
    return;
L_088E0FB8:
    ctx.set_gpr(31, 0x088E0FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E0FC0u) goto L_088E0FC0;
    return;
L_088E0FC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E0FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E0FCCu) goto L_088E0FCC;
    return;
L_088E0FCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E0FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 711u, 0x088DBB10u>(ctx, &aot_mem) && ctx.pc == 0x088E0FD8u) goto L_088E0FD8;
    return;
L_088E0FD8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27012));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0FF8;
      }
      goto L_088E0FEC;
    }
L_088E0FEC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1048;
      }
      goto L_088E0FF8;
    }
L_088E0FF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1030;
      }
      goto L_088E1008;
    }
L_088E1008:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E1014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1014u) goto L_088E1014;
    return;
L_088E1014:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1028;
      }
      goto L_088E101C;
    }
L_088E101C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088E1028u) goto L_088E1028;
    return;
L_088E1028:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088E1030;
L_088E1030:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27012));
    ctx.set_gpr(31, 0x088E1048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088E1048u) goto L_088E1048;
    return;
L_088E1048:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E105Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088E105Cu) goto L_088E105C;
    return;
L_088E105C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1088;
      }
      goto L_088E106C;
    }
L_088E106C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1088;
      }
      goto L_088E1084;
    }
L_088E1084:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E1088;
L_088E1088:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E10B4;
      }
      goto L_088E1090;
    }
L_088E1090:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E10B4;
      }
      goto L_088E10A8;
    }
L_088E10A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E10B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E10B4u) goto L_088E10B4;
    return;
L_088E10B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E10C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 202u, 0x088F91D8u>(ctx, &aot_mem) && ctx.pc == 0x088E10C4u) goto L_088E10C4;
    return;
L_088E10C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E10D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088E10D4u) goto L_088E10D4;
    return;
L_088E10D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E10E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088E10E4u) goto L_088E10E4;
    return;
L_088E10E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E110C;
      }
      goto L_088E1100;
    }
L_088E1100:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E110Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E110Cu) goto L_088E110C;
    return;
L_088E110C:
    ctx.set_gpr(31, 0x088E1114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 215u, 0x088F92C0u>(ctx, &aot_mem) && ctx.pc == 0x088E1114u) goto L_088E1114;
    return;
L_088E1114:
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
L_088E112C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E1144u);
    // nop
    goto L_088E1254;
L_088E1144:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E1158u) goto L_088E1158;
    return;
L_088E1158:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E116C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E11AC;
      }
      goto L_088E1184;
    }
L_088E1184:
    ctx.set_gpr(31, 0x088E118Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E118Cu) goto L_088E118C;
    return;
L_088E118C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E1198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E1198u) goto L_088E1198;
    return;
L_088E1198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E11A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E11A4u) goto L_088E11A4;
    return;
L_088E11A4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27408), ctx.gpr[2]);
    goto L_088E11AC;
L_088E11AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E11C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E11F0;
      }
      goto L_088E11DC;
    }
L_088E11DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E11F8;
      }
      goto L_088E11F0;
    }
L_088E11F0:
    ctx.set_gpr(31, 0x088E11F8u);
    // nop
    goto L_088E1254;
L_088E11F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E1224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E1224u) goto L_088E1224;
    return;
L_088E1224:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E1238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E1238u) goto L_088E1238;
    return;
L_088E1238:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4732));
    ctx.set_gpr(31, 0x088E126Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E126Cu) goto L_088E126C;
    return;
L_088E126C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E127C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E128Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E128Cu) goto L_088E128C;
    return;
L_088E128C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27408));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4848));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27020));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4624));
    ctx.set_gpr(31, 0x088E12E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E12E0u) goto L_088E12E0;
    return;
L_088E12E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E12F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E1300u);
    // nop
    goto L_088E11C4;
L_088E1300:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27408)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088E1340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E1340u) goto L_088E1340;
    return;
L_088E1340:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E1354u) goto L_088E1354;
    return;
L_088E1354:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E1370u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1370u) goto L_088E1370;
    return;
L_088E1370:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E137Cu);
    // nop
    goto L_088E0B68;
L_088E137C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27412));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E13A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E13A4u) goto L_088E13A4;
    return;
L_088E13A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E13CC;
      }
      goto L_088E13C0;
    }
L_088E13C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E13CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E13CCu) goto L_088E13CC;
    return;
L_088E13CC:
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
L_088E13E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E1400u);
    // nop
    goto L_088E19F0;
L_088E1400:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E1414u) goto L_088E1414;
    return;
L_088E1414:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1454;
      }
      goto L_088E1440;
    }
L_088E1440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E145C;
      }
      goto L_088E1454;
    }
L_088E1454:
    ctx.set_gpr(31, 0x088E145Cu);
    // nop
    goto L_088E19F0;
L_088E145C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E148Cu);
    // nop
    goto L_088E18E0;
L_088E148C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), 0u);
    ctx.set_gpr(31, 0x088E14E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E14E8u) goto L_088E14E8;
    return;
L_088E14E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1514;
      }
      goto L_088E150C;
    }
L_088E150C:
    ctx.set_gpr(31, 0x088E1514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1514u) goto L_088E1514;
    return;
L_088E1514:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1528;
      }
      goto L_088E1520;
    }
L_088E1520:
    ctx.set_gpr(31, 0x088E1528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1528u) goto L_088E1528;
    return;
L_088E1528:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E153C;
      }
      goto L_088E1534;
    }
L_088E1534:
    ctx.set_gpr(31, 0x088E153Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E153Cu) goto L_088E153C;
    return;
L_088E153C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1550;
      }
      goto L_088E1548;
    }
L_088E1548:
    ctx.set_gpr(31, 0x088E1550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1550u) goto L_088E1550;
    return;
L_088E1550:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1564;
      }
      goto L_088E155C;
    }
L_088E155C:
    ctx.set_gpr(31, 0x088E1564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1564u) goto L_088E1564;
    return;
L_088E1564:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1588;
      }
      goto L_088E1574;
    }
L_088E1574:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x088E1580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1580u) goto L_088E1580;
    return;
L_088E1580:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E1588;
L_088E1588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E15A0;
      }
      goto L_088E1590;
    }
L_088E1590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E15A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E15A0u) goto L_088E15A0;
    return;
L_088E15A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E15B4;
      }
      goto L_088E15AC;
    }
L_088E15AC:
    ctx.set_gpr(31, 0x088E15B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E15B4u) goto L_088E15B4;
    return;
L_088E15B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E15C8;
      }
      goto L_088E15C0;
    }
L_088E15C0:
    ctx.set_gpr(31, 0x088E15C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E15C8u) goto L_088E15C8;
    return;
L_088E15C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E15DC;
      }
      goto L_088E15D4;
    }
L_088E15D4:
    ctx.set_gpr(31, 0x088E15DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E15DCu) goto L_088E15DC;
    return;
L_088E15DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E15F0;
      }
      goto L_088E15E8;
    }
L_088E15E8:
    ctx.set_gpr(31, 0x088E15F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E15F0u) goto L_088E15F0;
    return;
L_088E15F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1604;
      }
      goto L_088E15FC;
    }
L_088E15FC:
    ctx.set_gpr(31, 0x088E1604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1604u) goto L_088E1604;
    return;
L_088E1604:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1618;
      }
      goto L_088E1610;
    }
L_088E1610:
    ctx.set_gpr(31, 0x088E1618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1618u) goto L_088E1618;
    return;
L_088E1618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E162C;
      }
      goto L_088E1624;
    }
L_088E1624:
    ctx.set_gpr(31, 0x088E162Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E162Cu) goto L_088E162C;
    return;
L_088E162C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1640;
      }
      goto L_088E1638;
    }
L_088E1638:
    ctx.set_gpr(31, 0x088E1640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1640u) goto L_088E1640;
    return;
L_088E1640:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1654;
      }
      goto L_088E164C;
    }
L_088E164C:
    ctx.set_gpr(31, 0x088E1654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1654u) goto L_088E1654;
    return;
L_088E1654:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1668;
      }
      goto L_088E1660;
    }
L_088E1660:
    ctx.set_gpr(31, 0x088E1668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1668u) goto L_088E1668;
    return;
L_088E1668:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E167C;
      }
      goto L_088E1674;
    }
L_088E1674:
    ctx.set_gpr(31, 0x088E167Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E167Cu) goto L_088E167C;
    return;
L_088E167C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1690;
      }
      goto L_088E1688;
    }
L_088E1688:
    ctx.set_gpr(31, 0x088E1690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1690u) goto L_088E1690;
    return;
L_088E1690:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E16A0u);
    // nop
    goto L_088E173C;
L_088E16A0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E16B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1720;
      }
      goto L_088E16D8;
    }
L_088E16D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1708;
      }
      goto L_088E16E4;
    }
L_088E16E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1708;
      }
      goto L_088E1700;
    }
L_088E1700:
    ctx.set_gpr(31, 0x088E1708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E1708u) goto L_088E1708;
    return;
L_088E1708:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E1720;
      }
      goto L_088E1714;
    }
L_088E1714:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088E1720u) goto L_088E1720;
    return;
L_088E1720:
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
L_088E173C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E18C4;
      }
      goto L_088E175C;
    }
L_088E175C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(792));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1788;
      }
      goto L_088E1774;
    }
L_088E1774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1788;
      }
      goto L_088E1780;
    }
L_088E1780:
    ctx.set_gpr(31, 0x088E1788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1788u) goto L_088E1788;
    return;
L_088E1788:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E17A8;
      }
      goto L_088E1794;
    }
L_088E1794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E17A8;
      }
      goto L_088E17A0;
    }
L_088E17A0:
    ctx.set_gpr(31, 0x088E17A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E17A8u) goto L_088E17A8;
    return;
L_088E17A8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E17C8;
      }
      goto L_088E17B4;
    }
L_088E17B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E17C8;
      }
      goto L_088E17C0;
    }
L_088E17C0:
    ctx.set_gpr(31, 0x088E17C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E17C8u) goto L_088E17C8;
    return;
L_088E17C8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E17E8;
      }
      goto L_088E17D4;
    }
L_088E17D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E17E8;
      }
      goto L_088E17E0;
    }
L_088E17E0:
    ctx.set_gpr(31, 0x088E17E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E17E8u) goto L_088E17E8;
    return;
L_088E17E8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1808;
      }
      goto L_088E17F4;
    }
L_088E17F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1808;
      }
      goto L_088E1800;
    }
L_088E1800:
    ctx.set_gpr(31, 0x088E1808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1808u) goto L_088E1808;
    return;
L_088E1808:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1828;
      }
      goto L_088E1814;
    }
L_088E1814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1828;
      }
      goto L_088E1820;
    }
L_088E1820:
    ctx.set_gpr(31, 0x088E1828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1828u) goto L_088E1828;
    return;
L_088E1828:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1848;
      }
      goto L_088E1834;
    }
L_088E1834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1848;
      }
      goto L_088E1840;
    }
L_088E1840:
    ctx.set_gpr(31, 0x088E1848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E1848u) goto L_088E1848;
    return;
L_088E1848:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E18AC;
      }
      goto L_088E1854;
    }
L_088E1854:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1880;
      }
      goto L_088E1864;
    }
L_088E1864:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1880;
      }
      goto L_088E187C;
    }
L_088E187C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E1880;
L_088E1880:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E18AC;
      }
      goto L_088E1888;
    }
L_088E1888:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E18AC;
      }
      goto L_088E18A0;
    }
L_088E18A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E18ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E18ACu) goto L_088E18AC;
    return;
L_088E18AC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E18C4;
      }
      goto L_088E18B8;
    }
L_088E18B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E18C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x088E18C4u) goto L_088E18C4;
    return;
L_088E18C4:
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
L_088E18E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E18F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E18F8u) goto L_088E18F8;
    return;
L_088E18F8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15276));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6088));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14424));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(792));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
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
L_088E196C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E19D4;
      }
      goto L_088E198C;
    }
L_088E198C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E19BC;
      }
      goto L_088E1998;
    }
L_088E1998:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E19BC;
      }
      goto L_088E19B4;
    }
L_088E19B4:
    ctx.set_gpr(31, 0x088E19BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E19BCu) goto L_088E19BC;
    return;
L_088E19BC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E19D4;
      }
      goto L_088E19C8;
    }
L_088E19C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E19D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088E19D4u) goto L_088E19D4;
    return;
L_088E19D4:
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
L_088E19F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6680));
    ctx.set_gpr(31, 0x088E1A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E1A08u) goto L_088E1A08;
    return;
L_088E1A08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E1A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E1A28u) goto L_088E1A28;
    return;
L_088E1A28:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6860));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27048));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27416));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19032));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6844));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6812));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27092));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(348));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(5236));
    ctx.set_gpr(31, 0x088E1A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E1A8Cu) goto L_088E1A8C;
    return;
L_088E1A8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1A9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E1AACu);
    // nop
    goto L_088E1428;
L_088E1AAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1ABC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1ACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E1AF8u) goto L_088E1AF8;
    return;
L_088E1AF8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27104));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(74));
    ctx.set_gpr(31, 0x088E1B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E1B14u) goto L_088E1B14;
    return;
L_088E1B14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088E1B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E1B28u) goto L_088E1B28;
    return;
L_088E1B28:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E1B3Cu) goto L_088E1B3C;
    return;
L_088E1B3C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E1B58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1B58u) goto L_088E1B58;
    return;
L_088E1B58:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(27420));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E1B80u) goto L_088E1B80;
    return;
L_088E1B80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1BA8;
      }
      goto L_088E1B9C;
    }
L_088E1B9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E1BA8u) goto L_088E1BA8;
    return;
L_088E1BA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29648));
    ctx.set_gpr(31, 0x088E1BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E1BBCu) goto L_088E1BBC;
    return;
L_088E1BBC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E1BD0u) goto L_088E1BD0;
    return;
L_088E1BD0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E1BECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1BECu) goto L_088E1BEC;
    return;
L_088E1BEC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(27424));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E1C14u) goto L_088E1C14;
    return;
L_088E1C14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C3C;
      }
      goto L_088E1C30;
    }
L_088E1C30:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E1C3Cu) goto L_088E1C3C;
    return;
L_088E1C3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29656));
    ctx.set_gpr(31, 0x088E1C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E1C50u) goto L_088E1C50;
    return;
L_088E1C50:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E1C64u) goto L_088E1C64;
    return;
L_088E1C64:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E1C80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E1C80u) goto L_088E1C80;
    return;
L_088E1C80:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(27428));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E1CA8u) goto L_088E1CA8;
    return;
L_088E1CA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1CD0;
      }
      goto L_088E1CC4;
    }
L_088E1CC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E1CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E1CD0u) goto L_088E1CD0;
    return;
L_088E1CD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E1CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1CE0u) goto L_088E1CE0;
    return;
L_088E1CE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u | 64218u);
    ctx.set_gpr(31, 0x088E1CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E1CF0u) goto L_088E1CF0;
    return;
L_088E1CF0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D00u) goto L_088E1D00;
    return;
L_088E1D00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088E1D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E1D10u) goto L_088E1D10;
    return;
L_088E1D10:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D20u) goto L_088E1D20;
    return;
L_088E1D20:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 298u, 0x088F1964u>(ctx, &aot_mem) && ctx.pc == 0x088E1D2Cu) goto L_088E1D2C;
    return;
L_088E1D2C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D44u) goto L_088E1D44;
    return;
L_088E1D44:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1D50u) goto L_088E1D50;
    return;
L_088E1D50:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D64u) goto L_088E1D64;
    return;
L_088E1D64:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1D70u) goto L_088E1D70;
    return;
L_088E1D70:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D84u) goto L_088E1D84;
    return;
L_088E1D84:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1D98u) goto L_088E1D98;
    return;
L_088E1D98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E1DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E1DA8u) goto L_088E1DA8;
    return;
L_088E1DA8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1DB8u) goto L_088E1DB8;
    return;
L_088E1DB8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1DC4u) goto L_088E1DC4;
    return;
L_088E1DC4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1DD8u) goto L_088E1DD8;
    return;
L_088E1DD8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1DE4u) goto L_088E1DE4;
    return;
L_088E1DE4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1DF8u) goto L_088E1DF8;
    return;
L_088E1DF8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1E04u) goto L_088E1E04;
    return;
L_088E1E04:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1E18u) goto L_088E1E18;
    return;
L_088E1E18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1E24u) goto L_088E1E24;
    return;
L_088E1E24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(27));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1E38u) goto L_088E1E38;
    return;
L_088E1E38:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 202u, 0x088F91D8u>(ctx, &aot_mem) && ctx.pc == 0x088E1E44u) goto L_088E1E44;
    return;
L_088E1E44:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1E58u) goto L_088E1E58;
    return;
L_088E1E58:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088E1E64u) goto L_088E1E64;
    return;
L_088E1E64:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1E78u) goto L_088E1E78;
    return;
L_088E1E78:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 165u, 0x088F8EA8u>(ctx, &aot_mem) && ctx.pc == 0x088E1E84u) goto L_088E1E84;
    return;
L_088E1E84:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1E98u) goto L_088E1E98;
    return;
L_088E1E98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1EA4u) goto L_088E1EA4;
    return;
L_088E1EA4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1EB8u) goto L_088E1EB8;
    return;
L_088E1EB8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 610u, 0x088DB23Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1EC4u) goto L_088E1EC4;
    return;
L_088E1EC4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1ED8u) goto L_088E1ED8;
    return;
L_088E1ED8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 610u, 0x088DB23Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1EE4u) goto L_088E1EE4;
    return;
L_088E1EE4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(39));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1EF8u) goto L_088E1EF8;
    return;
L_088E1EF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E1F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E1F08u) goto L_088E1F08;
    return;
L_088E1F08:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1F18u) goto L_088E1F18;
    return;
L_088E1F18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1F24u) goto L_088E1F24;
    return;
L_088E1F24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(42));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1F38u) goto L_088E1F38;
    return;
L_088E1F38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E1F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088E1F48u) goto L_088E1F48;
    return;
L_088E1F48:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(43));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1F58u) goto L_088E1F58;
    return;
L_088E1F58:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1F64u) goto L_088E1F64;
    return;
L_088E1F64:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(45));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1F78u) goto L_088E1F78;
    return;
L_088E1F78:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088E1F84u) goto L_088E1F84;
    return;
L_088E1F84:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(47));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1F98u) goto L_088E1F98;
    return;
L_088E1F98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1FA4u) goto L_088E1FA4;
    return;
L_088E1FA4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1FB8u) goto L_088E1FB8;
    return;
L_088E1FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E1FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E1FC8u) goto L_088E1FC8;
    return;
L_088E1FC8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(50));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1FD8u) goto L_088E1FD8;
    return;
L_088E1FD8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E1FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E1FE4u) goto L_088E1FE4;
    return;
L_088E1FE4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(53));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E1FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1FF8u) goto L_088E1FF8;
    return;
L_088E1FF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E2008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E2008u) goto L_088E2008;
    return;
L_088E2008:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(57));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2018u) goto L_088E2018;
    return;
L_088E2018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E2028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088E2028u) goto L_088E2028;
    return;
L_088E2028:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(58));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2038u) goto L_088E2038;
    return;
L_088E2038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E2048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088E2048u) goto L_088E2048;
    return;
L_088E2048:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2058u) goto L_088E2058;
    return;
L_088E2058:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2064u) goto L_088E2064;
    return;
L_088E2064:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(61));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2078u) goto L_088E2078;
    return;
L_088E2078:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2084u) goto L_088E2084;
    return;
L_088E2084:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(62));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2098u) goto L_088E2098;
    return;
L_088E2098:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E20A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E20A4u) goto L_088E20A4;
    return;
L_088E20A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E20B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E20B8u) goto L_088E20B8;
    return;
L_088E20B8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E20C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E20C4u) goto L_088E20C4;
    return;
L_088E20C4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E20D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E20D8u) goto L_088E20D8;
    return;
L_088E20D8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E20E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E20E4u) goto L_088E20E4;
    return;
L_088E20E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(65));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E20F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E20F8u) goto L_088E20F8;
    return;
L_088E20F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2104u) goto L_088E2104;
    return;
L_088E2104:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(66));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2118u) goto L_088E2118;
    return;
L_088E2118:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2124u) goto L_088E2124;
    return;
L_088E2124:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(67));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2138u) goto L_088E2138;
    return;
L_088E2138:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2144u);
    // nop
    goto L_088E116C;
L_088E2144:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(71));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2158u) goto L_088E2158;
    return;
L_088E2158:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088E2164u) goto L_088E2164;
    return;
L_088E2164:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2178u) goto L_088E2178;
    return;
L_088E2178:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088E2184u) goto L_088E2184;
    return;
L_088E2184:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(73));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2198u) goto L_088E2198;
    return;
L_088E2198:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E21A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 515u, 0x088EEBF0u>(ctx, &aot_mem) && ctx.pc == 0x088E21A4u) goto L_088E21A4;
    return;
L_088E21A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28760));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29056));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29352));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E21D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E21D0u) goto L_088E21D0;
    return;
L_088E21D0:
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
L_088E21F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E2200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 557u, 0x08922878u>(ctx, &aot_mem) && ctx.pc == 0x088E2200u) goto L_088E2200;
    return;
L_088E2200:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27728)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E223C;
      }
      goto L_088E2228;
    }
L_088E2228:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2244;
      }
      goto L_088E223C;
    }
L_088E223C:
    ctx.set_gpr(31, 0x088E2244u);
    // nop
    goto L_088E22D0;
L_088E2244:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27728)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E225C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E2274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E2274u) goto L_088E2274;
    return;
L_088E2274:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088E228Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E228Cu) goto L_088E228C;
    return;
L_088E228C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E22B8;
      }
      goto L_088E22B0;
    }
L_088E22B0:
    ctx.set_gpr(31, 0x088E22B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E22B8u) goto L_088E22B8;
    return;
L_088E22B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E22D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8952));
    ctx.set_gpr(31, 0x088E22E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E22E8u) goto L_088E22E8;
    return;
L_088E22E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E22F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E2308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E2308u) goto L_088E2308;
    return;
L_088E2308:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29668));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27728));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9076));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(29676));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8796));
    ctx.set_gpr(31, 0x088E2364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E2364u) goto L_088E2364;
    return;
L_088E2364:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2374:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E2384u);
    // nop
    goto L_088E2210;
L_088E2384:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27728)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E23BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E23BCu) goto L_088E23BC;
    return;
L_088E23BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29692));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E23D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E23D8u) goto L_088E23D8;
    return;
L_088E23D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E23E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E23E8u) goto L_088E23E8;
    return;
L_088E23E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E23F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x088E23F4u) goto L_088E23F4;
    return;
L_088E23F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29708));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29712));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29716));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E2428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2428u) goto L_088E2428;
    return;
L_088E2428:
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
L_088E2444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27736)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2484;
      }
      goto L_088E245C;
    }
L_088E245C:
    ctx.set_gpr(31, 0x088E2464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E2464u) goto L_088E2464;
    return;
L_088E2464:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E2470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E2470u) goto L_088E2470;
    return;
L_088E2470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E247Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E247Cu) goto L_088E247C;
    return;
L_088E247C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27736), ctx.gpr[2]);
    goto L_088E2484;
L_088E2484:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27736)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E249C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27736)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E24C8;
      }
      goto L_088E24B4;
    }
L_088E24B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E24D0;
      }
      goto L_088E24C8;
    }
L_088E24C8:
    ctx.set_gpr(31, 0x088E24D0u);
    // nop
    goto L_088E258C;
L_088E24D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27736)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E24E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E2500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E2500u) goto L_088E2500;
    return;
L_088E2500:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088E2520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E2520u) goto L_088E2520;
    return;
L_088E2520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E254C;
      }
      goto L_088E2544;
    }
L_088E2544:
    ctx.set_gpr(31, 0x088E254Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E254Cu) goto L_088E254C;
    return;
L_088E254C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2560;
      }
      goto L_088E2558;
    }
L_088E2558:
    ctx.set_gpr(31, 0x088E2560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E2560u) goto L_088E2560;
    return;
L_088E2560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2574;
      }
      goto L_088E256C;
    }
L_088E256C:
    ctx.set_gpr(31, 0x088E2574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E2574u) goto L_088E2574;
    return;
L_088E2574:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E258C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9652));
    ctx.set_gpr(31, 0x088E25A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E25A4u) goto L_088E25A4;
    return;
L_088E25A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E25B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E25C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E25C4u) goto L_088E25C4;
    return;
L_088E25C4:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9808));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27736));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9776));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(29732));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9448));
    ctx.set_gpr(31, 0x088E2620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E2620u) goto L_088E2620;
    return;
L_088E2620:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2630:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E2640u);
    // nop
    goto L_088E249C;
L_088E2640:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27736)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E2678u) goto L_088E2678;
    return;
L_088E2678:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29748));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088E2694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E2694u) goto L_088E2694;
    return;
L_088E2694:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E26A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E26A4u) goto L_088E26A4;
    return;
L_088E26A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E26B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 199u, 0x088E4FECu>(ctx, &aot_mem) && ctx.pc == 0x088E26B0u) goto L_088E26B0;
    return;
L_088E26B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E26C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E26C4u) goto L_088E26C4;
    return;
L_088E26C4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E26D0u);
    // nop
    goto L_088E2CC4;
L_088E26D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E26ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E26ECu) goto L_088E26EC;
    return;
L_088E26EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E26F8u);
    // nop
    goto L_088E2CC4;
L_088E26F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29816));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29832));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29848));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E272Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E272Cu) goto L_088E272C;
    return;
L_088E272C:
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
L_088E2748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E2760u);
    // nop
    goto L_088E2988;
L_088E2760:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E2774u) goto L_088E2774;
    return;
L_088E2774:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2788:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E27C8;
      }
      goto L_088E27A0;
    }
L_088E27A0:
    ctx.set_gpr(31, 0x088E27A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E27A8u) goto L_088E27A8;
    return;
L_088E27A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E27B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E27B4u) goto L_088E27B4;
    return;
L_088E27B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E27C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E27C0u) goto L_088E27C0;
    return;
L_088E27C0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27756), ctx.gpr[2]);
    goto L_088E27C8;
L_088E27C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E27E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E280C;
      }
      goto L_088E27F8;
    }
L_088E27F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2814;
      }
      goto L_088E280C;
    }
L_088E280C:
    ctx.set_gpr(31, 0x088E2814u);
    // nop
    goto L_088E2988;
L_088E2814:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E282C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E2844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E2844u) goto L_088E2844;
    return;
L_088E2844:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(31, 0x088E2868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E2868u) goto L_088E2868;
    return;
L_088E2868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28A4;
      }
      goto L_088E2890;
    }
L_088E2890:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x088E289Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E289Cu) goto L_088E289C;
    return;
L_088E289C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E28A4;
L_088E28A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28BC;
      }
      goto L_088E28AC;
    }
L_088E28AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E28BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E28BCu) goto L_088E28BC;
    return;
L_088E28BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28E0;
      }
      goto L_088E28CC;
    }
L_088E28CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088E28D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E28D8u) goto L_088E28D8;
    return;
L_088E28D8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E28E0;
L_088E28E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E28F8;
      }
      goto L_088E28E8;
    }
L_088E28E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E28F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E28F8u) goto L_088E28F8;
    return;
L_088E28F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E291C;
      }
      goto L_088E2908;
    }
L_088E2908:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088E2914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2914u) goto L_088E2914;
    return;
L_088E2914:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E291C;
L_088E291C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2934;
      }
      goto L_088E2924;
    }
L_088E2924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E2934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E2934u) goto L_088E2934;
    return;
L_088E2934:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2958;
      }
      goto L_088E2944;
    }
L_088E2944:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088E2950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2950u) goto L_088E2950;
    return;
L_088E2950:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E2958;
L_088E2958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2970;
      }
      goto L_088E2960;
    }
L_088E2960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E2970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E2970u) goto L_088E2970;
    return;
L_088E2970:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10672));
    ctx.set_gpr(31, 0x088E29A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E29A0u) goto L_088E29A0;
    return;
L_088E29A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E29B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E29C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E29C0u) goto L_088E29C0;
    return;
L_088E29C0:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10820));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27756));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10788));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(29864));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10284));
    ctx.set_gpr(31, 0x088E2A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E2A14u) goto L_088E2A14;
    return;
L_088E2A14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E2A34u);
    // nop
    goto L_088E27E0;
L_088E2A34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27756)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E2A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E2A6Cu) goto L_088E2A6C;
    return;
L_088E2A6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29884));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x088E2A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E2A88u) goto L_088E2A88;
    return;
L_088E2A88:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E2A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2A98u) goto L_088E2A98;
    return;
L_088E2A98:
    ctx.set_gpr(3, 2190u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11304));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E2AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2AB4u) goto L_088E2AB4;
    return;
L_088E2AB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30260));
    ctx.set_gpr(31, 0x088E2ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088E2ACCu) goto L_088E2ACC;
    return;
L_088E2ACC:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11120));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E2AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2AE8u) goto L_088E2AE8;
    return;
L_088E2AE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30264));
    ctx.set_gpr(31, 0x088E2B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088E2B00u) goto L_088E2B00;
    return;
L_088E2B00:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11212));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E2B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2B1Cu) goto L_088E2B1C;
    return;
L_088E2B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E2B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088E2B2Cu) goto L_088E2B2C;
    return;
L_088E2B2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30080));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30140));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30200));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2B54u) goto L_088E2B54;
    return;
L_088E2B54:
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
L_088E2B70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27820)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2BB4;
      }
      goto L_088E2B88;
    }
L_088E2B88:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30356));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30316));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30336));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088E2BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E2BACu) goto L_088E2BAC;
    return;
L_088E2BAC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27820), ctx.gpr[2]);
    goto L_088E2BB4;
L_088E2BB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27820)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2BCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27824)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C10;
      }
      goto L_088E2BE4;
    }
L_088E2BE4:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30420));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30396));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30408));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088E2C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E2C08u) goto L_088E2C08;
    return;
L_088E2C08:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27824), ctx.gpr[2]);
    goto L_088E2C10;
L_088E2C10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27824)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2C28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27828)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C6C;
      }
      goto L_088E2C40;
    }
L_088E2C40:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30460));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30444));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30452));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E2C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E2C64u) goto L_088E2C64;
    return;
L_088E2C64:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27828), ctx.gpr[2]);
    goto L_088E2C6C;
L_088E2C6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27828)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2C84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E2C9Cu);
    // nop
    goto L_088E2DAC;
L_088E2C9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27832)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E2CB0u) goto L_088E2CB0;
    return;
L_088E2CB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27832)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D04;
      }
      goto L_088E2CDC;
    }
L_088E2CDC:
    ctx.set_gpr(31, 0x088E2CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E2CE4u) goto L_088E2CE4;
    return;
L_088E2CE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E2CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E2CF0u) goto L_088E2CF0;
    return;
L_088E2CF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E2CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E2CFCu) goto L_088E2CFC;
    return;
L_088E2CFC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27832), ctx.gpr[2]);
    goto L_088E2D04;
L_088E2D04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27832)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27832)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D48;
      }
      goto L_088E2D34;
    }
L_088E2D34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2D50;
      }
      goto L_088E2D48;
    }
L_088E2D48:
    ctx.set_gpr(31, 0x088E2D50u);
    // nop
    goto L_088E2DAC;
L_088E2D50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27832)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E2D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E2D7Cu) goto L_088E2D7C;
    return;
L_088E2D7C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E2D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E2D90u) goto L_088E2D90;
    return;
L_088E2D90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2DAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11732));
    ctx.set_gpr(31, 0x088E2DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E2DC4u) goto L_088E2DC4;
    return;
L_088E2DC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2DD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E2DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E2DE4u) goto L_088E2DE4;
    return;
L_088E2DE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30468));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27832));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11848));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30476));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11624));
    ctx.set_gpr(31, 0x088E2E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E2E38u) goto L_088E2E38;
    return;
L_088E2E38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E2E58u);
    // nop
    goto L_088E2D1C;
L_088E2E58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2E68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E2E80u);
    // nop
    goto L_088E2FC8;
L_088E2E80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27836)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E2E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E2E94u) goto L_088E2E94;
    return;
L_088E2E94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27836)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2ED4;
      }
      goto L_088E2EC0;
    }
L_088E2EC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2EDC;
      }
      goto L_088E2ED4;
    }
L_088E2ED4:
    ctx.set_gpr(31, 0x088E2EDCu);
    // nop
    goto L_088E2FC8;
L_088E2EDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2EF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E2F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E2F0Cu) goto L_088E2F0C;
    return;
L_088E2F0C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088E2F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E2F34u) goto L_088E2F34;
    return;
L_088E2F34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2F60;
      }
      goto L_088E2F58;
    }
L_088E2F58:
    ctx.set_gpr(31, 0x088E2F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E2F60u) goto L_088E2F60;
    return;
L_088E2F60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2F74;
      }
      goto L_088E2F6C;
    }
L_088E2F6C:
    ctx.set_gpr(31, 0x088E2F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E2F74u) goto L_088E2F74;
    return;
L_088E2F74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2F88;
      }
      goto L_088E2F80;
    }
L_088E2F80:
    ctx.set_gpr(31, 0x088E2F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E2F88u) goto L_088E2F88;
    return;
L_088E2F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2F9C;
      }
      goto L_088E2F94;
    }
L_088E2F94:
    ctx.set_gpr(31, 0x088E2F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E2F9Cu) goto L_088E2F9C;
    return;
L_088E2F9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2FB0;
      }
      goto L_088E2FA8;
    }
L_088E2FA8:
    ctx.set_gpr(31, 0x088E2FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E2FB0u) goto L_088E2FB0;
    return;
L_088E2FB0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2FC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12272));
    ctx.set_gpr(31, 0x088E2FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E2FE0u) goto L_088E2FE0;
    return;
L_088E2FE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2FF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E3000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E3000u) goto L_088E3000;
    return;
L_088E3000:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12428));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30500));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27836));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12396));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30524));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12020));
    ctx.set_gpr(31, 0x088E305Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E305Cu) goto L_088E305C;
    return;
L_088E305C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E306C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E307Cu);
    // nop
    goto L_088E2EA8;
L_088E307C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E308C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27836)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E30B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E30B4u) goto L_088E30B4;
    return;
L_088E30B4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30540));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088E30D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E30D0u) goto L_088E30D0;
    return;
L_088E30D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E30E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E30E0u) goto L_088E30E0;
    return;
L_088E30E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E30ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E30ECu) goto L_088E30EC;
    return;
L_088E30EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3108u) goto L_088E3108;
    return;
L_088E3108:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088E3114u) goto L_088E3114;
    return;
L_088E3114:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3130u) goto L_088E3130;
    return;
L_088E3130:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E313Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x088E313Cu) goto L_088E313C;
    return;
L_088E313C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3158u) goto L_088E3158;
    return;
L_088E3158:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 391u, 0x088F6074u>(ctx, &aot_mem) && ctx.pc == 0x088E3164u) goto L_088E3164;
    return;
L_088E3164:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3180u) goto L_088E3180;
    return;
L_088E3180:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E318Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 177u, 0x088FD090u>(ctx, &aot_mem) && ctx.pc == 0x088E318Cu) goto L_088E318C;
    return;
L_088E318C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30652));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30676));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30700));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E31C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E31C0u) goto L_088E31C0;
    return;
L_088E31C0:
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
L_088E31DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27864)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3208;
      }
      goto L_088E31F4;
    }
L_088E31F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3210;
      }
      goto L_088E3208;
    }
L_088E3208:
    ctx.set_gpr(31, 0x088E3210u);
    // nop
    goto L_088E33D4;
L_088E3210:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27864)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E3240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E3240u) goto L_088E3240;
    return;
L_088E3240:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x088E3278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E3278u) goto L_088E3278;
    return;
L_088E3278:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E32A4;
      }
      goto L_088E329C;
    }
L_088E329C:
    ctx.set_gpr(31, 0x088E32A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E32A4u) goto L_088E32A4;
    return;
L_088E32A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E32B8;
      }
      goto L_088E32B0;
    }
L_088E32B0:
    ctx.set_gpr(31, 0x088E32B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E32B8u) goto L_088E32B8;
    return;
L_088E32B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E32CC;
      }
      goto L_088E32C4;
    }
L_088E32C4:
    ctx.set_gpr(31, 0x088E32CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E32CCu) goto L_088E32CC;
    return;
L_088E32CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E32E0;
      }
      goto L_088E32D8;
    }
L_088E32D8:
    ctx.set_gpr(31, 0x088E32E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E32E0u) goto L_088E32E0;
    return;
L_088E32E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3304;
      }
      goto L_088E32F0;
    }
L_088E32F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088E32FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E32FCu) goto L_088E32FC;
    return;
L_088E32FC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E3304;
L_088E3304:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E331C;
      }
      goto L_088E330C;
    }
L_088E330C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E331Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E331Cu) goto L_088E331C;
    return;
L_088E331C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3330;
      }
      goto L_088E3328;
    }
L_088E3328:
    ctx.set_gpr(31, 0x088E3330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E3330u) goto L_088E3330;
    return;
L_088E3330:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3354;
      }
      goto L_088E3340;
    }
L_088E3340:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088E334Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E334Cu) goto L_088E334C;
    return;
L_088E334C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E3354;
L_088E3354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E336C;
      }
      goto L_088E335C;
    }
L_088E335C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E336Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E336Cu) goto L_088E336C;
    return;
L_088E336C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3380;
      }
      goto L_088E3378;
    }
L_088E3378:
    ctx.set_gpr(31, 0x088E3380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E3380u) goto L_088E3380;
    return;
L_088E3380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E33A4;
      }
      goto L_088E3390;
    }
L_088E3390:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088E339Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E339Cu) goto L_088E339C;
    return;
L_088E339C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E33A4;
L_088E33A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E33BC;
      }
      goto L_088E33AC;
    }
L_088E33AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E33BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E33BCu) goto L_088E33BC;
    return;
L_088E33BC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E33D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13308));
    ctx.set_gpr(31, 0x088E33ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E33ECu) goto L_088E33EC;
    return;
L_088E33EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E33FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E340Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E340Cu) goto L_088E340C;
    return;
L_088E340C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30724));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27864));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13432));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30748));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12840));
    ctx.set_gpr(31, 0x088E3468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E3468u) goto L_088E3468;
    return;
L_088E3468:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E3488u);
    // nop
    goto L_088E31DC;
L_088E3488:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27864)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E34C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E34C0u) goto L_088E34C0;
    return;
L_088E34C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30764));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088E34DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E34DCu) goto L_088E34DC;
    return;
L_088E34DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E34ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E34ECu) goto L_088E34EC;
    return;
L_088E34EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E34F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088E34F8u) goto L_088E34F8;
    return;
L_088E34F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3514u) goto L_088E3514;
    return;
L_088E3514:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 50u, 0x088E4434u>(ctx, &aot_mem) && ctx.pc == 0x088E3520u) goto L_088E3520;
    return;
L_088E3520:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E353Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E353Cu) goto L_088E353C;
    return;
L_088E353C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3548u) goto L_088E3548;
    return;
L_088E3548:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3564u) goto L_088E3564;
    return;
L_088E3564:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31108));
    ctx.set_gpr(31, 0x088E357Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088E357Cu) goto L_088E357C;
    return;
L_088E357C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13916));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3598u) goto L_088E3598;
    return;
L_088E3598:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E35B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E35B0u) goto L_088E35B0;
    return;
L_088E35B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E35BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E35BCu) goto L_088E35BC;
    return;
L_088E35BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E35D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E35D8u) goto L_088E35D8;
    return;
L_088E35D8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E35E4u);
    // nop
    goto L_088E2788;
L_088E35E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3600u) goto L_088E3600;
    return;
L_088E3600:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E360Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 93u, 0x088E47F0u>(ctx, &aot_mem) && ctx.pc == 0x088E360Cu) goto L_088E360C;
    return;
L_088E360C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30964));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31012));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31060));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E3640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3640u) goto L_088E3640;
    return;
L_088E3640:
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
L_088E365C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27916)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E36A0;
      }
      goto L_088E3674;
    }
L_088E3674:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31264));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31200));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31232));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088E3698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E3698u) goto L_088E3698;
    return;
L_088E3698:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27916), ctx.gpr[2]);
    goto L_088E36A0;
L_088E36A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27916)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E36B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27920)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E36F8;
      }
      goto L_088E36D0;
    }
L_088E36D0:
    ctx.set_gpr(31, 0x088E36D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E36D8u) goto L_088E36D8;
    return;
L_088E36D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E36E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E36E4u) goto L_088E36E4;
    return;
L_088E36E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E36F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E36F0u) goto L_088E36F0;
    return;
L_088E36F0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27920), ctx.gpr[2]);
    goto L_088E36F8;
L_088E36F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27920)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E373C;
      }
      goto L_088E3728;
    }
L_088E3728:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3744;
      }
      goto L_088E373C;
    }
L_088E373C:
    ctx.set_gpr(31, 0x088E3744u);
    // nop
    goto L_088E37A0;
L_088E3744:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E375C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E3770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E3770u) goto L_088E3770;
    return;
L_088E3770:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E3784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E3784u) goto L_088E3784;
    return;
L_088E3784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E37A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14280));
    ctx.set_gpr(31, 0x088E37B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E37B8u) goto L_088E37B8;
    return;
L_088E37B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E37C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E37D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E37D8u) goto L_088E37D8;
    return;
L_088E37D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27920));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14396));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31280));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14172));
    ctx.set_gpr(31, 0x088E382Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E382Cu) goto L_088E382C;
    return;
L_088E382C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E383C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E384Cu);
    // nop
    goto L_088E3710;
L_088E384C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E385C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27924)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E389C;
      }
      goto L_088E3874;
    }
L_088E3874:
    ctx.set_gpr(31, 0x088E387Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E387Cu) goto L_088E387C;
    return;
L_088E387C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E3888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E3888u) goto L_088E3888;
    return;
L_088E3888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E3894u) goto L_088E3894;
    return;
L_088E3894:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27924), ctx.gpr[2]);
    goto L_088E389C;
L_088E389C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27924)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E38B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27924)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E38E0;
      }
      goto L_088E38CC;
    }
L_088E38CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E38E8;
      }
      goto L_088E38E0;
    }
L_088E38E0:
    ctx.set_gpr(31, 0x088E38E8u);
    // nop
    goto L_088E3944;
L_088E38E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27924)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E3914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x088E3914u) goto L_088E3914;
    return;
L_088E3914:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13920));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E3928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E3928u) goto L_088E3928;
    return;
L_088E3928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14700));
    ctx.set_gpr(31, 0x088E395Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E395Cu) goto L_088E395C;
    return;
L_088E395C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E396C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E397Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E397Cu) goto L_088E397C;
    return;
L_088E397C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27924));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14816));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31308));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14592));
    ctx.set_gpr(31, 0x088E39D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E39D0u) goto L_088E39D0;
    return;
L_088E39D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E39E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E39F0u);
    // nop
    goto L_088E38B4;
L_088E39F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3A00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E3A18u);
    // nop
    goto L_088E3B18;
L_088E3A18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27928)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E3A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E3A2Cu) goto L_088E3A2C;
    return;
L_088E3A2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3A40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27928)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3A6C;
      }
      goto L_088E3A58;
    }
L_088E3A58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3A74;
      }
      goto L_088E3A6C;
    }
L_088E3A6C:
    ctx.set_gpr(31, 0x088E3A74u);
    // nop
    goto L_088E3B18;
L_088E3A74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27928)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3A8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E3AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E3AA4u) goto L_088E3AA4;
    return;
L_088E3AA4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088E3AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E3AC0u) goto L_088E3AC0;
    return;
L_088E3AC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3AEC;
      }
      goto L_088E3AE4;
    }
L_088E3AE4:
    ctx.set_gpr(31, 0x088E3AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E3AECu) goto L_088E3AEC;
    return;
L_088E3AEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B00;
      }
      goto L_088E3AF8;
    }
L_088E3AF8:
    ctx.set_gpr(31, 0x088E3B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E3B00u) goto L_088E3B00;
    return;
L_088E3B00:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3B18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15168));
    ctx.set_gpr(31, 0x088E3B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E3B30u) goto L_088E3B30;
    return;
L_088E3B30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E3B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E3B50u) goto L_088E3B50;
    return;
L_088E3B50:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31328));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27928));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15760));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15324));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15292));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31340));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14988));
    ctx.set_gpr(31, 0x088E3BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E3BACu) goto L_088E3BAC;
    return;
L_088E3BAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3BBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E3BCCu);
    // nop
    goto L_088E3A40;
L_088E3BCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3BDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27940)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27928)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E3C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E3C14u) goto L_088E3C14;
    return;
L_088E3C14:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31360));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E3C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E3C30u) goto L_088E3C30;
    return;
L_088E3C30:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E3C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3C40u) goto L_088E3C40;
    return;
L_088E3C40:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 159u, 0x088E4CA4u>(ctx, &aot_mem) && ctx.pc == 0x088E3C4Cu) goto L_088E3C4C;
    return;
L_088E3C4C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E3C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3C68u) goto L_088E3C68;
    return;
L_088E3C68:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 391u, 0x088F6074u>(ctx, &aot_mem) && ctx.pc == 0x088E3C74u) goto L_088E3C74;
    return;
L_088E3C74:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31396));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31404));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31412));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E3CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3CA8u) goto L_088E3CA8;
    return;
L_088E3CA8:
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
L_088E3CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27940)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D04;
      }
      goto L_088E3CDC;
    }
L_088E3CDC:
    ctx.set_gpr(31, 0x088E3CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E3CE4u) goto L_088E3CE4;
    return;
L_088E3CE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E3CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E3CF0u) goto L_088E3CF0;
    return;
L_088E3CF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E3CFCu) goto L_088E3CFC;
    return;
L_088E3CFC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27940), ctx.gpr[2]);
    goto L_088E3D04;
L_088E3D04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27940)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27940)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D48;
      }
      goto L_088E3D34;
    }
L_088E3D34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D50;
      }
      goto L_088E3D48;
    }
L_088E3D48:
    ctx.set_gpr(31, 0x088E3D50u);
    // nop
    goto L_088E3D68;
L_088E3D50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27940)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15760));
    ctx.set_gpr(31, 0x088E3D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E3D80u) goto L_088E3D80;
    return;
L_088E3D80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E3DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E3DA0u) goto L_088E3DA0;
    return;
L_088E3DA0:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27940));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15880));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31428));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E3DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E3DF8u) goto L_088E3DF8;
    return;
L_088E3DF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E3E18u);
    // nop
    goto L_088E3D1C;
L_088E3E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27940)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E3E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E3E50u) goto L_088E3E50;
    return;
L_088E3E50:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31444));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E3E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E3E6Cu) goto L_088E3E6C;
    return;
L_088E3E6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E3E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3E7Cu) goto L_088E3E7C;
    return;
L_088E3E7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 5u, 0x088E4080u>(ctx, &aot_mem) && ctx.pc == 0x088E3E88u) goto L_088E3E88;
    return;
L_088E3E88:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31464));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31468));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31472));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E3EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3EC0u) goto L_088E3EC0;
    return;
L_088E3EC0:
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
L_088E3EDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27948)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F1C;
      }
      goto L_088E3EF4;
    }
L_088E3EF4:
    ctx.set_gpr(31, 0x088E3EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E3EFCu) goto L_088E3EFC;
    return;
L_088E3EFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E3F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E3F08u) goto L_088E3F08;
    return;
L_088E3F08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E3F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E3F14u) goto L_088E3F14;
    return;
L_088E3F14:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27948), ctx.gpr[2]);
    goto L_088E3F1C;
L_088E3F1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27948)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3F34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27948)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F60;
      }
      goto L_088E3F4C;
    }
L_088E3F4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F68;
      }
      goto L_088E3F60;
    }
L_088E3F60:
    ctx.set_gpr(31, 0x088E3F68u);
    // nop
    goto L_088E3FC4;
L_088E3F68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27948)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E3F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 603u, 0x088D64C8u>(ctx, &aot_mem) && ctx.pc == 0x088E3F94u) goto L_088E3F94;
    return;
L_088E3F94:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E3FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E3FA8u) goto L_088E3FA8;
    return;
L_088E3FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16364));
    ctx.set_gpr(31, 0x088E3FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E3FDCu) goto L_088E3FDC;
    return;
L_088E3FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E3FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E3FFCu) goto L_088E3FFC;
    return;
L_088E3FFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = 0x088E4000u; return;
}

void recomp_unit_0055(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0055_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_55(Runtime &runtime) {
    runtime.register_generated_unit(55u, 0x088E0000u, 16384u, &recomp_unit_0055, &recomp_unit_0055_entry);
    runtime.register_function(0x088E0000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0014u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E002Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E003Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E004Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0100u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E011Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E012Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0138u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E016Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0188u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0218u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0230u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0240u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0250u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0300u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0308u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0320u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0334u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0348u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0364u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E037Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E038Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E039Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0400u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0410u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0420u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0430u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0454u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0470u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0498u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0510u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0524u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0540u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0558u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0624u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0634u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0644u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0654u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0664u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E067Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0690u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0698u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E070Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E071Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E072Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0778u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0788u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0798u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0808u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E081Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0838u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0850u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0860u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0870u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0904u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0918u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0920u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0938u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0950u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0968u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E098Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ABCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ECCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ED4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1008u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1014u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E101Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1028u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1030u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1048u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E105Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E106Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1084u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1088u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1090u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1100u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E110Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1114u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E112Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1144u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1158u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E116Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1184u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E118Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1198u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1210u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1224u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1238u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1254u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E126Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E127Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E128Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1300u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1310u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1340u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1354u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1370u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E137Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1400u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1414u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1428u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1440u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1454u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E145Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1474u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E148Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E150Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1514u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1520u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1528u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1534u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E153Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1548u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1550u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E155Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1564u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1574u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1580u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1588u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1590u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1604u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1610u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1618u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1624u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E162Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1638u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1640u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E164Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1654u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1660u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1668u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1674u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E167Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1688u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1690u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1700u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1708u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1714u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1720u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E173Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E175Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1774u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1780u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1788u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1794u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E17F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1800u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1808u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1814u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1828u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1834u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1840u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1848u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1854u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1864u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E187Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1880u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1888u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E196Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E198Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1998u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1ABCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1ACCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1ED8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2008u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2018u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2028u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2038u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2048u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2058u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2064u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2078u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2084u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2098u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2104u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2118u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2124u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2138u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2144u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2158u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2164u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2178u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2184u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2198u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2200u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2210u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2228u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E223Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2244u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E225Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2274u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E228Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2308u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2364u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2374u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2384u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2394u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2428u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2444u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E245Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2464u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2470u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E247Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2484u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E249Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2500u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2520u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2544u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E254Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2558u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2560u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E256Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2574u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E258Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2620u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2630u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2640u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2650u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2678u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2694u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E272Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2748u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2760u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2774u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2788u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E280Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2814u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E282Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2844u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2868u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2890u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E289Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2908u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2914u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E291Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2924u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2934u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2944u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2950u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2958u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2970u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2988u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2ACCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2ED4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E305Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E306Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E307Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E308Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3108u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3114u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3130u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E313Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3158u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3164u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3180u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E318Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3208u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3210u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3228u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3240u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3278u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E329Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3304u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E330Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E331Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3328u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3330u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3340u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E334Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3354u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E335Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E336Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3378u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3380u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3390u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E339Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E340Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3468u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3478u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3488u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3498u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3514u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3520u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E353Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3548u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3564u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E357Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3598u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3600u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E360Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3640u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E365Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3674u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3698u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3710u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3728u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E373Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3744u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E375Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3770u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3784u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E382Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E383Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E384Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E385Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3874u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E387Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3888u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3894u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E389Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3900u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3914u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3928u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3944u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E395Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E396Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E397Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FFCu, &recomp_unit_0055, "recomp_unit_0055");
}
} // namespace psprecomp
