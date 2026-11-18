#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0164[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 0, 15, 0, 16, 17, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 65, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 90,
    0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104,
    0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0,
    114, 0, 0, 115, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 125,
    0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0,
    0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0,
    175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182,
    0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205,
    206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0,
    0, 0, 0, 214, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 230, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 246,
    0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 258, 0, 259, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 289, 0,
    290, 0, 291, 292, 293, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 304, 0, 0, 0,
    305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309,
    0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0,
    321, 0, 0, 0, 0, 322, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 343,
    0, 344, 0, 345, 346, 347, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    353, 0, 354, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0,
    360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 366, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 370, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 388, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 392, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0, 0, 397,
    0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 410, 0, 0, 0,
    0, 411, 0, 0, 412, 0, 413, 0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 431, 0,
    0, 0, 432, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0,
    442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 450, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0,
    0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 466, 0, 467, 468, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 482, 0, 483, 484, 0, 0,
    0, 0, 0, 0, 485, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 488, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 504, 0,
    505, 0, 0, 506, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 511, 0, 512, 513, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 0, 515, 0, 0, 0, 516, 517, 0, 518, 519, 0, 520, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 522, 523, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 534,
    0, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551,
    552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557,
    0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0,
    0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571,
    572, 0, 573, 0, 0, 574, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 579, 0, 580, 581, 0, 582, 0, 0, 0,
    0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 585, 0, 586, 587, 0, 588, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 590, 591, 0, 592, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0,
    0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0,
    604, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608,
    0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0,
    0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 621, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 629, 0, 0, 630, 631, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 636, 0, 0, 637, 0,
    0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0,
    0, 644, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650,
    651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653, 654, 0, 655, 0, 0, 656, 657, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0,
    0, 0, 660, 661, 0, 662, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 667, 0, 668, 669, 0, 670, 671, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 673, 0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 677,
    0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0,
    0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0,
    686, 0, 0, 687, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 690, 691, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 699, 0, 0, 700, 0, 701, 0, 702, 0,
    0, 0, 0, 0, 0, 0, 703, 704, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 709,
    0, 710, 0, 0, 0, 0, 0, 711, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 714, 0, 0, 715, 0, 0, 0, 0, 0,
    0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0,
    0, 0, 0, 722, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0,
    0, 728, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 732, 0, 733, 0, 0, 734, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    737, 0, 0, 0, 738, 739, 0, 740, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 745, 0, 746, 747, 0, 748, 749, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 751, 0, 752, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    754, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0,
    0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0,
    776, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0,
    782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 793,
    0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 798, 799, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 800, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 805, 0, 806, 0, 0, 807, 0, 0, 808, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 813, 814, 0, 0, 815,
};
void recomp_unit_0164_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A94000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0164[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A94000;
    case 2u: goto L_08A9402C;
    case 3u: goto L_08A94034;
    case 4u: goto L_08A9406C;
    case 5u: goto L_08A9407C;
    case 6u: goto L_08A94094;
    case 7u: goto L_08A9409C;
    case 8u: goto L_08A940B0;
    case 9u: goto L_08A940B8;
    case 10u: goto L_08A940C0;
    case 11u: goto L_08A940C8;
    case 12u: goto L_08A940D0;
    case 13u: goto L_08A940E8;
    case 14u: goto L_08A94100;
    case 15u: goto L_08A9410C;
    case 16u: goto L_08A94114;
    case 17u: goto L_08A94118;
    case 18u: goto L_08A94128;
    case 19u: goto L_08A94130;
    case 20u: goto L_08A94138;
    case 21u: goto L_08A941A0;
    case 22u: goto L_08A941BC;
    case 23u: goto L_08A941C8;
    case 24u: goto L_08A941D8;
    case 25u: goto L_08A941E4;
    case 26u: goto L_08A94204;
    case 27u: goto L_08A94234;
    case 28u: goto L_08A94268;
    case 29u: goto L_08A94270;
    case 30u: goto L_08A942A4;
    case 31u: goto L_08A942BC;
    case 32u: goto L_08A942CC;
    case 33u: goto L_08A942E4;
    case 34u: goto L_08A942FC;
    case 35u: goto L_08A94310;
    case 36u: goto L_08A94328;
    case 37u: goto L_08A9434C;
    case 38u: goto L_08A94354;
    case 39u: goto L_08A94374;
    case 40u: goto L_08A94388;
    case 41u: goto L_08A9439C;
    case 42u: goto L_08A943A4;
    case 43u: goto L_08A943AC;
    case 44u: goto L_08A943B4;
    case 45u: goto L_08A943CC;
    case 46u: goto L_08A943D4;
    case 47u: goto L_08A943E8;
    case 48u: goto L_08A94400;
    case 49u: goto L_08A94408;
    case 50u: goto L_08A9441C;
    case 51u: goto L_08A9442C;
    case 52u: goto L_08A94444;
    case 53u: goto L_08A9444C;
    case 54u: goto L_08A94464;
    case 55u: goto L_08A9446C;
    case 56u: goto L_08A94474;
    case 57u: goto L_08A9447C;
    case 58u: goto L_08A9449C;
    case 59u: goto L_08A944A4;
    case 60u: goto L_08A944B8;
    case 61u: goto L_08A944BC;
    case 62u: goto L_08A944C4;
    case 63u: goto L_08A944DC;
    case 64u: goto L_08A944F4;
    case 65u: goto L_08A94504;
    case 66u: goto L_08A94508;
    case 67u: goto L_08A94514;
    case 68u: goto L_08A94534;
    case 69u: goto L_08A94548;
    case 70u: goto L_08A9455C;
    case 71u: goto L_08A94564;
    case 72u: goto L_08A9456C;
    case 73u: goto L_08A94574;
    case 74u: goto L_08A9458C;
    case 75u: goto L_08A94594;
    case 76u: goto L_08A945A8;
    case 77u: goto L_08A945C0;
    case 78u: goto L_08A945C8;
    case 79u: goto L_08A945DC;
    case 80u: goto L_08A945EC;
    case 81u: goto L_08A94604;
    case 82u: goto L_08A9460C;
    case 83u: goto L_08A94624;
    case 84u: goto L_08A9462C;
    case 85u: goto L_08A94634;
    case 86u: goto L_08A9463C;
    case 87u: goto L_08A9465C;
    case 88u: goto L_08A94664;
    case 89u: goto L_08A94678;
    case 90u: goto L_08A9467C;
    case 91u: goto L_08A94684;
    case 92u: goto L_08A9469C;
    case 93u: goto L_08A946B4;
    case 94u: goto L_08A946C4;
    case 95u: goto L_08A946C8;
    case 96u: goto L_08A946D4;
    case 97u: goto L_08A946FC;
    case 98u: goto L_08A94724;
    case 99u: goto L_08A9473C;
    case 100u: goto L_08A94744;
    case 101u: goto L_08A94750;
    case 102u: goto L_08A9475C;
    case 103u: goto L_08A94764;
    case 104u: goto L_08A9477C;
    case 105u: goto L_08A94784;
    case 106u: goto L_08A94790;
    case 107u: goto L_08A9479C;
    case 108u: goto L_08A947BC;
    case 109u: goto L_08A947CC;
    case 110u: goto L_08A947D8;
    case 111u: goto L_08A947E4;
    case 112u: goto L_08A947EC;
    case 113u: goto L_08A947F4;
    case 114u: goto L_08A94800;
    case 115u: goto L_08A9480C;
    case 116u: goto L_08A94810;
    case 117u: goto L_08A94820;
    case 118u: goto L_08A94838;
    case 119u: goto L_08A94864;
    case 120u: goto L_08A94884;
    case 121u: goto L_08A94894;
    case 122u: goto L_08A948B8;
    case 123u: goto L_08A948F0;
    case 124u: goto L_08A948F4;
    case 125u: goto L_08A948FC;
    case 126u: goto L_08A94910;
    case 127u: goto L_08A9491C;
    case 128u: goto L_08A94928;
    case 129u: goto L_08A94930;
    case 130u: goto L_08A94944;
    case 131u: goto L_08A94954;
    case 132u: goto L_08A9497C;
    case 133u: goto L_08A949A4;
    case 134u: goto L_08A949B4;
    case 135u: goto L_08A949D4;
    case 136u: goto L_08A94A24;
    case 137u: goto L_08A94A30;
    case 138u: goto L_08A94A40;
    case 139u: goto L_08A94A48;
    case 140u: goto L_08A94A5C;
    case 141u: goto L_08A94A70;
    case 142u: goto L_08A94A80;
    case 143u: goto L_08A94A90;
    case 144u: goto L_08A94AC4;
    case 145u: goto L_08A94AFC;
    case 146u: goto L_08A94B08;
    case 147u: goto L_08A94B18;
    case 148u: goto L_08A94B28;
    case 149u: goto L_08A94B34;
    case 150u: goto L_08A94B5C;
    case 151u: goto L_08A94B88;
    case 152u: goto L_08A94B8C;
    case 153u: goto L_08A94B94;
    case 154u: goto L_08A94BA8;
    case 155u: goto L_08A94BC8;
    case 156u: goto L_08A94BD4;
    case 157u: goto L_08A94BDC;
    case 158u: goto L_08A94BE8;
    case 159u: goto L_08A94BF8;
    case 160u: goto L_08A94C04;
    case 161u: goto L_08A94C0C;
    case 162u: goto L_08A94C2C;
    case 163u: goto L_08A94C34;
    case 164u: goto L_08A94C40;
    case 165u: goto L_08A94C4C;
    case 166u: goto L_08A94C5C;
    case 167u: goto L_08A94C70;
    case 168u: goto L_08A94C98;
    case 169u: goto L_08A94CC0;
    case 170u: goto L_08A94CC8;
    case 171u: goto L_08A94CD4;
    case 172u: goto L_08A94CE0;
    case 173u: goto L_08A94CE8;
    case 174u: goto L_08A94CF0;
    case 175u: goto L_08A94D00;
    case 176u: goto L_08A94D08;
    case 177u: goto L_08A94D20;
    case 178u: goto L_08A94D28;
    case 179u: goto L_08A94D40;
    case 180u: goto L_08A94D54;
    case 181u: goto L_08A94D74;
    case 182u: goto L_08A94D7C;
    case 183u: goto L_08A94D84;
    case 184u: goto L_08A94D8C;
    case 185u: goto L_08A94DA4;
    case 186u: goto L_08A94DB4;
    case 187u: goto L_08A94DBC;
    case 188u: goto L_08A94DC8;
    case 189u: goto L_08A94DD0;
    case 190u: goto L_08A94DE0;
    case 191u: goto L_08A94DE8;
    case 192u: goto L_08A94E20;
    case 193u: goto L_08A94E24;
    case 194u: goto L_08A94E38;
    case 195u: goto L_08A94E6C;
    case 196u: goto L_08A94E84;
    case 197u: goto L_08A94E9C;
    case 198u: goto L_08A94EAC;
    case 199u: goto L_08A94EBC;
    case 200u: goto L_08A94EC4;
    case 201u: goto L_08A94ED0;
    case 202u: goto L_08A94EDC;
    case 203u: goto L_08A94EE8;
    case 204u: goto L_08A94EF0;
    case 205u: goto L_08A94EFC;
    case 206u: goto L_08A94F00;
    case 207u: goto L_08A94F14;
    case 208u: goto L_08A94F28;
    case 209u: goto L_08A94F38;
    case 210u: goto L_08A94F40;
    case 211u: goto L_08A94F58;
    case 212u: goto L_08A94F70;
    case 213u: goto L_08A94F78;
    case 214u: goto L_08A94F8C;
    case 215u: goto L_08A94F90;
    case 216u: goto L_08A94FA4;
    case 217u: goto L_08A94FB8;
    case 218u: goto L_08A94FC4;
    case 219u: goto L_08A94FEC;
    case 220u: goto L_08A9503C;
    case 221u: goto L_08A95054;
    case 222u: goto L_08A95070;
    case 223u: goto L_08A95088;
    case 224u: goto L_08A95090;
    case 225u: goto L_08A9509C;
    case 226u: goto L_08A950B0;
    case 227u: goto L_08A950BC;
    case 228u: goto L_08A950C4;
    case 229u: goto L_08A950D0;
    case 230u: goto L_08A950D8;
    case 231u: goto L_08A950DC;
    case 232u: goto L_08A95114;
    case 233u: goto L_08A9515C;
    case 234u: goto L_08A95164;
    case 235u: goto L_08A95184;
    case 236u: goto L_08A9518C;
    case 237u: goto L_08A95194;
    case 238u: goto L_08A951A0;
    case 239u: goto L_08A951B4;
    case 240u: goto L_08A951BC;
    case 241u: goto L_08A951C4;
    case 242u: goto L_08A951CC;
    case 243u: goto L_08A951DC;
    case 244u: goto L_08A951E4;
    case 245u: goto L_08A951F0;
    case 246u: goto L_08A951FC;
    case 247u: goto L_08A9520C;
    case 248u: goto L_08A95214;
    case 249u: goto L_08A95230;
    case 250u: goto L_08A9523C;
    case 251u: goto L_08A9526C;
    case 252u: goto L_08A95278;
    case 253u: goto L_08A952B0;
    case 254u: goto L_08A952E8;
    case 255u: goto L_08A952F0;
    case 256u: goto L_08A95324;
    case 257u: goto L_08A9535C;
    case 258u: goto L_08A95360;
    case 259u: goto L_08A95368;
    case 260u: goto L_08A95378;
    case 261u: goto L_08A9539C;
    case 262u: goto L_08A953A8;
    case 263u: goto L_08A953CC;
    case 264u: goto L_08A953D0;
    case 265u: goto L_08A953D8;
    case 266u: goto L_08A953E0;
    case 267u: goto L_08A953F0;
    case 268u: goto L_08A9541C;
    case 269u: goto L_08A95430;
    case 270u: goto L_08A95434;
    case 271u: goto L_08A9543C;
    case 272u: goto L_08A9545C;
    case 273u: goto L_08A95474;
    case 274u: goto L_08A95478;
    case 275u: goto L_08A954A0;
    case 276u: goto L_08A954C4;
    case 277u: goto L_08A954CC;
    case 278u: goto L_08A954E0;
    case 279u: goto L_08A954F8;
    case 280u: goto L_08A95514;
    case 281u: goto L_08A9551C;
    case 282u: goto L_08A95524;
    case 283u: goto L_08A95580;
    case 284u: goto L_08A955B4;
    case 285u: goto L_08A955BC;
    case 286u: goto L_08A955C4;
    case 287u: goto L_08A955EC;
    case 288u: goto L_08A955F4;
    case 289u: goto L_08A955F8;
    case 290u: goto L_08A95600;
    case 291u: goto L_08A95608;
    case 292u: goto L_08A9560C;
    case 293u: goto L_08A95610;
    case 294u: goto L_08A95614;
    case 295u: goto L_08A95624;
    case 296u: goto L_08A95634;
    case 297u: goto L_08A9564C;
    case 298u: goto L_08A95674;
    case 299u: goto L_08A9567C;
    case 300u: goto L_08A9569C;
    case 301u: goto L_08A956B0;
    case 302u: goto L_08A956E4;
    case 303u: goto L_08A956EC;
    case 304u: goto L_08A956F0;
    case 305u: goto L_08A95700;
    case 306u: goto L_08A95710;
    case 307u: goto L_08A9575C;
    case 308u: goto L_08A95774;
    case 309u: goto L_08A9577C;
    case 310u: goto L_08A95790;
    case 311u: goto L_08A95798;
    case 312u: goto L_08A957A0;
    case 313u: goto L_08A957AC;
    case 314u: goto L_08A957B4;
    case 315u: goto L_08A957C4;
    case 316u: goto L_08A957D0;
    case 317u: goto L_08A957D8;
    case 318u: goto L_08A957E0;
    case 319u: goto L_08A957F0;
    case 320u: goto L_08A957F8;
    case 321u: goto L_08A95800;
    case 322u: goto L_08A95814;
    case 323u: goto L_08A95818;
    case 324u: goto L_08A9584C;
    case 325u: goto L_08A9587C;
    case 326u: goto L_08A95884;
    case 327u: goto L_08A958A0;
    case 328u: goto L_08A958A8;
    case 329u: goto L_08A958B0;
    case 330u: goto L_08A958BC;
    case 331u: goto L_08A958C4;
    case 332u: goto L_08A958CC;
    case 333u: goto L_08A958E0;
    case 334u: goto L_08A95908;
    case 335u: goto L_08A95910;
    case 336u: goto L_08A95918;
    case 337u: goto L_08A95984;
    case 338u: goto L_08A959B8;
    case 339u: goto L_08A959C0;
    case 340u: goto L_08A959C8;
    case 341u: goto L_08A959F0;
    case 342u: goto L_08A959F8;
    case 343u: goto L_08A959FC;
    case 344u: goto L_08A95A04;
    case 345u: goto L_08A95A0C;
    case 346u: goto L_08A95A10;
    case 347u: goto L_08A95A14;
    case 348u: goto L_08A95A18;
    case 349u: goto L_08A95A28;
    case 350u: goto L_08A95A38;
    case 351u: goto L_08A95A50;
    case 352u: goto L_08A95A78;
    case 353u: goto L_08A95A80;
    case 354u: goto L_08A95A88;
    case 355u: goto L_08A95A8C;
    case 356u: goto L_08A95AD4;
    case 357u: goto L_08A95ADC;
    case 358u: goto L_08A95AE4;
    case 359u: goto L_08A95AF4;
    case 360u: goto L_08A95B00;
    case 361u: goto L_08A95B08;
    case 362u: goto L_08A95B10;
    case 363u: goto L_08A95B20;
    case 364u: goto L_08A95B28;
    case 365u: goto L_08A95B30;
    case 366u: goto L_08A95B44;
    case 367u: goto L_08A95B48;
    case 368u: goto L_08A95B5C;
    case 369u: goto L_08A95B90;
    case 370u: goto L_08A95B98;
    case 371u: goto L_08A95B9C;
    case 372u: goto L_08A95BAC;
    case 373u: goto L_08A95BC8;
    case 374u: goto L_08A95C14;
    case 375u: goto L_08A95C1C;
    case 376u: goto L_08A95C24;
    case 377u: goto L_08A95C4C;
    case 378u: goto L_08A95C54;
    case 379u: goto L_08A95C5C;
    case 380u: goto L_08A95C84;
    case 381u: goto L_08A95C8C;
    case 382u: goto L_08A95C94;
    case 383u: goto L_08A95CA4;
    case 384u: goto L_08A95CB4;
    case 385u: goto L_08A95CBC;
    case 386u: goto L_08A95CCC;
    case 387u: goto L_08A95CDC;
    case 388u: goto L_08A95CE0;
    case 389u: goto L_08A95CFC;
    case 390u: goto L_08A95D30;
    case 391u: goto L_08A95D3C;
    case 392u: goto L_08A95D40;
    case 393u: goto L_08A95D54;
    case 394u: goto L_08A95D5C;
    case 395u: goto L_08A95D64;
    case 396u: goto L_08A95D70;
    case 397u: goto L_08A95D7C;
    case 398u: goto L_08A95D84;
    case 399u: goto L_08A95D98;
    case 400u: goto L_08A95DBC;
    case 401u: goto L_08A95DDC;
    case 402u: goto L_08A95DE4;
    case 403u: goto L_08A95DF8;
    case 404u: goto L_08A95E0C;
    case 405u: goto L_08A95E40;
    case 406u: goto L_08A95E4C;
    case 407u: goto L_08A95E54;
    case 408u: goto L_08A95E60;
    case 409u: goto L_08A95E6C;
    case 410u: goto L_08A95E70;
    case 411u: goto L_08A95E84;
    case 412u: goto L_08A95E90;
    case 413u: goto L_08A95E98;
    case 414u: goto L_08A95EA4;
    case 415u: goto L_08A95EA8;
    case 416u: goto L_08A95ECC;
    case 417u: goto L_08A95EE8;
    case 418u: goto L_08A95F18;
    case 419u: goto L_08A95F24;
    case 420u: goto L_08A95F2C;
    case 421u: goto L_08A95F40;
    case 422u: goto L_08A95F48;
    case 423u: goto L_08A95F64;
    case 424u: goto L_08A95F7C;
    case 425u: goto L_08A95FA4;
    case 426u: goto L_08A95FC0;
    case 427u: goto L_08A95FC8;
    case 428u: goto L_08A95FD8;
    case 429u: goto L_08A95FE8;
    case 430u: goto L_08A95FF0;
    case 431u: goto L_08A95FF8;
    case 432u: goto L_08A96008;
    case 433u: goto L_08A96018;
    case 434u: goto L_08A96020;
    case 435u: goto L_08A96028;
    case 436u: goto L_08A96038;
    case 437u: goto L_08A96048;
    case 438u: goto L_08A96050;
    case 439u: goto L_08A96058;
    case 440u: goto L_08A96068;
    case 441u: goto L_08A96078;
    case 442u: goto L_08A96080;
    case 443u: goto L_08A96088;
    case 444u: goto L_08A96098;
    case 445u: goto L_08A960A8;
    case 446u: goto L_08A960B0;
    case 447u: goto L_08A960B8;
    case 448u: goto L_08A960C8;
    case 449u: goto L_08A960D8;
    case 450u: goto L_08A960DC;
    case 451u: goto L_08A96144;
    case 452u: goto L_08A96188;
    case 453u: goto L_08A961A0;
    case 454u: goto L_08A961AC;
    case 455u: goto L_08A961B4;
    case 456u: goto L_08A961BC;
    case 457u: goto L_08A961CC;
    case 458u: goto L_08A961E4;
    case 459u: goto L_08A961F4;
    case 460u: goto L_08A96204;
    case 461u: goto L_08A96218;
    case 462u: goto L_08A96234;
    case 463u: goto L_08A96240;
    case 464u: goto L_08A96250;
    case 465u: goto L_08A96260;
    case 466u: goto L_08A96268;
    case 467u: goto L_08A96270;
    case 468u: goto L_08A96274;
    case 469u: goto L_08A9627C;
    case 470u: goto L_08A962A8;
    case 471u: goto L_08A962BC;
    case 472u: goto L_08A962CC;
    case 473u: goto L_08A962D8;
    case 474u: goto L_08A962E8;
    case 475u: goto L_08A962F4;
    case 476u: goto L_08A96300;
    case 477u: goto L_08A96320;
    case 478u: goto L_08A96334;
    case 479u: goto L_08A96340;
    case 480u: goto L_08A96350;
    case 481u: goto L_08A96360;
    case 482u: goto L_08A96368;
    case 483u: goto L_08A96370;
    case 484u: goto L_08A96374;
    case 485u: goto L_08A96390;
    case 486u: goto L_08A96394;
    case 487u: goto L_08A963CC;
    case 488u: goto L_08A96404;
    case 489u: goto L_08A96410;
    case 490u: goto L_08A96418;
    case 491u: goto L_08A96420;
    case 492u: goto L_08A96428;
    case 493u: goto L_08A96438;
    case 494u: goto L_08A9644C;
    case 495u: goto L_08A96458;
    case 496u: goto L_08A96468;
    case 497u: goto L_08A96484;
    case 498u: goto L_08A96498;
    case 499u: goto L_08A964B0;
    case 500u: goto L_08A964C4;
    case 501u: goto L_08A964C8;
    case 502u: goto L_08A964D0;
    case 503u: goto L_08A964F4;
    case 504u: goto L_08A964F8;
    case 505u: goto L_08A96500;
    case 506u: goto L_08A9650C;
    case 507u: goto L_08A96510;
    case 508u: goto L_08A96518;
    case 509u: goto L_08A96540;
    case 510u: goto L_08A96550;
    case 511u: goto L_08A96554;
    case 512u: goto L_08A9655C;
    case 513u: goto L_08A96560;
    case 514u: goto L_08A96568;
    case 515u: goto L_08A9658C;
    case 516u: goto L_08A9659C;
    case 517u: goto L_08A965A0;
    case 518u: goto L_08A965A8;
    case 519u: goto L_08A965AC;
    case 520u: goto L_08A965B4;
    case 521u: goto L_08A965B8;
    case 522u: goto L_08A96688;
    case 523u: goto L_08A9668C;
    case 524u: goto L_08A96694;
    case 525u: goto L_08A96698;
    case 526u: goto L_08A966C0;
    case 527u: goto L_08A966C4;
    case 528u: goto L_08A966E0;
    case 529u: goto L_08A96704;
    case 530u: goto L_08A96804;
    case 531u: goto L_08A96828;
    case 532u: goto L_08A96864;
    case 533u: goto L_08A9686C;
    case 534u: goto L_08A9687C;
    case 535u: goto L_08A96890;
    case 536u: goto L_08A9689C;
    case 537u: goto L_08A968A4;
    case 538u: goto L_08A968AC;
    case 539u: goto L_08A968C8;
    case 540u: goto L_08A968D0;
    case 541u: goto L_08A96900;
    case 542u: goto L_08A96908;
    case 543u: goto L_08A96938;
    case 544u: goto L_08A96940;
    case 545u: goto L_08A96974;
    case 546u: goto L_08A96998;
    case 547u: goto L_08A969BC;
    case 548u: goto L_08A969D0;
    case 549u: goto L_08A969DC;
    case 550u: goto L_08A969E4;
    case 551u: goto L_08A969FC;
    case 552u: goto L_08A96A00;
    case 553u: goto L_08A96A38;
    case 554u: goto L_08A96A3C;
    case 555u: goto L_08A96A48;
    case 556u: goto L_08A96A68;
    case 557u: goto L_08A96A7C;
    case 558u: goto L_08A96A9C;
    case 559u: goto L_08A96AA8;
    case 560u: goto L_08A96AB0;
    case 561u: goto L_08A96AC0;
    case 562u: goto L_08A96AD4;
    case 563u: goto L_08A96AE0;
    case 564u: goto L_08A96AF0;
    case 565u: goto L_08A96B0C;
    case 566u: goto L_08A96B20;
    case 567u: goto L_08A96B38;
    case 568u: goto L_08A96B4C;
    case 569u: goto L_08A96B50;
    case 570u: goto L_08A96B58;
    case 571u: goto L_08A96B7C;
    case 572u: goto L_08A96B80;
    case 573u: goto L_08A96B88;
    case 574u: goto L_08A96B94;
    case 575u: goto L_08A96B98;
    case 576u: goto L_08A96BA0;
    case 577u: goto L_08A96BC8;
    case 578u: goto L_08A96BD8;
    case 579u: goto L_08A96BDC;
    case 580u: goto L_08A96BE4;
    case 581u: goto L_08A96BE8;
    case 582u: goto L_08A96BF0;
    case 583u: goto L_08A96C14;
    case 584u: goto L_08A96C24;
    case 585u: goto L_08A96C28;
    case 586u: goto L_08A96C30;
    case 587u: goto L_08A96C34;
    case 588u: goto L_08A96C3C;
    case 589u: goto L_08A96C40;
    case 590u: goto L_08A96D10;
    case 591u: goto L_08A96D14;
    case 592u: goto L_08A96D1C;
    case 593u: goto L_08A96D20;
    case 594u: goto L_08A96D48;
    case 595u: goto L_08A96D4C;
    case 596u: goto L_08A96D68;
    case 597u: goto L_08A96D8C;
    case 598u: goto L_08A96E0C;
    case 599u: goto L_08A96E24;
    case 600u: goto L_08A96E50;
    case 601u: goto L_08A96E64;
    case 602u: goto L_08A96E70;
    case 603u: goto L_08A96E78;
    case 604u: goto L_08A96E80;
    case 605u: goto L_08A96EA4;
    case 606u: goto L_08A96EBC;
    case 607u: goto L_08A96EE8;
    case 608u: goto L_08A96EFC;
    case 609u: goto L_08A96F0C;
    case 610u: goto L_08A96F14;
    case 611u: goto L_08A96F40;
    case 612u: goto L_08A96F48;
    case 613u: goto L_08A96F50;
    case 614u: goto L_08A96F74;
    case 615u: goto L_08A96F8C;
    case 616u: goto L_08A96FB0;
    case 617u: goto L_08A96FC4;
    case 618u: goto L_08A96FD0;
    case 619u: goto L_08A96FD8;
    case 620u: goto L_08A96FF0;
    case 621u: goto L_08A96FF4;
    case 622u: goto L_08A9702C;
    case 623u: goto L_08A97030;
    case 624u: goto L_08A9703C;
    case 625u: goto L_08A9705C;
    case 626u: goto L_08A97070;
    case 627u: goto L_08A9709C;
    case 628u: goto L_08A970A4;
    case 629u: goto L_08A970B0;
    case 630u: goto L_08A970BC;
    case 631u: goto L_08A970C0;
    case 632u: goto L_08A970C8;
    case 633u: goto L_08A970D4;
    case 634u: goto L_08A970E0;
    case 635u: goto L_08A970E8;
    case 636u: goto L_08A970EC;
    case 637u: goto L_08A970F8;
    case 638u: goto L_08A97108;
    case 639u: goto L_08A9712C;
    case 640u: goto L_08A9714C;
    case 641u: goto L_08A97158;
    case 642u: goto L_08A97160;
    case 643u: goto L_08A97170;
    case 644u: goto L_08A97184;
    case 645u: goto L_08A97190;
    case 646u: goto L_08A971A0;
    case 647u: goto L_08A971BC;
    case 648u: goto L_08A971D0;
    case 649u: goto L_08A971E8;
    case 650u: goto L_08A971FC;
    case 651u: goto L_08A97200;
    case 652u: goto L_08A97208;
    case 653u: goto L_08A9722C;
    case 654u: goto L_08A97230;
    case 655u: goto L_08A97238;
    case 656u: goto L_08A97244;
    case 657u: goto L_08A97248;
    case 658u: goto L_08A97250;
    case 659u: goto L_08A97278;
    case 660u: goto L_08A97288;
    case 661u: goto L_08A9728C;
    case 662u: goto L_08A97294;
    case 663u: goto L_08A97298;
    case 664u: goto L_08A972A0;
    case 665u: goto L_08A972C4;
    case 666u: goto L_08A972D4;
    case 667u: goto L_08A972D8;
    case 668u: goto L_08A972E0;
    case 669u: goto L_08A972E4;
    case 670u: goto L_08A972EC;
    case 671u: goto L_08A972F0;
    case 672u: goto L_08A973C0;
    case 673u: goto L_08A973C4;
    case 674u: goto L_08A973CC;
    case 675u: goto L_08A973D0;
    case 676u: goto L_08A973F8;
    case 677u: goto L_08A973FC;
    case 678u: goto L_08A97418;
    case 679u: goto L_08A9743C;
    case 680u: goto L_08A97474;
    case 681u: goto L_08A97490;
    case 682u: goto L_08A974A4;
    case 683u: goto L_08A974A8;
    case 684u: goto L_08A974C0;
    case 685u: goto L_08A974EC;
    case 686u: goto L_08A97500;
    case 687u: goto L_08A9750C;
    case 688u: goto L_08A97514;
    case 689u: goto L_08A9751C;
    case 690u: goto L_08A97540;
    case 691u: goto L_08A97544;
    case 692u: goto L_08A97548;
    case 693u: goto L_08A97560;
    case 694u: goto L_08A9758C;
    case 695u: goto L_08A975A0;
    case 696u: goto L_08A975B0;
    case 697u: goto L_08A975B8;
    case 698u: goto L_08A975D8;
    case 699u: goto L_08A975DC;
    case 700u: goto L_08A975E8;
    case 701u: goto L_08A975F0;
    case 702u: goto L_08A975F8;
    case 703u: goto L_08A97618;
    case 704u: goto L_08A9761C;
    case 705u: goto L_08A97620;
    case 706u: goto L_08A97638;
    case 707u: goto L_08A9765C;
    case 708u: goto L_08A97670;
    case 709u: goto L_08A9767C;
    case 710u: goto L_08A97684;
    case 711u: goto L_08A9769C;
    case 712u: goto L_08A976A0;
    case 713u: goto L_08A976D8;
    case 714u: goto L_08A976DC;
    case 715u: goto L_08A976E8;
    case 716u: goto L_08A97708;
    case 717u: goto L_08A9771C;
    case 718u: goto L_08A97754;
    case 719u: goto L_08A97760;
    case 720u: goto L_08A97768;
    case 721u: goto L_08A97778;
    case 722u: goto L_08A9778C;
    case 723u: goto L_08A97798;
    case 724u: goto L_08A977A8;
    case 725u: goto L_08A977C4;
    case 726u: goto L_08A977D8;
    case 727u: goto L_08A977F0;
    case 728u: goto L_08A97804;
    case 729u: goto L_08A97808;
    case 730u: goto L_08A97810;
    case 731u: goto L_08A97834;
    case 732u: goto L_08A97838;
    case 733u: goto L_08A97840;
    case 734u: goto L_08A9784C;
    case 735u: goto L_08A97850;
    case 736u: goto L_08A97858;
    case 737u: goto L_08A97880;
    case 738u: goto L_08A97890;
    case 739u: goto L_08A97894;
    case 740u: goto L_08A9789C;
    case 741u: goto L_08A978A0;
    case 742u: goto L_08A978A8;
    case 743u: goto L_08A978CC;
    case 744u: goto L_08A978DC;
    case 745u: goto L_08A978E0;
    case 746u: goto L_08A978E8;
    case 747u: goto L_08A978EC;
    case 748u: goto L_08A978F4;
    case 749u: goto L_08A978F8;
    case 750u: goto L_08A979C8;
    case 751u: goto L_08A979CC;
    case 752u: goto L_08A979D4;
    case 753u: goto L_08A979D8;
    case 754u: goto L_08A97A00;
    case 755u: goto L_08A97A04;
    case 756u: goto L_08A97A20;
    case 757u: goto L_08A97A44;
    case 758u: goto L_08A97B34;
    case 759u: goto L_08A97B58;
    case 760u: goto L_08A97B9C;
    case 761u: goto L_08A97BB0;
    case 762u: goto L_08A97BBC;
    case 763u: goto L_08A97BC4;
    case 764u: goto L_08A97BCC;
    case 765u: goto L_08A97BE8;
    case 766u: goto L_08A97BF0;
    case 767u: goto L_08A97C20;
    case 768u: goto L_08A97C28;
    case 769u: goto L_08A97C44;
    case 770u: goto L_08A97C4C;
    case 771u: goto L_08A97C6C;
    case 772u: goto L_08A97C90;
    case 773u: goto L_08A97CD4;
    case 774u: goto L_08A97CE8;
    case 775u: goto L_08A97CF8;
    case 776u: goto L_08A97D00;
    case 777u: goto L_08A97D1C;
    case 778u: goto L_08A97D24;
    case 779u: goto L_08A97D54;
    case 780u: goto L_08A97D5C;
    case 781u: goto L_08A97D78;
    case 782u: goto L_08A97D80;
    case 783u: goto L_08A97DA8;
    case 784u: goto L_08A97DB0;
    case 785u: goto L_08A97DB8;
    case 786u: goto L_08A97DD4;
    case 787u: goto L_08A97DDC;
    case 788u: goto L_08A97E0C;
    case 789u: goto L_08A97E14;
    case 790u: goto L_08A97E30;
    case 791u: goto L_08A97E38;
    case 792u: goto L_08A97E58;
    case 793u: goto L_08A97E7C;
    case 794u: goto L_08A97EA0;
    case 795u: goto L_08A97EB4;
    case 796u: goto L_08A97EC0;
    case 797u: goto L_08A97EC8;
    case 798u: goto L_08A97EE0;
    case 799u: goto L_08A97EE4;
    case 800u: goto L_08A97F1C;
    case 801u: goto L_08A97F20;
    case 802u: goto L_08A97F2C;
    case 803u: goto L_08A97F4C;
    case 804u: goto L_08A97F60;
    case 805u: goto L_08A97F8C;
    case 806u: goto L_08A97F94;
    case 807u: goto L_08A97FA0;
    case 808u: goto L_08A97FAC;
    case 809u: goto L_08A97FB0;
    case 810u: goto L_08A97FB8;
    case 811u: goto L_08A97FD0;
    case 812u: goto L_08A97FDC;
    case 813u: goto L_08A97FE4;
    case 814u: goto L_08A97FE8;
    case 815u: goto L_08A97FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A94000:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29940), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29936), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1115u, 0x08A93FB8u>(ctx, &aot_mem); return;
      }
      goto L_08A9402C;
    }
L_08A9402C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    goto L_08A94034;
L_08A94034:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2868));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
        goto L_08A94034;
    }
    goto L_08A9406C;
L_08A9406C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9407C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_08A94094;
L_08A94094:
    ctx.set_gpr(31, 0x08A9409Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9409Cu) goto L_08A9409C;
    return;
L_08A9409C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94094;
      }
      goto L_08A940B0;
    }
L_08A940B0:
    ctx.set_gpr(31, 0x08A940B8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A940B8u) goto L_08A940B8;
    return;
L_08A940B8:
    ctx.set_gpr(31, 0x08A940C0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A940C0u) goto L_08A940C0;
    return;
L_08A940C0:
    ctx.set_gpr(31, 0x08A940C8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A940C8u) goto L_08A940C8;
    return;
L_08A940C8:
    ctx.set_gpr(31, 0x08A940D0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A940D0u) goto L_08A940D0;
    return;
L_08A940D0:
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
L_08A940E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08A94118;
    }
    goto L_08A94100;
L_08A94100:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A94114;
      }
      goto L_08A9410C;
    }
L_08A9410C:
    ctx.set_gpr(31, 0x08A94114u);
    // nop
    goto L_08A94128;
L_08A94114:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A94118;
L_08A94118:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94128:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08A94130:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11520), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11524), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11525), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11724), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A941A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1524));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A941A0u) goto L_08A941A0;
    return;
L_08A941A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1592), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1612));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    ctx.set_gpr(31, 0x08A941BCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A941BCu) goto L_08A941BC;
    return;
L_08A941BC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(31, 0x08A941C8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1105u, 0x08A93DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A941C8u) goto L_08A941C8;
    return;
L_08A941C8:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A941D8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22820));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 447u, 0x08A9AE08u>(ctx, &aot_mem) && ctx.pc == 0x08A941D8u) goto L_08A941D8;
    return;
L_08A941D8:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A941E4;
L_08A941E4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[7]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3904), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[1]);
    goto L_08A94204;
L_08A94204:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 84 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A94204;
      }
      goto L_08A94234;
    }
L_08A94234:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08A941E4;
      }
      goto L_08A94268;
    }
L_08A94268:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A94270;
L_08A94270:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] | 11284u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A94270;
    }
    goto L_08A942A4;
L_08A942A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A942BCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1104u, 0x08A93DA8u>(ctx, &aot_mem) && ctx.pc == 0x08A942BCu) goto L_08A942BC;
    return;
L_08A942BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A942CCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08A942CCu) goto L_08A942CC;
    return;
L_08A942CC:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[1] | 11528u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1552), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A942E4u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1096u, 0x08A93CECu>(ctx, &aot_mem) && ctx.pc == 0x08A942E4u) goto L_08A942E4;
    return;
L_08A942E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1556));
    ctx.set_gpr(31, 0x08A942FCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A942FCu) goto L_08A942FC;
    return;
L_08A942FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1568));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A94310u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A94310u) goto L_08A94310;
    return;
L_08A94310:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1580));
    ctx.set_gpr(31, 0x08A94328u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A94328u) goto L_08A94328;
    return;
L_08A94328:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1604), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1600), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1608), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9434C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94354:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(11525)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A94388;
      }
      goto L_08A94374;
    }
L_08A94374:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19636), 0u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11525), static_cast<std::uint8_t>(0u));
    goto L_08A94388;
L_08A94388:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19636)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A94400;
      }
      goto L_08A9439C;
    }
L_08A9439C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A943AC;
      }
      goto L_08A943A4;
    }
L_08A943A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A94508;
      }
      goto L_08A943AC;
    }
L_08A943AC:
    ctx.set_gpr(31, 0x08A943B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A943B4u) goto L_08A943B4;
    return;
L_08A943B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A943CCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A943CCu) goto L_08A943CC;
    return;
L_08A943CC:
    ctx.set_gpr(31, 0x08A943D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A943D4u) goto L_08A943D4;
    return;
L_08A943D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A943E8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A943E8u) goto L_08A943E8;
    return;
L_08A943E8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19636)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19636), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A94504;
      }
      goto L_08A94400;
    }
L_08A94400:
    ctx.set_gpr(31, 0x08A94408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A94408u) goto L_08A94408;
    return;
L_08A94408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A9441Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9441Cu) goto L_08A9441C;
    return;
L_08A9441C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9442Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08A9442Cu) goto L_08A9442C;
    return;
L_08A9442C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A94444u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A94444u) goto L_08A94444;
    return;
L_08A94444:
    ctx.set_gpr(31, 0x08A9444Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A946D4;
L_08A9444C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(434));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A94464u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22808));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A94464u) goto L_08A94464;
    return;
L_08A94464:
    ctx.set_gpr(31, 0x08A9446Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9446Cu) goto L_08A9446C;
    return;
L_08A9446C:
    ctx.set_gpr(31, 0x08A94474u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94474u) goto L_08A94474;
    return;
L_08A94474:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08A944A4;
    }
    goto L_08A9447C;
L_08A9447C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9449Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9449Cu) goto L_08A9449C;
    return;
L_08A9449C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A944BC;
      }
      goto L_08A944A4;
    }
L_08A944A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A944B8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A944B8u) goto L_08A944B8;
    return;
L_08A944B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A944BC;
L_08A944BC:
    ctx.set_gpr(31, 0x08A944C4u);
    // nop
    goto L_08A946D4;
L_08A944C4:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(433));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A944DCu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22808));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A944DCu) goto L_08A944DC;
    return;
L_08A944DC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A944F4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A944F4u) goto L_08A944F4;
    return;
L_08A944F4:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11524), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A94504;
L_08A94504:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A94508;
L_08A94508:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94514:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(11524)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A94548;
      }
      goto L_08A94534;
    }
L_08A94534:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19632), 0u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11524), static_cast<std::uint8_t>(0u));
    goto L_08A94548;
L_08A94548:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19632)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A945C0;
      }
      goto L_08A9455C;
    }
L_08A9455C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9456C;
      }
      goto L_08A94564;
    }
L_08A94564:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A946C8;
      }
      goto L_08A9456C;
    }
L_08A9456C:
    ctx.set_gpr(31, 0x08A94574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A94574u) goto L_08A94574;
    return;
L_08A94574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A9458Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9458Cu) goto L_08A9458C;
    return;
L_08A9458C:
    ctx.set_gpr(31, 0x08A94594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A94594u) goto L_08A94594;
    return;
L_08A94594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A945A8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A945A8u) goto L_08A945A8;
    return;
L_08A945A8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19632)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19632), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A946C4;
      }
      goto L_08A945C0;
    }
L_08A945C0:
    ctx.set_gpr(31, 0x08A945C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A945C8u) goto L_08A945C8;
    return;
L_08A945C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A945DCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A945DCu) goto L_08A945DC;
    return;
L_08A945DC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A945ECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08A945ECu) goto L_08A945EC;
    return;
L_08A945EC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A94604u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A94604u) goto L_08A94604;
    return;
L_08A94604:
    ctx.set_gpr(31, 0x08A9460Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A946FC;
L_08A9460C:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(434));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A94624u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22808));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A94624u) goto L_08A94624;
    return;
L_08A94624:
    ctx.set_gpr(31, 0x08A9462Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9462Cu) goto L_08A9462C;
    return;
L_08A9462C:
    ctx.set_gpr(31, 0x08A94634u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94634u) goto L_08A94634;
    return;
L_08A94634:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08A94664;
    }
    goto L_08A9463C;
L_08A9463C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9465Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A9465Cu) goto L_08A9465C;
    return;
L_08A9465C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A9467C;
      }
      goto L_08A94664;
    }
L_08A94664:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A94678u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A94678u) goto L_08A94678;
    return;
L_08A94678:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A9467C;
L_08A9467C:
    ctx.set_gpr(31, 0x08A94684u);
    // nop
    goto L_08A946FC;
L_08A94684:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(433));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A9469Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22808));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9469Cu) goto L_08A9469C;
    return;
L_08A9469C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A946B4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A946B4u) goto L_08A946B4;
    return;
L_08A946B4:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11525), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A946C4;
L_08A946C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A946C8;
L_08A946C8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A946D4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7973));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A946FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(6000));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08A94724;
L_08A94724:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3356)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A94750;
    }
    goto L_08A9473C;
L_08A9473C:
    ctx.set_gpr(31, 0x08A94744u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 515u, 0x08A8D800u>(ctx, &aot_mem) && ctx.pc == 0x08A94744u) goto L_08A94744;
    return;
L_08A94744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A94750;
L_08A94750:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94724;
      }
      goto L_08A9475C;
    }
L_08A9475C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08A94764;
L_08A94764:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A94790;
    }
    goto L_08A9477C;
L_08A9477C:
    ctx.set_gpr(31, 0x08A94784u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 884u, 0x08A8EAACu>(ctx, &aot_mem) && ctx.pc == 0x08A94784u) goto L_08A94784;
    return;
L_08A94784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A94790;
L_08A94790:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94764;
      }
      goto L_08A9479C;
    }
L_08A9479C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08A947BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A947CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08A947CCu) goto L_08A947CC;
    return;
L_08A947CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
        goto L_08A94810;
    }
    goto L_08A947D8;
L_08A947D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
        goto L_08A94810;
    }
    goto L_08A947E4;
L_08A947E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94810;
      }
      goto L_08A947EC;
    }
L_08A947EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A94810;
      }
      goto L_08A947F4;
    }
L_08A947F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94810;
      }
      goto L_08A94800;
    }
L_08A94800:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94810;
      }
      goto L_08A9480C;
    }
L_08A9480C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    goto L_08A94810;
L_08A94810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A94838u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08A94838u) goto L_08A94838;
    return;
L_08A94838:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 17008u << 16u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A94884u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A94820;
L_08A94884:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A94894u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A947BC;
L_08A94894:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A948B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A94954;
      }
      goto L_08A948F0;
    }
L_08A948F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A948F4;
L_08A948F4:
    ctx.set_gpr(31, 0x08A948FCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A947BC;
L_08A948FC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A94928;
    }
    goto L_08A94910;
L_08A94910:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A9491Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A94864;
L_08A9491C:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A94944;
      }
      goto L_08A94928;
    }
L_08A94928:
    ctx.set_gpr(31, 0x08A94930u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A94820;
L_08A94930:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    goto L_08A94944;
L_08A94944:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A948F4;
    }
    goto L_08A94954;
L_08A94954:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9497C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A949A4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A948B8;
L_08A949A4:
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A949B4u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_08A948B8;
L_08A949B4:
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
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
L_08A949D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A94A24;
L_08A94A24:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A94A30u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A947BC;
L_08A94A30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A94A40u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A94820;
L_08A94A40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08A94A70;
      }
      goto L_08A94A48;
    }
L_08A94A48:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] <= ctx.fpr[21]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94A70;
      }
      goto L_08A94A5C;
    }
L_08A94A5C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A94A48;
      }
      goto L_08A94A70;
    }
L_08A94A70:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[21]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A94A24;
    }
    goto L_08A94A80;
L_08A94A80:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A94A90u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    goto L_08A94AC4;
L_08A94A90:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94AC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A94AFC;
L_08A94AFC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A94B08u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A947BC;
L_08A94B08:
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A94B28;
    }
    goto L_08A94B18;
L_08A94B18:
    ctx.set_gpr(3, ctx.gpr[21] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A94B34;
      }
      goto L_08A94B28;
    }
L_08A94B28:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A94AFC;
      }
      goto L_08A94B34;
    }
L_08A94B34:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94B5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A94BA8;
      }
      goto L_08A94B88;
    }
L_08A94B88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A94B8C;
L_08A94B8C:
    ctx.set_gpr(31, 0x08A94B94u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A947BC;
L_08A94B94:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A94B8C;
    }
    goto L_08A94BA8;
L_08A94BA8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A94BC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94BD4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94BDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_08A94BF8;
    }
    goto L_08A94BE8;
L_08A94BE8:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3348), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A94C04;
      }
      goto L_08A94BF8;
    }
L_08A94BF8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3348), ctx.gpr[5]);
    goto L_08A94C04;
L_08A94C04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94C0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A94C5C;
      }
      goto L_08A94C2C;
    }
L_08A94C2C:
    ctx.set_gpr(31, 0x08A94C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08A94C34u) goto L_08A94C34;
    return;
L_08A94C34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A94C40u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A94BDC;
L_08A94C40:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A94C4Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 509u, 0x08A9B2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A94C4Cu) goto L_08A94C4C;
    return;
L_08A94C4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A94C5Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08A94C5Cu) goto L_08A94C5C;
    return;
L_08A94C5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3352)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A94D40;
      }
      goto L_08A94C98;
    }
L_08A94C98:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3352), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(142));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(308));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1600), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1076));
    ctx.set_gpr(31, 0x08A94CC0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1604), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A94CC0u) goto L_08A94CC0;
    return;
L_08A94CC0:
    ctx.set_gpr(31, 0x08A94CC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08A94CC8u) goto L_08A94CC8;
    return;
L_08A94CC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A94CE0;
      }
      goto L_08A94CD4;
    }
L_08A94CD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1608), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A94D00;
      }
      goto L_08A94CE0;
    }
L_08A94CE0:
    ctx.set_gpr(31, 0x08A94CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A94CE8u) goto L_08A94CE8;
    return;
L_08A94CE8:
    ctx.set_gpr(31, 0x08A94CF0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08A94CF0u) goto L_08A94CF0;
    return;
L_08A94CF0:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1604)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1608), ctx.gpr[2]);
    goto L_08A94D00;
L_08A94D00:
    ctx.set_gpr(31, 0x08A94D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A94D08u) goto L_08A94D08;
    return;
L_08A94D08:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A94D20u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94D20u) goto L_08A94D20;
    return;
L_08A94D20:
    ctx.set_gpr(31, 0x08A94D28u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A94130;
L_08A94D28:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3436), 0u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11284), static_cast<std::uint8_t>(0u));
    goto L_08A94D40;
L_08A94D40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94D54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A94DB4;
      }
      goto L_08A94D74;
    }
L_08A94D74:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94D84;
      }
      goto L_08A94D7C;
    }
L_08A94D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A94E24;
      }
      goto L_08A94D84;
    }
L_08A94D84:
    ctx.set_gpr(31, 0x08A94D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A94D8Cu) goto L_08A94D8C;
    return;
L_08A94D8C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1604)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1600)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1608)));
    ctx.set_gpr(31, 0x08A94DA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 975u, 0x0885BBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A94DA4u) goto L_08A94DA4;
    return;
L_08A94DA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A94E20;
      }
      goto L_08A94DB4;
    }
L_08A94DB4:
    ctx.set_gpr(31, 0x08A94DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A94DBCu) goto L_08A94DBC;
    return;
L_08A94DBC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A94DC8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 985u, 0x0885BCF8u>(ctx, &aot_mem) && ctx.pc == 0x08A94DC8u) goto L_08A94DC8;
    return;
L_08A94DC8:
    ctx.set_gpr(31, 0x08A94DD0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A94DD0u) goto L_08A94DD0;
    return;
L_08A94DD0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A94DE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08A94DE0u) goto L_08A94DE0;
    return;
L_08A94DE0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94E20;
      }
      goto L_08A94DE8;
    }
L_08A94DE8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3436), 0u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11284), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1604), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1600), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1608), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A94E24;
      }
      goto L_08A94E20;
    }
L_08A94E20:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A94E24;
L_08A94E24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94E38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[21] + 0u);
    ctx.set_gpr(22, ctx.gpr[21] + 0u);
    goto L_08A94E6C;
L_08A94E6C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3356)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_08A94F00;
    }
    goto L_08A94E84;
L_08A94E84:
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[20]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3904)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94EFC;
      }
      goto L_08A94E9C;
    }
L_08A94E9C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[1]);
    goto L_08A94EAC;
L_08A94EAC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A94EDC;
    }
    goto L_08A94EBC;
L_08A94EBC:
    ctx.set_gpr(31, 0x08A94EC4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 259u, 0x08A7D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94EC4u) goto L_08A94EC4;
    return;
L_08A94EC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A94ED0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 49u, 0x08860290u>(ctx, &aot_mem) && ctx.pc == 0x08A94ED0u) goto L_08A94ED0;
    return;
L_08A94ED0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A94EDC;
L_08A94EDC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94EAC;
      }
      goto L_08A94EE8;
    }
L_08A94EE8:
    ctx.set_gpr(31, 0x08A94EF0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A94EF0u) goto L_08A94EF0;
    return;
L_08A94EF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A94EFCu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 740u, 0x0885ED60u>(ctx, &aot_mem) && ctx.pc == 0x08A94EFCu) goto L_08A94EFC;
    return;
L_08A94EFC:
    ctx.set_gpr(3, 1u << 16u);
    goto L_08A94F00;
L_08A94F00:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3356)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A94F28;
    }
    goto L_08A94F14;
L_08A94F14:
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[20]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3904), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A94F28;
L_08A94F28:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08A94E6C;
      }
      goto L_08A94F38;
    }
L_08A94F38:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08A94F40;
L_08A94F40:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3436)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_08A94F90;
    }
    goto L_08A94F58;
L_08A94F58:
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[17]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(11284)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94F8C;
      }
      goto L_08A94F70;
    }
L_08A94F70:
    ctx.set_gpr(31, 0x08A94F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A94F78u) goto L_08A94F78;
    return;
L_08A94F78:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A94F8Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94F8Cu) goto L_08A94F8C;
    return;
L_08A94F8C:
    ctx.set_gpr(3, 1u << 16u);
    goto L_08A94F90;
L_08A94F90:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3436)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A94FB8;
    }
    goto L_08A94FA4;
L_08A94FA4:
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[17]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11284), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A94FB8;
L_08A94FB8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94F40;
      }
      goto L_08A94FC4;
    }
L_08A94FC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08A94FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(1, ctx.gpr[1] | 3356u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08A950D8;
      }
      goto L_08A9503C;
    }
L_08A9503C:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3904)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[21]);
        goto L_08A950DC;
    }
    goto L_08A95054;
L_08A95054:
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[21] + ctx.gpr[2]);
    goto L_08A95070;
L_08A95070:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3924)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A950B0;
    }
    goto L_08A95088;
L_08A95088:
    ctx.set_gpr(31, 0x08A95090u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 259u, 0x08A7D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95090u) goto L_08A95090;
    return;
L_08A95090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9509Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 49u, 0x08860290u>(ctx, &aot_mem) && ctx.pc == 0x08A9509Cu) goto L_08A9509C;
    return;
L_08A9509C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3924), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A950B0;
L_08A950B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A95070;
      }
      goto L_08A950BC;
    }
L_08A950BC:
    ctx.set_gpr(31, 0x08A950C4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A950C4u) goto L_08A950C4;
    return;
L_08A950C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A950D0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 740u, 0x0885ED60u>(ctx, &aot_mem) && ctx.pc == 0x08A950D0u) goto L_08A950D0;
    return;
L_08A950D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A950D8;
L_08A950D8:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[21]);
    goto L_08A950DC;
L_08A950DC:
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3904), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08A95114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 3904u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
        goto L_08A95164;
    }
    goto L_08A9515C;
L_08A9515C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95478;
      }
      goto L_08A95164;
    }
L_08A95164:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 3356u);
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A9518C;
    }
    goto L_08A95184;
L_08A95184:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95478;
      }
      goto L_08A9518C;
    }
L_08A9518C:
    ctx.set_gpr(31, 0x08A95194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A95194u) goto L_08A95194;
    return;
L_08A95194:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A951A0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 259u, 0x08A7D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08A951A0u) goto L_08A951A0;
    return;
L_08A951A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_08A95230;
      }
      goto L_08A951B4;
    }
L_08A951B4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08A951C4;
    }
    goto L_08A951BC;
L_08A951BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A95478;
      }
      goto L_08A951C4;
    }
L_08A951C4:
    ctx.set_gpr(31, 0x08A951CCu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 515u, 0x08A8D800u>(ctx, &aot_mem) && ctx.pc == 0x08A951CCu) goto L_08A951CC;
    return;
L_08A951CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A951DCu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 664u, 0x0885E894u>(ctx, &aot_mem) && ctx.pc == 0x08A951DCu) goto L_08A951DC;
    return;
L_08A951DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A95474;
      }
      goto L_08A951E4;
    }
L_08A951E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A951F0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 515u, 0x08A8D800u>(ctx, &aot_mem) && ctx.pc == 0x08A951F0u) goto L_08A951F0;
    return;
L_08A951F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A9520C;
    }
    goto L_08A951FC;
L_08A951FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A95478;
      }
      goto L_08A9520C;
    }
L_08A9520C:
    ctx.set_gpr(31, 0x08A95214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1004u, 0x0885FE10u>(ctx, &aot_mem) && ctx.pc == 0x08A95214u) goto L_08A95214;
    return;
L_08A95214:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11520), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A95474;
      }
      goto L_08A95230;
    }
L_08A95230:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9523Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 515u, 0x08A8D800u>(ctx, &aot_mem) && ctx.pc == 0x08A9523Cu) goto L_08A9523C;
    return;
L_08A9523C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(21, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A9545C;
    }
    goto L_08A9526C;
L_08A9526C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
        goto L_08A952F0;
    }
    goto L_08A95278;
L_08A95278:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A952B0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 21u, 0x08860118u>(ctx, &aot_mem) && ctx.pc == 0x08A952B0u) goto L_08A952B0;
    return;
L_08A952B0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A95360;
      }
      goto L_08A952E8;
    }
L_08A952E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95360;
      }
      goto L_08A952F0;
    }
L_08A952F0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A95324u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1027u, 0x0885FFA0u>(ctx, &aot_mem) && ctx.pc == 0x08A95324u) goto L_08A95324;
    return;
L_08A95324:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A95360;
      }
      goto L_08A9535C;
    }
L_08A9535C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08A95360;
L_08A95360:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95474;
      }
      goto L_08A95368;
    }
L_08A95368:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A95378u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 880u, 0x0885F5ACu>(ctx, &aot_mem) && ctx.pc == 0x08A95378u) goto L_08A95378;
    return;
L_08A95378:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9539Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 82u, 0x08860440u>(ctx, &aot_mem) && ctx.pc == 0x08A9539Cu) goto L_08A9539C;
    return;
L_08A9539C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_08A953D0;
    }
    goto L_08A953A8;
L_08A953A8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A953CCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 136u, 0x08860714u>(ctx, &aot_mem) && ctx.pc == 0x08A953CCu) goto L_08A953CC;
    return;
L_08A953CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08A953D0;
L_08A953D0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A95434;
    }
    goto L_08A953D8;
L_08A953D8:
    ctx.set_gpr(31, 0x08A953E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08A953E0u) goto L_08A953E0;
    return;
L_08A953E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A953F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5000));
    goto L_08A954A0;
L_08A953F0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[3] | 16960u);
    ctx.set_gpr(31, 0x08A9541Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9541Cu) goto L_08A9541C;
    return;
L_08A9541C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A95430u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 143u, 0x08860790u>(ctx, &aot_mem) && ctx.pc == 0x08A95430u) goto L_08A95430;
    return;
L_08A95430:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A95434;
L_08A95434:
    ctx.set_gpr(31, 0x08A9543Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1004u, 0x0885FE10u>(ctx, &aot_mem) && ctx.pc == 0x08A9543Cu) goto L_08A9543C;
    return;
L_08A9543C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11520)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11520), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A95474;
      }
      goto L_08A9545C;
    }
L_08A9545C:
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11520), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A95478;
      }
      goto L_08A95474;
    }
L_08A95474:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A95478;
L_08A95478:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08A954A0:
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
          goto L_08A954E0;
      }
      goto L_08A954C4;
    }
L_08A954C4:
    ctx.set_gpr(31, 0x08A954CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08A954CCu) goto L_08A954CC;
    return;
L_08A954CC:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08A954E0;
L_08A954E0:
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
L_08A954F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9564C;
      }
      goto L_08A95514;
    }
L_08A95514:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08A95524;
    }
    goto L_08A9551C;
L_08A9551C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95700;
      }
      goto L_08A95524;
    }
L_08A95524:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11316), ctx.gpr[5]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11320), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11324), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11328), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11332), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A95524;
      }
      goto L_08A95580;
    }
L_08A95580:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11392u);
    ctx.set_gpr(9, ctx.gpr[16] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11388u);
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3356u);
    ctx.set_gpr(14, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[1]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < 19 ? 1u : 0u);
    goto L_08A955B4;
L_08A955B4:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(13, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08A95624;
      }
      goto L_08A955BC;
    }
L_08A955BC:
    ctx.set_gpr(12, ctx.gpr[9] + 0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    goto L_08A955C4;
L_08A955C4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
        goto L_08A955F8;
    }
    goto L_08A955EC;
L_08A955EC:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08A9560C;
    }
    goto L_08A955F4;
L_08A955F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    goto L_08A955F8;
L_08A955F8:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
        goto L_08A95614;
    }
    goto L_08A95600;
L_08A95600:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A95610;
      }
      goto L_08A95608;
    }
L_08A95608:
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A9560C;
L_08A9560C:
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A95610;
L_08A95610:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    goto L_08A95614;
L_08A95614:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A955C4;
      }
      goto L_08A95624;
    }
L_08A95624:
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[14]) < 20 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < 19 ? 1u : 0u);
        goto L_08A955B4;
    }
    goto L_08A95634;
L_08A95634:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08A9564C;
L_08A9564C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11516)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11316)));
    ctx.set_gpr(31, 0x08A95674u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A95114;
L_08A95674:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9569C;
    }
    goto L_08A9567C;
L_08A9567C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11516)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A9569C;
L_08A9569C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11516)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 20 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A956F0;
    }
    goto L_08A956B0;
L_08A956B0:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11316)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3356)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A956EC;
      }
      goto L_08A956E4;
    }
L_08A956E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A95700;
      }
      goto L_08A956EC;
    }
L_08A956EC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A956F0;
L_08A956F0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A95700;
L_08A95700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[1] | 3436u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08A95798;
      }
      goto L_08A9575C;
    }
L_08A9575C:
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(11284)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95798;
      }
      goto L_08A95774;
    }
L_08A95774:
    ctx.set_gpr(31, 0x08A9577Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9577Cu) goto L_08A9577C;
    return;
L_08A9577C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A95790u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A95790u) goto L_08A95790;
    return;
L_08A95790:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A95798;
L_08A95798:
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[20]);
        goto L_08A95818;
    }
    goto L_08A957A0;
L_08A957A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A957ACu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 884u, 0x08A8EAACu>(ctx, &aot_mem) && ctx.pc == 0x08A957ACu) goto L_08A957AC;
    return;
L_08A957AC:
    ctx.set_gpr(31, 0x08A957B4u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A957B4u) goto L_08A957B4;
    return;
L_08A957B4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A957C4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3352)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08A957C4u) goto L_08A957C4;
    return;
L_08A957C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A957D8;
      }
      goto L_08A957D0;
    }
L_08A957D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A957F8;
      }
      goto L_08A957D8;
    }
L_08A957D8:
    ctx.set_gpr(31, 0x08A957E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A957E0u) goto L_08A957E0;
    return;
L_08A957E0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A957F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3352)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08A957F0u) goto L_08A957F0;
    return;
L_08A957F0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08A957F8;
L_08A957F8:
    ctx.set_gpr(31, 0x08A95800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A95800u) goto L_08A95800;
    return;
L_08A95800:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A95814u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 158u, 0x0885C924u>(ctx, &aot_mem) && ctx.pc == 0x08A95814u) goto L_08A95814;
    return;
L_08A95814:
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[20]);
    goto L_08A95818;
L_08A95818:
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11284), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9584C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[1] | 11284u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
        goto L_08A95884;
    }
    goto L_08A9587C;
L_08A9587C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A958CC;
      }
      goto L_08A95884;
    }
L_08A95884:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A958A8;
      }
      goto L_08A958A0;
    }
L_08A958A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A958CC;
      }
      goto L_08A958A8;
    }
L_08A958A8:
    ctx.set_gpr(31, 0x08A958B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A958B0u) goto L_08A958B0;
    return;
L_08A958B0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A958BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 159u, 0x0885C93Cu>(ctx, &aot_mem) && ctx.pc == 0x08A958BCu) goto L_08A958BC;
    return;
L_08A958BC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A958CC;
    }
    goto L_08A958C4;
L_08A958C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A958CC;
L_08A958CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A958E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A95A50;
      }
      goto L_08A95908;
    }
L_08A95908:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08A95918;
    }
    goto L_08A95910;
L_08A95910:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95BAC;
      }
      goto L_08A95918;
    }
L_08A95918:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11396), ctx.gpr[5]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11400), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11404), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11408), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11412), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11416), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A95918;
      }
      goto L_08A95984;
    }
L_08A95984:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11512u);
    ctx.set_gpr(9, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11508u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3436u);
    ctx.set_gpr(14, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < 29 ? 1u : 0u);
    goto L_08A959B8;
L_08A959B8:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(13, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08A95A28;
      }
      goto L_08A959C0;
    }
L_08A959C0:
    ctx.set_gpr(12, ctx.gpr[9] + 0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    goto L_08A959C8;
L_08A959C8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
        goto L_08A959FC;
    }
    goto L_08A959F0;
L_08A959F0:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08A95A10;
    }
    goto L_08A959F8;
L_08A959F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    goto L_08A959FC;
L_08A959FC:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
        goto L_08A95A18;
    }
    goto L_08A95A04;
L_08A95A04:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A95A14;
      }
      goto L_08A95A0C;
    }
L_08A95A0C:
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A95A10;
L_08A95A10:
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A95A14;
L_08A95A14:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    goto L_08A95A18;
L_08A95A18:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A959C8;
      }
      goto L_08A95A28;
    }
L_08A95A28:
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[14]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < 29 ? 1u : 0u);
        goto L_08A959B8;
    }
    goto L_08A95A38;
L_08A95A38:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08A95A50;
L_08A95A50:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11516)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11396)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A95A8C;
    }
    goto L_08A95A78;
L_08A95A78:
    ctx.set_gpr(31, 0x08A95A80u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A9584C;
L_08A95A80:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A95B48;
    }
    goto L_08A95A88;
L_08A95A88:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A95A8C;
L_08A95A8C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11516)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11396)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3436)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A95B44;
      }
      goto L_08A95AD4;
    }
L_08A95AD4:
    ctx.set_gpr(31, 0x08A95ADCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 884u, 0x08A8EAACu>(ctx, &aot_mem) && ctx.pc == 0x08A95ADCu) goto L_08A95ADC;
    return;
L_08A95ADC:
    ctx.set_gpr(31, 0x08A95AE4u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A95AE4u) goto L_08A95AE4;
    return;
L_08A95AE4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A95AF4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3352)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08A95AF4u) goto L_08A95AF4;
    return;
L_08A95AF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A95B08;
      }
      goto L_08A95B00;
    }
L_08A95B00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A95B28;
      }
      goto L_08A95B08;
    }
L_08A95B08:
    ctx.set_gpr(31, 0x08A95B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A95B10u) goto L_08A95B10;
    return;
L_08A95B10:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A95B20u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3352)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08A95B20u) goto L_08A95B20;
    return;
L_08A95B20:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08A95B28;
L_08A95B28:
    ctx.set_gpr(31, 0x08A95B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A95B30u) goto L_08A95B30;
    return;
L_08A95B30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A95B44u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 158u, 0x0885C924u>(ctx, &aot_mem) && ctx.pc == 0x08A95B44u) goto L_08A95B44;
    return;
L_08A95B44:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A95B48;
L_08A95B48:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11516)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 30 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A95B9C;
    }
    goto L_08A95B5C;
L_08A95B5C:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11396)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3436)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A95B98;
      }
      goto L_08A95B90;
    }
L_08A95B90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A95BAC;
      }
      goto L_08A95B98;
    }
L_08A95B98:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A95B9C;
L_08A95B9C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A95BAC;
L_08A95BAC:
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
L_08A95BC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3436)));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08A95CDC;
      }
      goto L_08A95C14;
    }
L_08A95C14:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A95C54;
      }
      goto L_08A95C1C;
    }
L_08A95C1C:
    ctx.set_gpr(31, 0x08A95C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A95C24u) goto L_08A95C24;
    return;
L_08A95C24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A95C4Cu);
    ctx.set_gpr(10, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A95C4Cu) goto L_08A95C4C;
    return;
L_08A95C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95C84;
      }
      goto L_08A95C54;
    }
L_08A95C54:
    ctx.set_gpr(31, 0x08A95C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A95C5Cu) goto L_08A95C5C;
    return;
L_08A95C5C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A95C84u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A95C84u) goto L_08A95C84;
    return;
L_08A95C84:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A95CE0;
    }
    goto L_08A95C8C;
L_08A95C8C:
    ctx.set_gpr(31, 0x08A95C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A95C94u) goto L_08A95C94;
    return;
L_08A95C94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A95CA4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A95CA4u) goto L_08A95CA4;
    return;
L_08A95CA4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A95CB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A95CB4u) goto L_08A95CB4;
    return;
L_08A95CB4:
    ctx.set_gpr(31, 0x08A95CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A95CBCu) goto L_08A95CBC;
    return;
L_08A95CBC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A95CCCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A95CCCu) goto L_08A95CCC;
    return;
L_08A95CCC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A95CDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A95CDCu) goto L_08A95CDC;
    return;
L_08A95CDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A95CE0;
L_08A95CE0:
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
L_08A95CFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A95D30u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A947BC;
L_08A95D30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A95D70;
      }
      goto L_08A95D3C;
    }
L_08A95D3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A95D40;
L_08A95D40:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A95D54u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 117u, 0x08A9CC00u>(ctx, &aot_mem) && ctx.pc == 0x08A95D54u) goto L_08A95D54;
    return;
L_08A95D54:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A95D64;
    }
    goto L_08A95D5C;
L_08A95D5C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A95D64;
L_08A95D64:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A95D40;
    }
    goto L_08A95D70;
L_08A95D70:
    ctx.set_gpr(2, ctx.gpr[18] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A95D84;
    }
    goto L_08A95D7C;
L_08A95D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A95D98;
      }
      goto L_08A95D84;
    }
L_08A95D84:
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[19] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_08A95D98;
L_08A95D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95DBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A95DDCu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 117u, 0x08A9CC00u>(ctx, &aot_mem) && ctx.pc == 0x08A95DDCu) goto L_08A95DDC;
    return;
L_08A95DDC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A95DF8;
    }
    goto L_08A95DE4;
L_08A95DE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_08A95DF8;
L_08A95DF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95E0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A95E40u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08A95ECC;
L_08A95E40:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A95E54;
    }
    goto L_08A95E4C;
L_08A95E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A95EA8;
      }
      goto L_08A95E54;
    }
L_08A95E54:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A95E60u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08A947BC;
L_08A95E60:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A95EA4;
      }
      goto L_08A95E6C;
    }
L_08A95E6C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A95E70;
L_08A95E70:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A95E84u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 138u, 0x08A9D024u>(ctx, &aot_mem) && ctx.pc == 0x08A95E84u) goto L_08A95E84;
    return;
L_08A95E84:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A95E98;
    }
    goto L_08A95E90;
L_08A95E90:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A95E98;
L_08A95E98:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A95E70;
    }
    goto L_08A95EA4;
L_08A95EA4:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08A95EA8;
L_08A95EA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95ECC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A95F18u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A95F64;
L_08A95F18:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A95F2C;
    }
    goto L_08A95F24;
L_08A95F24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A95F48;
      }
      goto L_08A95F2C;
    }
L_08A95F2C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A95F40u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 138u, 0x08A9D024u>(ctx, &aot_mem) && ctx.pc == 0x08A95F40u) goto L_08A95F40;
    return;
L_08A95F40:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A95F48;
L_08A95F48:
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
L_08A95F64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A960D8;
      }
      goto L_08A95FA4;
    }
L_08A95FA4:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95FC0:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08A95FC8;
L_08A95FC8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A95FD8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A95FD8u) goto L_08A95FD8;
    return;
L_08A95FD8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A95FC8;
      }
      goto L_08A95FE8;
    }
L_08A95FE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A960DC;
      }
      goto L_08A95FF0;
    }
L_08A95FF0:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08A95FF8;
L_08A95FF8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96008u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96008u) goto L_08A96008;
    return;
L_08A96008:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A95FF8;
      }
      goto L_08A96018;
    }
L_08A96018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A960D8;
      }
      goto L_08A96020;
    }
L_08A96020:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08A96028;
L_08A96028:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96038u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96038u) goto L_08A96038;
    return;
L_08A96038:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08A96028;
      }
      goto L_08A96048;
    }
L_08A96048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A960D8;
      }
      goto L_08A96050;
    }
L_08A96050:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08A96058;
L_08A96058:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(560));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96068u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96068u) goto L_08A96068;
    return;
L_08A96068:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A96058;
      }
      goto L_08A96078;
    }
L_08A96078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A960D8;
      }
      goto L_08A96080;
    }
L_08A96080:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08A96088;
L_08A96088:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1200));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96098u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96098u) goto L_08A96098;
    return;
L_08A96098:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A96088;
      }
      goto L_08A960A8;
    }
L_08A960A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A960D8;
      }
      goto L_08A960B0;
    }
L_08A960B0:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08A960B8;
L_08A960B8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1296));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A960C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A960C8u) goto L_08A960C8;
    return;
L_08A960C8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A960B8;
      }
      goto L_08A960D8;
    }
L_08A960D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A960DC;
L_08A960DC:
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(6, ~(ctx.gpr[4] | 0u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_gpr(4, ~(ctx.gpr[4] | 0u));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
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
L_08A96144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A96188u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A94B5C;
L_08A96188:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A961A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A961A0u) goto L_08A961A0;
    return;
L_08A961A0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (ctx.gpr[19] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A961B4;
    }
    goto L_08A961AC;
L_08A961AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96394;
      }
      goto L_08A961B4;
    }
L_08A961B4:
    ctx.set_gpr(31, 0x08A961BCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A94820;
L_08A961BC:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A961CCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A947BC;
L_08A961CC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A961E4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A948B8;
L_08A961E4:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A961F4u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 173u, 0x08A9D3F0u>(ctx, &aot_mem) && ctx.pc == 0x08A961F4u) goto L_08A961F4;
    return;
L_08A961F4:
    ctx.set_gpr(20, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08A96270;
      }
      goto L_08A96204;
    }
L_08A96204:
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(17, ctx.gpr[19] << 2u);
    goto L_08A96218;
L_08A96218:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A96234u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A948B8;
L_08A96234:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A96240u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 173u, 0x08A9D3F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96240u) goto L_08A96240;
    return;
L_08A96240:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) || ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[21] + ctx.fpr[22];
        goto L_08A96274;
    }
    goto L_08A96250;
L_08A96250:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-10));
        goto L_08A96268;
    }
    goto L_08A96260;
L_08A96260:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96394;
      }
      goto L_08A96268;
    }
L_08A96268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_08A96218;
      }
      goto L_08A96270;
    }
L_08A96270:
    ctx.fpr[12] = ctx.fpr[21] + ctx.fpr[22];
    goto L_08A96274;
L_08A96274:
    ctx.set_gpr(31, 0x08A9627Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 173u, 0x08A9D3F0u>(ctx, &aot_mem) && ctx.pc == 0x08A9627Cu) goto L_08A9627C;
    return;
L_08A9627C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(22, ctx.gpr[20] << 2u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[16] ^ ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, 0u < ctx.gpr[23] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A96390;
      }
      goto L_08A962A8;
    }
L_08A962A8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    if (ctx.gpr[20] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A96394;
    }
    goto L_08A962BC;
L_08A962BC:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[22]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A962CCu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A948B8;
L_08A962CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A962D8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 173u, 0x08A9D3F0u>(ctx, &aot_mem) && ctx.pc == 0x08A962D8u) goto L_08A962D8;
    return;
L_08A962D8:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) || ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A96390;
      }
      goto L_08A962E8;
    }
L_08A962E8:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    ctx.set_gpr(31, 0x08A962F4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 173u, 0x08A9D3F0u>(ctx, &aot_mem) && ctx.pc == 0x08A962F4u) goto L_08A962F4;
    return;
L_08A962F4:
    ctx.set_gpr(19, ctx.gpr[20] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.set_gpr(18, ctx.gpr[23] + 0u);
      if (branch_taken) {
          goto L_08A96370;
      }
      goto L_08A96300;
    }
L_08A96300:
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 96u);
    ctx.set_gpr(17, ctx.gpr[19] << 2u);
    ctx.set_gpr(16, ctx.gpr[21] + ctx.gpr[1]);
    goto L_08A96320;
L_08A96320:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A96334u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A948B8;
L_08A96334:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A96340u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 173u, 0x08A9D3F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96340u) goto L_08A96340;
    return;
L_08A96340:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[21])) || ctx.fpr[0] <= ctx.fpr[21]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A96374;
    }
    goto L_08A96350;
L_08A96350:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-10));
        goto L_08A96368;
    }
    goto L_08A96360;
L_08A96360:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96394;
      }
      goto L_08A96368;
    }
L_08A96368:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_08A96320;
      }
      goto L_08A96370;
    }
L_08A96370:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A96374;
L_08A96374:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A962A8;
      }
      goto L_08A96390;
    }
L_08A96390:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96394;
L_08A96394:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A963CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_fpr_bits(20, ctx.fpr_bits(14));
    ctx.set_gpr(31, 0x08A96404u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    goto L_08A946D4;
L_08A96404:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08A96418;
    }
    goto L_08A96410;
L_08A96410:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96804;
      }
      goto L_08A96418;
    }
L_08A96418:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A96428;
    }
    goto L_08A96420;
L_08A96420:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96804;
      }
      goto L_08A96428;
    }
L_08A96428:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A96438u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96438u) goto L_08A96438;
    return;
L_08A96438:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A9644Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A9644Cu) goto L_08A9644C;
    return;
L_08A9644C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A966E0;
    }
    goto L_08A96458;
L_08A96458:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A96468u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A96468u) goto L_08A96468;
    return;
L_08A96468:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A966C4;
    }
    goto L_08A96484;
L_08A96484:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A96688;
      }
      goto L_08A96498;
    }
L_08A96498:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08A964C8;
      }
      goto L_08A964B0;
    }
L_08A964B0:
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A964C8;
      }
      goto L_08A964C4;
    }
L_08A964C4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A964C8;
L_08A964C8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A964F8;
      }
      goto L_08A964D0;
    }
L_08A964D0:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A964F8;
      }
      goto L_08A964F4;
    }
L_08A964F4:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A964F8;
L_08A964F8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96510;
      }
      goto L_08A96500;
    }
L_08A96500:
    ctx.set_gpr(6, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96510;
      }
      goto L_08A9650C;
    }
L_08A9650C:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96510;
L_08A96510:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96560;
      }
      goto L_08A96518;
    }
L_08A96518:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(8, 32768u << 16u);
    ctx.set_gpr(6, 0u - ctx.gpr[16]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96554;
      }
      goto L_08A96540;
    }
L_08A96540:
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96554;
      }
      goto L_08A96550;
    }
L_08A96550:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08A96554;
L_08A96554:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96560;
      }
      goto L_08A9655C;
    }
L_08A9655C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96560;
L_08A96560:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A965AC;
      }
      goto L_08A96568;
    }
L_08A96568:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A965A0;
      }
      goto L_08A9658C;
    }
L_08A9658C:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A965A0;
      }
      goto L_08A9659C;
    }
L_08A9659C:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A965A0;
L_08A965A0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A965AC;
      }
      goto L_08A965A8;
    }
L_08A965A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A965AC;
L_08A965AC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A9668C;
    }
    goto L_08A965B4;
L_08A965B4:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    goto L_08A965B8;
L_08A965B8:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A965B8;
      }
      goto L_08A96688;
    }
L_08A96688:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A9668C;
L_08A9668C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A966C0;
      }
      goto L_08A96694;
    }
L_08A96694:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    goto L_08A96698;
L_08A96698:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A96698;
      }
      goto L_08A966C0;
    }
L_08A966C0:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A966C4;
L_08A966C4:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A966E0;
L_08A966E0:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A96704u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A94B5C;
L_08A96704:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(500));
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(3, 4u << 16u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(10, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[3] | 37856u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[6]);
    ctx.set_gpr(10, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    goto L_08A96804;
L_08A96804:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9686C;
      }
      goto L_08A96864;
    }
L_08A96864:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96974;
      }
      goto L_08A9686C;
    }
L_08A9686C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A9687Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9687Cu) goto L_08A9687C;
    return;
L_08A9687C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A96890u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A96890u) goto L_08A96890;
    return;
L_08A96890:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A968A4;
      }
      goto L_08A9689C;
    }
L_08A9689C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96974;
      }
      goto L_08A968A4;
    }
L_08A968A4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A968C8;
      }
      goto L_08A968AC;
    }
L_08A968AC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A968C8;
L_08A968C8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96900;
      }
      goto L_08A968D0;
    }
L_08A968D0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A96900;
L_08A96900:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96938;
      }
      goto L_08A96908;
    }
L_08A96908:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A96938;
L_08A96938:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A96974;
    }
    goto L_08A96940;
L_08A96940:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96974;
L_08A96974:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96998:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A969BCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A969BCu) goto L_08A969BC;
    return;
L_08A969BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A969D0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A969D0u) goto L_08A969D0;
    return;
L_08A969D0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A969E4;
    }
    goto L_08A969DC;
L_08A969DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96A68;
      }
      goto L_08A969E4;
    }
L_08A969E4:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A96A3C;
    }
    goto L_08A969FC;
L_08A969FC:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    goto L_08A96A00;
L_08A96A00:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A96A00;
      }
      goto L_08A96A38;
    }
L_08A96A38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A96A3C;
L_08A96A3C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A96A48u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A96A48u) goto L_08A96A48;
    return;
L_08A96A48:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-10));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96A68;
L_08A96A68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96A7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A96A9Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A946D4;
L_08A96A9C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A96AB0;
    }
    goto L_08A96AA8;
L_08A96AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96E0C;
      }
      goto L_08A96AB0;
    }
L_08A96AB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96AC0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96AC0u) goto L_08A96AC0;
    return;
L_08A96AC0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96AD4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A96AD4u) goto L_08A96AD4;
    return;
L_08A96AD4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A96D68;
    }
    goto L_08A96AE0;
L_08A96AE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96AF0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A96AF0u) goto L_08A96AF0;
    return;
L_08A96AF0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A96D4C;
    }
    goto L_08A96B0C;
L_08A96B0C:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A96D10;
      }
      goto L_08A96B20;
    }
L_08A96B20:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08A96B50;
      }
      goto L_08A96B38;
    }
L_08A96B38:
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B50;
      }
      goto L_08A96B4C;
    }
L_08A96B4C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96B50;
L_08A96B50:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B80;
      }
      goto L_08A96B58;
    }
L_08A96B58:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B80;
      }
      goto L_08A96B7C;
    }
L_08A96B7C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96B80;
L_08A96B80:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B98;
      }
      goto L_08A96B88;
    }
L_08A96B88:
    ctx.set_gpr(6, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96B98;
      }
      goto L_08A96B94;
    }
L_08A96B94:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96B98;
L_08A96B98:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96BE8;
      }
      goto L_08A96BA0;
    }
L_08A96BA0:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(8, 32768u << 16u);
    ctx.set_gpr(6, 0u - ctx.gpr[16]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96BDC;
      }
      goto L_08A96BC8;
    }
L_08A96BC8:
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96BDC;
      }
      goto L_08A96BD8;
    }
L_08A96BD8:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08A96BDC;
L_08A96BDC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96BE8;
      }
      goto L_08A96BE4;
    }
L_08A96BE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96BE8;
L_08A96BE8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C34;
      }
      goto L_08A96BF0;
    }
L_08A96BF0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96C28;
      }
      goto L_08A96C14;
    }
L_08A96C14:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C28;
      }
      goto L_08A96C24;
    }
L_08A96C24:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A96C28;
L_08A96C28:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C34;
      }
      goto L_08A96C30;
    }
L_08A96C30:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96C34;
L_08A96C34:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A96D14;
    }
    goto L_08A96C3C;
L_08A96C3C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    goto L_08A96C40;
L_08A96C40:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96C40;
      }
      goto L_08A96D10;
    }
L_08A96D10:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A96D14;
L_08A96D14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D48;
      }
      goto L_08A96D1C;
    }
L_08A96D1C:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    goto L_08A96D20;
L_08A96D20:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A96D20;
      }
      goto L_08A96D48;
    }
L_08A96D48:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A96D4C;
L_08A96D4C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A96D68;
L_08A96D68:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A96D8Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A94B5C;
L_08A96D8C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A96E0C;
L_08A96E0C:
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
L_08A96E24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96E50u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96E50u) goto L_08A96E50;
    return;
L_08A96E50:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96E64u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A96E64u) goto L_08A96E64;
    return;
L_08A96E64:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E78;
      }
      goto L_08A96E70;
    }
L_08A96E70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A96EA4;
      }
      goto L_08A96E78;
    }
L_08A96E78:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A96EA4;
    }
    goto L_08A96E80;
L_08A96E80:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96EA4;
L_08A96EA4:
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
L_08A96EBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96EE8u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96EE8u) goto L_08A96EE8;
    return;
L_08A96EE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96EFCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A96EFCu) goto L_08A96EFC;
    return;
L_08A96EFC:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A96F40;
      }
      goto L_08A96F0C;
    }
L_08A96F0C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A96F74;
    }
    goto L_08A96F14;
L_08A96F14:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F74;
      }
      goto L_08A96F40;
    }
L_08A96F40:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A96F74;
    }
    goto L_08A96F48;
L_08A96F48:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A96F74;
    }
    goto L_08A96F50;
L_08A96F50:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A96F74;
L_08A96F74:
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
L_08A96F8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A96FB0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A96FB0u) goto L_08A96FB0;
    return;
L_08A96FB0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A96FC4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A96FC4u) goto L_08A96FC4;
    return;
L_08A96FC4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A96FD8;
    }
    goto L_08A96FD0;
L_08A96FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9705C;
      }
      goto L_08A96FD8;
    }
L_08A96FD8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A97030;
    }
    goto L_08A96FF0;
L_08A96FF0:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    goto L_08A96FF4;
L_08A96FF4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A96FF4;
      }
      goto L_08A9702C;
    }
L_08A9702C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A97030;
L_08A97030:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9703Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9703Cu) goto L_08A9703C;
    return;
L_08A9703C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9705C;
L_08A9705C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A9709C;
L_08A9709C:
    ctx.set_gpr(31, 0x08A970A4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08A94BC8;
L_08A970A4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A970B0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08A947BC;
L_08A970B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A970F8;
      }
      goto L_08A970BC;
    }
L_08A970BC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A970C0;
L_08A970C0:
    ctx.set_gpr(31, 0x08A970C8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A94BD4;
L_08A970C8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A970D4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08A96E24;
L_08A970D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A970EC;
    }
    goto L_08A970E0;
L_08A970E0:
    ctx.set_gpr(31, 0x08A970E8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A96F8C;
L_08A970E8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A970EC;
L_08A970EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08A970C0;
    }
    goto L_08A970F8;
L_08A970F8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08A9709C;
    }
    goto L_08A97108;
L_08A97108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9712C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A9714Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A946D4;
L_08A9714C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A97160;
    }
    goto L_08A97158;
L_08A97158:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A974A8;
      }
      goto L_08A97160;
    }
L_08A97160:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A97170u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A97170u) goto L_08A97170;
    return;
L_08A97170:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A97184u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A97184u) goto L_08A97184;
    return;
L_08A97184:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A97418;
    }
    goto L_08A97190;
L_08A97190:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A971A0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A971A0u) goto L_08A971A0;
    return;
L_08A971A0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A973FC;
    }
    goto L_08A971BC;
L_08A971BC:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A973C0;
      }
      goto L_08A971D0;
    }
L_08A971D0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08A97200;
      }
      goto L_08A971E8;
    }
L_08A971E8:
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97200;
      }
      goto L_08A971FC;
    }
L_08A971FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97200;
L_08A97200:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97230;
      }
      goto L_08A97208;
    }
L_08A97208:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97230;
      }
      goto L_08A9722C;
    }
L_08A9722C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97230;
L_08A97230:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97248;
      }
      goto L_08A97238;
    }
L_08A97238:
    ctx.set_gpr(6, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A97248;
      }
      goto L_08A97244;
    }
L_08A97244:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97248;
L_08A97248:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97298;
      }
      goto L_08A97250;
    }
L_08A97250:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(8, 32768u << 16u);
    ctx.set_gpr(6, 0u - ctx.gpr[16]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9728C;
      }
      goto L_08A97278;
    }
L_08A97278:
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9728C;
      }
      goto L_08A97288;
    }
L_08A97288:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08A9728C;
L_08A9728C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97298;
      }
      goto L_08A97294;
    }
L_08A97294:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97298;
L_08A97298:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A972E4;
      }
      goto L_08A972A0;
    }
L_08A972A0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A972D8;
      }
      goto L_08A972C4;
    }
L_08A972C4:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A972D8;
      }
      goto L_08A972D4;
    }
L_08A972D4:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A972D8;
L_08A972D8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A972E4;
      }
      goto L_08A972E0;
    }
L_08A972E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A972E4;
L_08A972E4:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A973C4;
    }
    goto L_08A972EC;
L_08A972EC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    goto L_08A972F0;
L_08A972F0:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-4), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-8), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A972F0;
      }
      goto L_08A973C0;
    }
L_08A973C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A973C4;
L_08A973C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A973F8;
      }
      goto L_08A973CC;
    }
L_08A973CC:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    goto L_08A973D0;
L_08A973D0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A973D0;
      }
      goto L_08A973F8;
    }
L_08A973F8:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A973FC;
L_08A973FC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A97418;
L_08A97418:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A9743Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A94B5C;
L_08A9743C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A97490;
      }
      goto L_08A97474;
    }
L_08A97474:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A974A4;
      }
      goto L_08A97490;
    }
L_08A97490:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A974A4;
L_08A974A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A974A8;
L_08A974A8:
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
L_08A974C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A974ECu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A974ECu) goto L_08A974EC;
    return;
L_08A974EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A97500u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A97500u) goto L_08A97500;
    return;
L_08A97500:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97514;
      }
      goto L_08A9750C;
    }
L_08A9750C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A97548;
      }
      goto L_08A97514;
    }
L_08A97514:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A97548;
    }
    goto L_08A9751C;
L_08A9751C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08A97544;
    }
    goto L_08A97540;
L_08A97540:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A97544;
L_08A97544:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97548;
L_08A97548:
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
L_08A97560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A9758Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9758Cu) goto L_08A9758C;
    return;
L_08A9758C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A975A0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A975A0u) goto L_08A975A0;
    return;
L_08A975A0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A975E8;
      }
      goto L_08A975B0;
    }
L_08A975B0:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A97620;
    }
    goto L_08A975B8;
L_08A975B8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08A975DC;
    }
    goto L_08A975D8;
L_08A975D8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A975DC;
L_08A975DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97620;
      }
      goto L_08A975E8;
    }
L_08A975E8:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A97620;
    }
    goto L_08A975F0;
L_08A975F0:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A97620;
    }
    goto L_08A975F8;
L_08A975F8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08A9761C;
    }
    goto L_08A97618;
L_08A97618:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9761C;
L_08A9761C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97620;
L_08A97620:
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
L_08A97638:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A9765Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9765Cu) goto L_08A9765C;
    return;
L_08A9765C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A97670u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A97670u) goto L_08A97670;
    return;
L_08A97670:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A97684;
    }
    goto L_08A9767C;
L_08A9767C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A97708;
      }
      goto L_08A97684;
    }
L_08A97684:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A976DC;
    }
    goto L_08A9769C;
L_08A9769C:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    goto L_08A976A0;
L_08A976A0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A976A0;
      }
      goto L_08A976D8;
    }
L_08A976D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A976DC;
L_08A976DC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A976E8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A976E8u) goto L_08A976E8;
    return;
L_08A976E8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97708;
L_08A97708:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9771C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A97754u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    goto L_08A946D4;
L_08A97754:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A97768;
    }
    goto L_08A97760;
L_08A97760:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A97B34;
      }
      goto L_08A97768;
    }
L_08A97768:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A97778u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A97778u) goto L_08A97778;
    return;
L_08A97778:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A9778Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A9778Cu) goto L_08A9778C;
    return;
L_08A9778C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A97A20;
    }
    goto L_08A97798;
L_08A97798:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A977A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A977A8u) goto L_08A977A8;
    return;
L_08A977A8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A97A04;
    }
    goto L_08A977C4;
L_08A977C4:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A979C8;
      }
      goto L_08A977D8;
    }
L_08A977D8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08A97808;
      }
      goto L_08A977F0;
    }
L_08A977F0:
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97808;
      }
      goto L_08A97804;
    }
L_08A97804:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97808;
L_08A97808:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97838;
      }
      goto L_08A97810;
    }
L_08A97810:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97838;
      }
      goto L_08A97834;
    }
L_08A97834:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97838;
L_08A97838:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97850;
      }
      goto L_08A97840;
    }
L_08A97840:
    ctx.set_gpr(6, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A97850;
      }
      goto L_08A9784C;
    }
L_08A9784C:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97850;
L_08A97850:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A978A0;
      }
      goto L_08A97858;
    }
L_08A97858:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, 32768u << 16u);
    ctx.set_gpr(6, 0u - ctx.gpr[16]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A97894;
      }
      goto L_08A97880;
    }
L_08A97880:
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A97894;
      }
      goto L_08A97890;
    }
L_08A97890:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08A97894;
L_08A97894:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A978A0;
      }
      goto L_08A9789C;
    }
L_08A9789C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A978A0;
L_08A978A0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A978EC;
      }
      goto L_08A978A8;
    }
L_08A978A8:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A978E0;
      }
      goto L_08A978CC;
    }
L_08A978CC:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A978E0;
      }
      goto L_08A978DC;
    }
L_08A978DC:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A978E0;
L_08A978E0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A978EC;
      }
      goto L_08A978E8;
    }
L_08A978E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A978EC;
L_08A978EC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A979CC;
    }
    goto L_08A978F4;
L_08A978F4:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    goto L_08A978F8;
L_08A978F8:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[20] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A978F8;
      }
      goto L_08A979C8;
    }
L_08A979C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A979CC;
L_08A979CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A00;
      }
      goto L_08A979D4;
    }
L_08A979D4:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    goto L_08A979D8;
L_08A979D8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A979D8;
      }
      goto L_08A97A00;
    }
L_08A97A00:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A97A04;
L_08A97A04:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A97A20;
L_08A97A20:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A97A44u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A94B5C;
L_08A97A44:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    goto L_08A97B34;
L_08A97B34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97B58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A97B9Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A97B9Cu) goto L_08A97B9C;
    return;
L_08A97B9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A97BB0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A97BB0u) goto L_08A97BB0;
    return;
L_08A97BB0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97BC4;
      }
      goto L_08A97BBC;
    }
L_08A97BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A97C6C;
      }
      goto L_08A97BC4;
    }
L_08A97BC4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97BE8;
      }
      goto L_08A97BCC;
    }
L_08A97BCC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A97BE8;
L_08A97BE8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C20;
      }
      goto L_08A97BF0;
    }
L_08A97BF0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A97C20;
L_08A97C20:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C44;
      }
      goto L_08A97C28;
    }
L_08A97C28:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A97C44;
L_08A97C44:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A97C6C;
    }
    goto L_08A97C4C;
L_08A97C4C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97C6C;
L_08A97C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A97CD4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A97CD4u) goto L_08A97CD4;
    return;
L_08A97CD4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A97CE8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A97CE8u) goto L_08A97CE8;
    return;
L_08A97CE8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A97DA8;
      }
      goto L_08A97CF8;
    }
L_08A97CF8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D1C;
      }
      goto L_08A97D00;
    }
L_08A97D00:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A97D1C;
L_08A97D1C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D54;
      }
      goto L_08A97D24;
    }
L_08A97D24:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A97D54;
L_08A97D54:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D78;
      }
      goto L_08A97D5C;
    }
L_08A97D5C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A97D78;
L_08A97D78:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A97E58;
    }
    goto L_08A97D80;
L_08A97D80:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E58;
      }
      goto L_08A97DA8;
    }
L_08A97DA8:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A97E58;
    }
    goto L_08A97DB0;
L_08A97DB0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DD4;
      }
      goto L_08A97DB8;
    }
L_08A97DB8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A97DD4;
L_08A97DD4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E0C;
      }
      goto L_08A97DDC;
    }
L_08A97DDC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28)));
    ctx.set_gpr(2, 14979u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4719u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A97E0C;
L_08A97E0C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E30;
      }
      goto L_08A97E14;
    }
L_08A97E14:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A97E30;
L_08A97E30:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A97E58;
    }
    goto L_08A97E38;
L_08A97E38:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97E58;
L_08A97E58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97E7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A97EA0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 657u, 0x08A9BEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A97EA0u) goto L_08A97EA0;
    return;
L_08A97EA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A97EB4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 673u, 0x08A9BFF0u>(ctx, &aot_mem) && ctx.pc == 0x08A97EB4u) goto L_08A97EB4;
    return;
L_08A97EB4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A97EC8;
    }
    goto L_08A97EC0;
L_08A97EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A97F4C;
      }
      goto L_08A97EC8;
    }
L_08A97EC8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A97F20;
    }
    goto L_08A97EE0;
L_08A97EE0:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    goto L_08A97EE4;
L_08A97EE4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A97EE4;
      }
      goto L_08A97F1C;
    }
L_08A97F1C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A97F20;
L_08A97F20:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A97F2Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A97F2Cu) goto L_08A97F2C;
    return;
L_08A97F2C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-11));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A97F4C;
L_08A97F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A97F8C;
L_08A97F8C:
    ctx.set_gpr(31, 0x08A97F94u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08A94BC8;
L_08A97F94:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A97FA0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08A947BC;
L_08A97FA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A97FF4;
      }
      goto L_08A97FAC;
    }
L_08A97FAC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A97FB0;
L_08A97FB0:
    ctx.set_gpr(31, 0x08A97FB8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A94BD4;
L_08A97FB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A97FD0u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A97B58;
L_08A97FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A97FE8;
    }
    goto L_08A97FDC;
L_08A97FDC:
    ctx.set_gpr(31, 0x08A97FE4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08A97E7C;
L_08A97FE4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A97FE8;
L_08A97FE8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08A97FB0;
    }
    goto L_08A97FF4;
L_08A97FF4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08A97F8C;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 1u, 0x08A98004u>(ctx, &aot_mem); return;
}

void recomp_unit_0164(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0164_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_164(Runtime &runtime) {
    runtime.register_generated_unit(164u, 0x08A94000u, 16384u, &recomp_unit_0164, &recomp_unit_0164_entry);
    runtime.register_function(0x08A94000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9402Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94034u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9406Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9407Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94094u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9409Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94100u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9410Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94114u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94130u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94138u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94204u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94234u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94310u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94328u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9434Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94354u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94374u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94388u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9439Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94400u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94408u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9441Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9442Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94444u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9444Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94464u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9446Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9447Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9449Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94504u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94508u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94514u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94534u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94548u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9455Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94564u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9456Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94574u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9458Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94594u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94604u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9460Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94624u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9462Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94634u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9463Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9465Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94664u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94678u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9467Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94684u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9469Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94724u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9473Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94744u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94750u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9475Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94764u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9477Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94784u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94790u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9479Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94800u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9480Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94810u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94820u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94864u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94884u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94910u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9491Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94928u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94930u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94944u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94954u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9497Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94ED0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9503Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95054u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95070u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95088u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95090u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9509Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95114u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9515Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95164u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95184u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9518Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95194u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9520Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95214u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95230u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9523Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9526Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95278u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95324u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9535Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95360u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95368u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95378u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9539Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9541Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95430u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95434u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9543Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9545Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95478u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95514u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9551Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95524u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95580u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95600u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95608u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9560Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95610u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95614u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95624u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95634u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9564Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95674u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9567Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9569Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95700u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95710u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9575Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95774u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9577Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95790u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95798u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95800u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95814u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95818u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9584Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9587Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95884u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95908u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95910u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95918u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95984u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ADCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ECCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96008u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96018u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96028u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96038u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96048u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96050u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96058u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96068u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96078u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96080u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96088u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96098u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96144u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96188u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96204u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96218u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96234u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96250u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96260u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96274u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9627Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96300u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96320u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96334u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96350u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96360u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96368u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96370u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96374u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96390u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96394u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96404u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96410u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96420u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96428u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96438u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9644Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96458u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96468u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96484u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96498u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96500u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9650Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96510u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96518u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96550u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96554u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9655Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96560u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96568u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9658Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9659Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96688u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9668Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96694u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96698u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96704u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96804u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96828u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96864u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9686Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9687Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96890u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9689Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96900u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96908u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96938u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96940u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96974u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96998u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9702Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97030u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9703Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9705Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97070u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9709Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97108u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9712Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9714Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97158u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97160u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97170u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97184u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97190u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97200u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97208u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9722Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97230u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97238u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97244u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97248u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97250u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97278u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97288u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9728Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97294u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97298u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9743Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97490u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97500u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9750Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97514u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9751Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97544u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97548u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97560u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9758Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97618u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9761Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97620u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97638u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9765Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97670u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9767Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97684u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9769Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97708u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9771Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97754u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97760u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97768u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97778u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9778Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97798u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97804u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97808u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97810u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97834u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97840u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9784Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97850u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97858u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97880u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97890u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9789Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FF4u, &recomp_unit_0164, "recomp_unit_0164");
}
} // namespace psprecomp
