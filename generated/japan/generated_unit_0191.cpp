#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0191[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 21, 0, 0, 22, 0, 23, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 31, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0,
    0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0,
    0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0,
    90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 101, 102,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105,
    0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0,
    127, 0, 128, 0, 0, 129, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 146, 0,
    0, 0, 147, 0, 0, 148, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0,
    0, 0, 158, 0, 159, 0, 0, 160, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0,
    167, 168, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0,
    248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 253, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310,
    0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 325, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344,
    0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 372, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0,
    379, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 384, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 395, 396, 0, 397, 0, 0, 398, 0, 0, 399, 0,
    0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 413, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0,
    419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 432, 0, 0, 433, 0, 434, 0, 0, 435, 436, 0, 437, 0, 438, 0, 439, 0,
    440, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0,
    0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 465, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 487, 488, 0, 0, 0, 0, 489,
    0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 503, 504, 0, 505, 0,
    0, 506, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 511, 0, 512, 0, 0, 0, 0, 513, 0, 514, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0,
    517, 0, 0, 518, 0, 519, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 530, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 0, 0,
    540, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549,
    0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0,
    0, 0, 0, 556, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568,
    569, 0, 570, 0, 571, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0,
    0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579,
    0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0,
    0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595,
    596, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0,
    604, 0, 0, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0,
    0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0,
    0, 619, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 628, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 637, 0,
    0, 0, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645,
    0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0,
    0, 653, 0, 0, 654, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0,
    0, 0, 659, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 664, 665, 0,
    0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0,
    676, 0, 677, 0, 678, 0, 679, 0, 680, 681, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 689, 690, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 698, 0, 699, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0,
    707, 0, 0, 0, 708, 0, 709, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 716, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 731, 0, 0, 0,
    732, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 745, 0, 746, 0, 747, 0, 748, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0,
    758, 759, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764,
    765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 772, 0, 0, 0, 773, 0, 774, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0,
    0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 785,
    0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0,
    0, 0, 0, 0, 0, 804, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 808, 0, 0, 809,
    0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0,
    817, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0,
    825, 0, 0, 0, 826, 0, 0, 827, 0, 828, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0,
    0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 843,
    0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 850,
};
void recomp_unit_0191_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B00000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0191[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B00000;
    case 2u: goto L_08B00034;
    case 3u: goto L_08B00068;
    case 4u: goto L_08B00070;
    case 5u: goto L_08B00098;
    case 6u: goto L_08B000B8;
    case 7u: goto L_08B000C0;
    case 8u: goto L_08B000CC;
    case 9u: goto L_08B000F8;
    case 10u: goto L_08B001BC;
    case 11u: goto L_08B001C4;
    case 12u: goto L_08B001CC;
    case 13u: goto L_08B001D4;
    case 14u: goto L_08B001F8;
    case 15u: goto L_08B0020C;
    case 16u: goto L_08B00214;
    case 17u: goto L_08B0021C;
    case 18u: goto L_08B00224;
    case 19u: goto L_08B00248;
    case 20u: goto L_08B0025C;
    case 21u: goto L_08B00260;
    case 22u: goto L_08B0026C;
    case 23u: goto L_08B00274;
    case 24u: goto L_08B0027C;
    case 25u: goto L_08B002A0;
    case 26u: goto L_08B002B4;
    case 27u: goto L_08B002BC;
    case 28u: goto L_08B002C4;
    case 29u: goto L_08B002CC;
    case 30u: goto L_08B002F0;
    case 31u: goto L_08B00304;
    case 32u: goto L_08B00308;
    case 33u: goto L_08B00324;
    case 34u: goto L_08B0032C;
    case 35u: goto L_08B00338;
    case 36u: goto L_08B00358;
    case 37u: goto L_08B00360;
    case 38u: goto L_08B00368;
    case 39u: goto L_08B00374;
    case 40u: goto L_08B00394;
    case 41u: goto L_08B003B4;
    case 42u: goto L_08B003BC;
    case 43u: goto L_08B003C8;
    case 44u: goto L_08B003E8;
    case 45u: goto L_08B003F0;
    case 46u: goto L_08B003F8;
    case 47u: goto L_08B00404;
    case 48u: goto L_08B0041C;
    case 49u: goto L_08B00424;
    case 50u: goto L_08B0042C;
    case 51u: goto L_08B00438;
    case 52u: goto L_08B00450;
    case 53u: goto L_08B00458;
    case 54u: goto L_08B00460;
    case 55u: goto L_08B0046C;
    case 56u: goto L_08B00484;
    case 57u: goto L_08B00488;
    case 58u: goto L_08B004C8;
    case 59u: goto L_08B00508;
    case 60u: goto L_08B00520;
    case 61u: goto L_08B00528;
    case 62u: goto L_08B00554;
    case 63u: goto L_08B0055C;
    case 64u: goto L_08B00584;
    case 65u: goto L_08B00590;
    case 66u: goto L_08B00598;
    case 67u: goto L_08B005A0;
    case 68u: goto L_08B005AC;
    case 69u: goto L_08B005B4;
    case 70u: goto L_08B005B8;
    case 71u: goto L_08B005D0;
    case 72u: goto L_08B00604;
    case 73u: goto L_08B00630;
    case 74u: goto L_08B00650;
    case 75u: goto L_08B0067C;
    case 76u: goto L_08B00684;
    case 77u: goto L_08B006A4;
    case 78u: goto L_08B006AC;
    case 79u: goto L_08B006B8;
    case 80u: goto L_08B006C0;
    case 81u: goto L_08B006D0;
    case 82u: goto L_08B006DC;
    case 83u: goto L_08B006E4;
    case 84u: goto L_08B0071C;
    case 85u: goto L_08B00724;
    case 86u: goto L_08B00744;
    case 87u: goto L_08B0074C;
    case 88u: goto L_08B00770;
    case 89u: goto L_08B00778;
    case 90u: goto L_08B00780;
    case 91u: goto L_08B0078C;
    case 92u: goto L_08B00794;
    case 93u: goto L_08B0079C;
    case 94u: goto L_08B007A8;
    case 95u: goto L_08B007B0;
    case 96u: goto L_08B007C0;
    case 97u: goto L_08B007CC;
    case 98u: goto L_08B007D4;
    case 99u: goto L_08B007E4;
    case 100u: goto L_08B007EC;
    case 101u: goto L_08B007F8;
    case 102u: goto L_08B007FC;
    case 103u: goto L_08B00814;
    case 104u: goto L_08B00870;
    case 105u: goto L_08B0087C;
    case 106u: goto L_08B00884;
    case 107u: goto L_08B00894;
    case 108u: goto L_08B008A0;
    case 109u: goto L_08B008A8;
    case 110u: goto L_08B008D0;
    case 111u: goto L_08B008D8;
    case 112u: goto L_08B00900;
    case 113u: goto L_08B00908;
    case 114u: goto L_08B00928;
    case 115u: goto L_08B00930;
    case 116u: goto L_08B00950;
    case 117u: goto L_08B00984;
    case 118u: goto L_08B0099C;
    case 119u: goto L_08B009A8;
    case 120u: goto L_08B009B0;
    case 121u: goto L_08B009B8;
    case 122u: goto L_08B009C4;
    case 123u: goto L_08B009CC;
    case 124u: goto L_08B009DC;
    case 125u: goto L_08B009E8;
    case 126u: goto L_08B009F0;
    case 127u: goto L_08B00A00;
    case 128u: goto L_08B00A08;
    case 129u: goto L_08B00A14;
    case 130u: goto L_08B00A18;
    case 131u: goto L_08B00A28;
    case 132u: goto L_08B00A44;
    case 133u: goto L_08B00A4C;
    case 134u: goto L_08B00A5C;
    case 135u: goto L_08B00A70;
    case 136u: goto L_08B00A8C;
    case 137u: goto L_08B00A98;
    case 138u: goto L_08B00AA0;
    case 139u: goto L_08B00AA8;
    case 140u: goto L_08B00AB4;
    case 141u: goto L_08B00ABC;
    case 142u: goto L_08B00ACC;
    case 143u: goto L_08B00AD8;
    case 144u: goto L_08B00AE0;
    case 145u: goto L_08B00AF4;
    case 146u: goto L_08B00AF8;
    case 147u: goto L_08B00B08;
    case 148u: goto L_08B00B14;
    case 149u: goto L_08B00B18;
    case 150u: goto L_08B00B24;
    case 151u: goto L_08B00B2C;
    case 152u: goto L_08B00B38;
    case 153u: goto L_08B00B40;
    case 154u: goto L_08B00B48;
    case 155u: goto L_08B00B54;
    case 156u: goto L_08B00B64;
    case 157u: goto L_08B00B70;
    case 158u: goto L_08B00B88;
    case 159u: goto L_08B00B90;
    case 160u: goto L_08B00B9C;
    case 161u: goto L_08B00BA0;
    case 162u: goto L_08B00BAC;
    case 163u: goto L_08B00BD4;
    case 164u: goto L_08B00BD8;
    case 165u: goto L_08B00BE4;
    case 166u: goto L_08B00BF8;
    case 167u: goto L_08B00C00;
    case 168u: goto L_08B00C04;
    case 169u: goto L_08B00C10;
    case 170u: goto L_08B00C18;
    case 171u: goto L_08B00C24;
    case 172u: goto L_08B00C30;
    case 173u: goto L_08B00C38;
    case 174u: goto L_08B00C44;
    case 175u: goto L_08B00C48;
    case 176u: goto L_08B00C50;
    case 177u: goto L_08B00CF8;
    case 178u: goto L_08B00D04;
    case 179u: goto L_08B00D0C;
    case 180u: goto L_08B00D14;
    case 181u: goto L_08B00D34;
    case 182u: goto L_08B00D48;
    case 183u: goto L_08B00D58;
    case 184u: goto L_08B00D60;
    case 185u: goto L_08B00D70;
    case 186u: goto L_08B00E2C;
    case 187u: goto L_08B00E40;
    case 188u: goto L_08B00E60;
    case 189u: goto L_08B00E74;
    case 190u: goto L_08B00E88;
    case 191u: goto L_08B00E9C;
    case 192u: goto L_08B00EB0;
    case 193u: goto L_08B00EBC;
    case 194u: goto L_08B00ED8;
    case 195u: goto L_08B00EEC;
    case 196u: goto L_08B00F00;
    case 197u: goto L_08B00F14;
    case 198u: goto L_08B00F28;
    case 199u: goto L_08B00F34;
    case 200u: goto L_08B00F50;
    case 201u: goto L_08B00F64;
    case 202u: goto L_08B00F78;
    case 203u: goto L_08B00F8C;
    case 204u: goto L_08B00FA0;
    case 205u: goto L_08B00FAC;
    case 206u: goto L_08B00FE0;
    case 207u: goto L_08B00FF4;
    case 208u: goto L_08B01008;
    case 209u: goto L_08B0101C;
    case 210u: goto L_08B01030;
    case 211u: goto L_08B0103C;
    case 212u: goto L_08B01058;
    case 213u: goto L_08B0106C;
    case 214u: goto L_08B01080;
    case 215u: goto L_08B01094;
    case 216u: goto L_08B010A8;
    case 217u: goto L_08B010B4;
    case 218u: goto L_08B010D0;
    case 219u: goto L_08B010E4;
    case 220u: goto L_08B010F8;
    case 221u: goto L_08B0110C;
    case 222u: goto L_08B01120;
    case 223u: goto L_08B0112C;
    case 224u: goto L_08B01144;
    case 225u: goto L_08B0114C;
    case 226u: goto L_08B01154;
    case 227u: goto L_08B01174;
    case 228u: goto L_08B0118C;
    case 229u: goto L_08B01198;
    case 230u: goto L_08B011B4;
    case 231u: goto L_08B011BC;
    case 232u: goto L_08B011C4;
    case 233u: goto L_08B011E4;
    case 234u: goto L_08B0120C;
    case 235u: goto L_08B01214;
    case 236u: goto L_08B0121C;
    case 237u: goto L_08B0123C;
    case 238u: goto L_08B01268;
    case 239u: goto L_08B01270;
    case 240u: goto L_08B01278;
    case 241u: goto L_08B01298;
    case 242u: goto L_08B012AC;
    case 243u: goto L_08B012B4;
    case 244u: goto L_08B012BC;
    case 245u: goto L_08B012C4;
    case 246u: goto L_08B012E4;
    case 247u: goto L_08B012F8;
    case 248u: goto L_08B01300;
    case 249u: goto L_08B01308;
    case 250u: goto L_08B01310;
    case 251u: goto L_08B01330;
    case 252u: goto L_08B01344;
    case 253u: goto L_08B01348;
    case 254u: goto L_08B0135C;
    case 255u: goto L_08B01364;
    case 256u: goto L_08B0136C;
    case 257u: goto L_08B01390;
    case 258u: goto L_08B013A0;
    case 259u: goto L_08B013C0;
    case 260u: goto L_08B013D4;
    case 261u: goto L_08B013E8;
    case 262u: goto L_08B013F4;
    case 263u: goto L_08B0141C;
    case 264u: goto L_08B01424;
    case 265u: goto L_08B01450;
    case 266u: goto L_08B01454;
    case 267u: goto L_08B015E8;
    case 268u: goto L_08B015F0;
    case 269u: goto L_08B015F8;
    case 270u: goto L_08B01618;
    case 271u: goto L_08B01630;
    case 272u: goto L_08B01638;
    case 273u: goto L_08B01640;
    case 274u: goto L_08B01660;
    case 275u: goto L_08B01674;
    case 276u: goto L_08B01680;
    case 277u: goto L_08B0169C;
    case 278u: goto L_08B016A4;
    case 279u: goto L_08B016AC;
    case 280u: goto L_08B016CC;
    case 281u: goto L_08B016F0;
    case 282u: goto L_08B016F8;
    case 283u: goto L_08B01700;
    case 284u: goto L_08B01720;
    case 285u: goto L_08B0173C;
    case 286u: goto L_08B01744;
    case 287u: goto L_08B0174C;
    case 288u: goto L_08B01754;
    case 289u: goto L_08B01774;
    case 290u: goto L_08B01790;
    case 291u: goto L_08B01798;
    case 292u: goto L_08B017A0;
    case 293u: goto L_08B017A8;
    case 294u: goto L_08B017C8;
    case 295u: goto L_08B017EC;
    case 296u: goto L_08B017F4;
    case 297u: goto L_08B017FC;
    case 298u: goto L_08B0181C;
    case 299u: goto L_08B01838;
    case 300u: goto L_08B0183C;
    case 301u: goto L_08B01850;
    case 302u: goto L_08B01868;
    case 303u: goto L_08B01880;
    case 304u: goto L_08B01894;
    case 305u: goto L_08B018A0;
    case 306u: goto L_08B018A8;
    case 307u: goto L_08B018CC;
    case 308u: goto L_08B018DC;
    case 309u: goto L_08B018F0;
    case 310u: goto L_08B018FC;
    case 311u: goto L_08B01918;
    case 312u: goto L_08B01920;
    case 313u: goto L_08B01928;
    case 314u: goto L_08B0194C;
    case 315u: goto L_08B0195C;
    case 316u: goto L_08B01970;
    case 317u: goto L_08B0197C;
    case 318u: goto L_08B01998;
    case 319u: goto L_08B019A0;
    case 320u: goto L_08B019A8;
    case 321u: goto L_08B019CC;
    case 322u: goto L_08B019DC;
    case 323u: goto L_08B019F0;
    case 324u: goto L_08B019FC;
    case 325u: goto L_08B01A18;
    case 326u: goto L_08B01A1C;
    case 327u: goto L_08B01A54;
    case 328u: goto L_08B01A84;
    case 329u: goto L_08B01AD0;
    case 330u: goto L_08B01AE0;
    case 331u: goto L_08B01B08;
    case 332u: goto L_08B01B2C;
    case 333u: goto L_08B01B38;
    case 334u: goto L_08B01B44;
    case 335u: goto L_08B01B4C;
    case 336u: goto L_08B01B54;
    case 337u: goto L_08B01B5C;
    case 338u: goto L_08B01B80;
    case 339u: goto L_08B01BA0;
    case 340u: goto L_08B01BA8;
    case 341u: goto L_08B01BB0;
    case 342u: goto L_08B01BD4;
    case 343u: goto L_08B01BF4;
    case 344u: goto L_08B01BFC;
    case 345u: goto L_08B01C04;
    case 346u: goto L_08B01C0C;
    case 347u: goto L_08B01C30;
    case 348u: goto L_08B01C50;
    case 349u: goto L_08B01C58;
    case 350u: goto L_08B01C60;
    case 351u: goto L_08B01C84;
    case 352u: goto L_08B01CA4;
    case 353u: goto L_08B01CAC;
    case 354u: goto L_08B01CB4;
    case 355u: goto L_08B01CBC;
    case 356u: goto L_08B01CE0;
    case 357u: goto L_08B01D00;
    case 358u: goto L_08B01D08;
    case 359u: goto L_08B01D10;
    case 360u: goto L_08B01D34;
    case 361u: goto L_08B01D54;
    case 362u: goto L_08B01D58;
    case 363u: goto L_08B01D7C;
    case 364u: goto L_08B01D90;
    case 365u: goto L_08B01D98;
    case 366u: goto L_08B01DA8;
    case 367u: goto L_08B01DB0;
    case 368u: goto L_08B01DC0;
    case 369u: goto L_08B01DC8;
    case 370u: goto L_08B01DD8;
    case 371u: goto L_08B01DE0;
    case 372u: goto L_08B01DF4;
    case 373u: goto L_08B01DFC;
    case 374u: goto L_08B01E48;
    case 375u: goto L_08B01E54;
    case 376u: goto L_08B01E60;
    case 377u: goto L_08B01E6C;
    case 378u: goto L_08B01E78;
    case 379u: goto L_08B01E80;
    case 380u: goto L_08B01E94;
    case 381u: goto L_08B01E9C;
    case 382u: goto L_08B01EBC;
    case 383u: goto L_08B01EC8;
    case 384u: goto L_08B01ECC;
    case 385u: goto L_08B01ED4;
    case 386u: goto L_08B01EE8;
    case 387u: goto L_08B01EF0;
    case 388u: goto L_08B01F10;
    case 389u: goto L_08B01F20;
    case 390u: goto L_08B01F28;
    case 391u: goto L_08B01F30;
    case 392u: goto L_08B01F38;
    case 393u: goto L_08B01F44;
    case 394u: goto L_08B01F4C;
    case 395u: goto L_08B01F54;
    case 396u: goto L_08B01F58;
    case 397u: goto L_08B01F60;
    case 398u: goto L_08B01F6C;
    case 399u: goto L_08B01F78;
    case 400u: goto L_08B01F84;
    case 401u: goto L_08B01FAC;
    case 402u: goto L_08B01FB4;
    case 403u: goto L_08B01FBC;
    case 404u: goto L_08B01FC4;
    case 405u: goto L_08B01FCC;
    case 406u: goto L_08B01FD4;
    case 407u: goto L_08B01FDC;
    case 408u: goto L_08B02034;
    case 409u: goto L_08B0206C;
    case 410u: goto L_08B02084;
    case 411u: goto L_08B0209C;
    case 412u: goto L_08B020A8;
    case 413u: goto L_08B020B0;
    case 414u: goto L_08B020B4;
    case 415u: goto L_08B020C4;
    case 416u: goto L_08B020E8;
    case 417u: goto L_08B020F0;
    case 418u: goto L_08B020F8;
    case 419u: goto L_08B02100;
    case 420u: goto L_08B02108;
    case 421u: goto L_08B02110;
    case 422u: goto L_08B02118;
    case 423u: goto L_08B0212C;
    case 424u: goto L_08B02134;
    case 425u: goto L_08B0213C;
    case 426u: goto L_08B02144;
    case 427u: goto L_08B0214C;
    case 428u: goto L_08B02164;
    case 429u: goto L_08B02170;
    case 430u: goto L_08B02178;
    case 431u: goto L_08B021B8;
    case 432u: goto L_08B021BC;
    case 433u: goto L_08B021C8;
    case 434u: goto L_08B021D0;
    case 435u: goto L_08B021DC;
    case 436u: goto L_08B021E0;
    case 437u: goto L_08B021E8;
    case 438u: goto L_08B021F0;
    case 439u: goto L_08B021F8;
    case 440u: goto L_08B02200;
    case 441u: goto L_08B02208;
    case 442u: goto L_08B02224;
    case 443u: goto L_08B02238;
    case 444u: goto L_08B02244;
    case 445u: goto L_08B02268;
    case 446u: goto L_08B022A0;
    case 447u: goto L_08B022A8;
    case 448u: goto L_08B022AC;
    case 449u: goto L_08B022B8;
    case 450u: goto L_08B022D8;
    case 451u: goto L_08B022E0;
    case 452u: goto L_08B02304;
    case 453u: goto L_08B02328;
    case 454u: goto L_08B02334;
    case 455u: goto L_08B02350;
    case 456u: goto L_08B023C4;
    case 457u: goto L_08B023CC;
    case 458u: goto L_08B023E0;
    case 459u: goto L_08B023E4;
    case 460u: goto L_08B023F8;
    case 461u: goto L_08B0241C;
    case 462u: goto L_08B02424;
    case 463u: goto L_08B02430;
    case 464u: goto L_08B02438;
    case 465u: goto L_08B02440;
    case 466u: goto L_08B02444;
    case 467u: goto L_08B0244C;
    case 468u: goto L_08B02480;
    case 469u: goto L_08B02488;
    case 470u: goto L_08B024A8;
    case 471u: goto L_08B024B0;
    case 472u: goto L_08B024D0;
    case 473u: goto L_08B024D8;
    case 474u: goto L_08B024E4;
    case 475u: goto L_08B024FC;
    case 476u: goto L_08B02518;
    case 477u: goto L_08B02520;
    case 478u: goto L_08B0252C;
    case 479u: goto L_08B02538;
    case 480u: goto L_08B02540;
    case 481u: goto L_08B02570;
    case 482u: goto L_08B02580;
    case 483u: goto L_08B025B8;
    case 484u: goto L_08B025BC;
    case 485u: goto L_08B025D4;
    case 486u: goto L_08B025DC;
    case 487u: goto L_08B025E4;
    case 488u: goto L_08B025E8;
    case 489u: goto L_08B025FC;
    case 490u: goto L_08B02618;
    case 491u: goto L_08B02620;
    case 492u: goto L_08B02628;
    case 493u: goto L_08B02630;
    case 494u: goto L_08B02660;
    case 495u: goto L_08B02680;
    case 496u: goto L_08B02694;
    case 497u: goto L_08B026A8;
    case 498u: goto L_08B026B8;
    case 499u: goto L_08B026C4;
    case 500u: goto L_08B026CC;
    case 501u: goto L_08B026D8;
    case 502u: goto L_08B026E0;
    case 503u: goto L_08B026EC;
    case 504u: goto L_08B026F0;
    case 505u: goto L_08B026F8;
    case 506u: goto L_08B02704;
    case 507u: goto L_08B0270C;
    case 508u: goto L_08B02718;
    case 509u: goto L_08B02724;
    case 510u: goto L_08B0272C;
    case 511u: goto L_08B02730;
    case 512u: goto L_08B02738;
    case 513u: goto L_08B0274C;
    case 514u: goto L_08B02754;
    case 515u: goto L_08B02758;
    case 516u: goto L_08B02760;
    case 517u: goto L_08B02780;
    case 518u: goto L_08B0278C;
    case 519u: goto L_08B02794;
    case 520u: goto L_08B02798;
    case 521u: goto L_08B027A4;
    case 522u: goto L_08B027B0;
    case 523u: goto L_08B027B8;
    case 524u: goto L_08B027C0;
    case 525u: goto L_08B027C8;
    case 526u: goto L_08B027D0;
    case 527u: goto L_08B027D4;
    case 528u: goto L_08B027E4;
    case 529u: goto L_08B0283C;
    case 530u: goto L_08B02840;
    case 531u: goto L_08B0284C;
    case 532u: goto L_08B02874;
    case 533u: goto L_08B02888;
    case 534u: goto L_08B0289C;
    case 535u: goto L_08B028B0;
    case 536u: goto L_08B028C4;
    case 537u: goto L_08B028D8;
    case 538u: goto L_08B028E0;
    case 539u: goto L_08B028F0;
    case 540u: goto L_08B02900;
    case 541u: goto L_08B0290C;
    case 542u: goto L_08B02914;
    case 543u: goto L_08B0291C;
    case 544u: goto L_08B02924;
    case 545u: goto L_08B02934;
    case 546u: goto L_08B0293C;
    case 547u: goto L_08B02954;
    case 548u: goto L_08B02968;
    case 549u: goto L_08B0297C;
    case 550u: goto L_08B02990;
    case 551u: goto L_08B029B0;
    case 552u: goto L_08B029C4;
    case 553u: goto L_08B029D4;
    case 554u: goto L_08B029E8;
    case 555u: goto L_08B029F4;
    case 556u: goto L_08B02A0C;
    case 557u: goto L_08B02A10;
    case 558u: goto L_08B02A18;
    case 559u: goto L_08B02A30;
    case 560u: goto L_08B02A38;
    case 561u: goto L_08B02A48;
    case 562u: goto L_08B02A50;
    case 563u: goto L_08B02A70;
    case 564u: goto L_08B02AA4;
    case 565u: goto L_08B02AAC;
    case 566u: goto L_08B02AB4;
    case 567u: goto L_08B02AC4;
    case 568u: goto L_08B02AFC;
    case 569u: goto L_08B02B00;
    case 570u: goto L_08B02B08;
    case 571u: goto L_08B02B10;
    case 572u: goto L_08B02B18;
    case 573u: goto L_08B02B28;
    case 574u: goto L_08B02B6C;
    case 575u: goto L_08B02B8C;
    case 576u: goto L_08B02BAC;
    case 577u: goto L_08B02BB8;
    case 578u: goto L_08B02BC4;
    case 579u: goto L_08B02BFC;
    case 580u: goto L_08B02C0C;
    case 581u: goto L_08B02C14;
    case 582u: goto L_08B02C2C;
    case 583u: goto L_08B02C34;
    case 584u: goto L_08B02C44;
    case 585u: goto L_08B02C4C;
    case 586u: goto L_08B02C6C;
    case 587u: goto L_08B02C78;
    case 588u: goto L_08B02C88;
    case 589u: goto L_08B02C94;
    case 590u: goto L_08B02CA4;
    case 591u: goto L_08B02CAC;
    case 592u: goto L_08B02CCC;
    case 593u: goto L_08B02CD4;
    case 594u: goto L_08B02CF4;
    case 595u: goto L_08B02CFC;
    case 596u: goto L_08B02D00;
    case 597u: goto L_08B02D04;
    case 598u: goto L_08B02D34;
    case 599u: goto L_08B02D64;
    case 600u: goto L_08B02DB8;
    case 601u: goto L_08B02DBC;
    case 602u: goto L_08B02DC8;
    case 603u: goto L_08B02DF0;
    case 604u: goto L_08B02E00;
    case 605u: goto L_08B02E10;
    case 606u: goto L_08B02E1C;
    case 607u: goto L_08B02E24;
    case 608u: goto L_08B02E2C;
    case 609u: goto L_08B02E34;
    case 610u: goto L_08B02E50;
    case 611u: goto L_08B02E58;
    case 612u: goto L_08B02E70;
    case 613u: goto L_08B02E84;
    case 614u: goto L_08B02E98;
    case 615u: goto L_08B02EAC;
    case 616u: goto L_08B02ECC;
    case 617u: goto L_08B02EE0;
    case 618u: goto L_08B02EF0;
    case 619u: goto L_08B02F04;
    case 620u: goto L_08B02F10;
    case 621u: goto L_08B02F18;
    case 622u: goto L_08B02F30;
    case 623u: goto L_08B02F44;
    case 624u: goto L_08B02F54;
    case 625u: goto L_08B02F5C;
    case 626u: goto L_08B02F7C;
    case 627u: goto L_08B02FB4;
    case 628u: goto L_08B02FB8;
    case 629u: goto L_08B02FC0;
    case 630u: goto L_08B02FC8;
    case 631u: goto L_08B02FD0;
    case 632u: goto L_08B03000;
    case 633u: goto L_08B0302C;
    case 634u: goto L_08B0304C;
    case 635u: goto L_08B03058;
    case 636u: goto L_08B03060;
    case 637u: goto L_08B03078;
    case 638u: goto L_08B0308C;
    case 639u: goto L_08B0309C;
    case 640u: goto L_08B030A4;
    case 641u: goto L_08B030C4;
    case 642u: goto L_08B030D0;
    case 643u: goto L_08B030E0;
    case 644u: goto L_08B030EC;
    case 645u: goto L_08B030FC;
    case 646u: goto L_08B03110;
    case 647u: goto L_08B03130;
    case 648u: goto L_08B03138;
    case 649u: goto L_08B0314C;
    case 650u: goto L_08B03154;
    case 651u: goto L_08B03168;
    case 652u: goto L_08B03170;
    case 653u: goto L_08B03184;
    case 654u: goto L_08B03190;
    case 655u: goto L_08B03194;
    case 656u: goto L_08B0319C;
    case 657u: goto L_08B031D4;
    case 658u: goto L_08B031E8;
    case 659u: goto L_08B03208;
    case 660u: goto L_08B0320C;
    case 661u: goto L_08B03238;
    case 662u: goto L_08B03260;
    case 663u: goto L_08B0326C;
    case 664u: goto L_08B03274;
    case 665u: goto L_08B03278;
    case 666u: goto L_08B03284;
    case 667u: goto L_08B03294;
    case 668u: goto L_08B0329C;
    case 669u: goto L_08B032D8;
    case 670u: goto L_08B032E0;
    case 671u: goto L_08B03318;
    case 672u: goto L_08B0332C;
    case 673u: goto L_08B03330;
    case 674u: goto L_08B0334C;
    case 675u: goto L_08B03374;
    case 676u: goto L_08B03380;
    case 677u: goto L_08B03388;
    case 678u: goto L_08B03390;
    case 679u: goto L_08B03398;
    case 680u: goto L_08B033A0;
    case 681u: goto L_08B033A4;
    case 682u: goto L_08B033B4;
    case 683u: goto L_08B033C8;
    case 684u: goto L_08B033D0;
    case 685u: goto L_08B0340C;
    case 686u: goto L_08B03420;
    case 687u: goto L_08B03428;
    case 688u: goto L_08B03430;
    case 689u: goto L_08B03438;
    case 690u: goto L_08B0343C;
    case 691u: goto L_08B0344C;
    case 692u: goto L_08B03460;
    case 693u: goto L_08B03468;
    case 694u: goto L_08B034A4;
    case 695u: goto L_08B034B8;
    case 696u: goto L_08B034BC;
    case 697u: goto L_08B034D8;
    case 698u: goto L_08B03504;
    case 699u: goto L_08B0350C;
    case 700u: goto L_08B03518;
    case 701u: goto L_08B03520;
    case 702u: goto L_08B03528;
    case 703u: goto L_08B03550;
    case 704u: goto L_08B03560;
    case 705u: goto L_08B03568;
    case 706u: goto L_08B03578;
    case 707u: goto L_08B03580;
    case 708u: goto L_08B03590;
    case 709u: goto L_08B03598;
    case 710u: goto L_08B035A8;
    case 711u: goto L_08B035B0;
    case 712u: goto L_08B035E4;
    case 713u: goto L_08B035EC;
    case 714u: goto L_08B03620;
    case 715u: goto L_08B03638;
    case 716u: goto L_08B0363C;
    case 717u: goto L_08B03644;
    case 718u: goto L_08B0364C;
    case 719u: goto L_08B03654;
    case 720u: goto L_08B03688;
    case 721u: goto L_08B036B4;
    case 722u: goto L_08B036B8;
    case 723u: goto L_08B036D8;
    case 724u: goto L_08B03708;
    case 725u: goto L_08B03710;
    case 726u: goto L_08B03718;
    case 727u: goto L_08B03740;
    case 728u: goto L_08B03750;
    case 729u: goto L_08B03758;
    case 730u: goto L_08B03768;
    case 731u: goto L_08B03770;
    case 732u: goto L_08B03780;
    case 733u: goto L_08B03788;
    case 734u: goto L_08B03798;
    case 735u: goto L_08B037A4;
    case 736u: goto L_08B037AC;
    case 737u: goto L_08B037B4;
    case 738u: goto L_08B037BC;
    case 739u: goto L_08B037C4;
    case 740u: goto L_08B037CC;
    case 741u: goto L_08B03800;
    case 742u: goto L_08B03808;
    case 743u: goto L_08B0383C;
    case 744u: goto L_08B03858;
    case 745u: goto L_08B0385C;
    case 746u: goto L_08B03864;
    case 747u: goto L_08B0386C;
    case 748u: goto L_08B03874;
    case 749u: goto L_08B038A8;
    case 750u: goto L_08B038D4;
    case 751u: goto L_08B038DC;
    case 752u: goto L_08B038E4;
    case 753u: goto L_08B038EC;
    case 754u: goto L_08B038F4;
    case 755u: goto L_08B03928;
    case 756u: goto L_08B03930;
    case 757u: goto L_08B03964;
    case 758u: goto L_08B03980;
    case 759u: goto L_08B03984;
    case 760u: goto L_08B0398C;
    case 761u: goto L_08B03994;
    case 762u: goto L_08B0399C;
    case 763u: goto L_08B039D0;
    case 764u: goto L_08B039FC;
    case 765u: goto L_08B03A00;
    case 766u: goto L_08B03A20;
    case 767u: goto L_08B03A40;
    case 768u: goto L_08B03A48;
    case 769u: goto L_08B03A54;
    case 770u: goto L_08B03A5C;
    case 771u: goto L_08B03A64;
    case 772u: goto L_08B03A8C;
    case 773u: goto L_08B03A9C;
    case 774u: goto L_08B03AA4;
    case 775u: goto L_08B03AB4;
    case 776u: goto L_08B03AC0;
    case 777u: goto L_08B03AF4;
    case 778u: goto L_08B03B18;
    case 779u: goto L_08B03B30;
    case 780u: goto L_08B03B50;
    case 781u: goto L_08B03B58;
    case 782u: goto L_08B03B64;
    case 783u: goto L_08B03B6C;
    case 784u: goto L_08B03B74;
    case 785u: goto L_08B03B7C;
    case 786u: goto L_08B03B84;
    case 787u: goto L_08B03B8C;
    case 788u: goto L_08B03BB4;
    case 789u: goto L_08B03BC4;
    case 790u: goto L_08B03BCC;
    case 791u: goto L_08B03BDC;
    case 792u: goto L_08B03BE8;
    case 793u: goto L_08B03C1C;
    case 794u: goto L_08B03C44;
    case 795u: goto L_08B03C50;
    case 796u: goto L_08B03C58;
    case 797u: goto L_08B03C60;
    case 798u: goto L_08B03C88;
    case 799u: goto L_08B03C98;
    case 800u: goto L_08B03CA0;
    case 801u: goto L_08B03CB0;
    case 802u: goto L_08B03CBC;
    case 803u: goto L_08B03CF0;
    case 804u: goto L_08B03D14;
    case 805u: goto L_08B03D18;
    case 806u: goto L_08B03D2C;
    case 807u: goto L_08B03D60;
    case 808u: goto L_08B03D70;
    case 809u: goto L_08B03D7C;
    case 810u: goto L_08B03D84;
    case 811u: goto L_08B03D94;
    case 812u: goto L_08B03DAC;
    case 813u: goto L_08B03DBC;
    case 814u: goto L_08B03DC4;
    case 815u: goto L_08B03DDC;
    case 816u: goto L_08B03DF0;
    case 817u: goto L_08B03E00;
    case 818u: goto L_08B03E0C;
    case 819u: goto L_08B03E14;
    case 820u: goto L_08B03E24;
    case 821u: goto L_08B03E3C;
    case 822u: goto L_08B03E4C;
    case 823u: goto L_08B03E54;
    case 824u: goto L_08B03E6C;
    case 825u: goto L_08B03E80;
    case 826u: goto L_08B03E90;
    case 827u: goto L_08B03E9C;
    case 828u: goto L_08B03EA4;
    case 829u: goto L_08B03EB4;
    case 830u: goto L_08B03EC0;
    case 831u: goto L_08B03ED0;
    case 832u: goto L_08B03ED8;
    case 833u: goto L_08B03EF0;
    case 834u: goto L_08B03F04;
    case 835u: goto L_08B03F14;
    case 836u: goto L_08B03F20;
    case 837u: goto L_08B03F28;
    case 838u: goto L_08B03F38;
    case 839u: goto L_08B03F44;
    case 840u: goto L_08B03F54;
    case 841u: goto L_08B03F5C;
    case 842u: goto L_08B03F74;
    case 843u: goto L_08B03F7C;
    case 844u: goto L_08B03F90;
    case 845u: goto L_08B03F98;
    case 846u: goto L_08B03FAC;
    case 847u: goto L_08B03FB4;
    case 848u: goto L_08B03FC8;
    case 849u: goto L_08B03FD0;
    case 850u: goto L_08B03FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B00000:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[23];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[3] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B00098;
      }
      goto L_08B00034;
    }
L_08B00034:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
        goto L_08B00070;
    }
    goto L_08B00068;
L_08B00068:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    goto L_08B00070;
L_08B00070:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08B00098;
L_08B00098:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1512)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B000B8u);
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B000B8u) goto L_08B000B8;
    return;
L_08B000B8:
    ctx.set_gpr(31, 0x08B000C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B000C0u) goto L_08B000C0;
    return;
L_08B000C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B000CCu);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_08B00B08;
L_08B000CC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(31, 0x08B000F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B000F8u) goto L_08B000F8;
    return;
L_08B000F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[20]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[2] = ctx.fpr[24] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[23] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[3];
    ctx.fpr[1] = ctx.fpr[22] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[3];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[3];
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(31, 0x08B001BCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 599u, 0x08AFF2D4u>(ctx, &aot_mem) && ctx.pc == 0x08B001BCu) goto L_08B001BC;
    return;
L_08B001BC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00214;
      }
      goto L_08B001C4;
    }
L_08B001C4:
    ctx.set_gpr(31, 0x08B001CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B001CCu) goto L_08B001CC;
    return;
L_08B001CC:
    ctx.set_gpr(31, 0x08B001D4u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B001D4u) goto L_08B001D4;
    return;
L_08B001D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1584)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B001F8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B001F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B0020Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0020Cu) goto L_08B0020C;
    return;
L_08B0020C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B00260;
      }
      goto L_08B00214;
    }
L_08B00214:
    ctx.set_gpr(31, 0x08B0021Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0021Cu) goto L_08B0021C;
    return;
L_08B0021C:
    ctx.set_gpr(31, 0x08B00224u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00224u) goto L_08B00224;
    return;
L_08B00224:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1584)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B00248u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B00248:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B0025Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0025Cu) goto L_08B0025C;
    return;
L_08B0025C:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[19]);
    goto L_08B00260;
L_08B00260:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B002BC;
      }
      goto L_08B0026C;
    }
L_08B0026C:
    ctx.set_gpr(31, 0x08B00274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00274u) goto L_08B00274;
    return;
L_08B00274:
    ctx.set_gpr(31, 0x08B0027Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0027Cu) goto L_08B0027C;
    return;
L_08B0027C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1560)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B002A0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B002A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B002B4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B002B4u) goto L_08B002B4;
    return;
L_08B002B4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B00308;
      }
      goto L_08B002BC;
    }
L_08B002BC:
    ctx.set_gpr(31, 0x08B002C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B002C4u) goto L_08B002C4;
    return;
L_08B002C4:
    ctx.set_gpr(31, 0x08B002CCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B002CCu) goto L_08B002CC;
    return;
L_08B002CC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1560)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B002F0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B002F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B00304u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00304u) goto L_08B00304;
    return;
L_08B00304:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_08B00308;
L_08B00308:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1536)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B00324u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00324u) goto L_08B00324;
    return;
L_08B00324:
    ctx.set_gpr(31, 0x08B0032Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0032Cu) goto L_08B0032C;
    return;
L_08B0032C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00338u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08B00B08;
L_08B00338:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B00358u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00358u) goto L_08B00358;
    return;
L_08B00358:
    ctx.set_gpr(31, 0x08B00360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00360u) goto L_08B00360;
    return;
L_08B00360:
    ctx.set_gpr(31, 0x08B00368u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00368u) goto L_08B00368;
    return;
L_08B00368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00374u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_08B00B08;
L_08B00374:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B00394u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00394u) goto L_08B00394;
    return;
L_08B00394:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1488)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B003B4u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B003B4u) goto L_08B003B4;
    return;
L_08B003B4:
    ctx.set_gpr(31, 0x08B003BCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B003BCu) goto L_08B003BC;
    return;
L_08B003BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B003C8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B00B08;
L_08B003C8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B003E8u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B003E8u) goto L_08B003E8;
    return;
L_08B003E8:
    ctx.set_gpr(31, 0x08B003F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B003F0u) goto L_08B003F0;
    return;
L_08B003F0:
    ctx.set_gpr(31, 0x08B003F8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B003F8u) goto L_08B003F8;
    return;
L_08B003F8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B00404u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B00B08;
L_08B00404:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1516)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0041Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0041Cu) goto L_08B0041C;
    return;
L_08B0041C:
    ctx.set_gpr(31, 0x08B00424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00424u) goto L_08B00424;
    return;
L_08B00424:
    ctx.set_gpr(31, 0x08B0042Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0042Cu) goto L_08B0042C;
    return;
L_08B0042C:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08B00438u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B00B08;
L_08B00438:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1492)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B00450u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00450u) goto L_08B00450;
    return;
L_08B00450:
    ctx.set_gpr(31, 0x08B00458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00458u) goto L_08B00458;
    return;
L_08B00458:
    ctx.set_gpr(31, 0x08B00460u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00460u) goto L_08B00460;
    return;
L_08B00460:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0046Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B00B08;
L_08B0046C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1468)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B00484u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00484u) goto L_08B00484;
    return;
L_08B00484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08B00488;
L_08B00488:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B004C8:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(3, 16281u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(296));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B00520;
      }
      goto L_08B00508;
    }
L_08B00508:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B00508;
      }
      goto L_08B00520;
    }
L_08B00520:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[21];
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08B00554u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08B00554u) goto L_08B00554;
    return;
L_08B00554:
    ctx.set_gpr(31, 0x08B0055Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0055Cu) goto L_08B0055C;
    return;
L_08B0055C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, ctx.lo);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[2];
      if (branch_taken) {
          goto L_08B005AC;
      }
      goto L_08B00584;
    }
L_08B00584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[1];
        goto L_08B005A0;
    }
    goto L_08B00590;
L_08B00590:
    if (ctx.gpr[17] == 0u) {
    ctx.set_fpr_bits(0, ctx.fpr_bits(21));
        goto L_08B005B4;
    }
    goto L_08B00598;
L_08B00598:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B005B8;
      }
      goto L_08B005A0;
    }
L_08B005A0:
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[2];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08B005B4;
      }
      goto L_08B005AC;
    }
L_08B005AC:
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    goto L_08B005B4;
L_08B005B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B005B8;
L_08B005B8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B005D0:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B00630;
      }
      goto L_08B00604;
    }
L_08B00604:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 17392u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08B00630;
L_08B00630:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08B0067C;
      }
      goto L_08B00650;
    }
L_08B00650:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 17288u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08B0067C;
L_08B0067C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B00778;
      }
      goto L_08B006A4;
    }
L_08B006A4:
    ctx.set_gpr(31, 0x08B006ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B006ACu) goto L_08B006AC;
    return;
L_08B006AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B006B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(129));
    goto L_08B00B08;
L_08B006B8:
    ctx.set_gpr(31, 0x08B006C0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B006C0u) goto L_08B006C0;
    return;
L_08B006C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B006D0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B006D0u) goto L_08B006D0;
    return;
L_08B006D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(780), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08B007FC;
    }
    goto L_08B006DC;
L_08B006DC:
    ctx.set_gpr(31, 0x08B006E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B006E4u) goto L_08B006E4;
    return;
L_08B006E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17162u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16135u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 44564u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08B0071Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B0071Cu) goto L_08B0071C;
    return;
L_08B0071C:
    ctx.set_gpr(31, 0x08B00724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00724u) goto L_08B00724;
    return;
L_08B00724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17291u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B00744u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B00744u) goto L_08B00744;
    return;
L_08B00744:
    ctx.set_gpr(31, 0x08B0074Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0074Cu) goto L_08B0074C;
    return;
L_08B0074C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2844)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08B00770u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00770u) goto L_08B00770;
    return;
L_08B00770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007F8;
      }
      goto L_08B00778;
    }
L_08B00778:
    ctx.set_gpr(31, 0x08B00780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00780u) goto L_08B00780;
    return;
L_08B00780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0078Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(129));
    goto L_08B00C18;
L_08B0078C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007F8;
      }
      goto L_08B00794;
    }
L_08B00794:
    ctx.set_gpr(31, 0x08B0079Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0079Cu) goto L_08B0079C;
    return;
L_08B0079C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B007A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(129));
    goto L_08B00B08;
L_08B007A8:
    ctx.set_gpr(31, 0x08B007B0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B007B0u) goto L_08B007B0;
    return;
L_08B007B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B007C0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B007C0u) goto L_08B007C0;
    return;
L_08B007C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B007E4;
      }
      goto L_08B007CC;
    }
L_08B007CC:
    ctx.set_gpr(31, 0x08B007D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B007D4u) goto L_08B007D4;
    return;
L_08B007D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B007E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08B007E4u) goto L_08B007E4;
    return;
L_08B007E4:
    ctx.set_gpr(31, 0x08B007ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B007ECu) goto L_08B007EC;
    return;
L_08B007EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B007F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(129));
    goto L_08B00B90;
L_08B007F8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(780), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08B007FC;
L_08B007FC:
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
L_08B00814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_fpr_bits(23, ctx.fpr_bits(13));
    ctx.set_fpr_bits(22, ctx.fpr_bits(14));
    ctx.set_fpr_bits(21, ctx.fpr_bits(15));
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x08B00870u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(16));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00870u) goto L_08B00870;
    return;
L_08B00870:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(130));
    ctx.set_gpr(31, 0x08B0087Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B00B08;
L_08B0087C:
    ctx.set_gpr(31, 0x08B00884u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00884u) goto L_08B00884;
    return;
L_08B00884:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B00894u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B00894u) goto L_08B00894;
    return;
L_08B00894:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B008D0;
      }
      goto L_08B008A0;
    }
L_08B008A0:
    ctx.set_gpr(31, 0x08B008A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B008A8u) goto L_08B008A8;
    return;
L_08B008A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08B008D0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B008D0u) goto L_08B008D0;
    return;
L_08B008D0:
    ctx.set_gpr(31, 0x08B008D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B008D8u) goto L_08B008D8;
    return;
L_08B008D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[22] / ctx.fpr[1];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[21] / ctx.fpr[1];
    ctx.set_gpr(31, 0x08B00900u);
    ctx.fpr[13] = ctx.fpr[23] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B00900u) goto L_08B00900;
    return;
L_08B00900:
    ctx.set_gpr(31, 0x08B00908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00908u) goto L_08B00908;
    return;
L_08B00908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[21];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B00928u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B00928u) goto L_08B00928;
    return;
L_08B00928:
    ctx.set_gpr(31, 0x08B00930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00930u) goto L_08B00930;
    return;
L_08B00930:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00950u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00950u) goto L_08B00950;
    return;
L_08B00950:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00984:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(130));
    ctx.set_gpr(31, 0x08B0099Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0099Cu) goto L_08B0099C;
    return;
L_08B0099C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B009A8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B00C18;
L_08B009A8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B00A18;
    }
    goto L_08B009B0;
L_08B009B0:
    ctx.set_gpr(31, 0x08B009B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B009B8u) goto L_08B009B8;
    return;
L_08B009B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B009C4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B00B08;
L_08B009C4:
    ctx.set_gpr(31, 0x08B009CCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B009CCu) goto L_08B009CC;
    return;
L_08B009CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B009DCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B009DCu) goto L_08B009DC;
    return;
L_08B009DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B00A00;
      }
      goto L_08B009E8;
    }
L_08B009E8:
    ctx.set_gpr(31, 0x08B009F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B009F0u) goto L_08B009F0;
    return;
L_08B009F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B00A00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08B00A00u) goto L_08B00A00;
    return;
L_08B00A00:
    ctx.set_gpr(31, 0x08B00A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00A08u) goto L_08B00A08;
    return;
L_08B00A08:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B00A14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B00B90;
L_08B00A14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B00A18;
L_08B00A18:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00A28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B00A44;
L_08B00A44:
    ctx.set_gpr(31, 0x08B00A4Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B00984;
L_08B00A4C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08B00A44;
    }
    goto L_08B00A5C;
L_08B00A5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00A70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08B00A8Cu);
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(130));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00A8Cu) goto L_08B00A8C;
    return;
L_08B00A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00A98u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B00C18;
L_08B00A98:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B00AF8;
    }
    goto L_08B00AA0;
L_08B00AA0:
    ctx.set_gpr(31, 0x08B00AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00AA8u) goto L_08B00AA8;
    return;
L_08B00AA8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B00AB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B00B08;
L_08B00AB4:
    ctx.set_gpr(31, 0x08B00ABCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00ABCu) goto L_08B00ABC;
    return;
L_08B00ABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B00ACCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B00ACCu) goto L_08B00ACC;
    return;
L_08B00ACC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B00AF4;
      }
      goto L_08B00AD8;
    }
L_08B00AD8:
    ctx.set_gpr(31, 0x08B00AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00AE0u) goto L_08B00AE0;
    return;
L_08B00AE0:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00AF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00AF4u) goto L_08B00AF4;
    return;
L_08B00AF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B00AF8;
L_08B00AF8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00B08:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B00B38;
      }
      goto L_08B00B14;
    }
L_08B00B14:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    goto L_08B00B18;
L_08B00B18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(784)));
    if (ctx.gpr[3] != ctx.gpr[5]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08B00B2C;
    }
    goto L_08B00B24;
L_08B00B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00B88;
      }
      goto L_08B00B2C;
    }
L_08B00B2C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00B18;
      }
      goto L_08B00B38;
    }
L_08B00B38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B00B70;
      }
      goto L_08B00B40;
    }
L_08B00B40:
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    goto L_08B00B48;
L_08B00B48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(784)));
    if (ctx.gpr[3] != ctx.gpr[6]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08B00B64;
    }
    goto L_08B00B54;
L_08B00B54:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(784), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B00B88;
      }
      goto L_08B00B64;
    }
L_08B00B64:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00B48;
      }
      goto L_08B00B70;
    }
L_08B00B70:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1424), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(784), ctx.gpr[5]);
    goto L_08B00B88;
L_08B00B88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00B90:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08B00C10;
      }
      goto L_08B00B9C;
    }
L_08B00B9C:
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    goto L_08B00BA0;
L_08B00BA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(784)));
    if (ctx.gpr[3] != ctx.gpr[5]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08B00C04;
    }
    goto L_08B00BAC;
L_08B00BAC:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(784), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(780)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00C10;
      }
      goto L_08B00BD4;
    }
L_08B00BD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    goto L_08B00BD8;
L_08B00BD8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1424), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B00C10;
      }
      goto L_08B00BE4;
    }
L_08B00BE4:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(780)));
    if (ctx.gpr[3] == ctx.gpr[5]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
        goto L_08B00BD8;
    }
    goto L_08B00BF8;
L_08B00BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00C10;
      }
      goto L_08B00C00;
    }
L_08B00C00:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08B00C04;
L_08B00C04:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00BA0;
      }
      goto L_08B00C10;
    }
L_08B00C10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08B00C44;
      }
      goto L_08B00C24;
    }
L_08B00C24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(784)));
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08B00C38;
    }
    goto L_08B00C30;
L_08B00C30:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B00C48;
      }
      goto L_08B00C38;
    }
L_08B00C38:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B00C24;
      }
      goto L_08B00C44;
    }
L_08B00C44:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08B00C48;
L_08B00C48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(22, ctx.gpr[2] << 3u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(132));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(136)));
    ctx.fpr[4] = ctx.fpr[4] / ctx.fpr[0];
    ctx.fpr[10] = ctx.fpr[2] / ctx.fpr[0];
    ctx.fpr[20] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[10];
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08B00D60;
      }
      goto L_08B00CF8;
    }
L_08B00CF8:
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-600));
    goto L_08B00D04;
L_08B00D04:
    ctx.set_gpr(31, 0x08B00D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00D0Cu) goto L_08B00D0C;
    return;
L_08B00D0C:
    ctx.set_gpr(31, 0x08B00D14u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B00D14u) goto L_08B00D14;
    return;
L_08B00D14:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B00D34u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B00D34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00D48u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00D48u) goto L_08B00D48;
    return;
L_08B00D48:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B00D04;
      }
      goto L_08B00D58;
    }
L_08B00D58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08B01A1C;
      }
      goto L_08B00D60;
    }
L_08B00D60:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[14];
        goto L_08B01424;
    }
    goto L_08B00D70;
L_08B00D70:
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.fpr[9] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(9)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(30, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(17, 16368u << 16u);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(8)));
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(7)));
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[9] = ctx.fpr[9] / ctx.fpr[0];
    ctx.fpr[8] = ctx.fpr[8] / ctx.fpr[0];
    ctx.fpr[7] = ctx.fpr[7] / ctx.fpr[0];
    ctx.fpr[6] = ctx.fpr[6] / ctx.fpr[0];
    ctx.fpr[5] = ctx.fpr[5] / ctx.fpr[0];
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[0];
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[0];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[21] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[6] = ctx.fpr[4] - ctx.fpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[9] = ctx.fpr[4] - ctx.fpr[9];
    ctx.fpr[8] = ctx.fpr[4] - ctx.fpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.fpr[7] = ctx.fpr[4] - ctx.fpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.fpr[6] = ctx.fpr[4] - ctx.fpr[10];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.fpr[5] = ctx.fpr[4] - ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[3] = ctx.fpr[4] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[2] = ctx.fpr[4] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B00E2Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00E2Cu) goto L_08B00E2C;
    return;
L_08B00E2C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00E40u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B00E40u) goto L_08B00E40;
    return;
L_08B00E40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08B00E60u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00E60u) goto L_08B00E60;
    return;
L_08B00E60:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08B00E74u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00E74u) goto L_08B00E74;
    return;
L_08B00E74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00E88u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00E88u) goto L_08B00E88;
    return;
L_08B00E88:
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B00E9Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00E9Cu) goto L_08B00E9C;
    return;
L_08B00E9C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00EB0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B00EB0u) goto L_08B00EB0;
    return;
L_08B00EB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00EBCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B00EBCu) goto L_08B00EBC;
    return;
L_08B00EBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08B00ED8u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00ED8u) goto L_08B00ED8;
    return;
L_08B00ED8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08B00EECu);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00EECu) goto L_08B00EEC;
    return;
L_08B00EEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00F00u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00F00u) goto L_08B00F00;
    return;
L_08B00F00:
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B00F14u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00F14u) goto L_08B00F14;
    return;
L_08B00F14:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00F28u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B00F28u) goto L_08B00F28;
    return;
L_08B00F28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00F34u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B00F34u) goto L_08B00F34;
    return;
L_08B00F34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(148)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08B00F50u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00F50u) goto L_08B00F50;
    return;
L_08B00F50:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08B00F64u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00F64u) goto L_08B00F64;
    return;
L_08B00F64:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00F78u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00F78u) goto L_08B00F78;
    return;
L_08B00F78:
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B00F8Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B00F8Cu) goto L_08B00F8C;
    return;
L_08B00F8C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00FA0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B00FA0u) goto L_08B00FA0;
    return;
L_08B00FA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B00FACu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B00FACu) goto L_08B00FAC;
    return;
L_08B00FAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08B00FE0u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B00FE0u) goto L_08B00FE0;
    return;
L_08B00FE0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08B00FF4u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00FF4u) goto L_08B00FF4;
    return;
L_08B00FF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01008u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01008u) goto L_08B01008;
    return;
L_08B01008:
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B0101Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B0101Cu) goto L_08B0101C;
    return;
L_08B0101C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01030u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B01030u) goto L_08B01030;
    return;
L_08B01030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0103Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B0103Cu) goto L_08B0103C;
    return;
L_08B0103C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08B01058u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01058u) goto L_08B01058;
    return;
L_08B01058:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08B0106Cu);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0106Cu) goto L_08B0106C;
    return;
L_08B0106C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01080u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01080u) goto L_08B01080;
    return;
L_08B01080:
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B01094u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B01094u) goto L_08B01094;
    return;
L_08B01094:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B010A8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B010A8u) goto L_08B010A8;
    return;
L_08B010A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B010B4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B010B4u) goto L_08B010B4;
    return;
L_08B010B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(164)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08B010D0u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B010D0u) goto L_08B010D0;
    return;
L_08B010D0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08B010E4u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B010E4u) goto L_08B010E4;
    return;
L_08B010E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B010F8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B010F8u) goto L_08B010F8;
    return;
L_08B010F8:
    ctx.set_gpr(7, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B0110Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B0110Cu) goto L_08B0110C;
    return;
L_08B0110C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01120u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B01120u) goto L_08B01120;
    return;
L_08B01120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0112Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B0112Cu) goto L_08B0112C;
    return;
L_08B0112C:
    ctx.set_gpr(18, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-600));
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[22]);
    goto L_08B01144;
L_08B01144:
    ctx.set_gpr(31, 0x08B0114Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0114Cu) goto L_08B0114C;
    return;
L_08B0114C:
    ctx.set_gpr(31, 0x08B01154u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01154u) goto L_08B01154;
    return;
L_08B01154:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01174u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01174:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0118Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B0118Cu) goto L_08B0118C;
    return;
L_08B0118C:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08B01348;
    }
    goto L_08B01198;
L_08B01198:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1528));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B011B4:
    ctx.set_gpr(31, 0x08B011BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B011BCu) goto L_08B011BC;
    return;
L_08B011BC:
    ctx.set_gpr(31, 0x08B011C4u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B011C4u) goto L_08B011C4;
    return;
L_08B011C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B011E4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B011E4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16000u << 16u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B0120Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    goto L_08B01A54;
L_08B0120C:
    ctx.set_gpr(31, 0x08B01214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01214u) goto L_08B01214;
    return;
L_08B01214:
    ctx.set_gpr(31, 0x08B0121Cu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0121Cu) goto L_08B0121C;
    return;
L_08B0121C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B0123Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B0123C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[1] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08B01268u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01268u) goto L_08B01268;
    return;
L_08B01268:
    ctx.set_gpr(31, 0x08B01270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01270u) goto L_08B01270;
    return;
L_08B01270:
    ctx.set_gpr(31, 0x08B01278u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01278u) goto L_08B01278;
    return;
L_08B01278:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01298u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01298:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B012ACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B012ACu) goto L_08B012AC;
    return;
L_08B012AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01344;
      }
      goto L_08B012B4;
    }
L_08B012B4:
    ctx.set_gpr(31, 0x08B012BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B012BCu) goto L_08B012BC;
    return;
L_08B012BC:
    ctx.set_gpr(31, 0x08B012C4u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B012C4u) goto L_08B012C4;
    return;
L_08B012C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B012E4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B012E4:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B012F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B012F8u) goto L_08B012F8;
    return;
L_08B012F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01344;
      }
      goto L_08B01300;
    }
L_08B01300:
    ctx.set_gpr(31, 0x08B01308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01308u) goto L_08B01308;
    return;
L_08B01308:
    ctx.set_gpr(31, 0x08B01310u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01310u) goto L_08B01310;
    return;
L_08B01310:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01330u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01330:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B01344u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01344u) goto L_08B01344;
    return;
L_08B01344:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08B01348;
L_08B01348:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 9 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B01144;
      }
      goto L_08B0135C;
    }
L_08B0135C:
    ctx.set_gpr(31, 0x08B01364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01364u) goto L_08B01364;
    return;
L_08B01364:
    ctx.set_gpr(31, 0x08B0136Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0136Cu) goto L_08B0136C;
    return;
L_08B0136C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-576)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01390u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01390:
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(31, 0x08B013A0u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B013A0u) goto L_08B013A0;
    return;
L_08B013A0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 39321u << 16u);
    ctx.set_gpr(18, ctx.gpr[2] | 39322u);
    ctx.set_gpr(2, 16297u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B013C0u);
    ctx.set_gpr(16, ctx.gpr[2] | 39321u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B013C0u) goto L_08B013C0;
    return;
L_08B013C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B013D4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08B013D4u) goto L_08B013D4;
    return;
L_08B013D4:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B013E8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B013E8u) goto L_08B013E8;
    return;
L_08B013E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B013F4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B013F4u) goto L_08B013F4;
    return;
L_08B013F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0141Cu);
    ctx.fpr[13] = ctx.fpr[0] / ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B0141Cu) goto L_08B0141C;
    return;
L_08B0141C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01A18;
      }
      goto L_08B01424;
    }
L_08B01424:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, 16000u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[14];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_fpr_bits(22, ctx.fpr_bits(20));
      if (branch_taken) {
          goto L_08B01454;
      }
      goto L_08B01450;
    }
L_08B01450:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    goto L_08B01454;
L_08B01454:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[6] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(15)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.fpr[2] = ctx.fpr[3] - ctx.fpr[20];
    ctx.set_gpr(18, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    ctx.set_gpr(2, 16384u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.fpr[11] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(11)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-600));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[4];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[4];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[4] + ctx.fpr[6];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[0];
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[0];
    ctx.fpr[14] = ctx.fpr[4] + ctx.fpr[14];
    ctx.fpr[11] = ctx.fpr[11] / ctx.fpr[0];
    ctx.fpr[12] = ctx.fpr[4] + ctx.fpr[12];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[1];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[11] = ctx.fpr[12] - ctx.fpr[11];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[1] = ctx.fpr[11] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = ctx.fpr[10] - ctx.fpr[4];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[10] = ctx.fpr[4] + ctx.fpr[1];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(9)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[10] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = ctx.fpr[8] - ctx.fpr[4];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[4] + ctx.fpr[1];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(7)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[8] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = ctx.fpr[6] - ctx.fpr[4];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[1];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[21] = ctx.fpr[3] - ctx.fpr[22];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B015E8;
L_08B015E8:
    ctx.set_gpr(31, 0x08B015F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B015F0u) goto L_08B015F0;
    return;
L_08B015F0:
    ctx.set_gpr(31, 0x08B015F8u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B015F8u) goto L_08B015F8;
    return;
L_08B015F8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01618u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01618:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01630u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B01630u) goto L_08B01630;
    return;
L_08B01630:
    ctx.set_gpr(31, 0x08B01638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01638u) goto L_08B01638;
    return;
L_08B01638:
    ctx.set_gpr(31, 0x08B01640u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01640u) goto L_08B01640;
    return;
L_08B01640:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01660u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01660:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01674u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01674u) goto L_08B01674;
    return;
L_08B01674:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08B0183C;
    }
    goto L_08B01680;
L_08B01680:
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1492));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0169C:
    ctx.set_gpr(31, 0x08B016A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B016A4u) goto L_08B016A4;
    return;
L_08B016A4:
    ctx.set_gpr(31, 0x08B016ACu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B016ACu) goto L_08B016AC;
    return;
L_08B016AC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B016CCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B016CC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08B016F0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(22));
    goto L_08B01A54;
L_08B016F0:
    ctx.set_gpr(31, 0x08B016F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B016F8u) goto L_08B016F8;
    return;
L_08B016F8:
    ctx.set_gpr(31, 0x08B01700u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01700u) goto L_08B01700;
    return;
L_08B01700:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01720u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01720:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B0173Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B0173Cu) goto L_08B0173C;
    return;
L_08B0173C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01838;
      }
      goto L_08B01744;
    }
L_08B01744:
    ctx.set_gpr(31, 0x08B0174Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0174Cu) goto L_08B0174C;
    return;
L_08B0174C:
    ctx.set_gpr(31, 0x08B01754u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01754u) goto L_08B01754;
    return;
L_08B01754:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01774u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01774:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B01790u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01790u) goto L_08B01790;
    return;
L_08B01790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01838;
      }
      goto L_08B01798;
    }
L_08B01798:
    ctx.set_gpr(31, 0x08B017A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B017A0u) goto L_08B017A0;
    return;
L_08B017A0:
    ctx.set_gpr(31, 0x08B017A8u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B017A8u) goto L_08B017A8;
    return;
L_08B017A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B017C8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B017C8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B017ECu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    goto L_08B01A54;
L_08B017EC:
    ctx.set_gpr(31, 0x08B017F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B017F4u) goto L_08B017F4;
    return;
L_08B017F4:
    ctx.set_gpr(31, 0x08B017FCu);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B017FCu) goto L_08B017FC;
    return;
L_08B017FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B0181Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B0181C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08B01838u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01838u) goto L_08B01838;
    return;
L_08B01838:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08B0183C;
L_08B0183C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 9 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B015E8;
      }
      goto L_08B01850;
    }
L_08B01850:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01A18;
      }
      goto L_08B01868;
    }
L_08B01868:
    ctx.set_gpr(2, 60293u << 16u);
    ctx.set_gpr(18, ctx.gpr[2] | 7864u);
    ctx.set_gpr(2, 16286u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08B01880u);
    ctx.set_gpr(17, ctx.gpr[2] | 47185u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01880u) goto L_08B01880;
    return;
L_08B01880:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01894u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08B01894u) goto L_08B01894;
    return;
L_08B01894:
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B018A0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B018A0u) goto L_08B018A0;
    return;
L_08B018A0:
    ctx.set_gpr(31, 0x08B018A8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B018A8u) goto L_08B018A8;
    return;
L_08B018A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-528)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B018CCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B018CC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x08B018DCu);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B018DCu) goto L_08B018DC;
    return;
L_08B018DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B018F0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B018F0u) goto L_08B018F0;
    return;
L_08B018F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B018FCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B018FCu) goto L_08B018FC;
    return;
L_08B018FC:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08B01918u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01918u) goto L_08B01918;
    return;
L_08B01918:
    ctx.set_gpr(31, 0x08B01920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01920u) goto L_08B01920;
    return;
L_08B01920:
    ctx.set_gpr(31, 0x08B01928u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01928u) goto L_08B01928;
    return;
L_08B01928:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-504)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B0194Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B0194C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x08B0195Cu);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0195Cu) goto L_08B0195C;
    return;
L_08B0195C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01970u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01970u) goto L_08B01970;
    return;
L_08B01970:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0197Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B0197Cu) goto L_08B0197C;
    return;
L_08B0197C:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08B01998u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01998u) goto L_08B01998;
    return;
L_08B01998:
    ctx.set_gpr(31, 0x08B019A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B019A0u) goto L_08B019A0;
    return;
L_08B019A0:
    ctx.set_gpr(31, 0x08B019A8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B019A8u) goto L_08B019A8;
    return;
L_08B019A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B019CCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B019CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x08B019DCu);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(216)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B019DCu) goto L_08B019DC;
    return;
L_08B019DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B019F0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B019F0u) goto L_08B019F0;
    return;
L_08B019F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B019FCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B019FCu) goto L_08B019FC;
    return;
L_08B019FC:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08B01A18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08B01A18u) goto L_08B01A18;
    return;
L_08B01A18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08B01A1C;
L_08B01A1C:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01A54:
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
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 572u, 0x08847728u>(ctx, &aot_mem); return;
L_08B01A84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_fpr_bits(20, ctx.fpr_bits(14));
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(31, 0x08B01AD0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08B00C50;
L_08B01AD0:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[21])) || ctx.fpr[22] <= ctx.fpr[21]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, ctx.gpr[18] << 4u);
        goto L_08B01B08;
    }
    goto L_08B01AE0;
L_08B01AE0:
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[20];
    ctx.set_gpr(3, 17280u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[22];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[18] << 4u);
    goto L_08B01B08;
L_08B01B08:
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B01CAC;
      }
      goto L_08B01B2C;
    }
L_08B01B2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B01BFC;
      }
      goto L_08B01B38;
    }
L_08B01B38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B01B4C;
      }
      goto L_08B01B44;
    }
L_08B01B44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B01D58;
      }
      goto L_08B01B4C;
    }
L_08B01B4C:
    ctx.set_gpr(31, 0x08B01B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01B54u) goto L_08B01B54;
    return;
L_08B01B54:
    ctx.set_gpr(31, 0x08B01B5Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01B5Cu) goto L_08B01B5C;
    return;
L_08B01B5C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-336)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01B80u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01B80:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B01BA0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01BA0u) goto L_08B01BA0;
    return;
L_08B01BA0:
    ctx.set_gpr(31, 0x08B01BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01BA8u) goto L_08B01BA8;
    return;
L_08B01BA8:
    ctx.set_gpr(31, 0x08B01BB0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01BB0u) goto L_08B01BB0;
    return;
L_08B01BB0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-312)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01BD4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01BD4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B01BF4u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01BF4u) goto L_08B01BF4;
    return;
L_08B01BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01D54;
      }
      goto L_08B01BFC;
    }
L_08B01BFC:
    ctx.set_gpr(31, 0x08B01C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01C04u) goto L_08B01C04;
    return;
L_08B01C04:
    ctx.set_gpr(31, 0x08B01C0Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01C0Cu) goto L_08B01C0C;
    return;
L_08B01C0C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-384)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01C30u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01C30:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B01C50u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01C50u) goto L_08B01C50;
    return;
L_08B01C50:
    ctx.set_gpr(31, 0x08B01C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01C58u) goto L_08B01C58;
    return;
L_08B01C58:
    ctx.set_gpr(31, 0x08B01C60u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01C60u) goto L_08B01C60;
    return;
L_08B01C60:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-360)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01C84u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01C84:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B01CA4u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01CA4u) goto L_08B01CA4;
    return;
L_08B01CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01D54;
      }
      goto L_08B01CAC;
    }
L_08B01CAC:
    ctx.set_gpr(31, 0x08B01CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01CB4u) goto L_08B01CB4;
    return;
L_08B01CB4:
    ctx.set_gpr(31, 0x08B01CBCu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01CBCu) goto L_08B01CBC;
    return;
L_08B01CBC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-288)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01CE0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01CE0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B01D00u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01D00u) goto L_08B01D00;
    return;
L_08B01D00:
    ctx.set_gpr(31, 0x08B01D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B01D08u) goto L_08B01D08;
    return;
L_08B01D08:
    ctx.set_gpr(31, 0x08B01D10u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B01D10u) goto L_08B01D10;
    return;
L_08B01D10:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-360)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B01D34u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B00B08;
L_08B01D34:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B01D54u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01D54u) goto L_08B01D54;
    return;
L_08B01D54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08B01D58;
L_08B01D58:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01D7C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01D98;
      }
      goto L_08B01D90;
    }
L_08B01D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DF4;
      }
      goto L_08B01D98;
    }
L_08B01D98:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01DB0;
      }
      goto L_08B01DA8;
    }
L_08B01DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DF4;
      }
      goto L_08B01DB0;
    }
L_08B01DB0:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01DC8;
      }
      goto L_08B01DC0;
    }
L_08B01DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DF4;
      }
      goto L_08B01DC8;
    }
L_08B01DC8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[14];
        goto L_08B01DE0;
    }
    goto L_08B01DD8;
L_08B01DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01DF4;
      }
      goto L_08B01DE0;
    }
L_08B01DE0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[14];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    goto L_08B01DF4;
L_08B01DF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x08B01E48u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01E48u) goto L_08B01E48;
    return;
L_08B01E48:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B01E54u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x08AF4580u>(ctx, &aot_mem) && ctx.pc == 0x08B01E54u) goto L_08B01E54;
    return;
L_08B01E54:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08B01E60u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 92u, 0x08AF4588u>(ctx, &aot_mem) && ctx.pc == 0x08B01E60u) goto L_08B01E60;
    return;
L_08B01E60:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08B01E6Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 89u, 0x08AF4570u>(ctx, &aot_mem) && ctx.pc == 0x08B01E6Cu) goto L_08B01E6C;
    return;
L_08B01E6C:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08B01E78u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 90u, 0x08AF4578u>(ctx, &aot_mem) && ctx.pc == 0x08B01E78u) goto L_08B01E78;
    return;
L_08B01E78:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08B01ECC;
      }
      goto L_08B01E80;
    }
L_08B01E80:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1428)));
        goto L_08B01E9C;
    }
    goto L_08B01E94;
L_08B01E94:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[21] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B01EC8;
      }
      goto L_08B01E9C;
    }
L_08B01E9C:
    ctx.set_gpr(2, 16076u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[21] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[0])) || ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01ECC;
      }
      goto L_08B01EBC;
    }
L_08B01EBC:
    ctx.fpr[21] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08B01ECC;
      }
      goto L_08B01EC8;
    }
L_08B01EC8:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08B01ECC;
L_08B01ECC:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
        goto L_08B01F58;
    }
    goto L_08B01ED4;
L_08B01ED4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1428)));
        goto L_08B01EF0;
    }
    goto L_08B01EE8;
L_08B01EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08B01F38;
      }
      goto L_08B01EF0;
    }
L_08B01EF0:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01F54;
      }
      goto L_08B01F10;
    }
L_08B01F10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B01F20u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08B01FD4;
L_08B01F20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01F54;
      }
      goto L_08B01F28;
    }
L_08B01F28:
    ctx.set_gpr(31, 0x08B01F30u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B01FCC;
L_08B01F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01F54;
      }
      goto L_08B01F38;
    }
L_08B01F38:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B01F44u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08B01FD4;
L_08B01F44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01F54;
      }
      goto L_08B01F4C;
    }
L_08B01F4C:
    ctx.set_gpr(31, 0x08B01F54u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B01FCC;
L_08B01F54:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B01F58;
L_08B01F58:
    ctx.set_gpr(31, 0x08B01F60u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B01FC4;
L_08B01F60:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08B01F6Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B01FBC;
L_08B01F6C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B01F78u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B01FB4;
L_08B01F78:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B01F84u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    goto L_08B01FAC;
L_08B01F84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FAC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FB4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FBC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FC4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FCC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FD4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01FDC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 17392u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    goto L_08B02034;
L_08B02034:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B02034;
      }
      goto L_08B0206C;
    }
L_08B0206C:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08B020B4;
    }
    goto L_08B0209C;
L_08B0209C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B020B0;
      }
      goto L_08B020A8;
    }
L_08B020A8:
    ctx.set_gpr(31, 0x08B020B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08B020B0u) goto L_08B020B0;
    return;
L_08B020B0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08B020B4;
L_08B020B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B020C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B020F0;
      }
      goto L_08B020E8;
    }
L_08B020E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B02208;
      }
      goto L_08B020F0;
    }
L_08B020F0:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B020F8;
L_08B020F8:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(18, 2226u << 16u);
        goto L_08B0213C;
    }
    goto L_08B02100;
L_08B02100:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02110;
      }
      goto L_08B02108;
    }
L_08B02108:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B021E0;
      }
      goto L_08B02110;
    }
L_08B02110:
    ctx.set_gpr(31, 0x08B02118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02118u) goto L_08B02118;
    return;
L_08B02118:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0212Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0212Cu) goto L_08B0212C;
    return;
L_08B0212C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B021DC;
      }
      goto L_08B02134;
    }
L_08B02134:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B021DC;
      }
      goto L_08B0213C;
    }
L_08B0213C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-72));
    goto L_08B02144;
L_08B02144:
    ctx.set_gpr(31, 0x08B0214Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0214Cu) goto L_08B0214C;
    return;
L_08B0214C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02164u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B02164u) goto L_08B02164;
    return;
L_08B02164:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08B021BC;
    }
    goto L_08B02170;
L_08B02170:
    ctx.set_gpr(31, 0x08B02178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02178u) goto L_08B02178;
    return;
L_08B02178:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08B021B8u);
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B021B8u) goto L_08B021B8;
    return;
L_08B021B8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08B021BC;
L_08B021BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08B02144;
      }
      goto L_08B021C8;
    }
L_08B021C8:
    ctx.set_gpr(31, 0x08B021D0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B03D2C;
L_08B021D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    goto L_08B021DC;
L_08B021DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B021E0;
L_08B021E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02208;
      }
      goto L_08B021E8;
    }
L_08B021E8:
    ctx.set_gpr(31, 0x08B021F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08B021F0u) goto L_08B021F0;
    return;
L_08B021F0:
    ctx.set_gpr(31, 0x08B021F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B021F8u) goto L_08B021F8;
    return;
L_08B021F8:
    ctx.set_gpr(31, 0x08B02200u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08B02200u) goto L_08B02200;
    return;
L_08B02200:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B020F8;
      }
      goto L_08B02208;
    }
L_08B02208:
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
L_08B02224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B02238u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 47u, 0x08B043B8u>(ctx, &aot_mem) && ctx.pc == 0x08B02238u) goto L_08B02238;
    return;
L_08B02238:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    goto L_08B02244;
L_08B02244:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B02244;
      }
      goto L_08B02268;
    }
L_08B02268:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B022AC;
    }
    goto L_08B022A0;
L_08B022A0:
    ctx.set_gpr(31, 0x08B022A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B02694;
L_08B022A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B022AC;
L_08B022AC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B022B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 11 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
        goto L_08B022E0;
    }
    goto L_08B022D8;
L_08B022D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B023E4;
      }
      goto L_08B022E0;
    }
L_08B022E0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08B02304u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02304u) goto L_08B02304;
    return;
L_08B02304:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02328u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B02328u) goto L_08B02328;
    return;
L_08B02328:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08B023E4;
    }
    goto L_08B02334;
L_08B02334:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02350u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02350u) goto L_08B02350;
    return;
L_08B02350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B023C4u);
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08B023C4u) goto L_08B023C4;
    return;
L_08B023C4:
    ctx.set_gpr(31, 0x08B023CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B023CCu) goto L_08B023CC;
    return;
L_08B023CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B023E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B023E0u) goto L_08B023E0;
    return;
L_08B023E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B023E4;
L_08B023E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B023F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B024E4;
      }
      goto L_08B0241C;
    }
L_08B0241C:
    ctx.set_gpr(31, 0x08B02424u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08B03D2C;
L_08B02424:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
        goto L_08B02444;
    }
    goto L_08B02430;
L_08B02430:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02444;
      }
      goto L_08B02438;
    }
L_08B02438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02444;
      }
      goto L_08B02440;
    }
L_08B02440:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08B02444;
L_08B02444:
    ctx.set_gpr(31, 0x08B0244Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0244Cu) goto L_08B0244C;
    return;
L_08B0244C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02480u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02480u) goto L_08B02480;
    return;
L_08B02480:
    ctx.set_gpr(31, 0x08B02488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02488u) goto L_08B02488;
    return;
L_08B02488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B024A8u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B024A8u) goto L_08B024A8;
    return;
L_08B024A8:
    ctx.set_gpr(31, 0x08B024B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B024B0u) goto L_08B024B0;
    return;
L_08B024B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B024D0u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B024D0u) goto L_08B024D0;
    return;
L_08B024D0:
    ctx.set_gpr(31, 0x08B024D8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B03238;
L_08B024D8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    goto L_08B024E4;
L_08B024E4:
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
L_08B024FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B02520;
      }
      goto L_08B02518;
    }
L_08B02518:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B025E8;
      }
      goto L_08B02520;
    }
L_08B02520:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0252Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0252Cu) goto L_08B0252C;
    return;
L_08B0252C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08B02538u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B02538u) goto L_08B02538;
    return;
L_08B02538:
    ctx.set_gpr(31, 0x08B02540u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02540u) goto L_08B02540;
    return;
L_08B02540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02570u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B02570u) goto L_08B02570;
    return;
L_08B02570:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B02580u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 18u, 0x08B0416Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02580u) goto L_08B02580;
    return;
L_08B02580:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, 16896u << 16u);
    ctx.set_gpr(3, 17392u << 16u);
    ctx.set_gpr(2, 49568u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B025BC;
      }
      goto L_08B025B8;
    }
L_08B025B8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B025BC;
L_08B025BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B025D4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 81u, 0x08B04648u>(ctx, &aot_mem) && ctx.pc == 0x08B025D4u) goto L_08B025D4;
    return;
L_08B025D4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08B025E8;
    }
    goto L_08B025DC;
L_08B025DC:
    ctx.set_gpr(31, 0x08B025E4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B02694;
L_08B025E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B025E8;
L_08B025E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B025FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B02620;
      }
      goto L_08B02618;
    }
L_08B02618:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B02680;
      }
      goto L_08B02620;
    }
L_08B02620:
    ctx.set_gpr(31, 0x08B02628u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B02628u) goto L_08B02628;
    return;
L_08B02628:
    ctx.set_gpr(31, 0x08B02630u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02630u) goto L_08B02630;
    return;
L_08B02630:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02660u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B02660u) goto L_08B02660;
    return;
L_08B02660:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 17408u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B02680;
L_08B02680:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B026F0;
    }
    goto L_08B026A8;
L_08B026A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
        goto L_08B026E0;
    }
    goto L_08B026B8;
L_08B026B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
        goto L_08B026CC;
    }
    goto L_08B026C4;
L_08B026C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B026EC;
      }
      goto L_08B026CC;
    }
L_08B026CC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B026D8u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08B027E4;
L_08B026D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B026EC;
      }
      goto L_08B026E0;
    }
L_08B026E0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B026ECu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08B02D64;
L_08B026EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B026F0;
L_08B026F0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B026F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
        goto L_08B0270C;
    }
    goto L_08B02704;
L_08B02704:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B02730;
      }
      goto L_08B0270C;
    }
L_08B0270C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08B02730;
    }
    goto L_08B02718;
L_08B02718:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0272C;
      }
      goto L_08B02724;
    }
L_08B02724:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B02730;
      }
      goto L_08B0272C;
    }
L_08B0272C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B02730;
L_08B02730:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B02758;
    }
    goto L_08B0274C;
L_08B0274C:
    ctx.set_gpr(31, 0x08B02754u);
    // nop
    goto L_08B02760;
L_08B02754:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B02758;
L_08B02758:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08B027D0;
      }
      goto L_08B02780;
    }
L_08B02780:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_08B02798;
    }
    goto L_08B0278C;
L_08B0278C:
    ctx.set_gpr(31, 0x08B02794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 2u, 0x08B04008u>(ctx, &aot_mem) && ctx.pc == 0x08B02794u) goto L_08B02794;
    return;
L_08B02794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_08B02798;
L_08B02798:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B027C8;
    }
    goto L_08B027A4;
L_08B027A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B027B8;
    }
    goto L_08B027B0;
L_08B027B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B027D4;
      }
      goto L_08B027B8;
    }
L_08B027B8:
    ctx.set_gpr(31, 0x08B027C0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08B027E4;
L_08B027C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B027D0;
      }
      goto L_08B027C8;
    }
L_08B027C8:
    ctx.set_gpr(31, 0x08B027D0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08B02D64;
L_08B027D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B027D4;
L_08B027D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B027E4:
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
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B02840;
      }
      goto L_08B0283C;
    }
L_08B0283C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B02840;
L_08B02840:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08B0284Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B0284Cu) goto L_08B0284C;
    return;
L_08B0284C:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02874u);
    ctx.set_gpr(21, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02874u) goto L_08B02874;
    return;
L_08B02874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08B02888u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02888u) goto L_08B02888;
    return;
L_08B02888:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B0289Cu);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0289Cu) goto L_08B0289C;
    return;
L_08B0289C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B028B0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B028B0u) goto L_08B028B0;
    return;
L_08B028B0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B028C4u);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B028C4u) goto L_08B028C4;
    return;
L_08B028C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B028D8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B028D8u) goto L_08B028D8;
    return;
L_08B028D8:
    ctx.set_gpr(31, 0x08B028E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B028E0u) goto L_08B028E0;
    return;
L_08B028E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B028F0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B028F0u) goto L_08B028F0;
    return;
L_08B028F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08B02BB8;
      }
      goto L_08B02900;
    }
L_08B02900:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16025u << 16u);
        goto L_08B0293C;
    }
    goto L_08B0290C;
L_08B0290C:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
        goto L_08B0291C;
    }
    goto L_08B02914;
L_08B02914:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_08B02D04;
      }
      goto L_08B0291C;
    }
L_08B0291C:
    ctx.set_gpr(31, 0x08B02924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02924u) goto L_08B02924;
    return;
L_08B02924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02934u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    goto L_08B02D34;
L_08B02934:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(2, 16025u << 16u);
    goto L_08B0293C;
L_08B0293C:
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08B02954u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02954u) goto L_08B02954;
    return;
L_08B02954:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B02968u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B02968u) goto L_08B02968;
    return;
L_08B02968:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B0297Cu);
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0297Cu) goto L_08B0297C;
    return;
L_08B0297C:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B02990u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02990u) goto L_08B02990;
    return;
L_08B02990:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16339u << 16u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 16384u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 13107u);
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(31, 0x08B029B0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B029B0u) goto L_08B029B0;
    return;
L_08B029B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B029C4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B029C4u) goto L_08B029C4;
    return;
L_08B029C4:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B029D4u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B029D4u) goto L_08B029D4;
    return;
L_08B029D4:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B029E8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B029E8u) goto L_08B029E8;
    return;
L_08B029E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B029F4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B029F4u) goto L_08B029F4;
    return;
L_08B029F4:
    ctx.set_gpr(2, 49568u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08B02A10;
      }
      goto L_08B02A0C;
    }
L_08B02A0C:
    ctx.set_fpr_bits(21, ctx.fpr_bits(1));
    goto L_08B02A10;
L_08B02A10:
    ctx.set_gpr(31, 0x08B02A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02A18u) goto L_08B02A18;
    return;
L_08B02A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02A30u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B02A30u) goto L_08B02A30;
    return;
L_08B02A30:
    ctx.set_gpr(31, 0x08B02A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02A38u) goto L_08B02A38;
    return;
L_08B02A38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02A48u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B02A48u) goto L_08B02A48;
    return;
L_08B02A48:
    ctx.set_gpr(31, 0x08B02A50u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02A50u) goto L_08B02A50;
    return;
L_08B02A50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02A70u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B02A70u) goto L_08B02A70;
    return;
L_08B02A70:
    ctx.set_gpr(2, 15897u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B02AAC;
    }
    goto L_08B02AA4;
L_08B02AA4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B02AAC;
L_08B02AAC:
    ctx.set_gpr(31, 0x08B02AB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0334C;
L_08B02AB4:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B02AC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02AC4u) goto L_08B02AC4;
    return;
L_08B02AC4:
    ctx.set_gpr(2, 15897u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02B00;
      }
      goto L_08B02AFC;
    }
L_08B02AFC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(255));
    goto L_08B02B00;
L_08B02B00:
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B02B10;
    }
    goto L_08B02B08;
L_08B02B08:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B02B10;
L_08B02B10:
    ctx.set_gpr(31, 0x08B02B18u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B0334C;
L_08B02B18:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B02B28u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02B28u) goto L_08B02B28;
    return;
L_08B02B28:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02B6Cu);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02B6Cu) goto L_08B02B6C;
    return;
L_08B02B6C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B02B8Cu);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02B8Cu) goto L_08B02B8C;
    return;
L_08B02B8C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B02D00;
      }
      goto L_08B02BAC;
    }
L_08B02BAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B02D00;
      }
      goto L_08B02BB8;
    }
L_08B02BB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B02BC4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 18u, 0x08B0416Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02BC4u) goto L_08B02BC4;
    return;
L_08B02BC4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, 16896u << 16u);
    ctx.set_gpr(3, 17392u << 16u);
    ctx.set_gpr(2, 49568u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[21] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B02C0C;
      }
      goto L_08B02BFC;
    }
L_08B02BFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    goto L_08B02C0C;
L_08B02C0C:
    ctx.set_gpr(31, 0x08B02C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02C14u) goto L_08B02C14;
    return;
L_08B02C14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02C2Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B02C2Cu) goto L_08B02C2C;
    return;
L_08B02C2C:
    ctx.set_gpr(31, 0x08B02C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02C34u) goto L_08B02C34;
    return;
L_08B02C34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02C44u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B02C44u) goto L_08B02C44;
    return;
L_08B02C44:
    ctx.set_gpr(31, 0x08B02C4Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02C4Cu) goto L_08B02C4C;
    return;
L_08B02C4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02C6Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B02C6Cu) goto L_08B02C6C;
    return;
L_08B02C6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B02C78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0334C;
L_08B02C78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B02C88u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02C88u) goto L_08B02C88;
    return;
L_08B02C88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B02C94u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B0334C;
L_08B02C94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B02CA4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02CA4u) goto L_08B02CA4;
    return;
L_08B02CA4:
    ctx.set_gpr(31, 0x08B02CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02CACu) goto L_08B02CAC;
    return;
L_08B02CAC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B02CCCu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02CCCu) goto L_08B02CCC;
    return;
L_08B02CCC:
    ctx.set_gpr(31, 0x08B02CD4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B03238;
L_08B02CD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B02CFC;
      }
      goto L_08B02CF4;
    }
L_08B02CF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    goto L_08B02CFC;
L_08B02CFC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08B02D00;
L_08B02D00:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    goto L_08B02D04;
L_08B02D04:
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
L_08B02D34:
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
    (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 178u, 0x088AC9B8u>(ctx, &aot_mem); return;
L_08B02D64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B02DBC;
      }
      goto L_08B02DB8;
    }
L_08B02DB8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B02DBC;
L_08B02DBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08B02DC8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B02DC8u) goto L_08B02DC8;
    return;
L_08B02DC8:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02DF0u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02DF0u) goto L_08B02DF0;
    return;
L_08B02DF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02E00u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B02E00u) goto L_08B02E00;
    return;
L_08B02E00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08B03058;
      }
      goto L_08B02E10;
    }
L_08B02E10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16025u << 16u);
        goto L_08B02E58;
    }
    goto L_08B02E1C;
L_08B02E1C:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
        goto L_08B02E2C;
    }
    goto L_08B02E24;
L_08B02E24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08B0320C;
      }
      goto L_08B02E2C;
    }
L_08B02E2C:
    ctx.set_gpr(31, 0x08B02E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02E34u) goto L_08B02E34;
    return;
L_08B02E34:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02E50u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B02D34;
L_08B02E50:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(2, 16025u << 16u);
    goto L_08B02E58;
L_08B02E58:
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08B02E70u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02E70u) goto L_08B02E70;
    return;
L_08B02E70:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B02E84u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B02E84u) goto L_08B02E84;
    return;
L_08B02E84:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08B02E98u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02E98u) goto L_08B02E98;
    return;
L_08B02E98:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B02EACu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02EACu) goto L_08B02EAC;
    return;
L_08B02EAC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16339u << 16u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 16384u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 13107u);
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(31, 0x08B02ECCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08B02ECCu) goto L_08B02ECC;
    return;
L_08B02ECC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B02EE0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08B02EE0u) goto L_08B02EE0;
    return;
L_08B02EE0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B02EF0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02EF0u) goto L_08B02EF0;
    return;
L_08B02EF0:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B02F04u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08B02F04u) goto L_08B02F04;
    return;
L_08B02F04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B02F10u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08B02F10u) goto L_08B02F10;
    return;
L_08B02F10:
    ctx.set_gpr(31, 0x08B02F18u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02F18u) goto L_08B02F18;
    return;
L_08B02F18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02F30u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B02F30u) goto L_08B02F30;
    return;
L_08B02F30:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B02F44u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02F44u) goto L_08B02F44;
    return;
L_08B02F44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02F54u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B02F54u) goto L_08B02F54;
    return;
L_08B02F54:
    ctx.set_gpr(31, 0x08B02F5Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B02F5Cu) goto L_08B02F5C;
    return;
L_08B02F5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B02F7Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B02F7Cu) goto L_08B02F7C;
    return;
L_08B02F7C:
    ctx.set_gpr(2, 15897u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02FB8;
      }
      goto L_08B02FB4;
    }
L_08B02FB4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    goto L_08B02FB8;
L_08B02FB8:
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B02FC8;
    }
    goto L_08B02FC0;
L_08B02FC0:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08B02FC8;
L_08B02FC8:
    ctx.set_gpr(31, 0x08B02FD0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02FD0u) goto L_08B02FD0;
    return;
L_08B02FD0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[2];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03000u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03000u) goto L_08B03000;
    return;
L_08B03000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B0302Cu);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0302Cu) goto L_08B0302C;
    return;
L_08B0302C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B03208;
      }
      goto L_08B0304C;
    }
L_08B0304C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B03208;
      }
      goto L_08B03058;
    }
L_08B03058:
    ctx.set_gpr(31, 0x08B03060u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03060u) goto L_08B03060;
    return;
L_08B03060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B03078u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B03078u) goto L_08B03078;
    return;
L_08B03078:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B0308Cu);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0308Cu) goto L_08B0308C;
    return;
L_08B0308C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B0309Cu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B0309Cu) goto L_08B0309C;
    return;
L_08B0309C:
    ctx.set_gpr(31, 0x08B030A4u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B030A4u) goto L_08B030A4;
    return;
L_08B030A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B030C4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B030C4u) goto L_08B030C4;
    return;
L_08B030C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B030D0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B0334C;
L_08B030D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B030E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B030E0u) goto L_08B030E0;
    return;
L_08B030E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B030ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0334C;
L_08B030EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B030FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 65u, 0x08B0450Cu>(ctx, &aot_mem) && ctx.pc == 0x08B030FCu) goto L_08B030FC;
    return;
L_08B030FC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03110u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03110u) goto L_08B03110;
    return;
L_08B03110:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B03130u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03130u) goto L_08B03130;
    return;
L_08B03130:
    ctx.set_gpr(31, 0x08B03138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03138u) goto L_08B03138;
    return;
L_08B03138:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B0314Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0314Cu) goto L_08B0314C;
    return;
L_08B0314C:
    ctx.set_gpr(31, 0x08B03154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03154u) goto L_08B03154;
    return;
L_08B03154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03168u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03168u) goto L_08B03168;
    return;
L_08B03168:
    ctx.set_gpr(31, 0x08B03170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03170u) goto L_08B03170;
    return;
L_08B03170:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03184u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03184u) goto L_08B03184;
    return;
L_08B03184:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B031E8;
      }
      goto L_08B03190;
    }
L_08B03190:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08B03194;
L_08B03194:
    ctx.set_gpr(31, 0x08B0319Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0319Cu) goto L_08B0319C;
    return;
L_08B0319C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B031D4u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B031D4u) goto L_08B031D4;
    return;
L_08B031D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B03194;
      }
      goto L_08B031E8;
    }
L_08B031E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B03208;
L_08B03208:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08B0320C;
L_08B0320C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B0332C;
      }
      goto L_08B03260;
    }
L_08B03260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08B03330;
    }
    goto L_08B0326C;
L_08B0326C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B0332C;
      }
      goto L_08B03274;
    }
L_08B03274:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08B03278;
L_08B03278:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B03284u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B034D8;
L_08B03284:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B03294u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B03A20;
L_08B03294:
    ctx.set_gpr(31, 0x08B0329Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0329Cu) goto L_08B0329C;
    return;
L_08B0329C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B032D8u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B032D8u) goto L_08B032D8;
    return;
L_08B032D8:
    ctx.set_gpr(31, 0x08B032E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B032E0u) goto L_08B032E0;
    return;
L_08B032E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03318u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03318u) goto L_08B03318;
    return;
L_08B03318:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B03278;
      }
      goto L_08B0332C;
    }
L_08B0332C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B03330;
L_08B03330:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0334C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B034B8;
      }
      goto L_08B03374;
    }
L_08B03374:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B03428;
    }
    goto L_08B03380;
L_08B03380:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
        goto L_08B03390;
    }
    goto L_08B03388;
L_08B03388:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B034BC;
      }
      goto L_08B03390;
    }
L_08B03390:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B034B8;
      }
      goto L_08B03398;
    }
L_08B03398:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B034B8;
      }
      goto L_08B033A0;
    }
L_08B033A0:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08B033A4;
L_08B033A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B033B4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08B036D8;
L_08B033B4:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B033C8u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08B03B30;
L_08B033C8:
    ctx.set_gpr(31, 0x08B033D0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B033D0u) goto L_08B033D0;
    return;
L_08B033D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B0340Cu);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B0340Cu) goto L_08B0340C;
    return;
L_08B0340C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B033A4;
      }
      goto L_08B03420;
    }
L_08B03420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B034B8;
      }
      goto L_08B03428;
    }
L_08B03428:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B034B8;
      }
      goto L_08B03430;
    }
L_08B03430:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B034B8;
      }
      goto L_08B03438;
    }
L_08B03438:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08B0343C;
L_08B0343C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0344Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08B036D8;
L_08B0344C:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B03460u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08B03B30;
L_08B03460:
    ctx.set_gpr(31, 0x08B03468u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03468u) goto L_08B03468;
    return;
L_08B03468:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B034A4u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B034A4u) goto L_08B034A4;
    return;
L_08B034A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0343C;
      }
      goto L_08B034B8;
    }
L_08B034B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B034BC;
L_08B034BC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B034D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B0350C;
      }
      goto L_08B03504;
    }
L_08B03504:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B036B8;
      }
      goto L_08B0350C;
    }
L_08B0350C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
        goto L_08B03520;
    }
    goto L_08B03518;
L_08B03518:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B036B8;
      }
      goto L_08B03520;
    }
L_08B03520:
    ctx.set_gpr(31, 0x08B03528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B03528u) goto L_08B03528;
    return;
L_08B03528:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03550u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03550u) goto L_08B03550;
    return;
L_08B03550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03560u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B03560u) goto L_08B03560;
    return;
L_08B03560:
    ctx.set_gpr(31, 0x08B03568u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03568u) goto L_08B03568;
    return;
L_08B03568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03578u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B03578u) goto L_08B03578;
    return;
L_08B03578:
    ctx.set_gpr(31, 0x08B03580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03580u) goto L_08B03580;
    return;
L_08B03580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03590u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B03590u) goto L_08B03590;
    return;
L_08B03590:
    ctx.set_gpr(31, 0x08B03598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03598u) goto L_08B03598;
    return;
L_08B03598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B035A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B035A8u) goto L_08B035A8;
    return;
L_08B035A8:
    ctx.set_gpr(31, 0x08B035B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B035B0u) goto L_08B035B0;
    return;
L_08B035B0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B035E4u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B035E4u) goto L_08B035E4;
    return;
L_08B035E4:
    ctx.set_gpr(31, 0x08B035ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B035ECu) goto L_08B035EC;
    return;
L_08B035EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03620u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03620u) goto L_08B03620;
    return;
L_08B03620:
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08B036B4;
      }
      goto L_08B03638;
    }
L_08B03638:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08B0363C;
L_08B0363C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B0364C;
      }
      goto L_08B03644;
    }
L_08B03644:
    { const bool branch_taken = 0u == 0u;
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
      if (branch_taken) {
          goto L_08B036B8;
      }
      goto L_08B0364C;
    }
L_08B0364C:
    ctx.set_gpr(31, 0x08B03654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03654u) goto L_08B03654;
    return;
L_08B03654:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03688u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B03688u) goto L_08B03688;
    return;
L_08B03688:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, 16704u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08B0363C;
      }
      goto L_08B036B4;
    }
L_08B036B4:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08B036B8;
L_08B036B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B036D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B03710;
      }
      goto L_08B03708;
    }
L_08B03708:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03A00;
      }
      goto L_08B03710;
    }
L_08B03710:
    ctx.set_gpr(31, 0x08B03718u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B03718u) goto L_08B03718;
    return;
L_08B03718:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03740u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03740u) goto L_08B03740;
    return;
L_08B03740:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03750u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B03750u) goto L_08B03750;
    return;
L_08B03750:
    ctx.set_gpr(31, 0x08B03758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03758u) goto L_08B03758;
    return;
L_08B03758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03768u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B03768u) goto L_08B03768;
    return;
L_08B03768:
    ctx.set_gpr(31, 0x08B03770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03770u) goto L_08B03770;
    return;
L_08B03770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03780u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B03780u) goto L_08B03780;
    return;
L_08B03780:
    ctx.set_gpr(31, 0x08B03788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03788u) goto L_08B03788;
    return;
L_08B03788:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B03798u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03798u) goto L_08B03798;
    return;
L_08B03798:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08B038DC;
    }
    goto L_08B037A4;
L_08B037A4:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_08B037B4;
    }
    goto L_08B037AC;
L_08B037AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03A00;
      }
      goto L_08B037B4;
    }
L_08B037B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B037C4;
      }
      goto L_08B037BC;
    }
L_08B037BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03A00;
      }
      goto L_08B037C4;
    }
L_08B037C4:
    ctx.set_gpr(31, 0x08B037CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B037CCu) goto L_08B037CC;
    return;
L_08B037CC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03800u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B03800u) goto L_08B03800;
    return;
L_08B03800:
    ctx.set_gpr(31, 0x08B03808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03808u) goto L_08B03808;
    return;
L_08B03808:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B0383Cu);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B0383Cu) goto L_08B0383C;
    return;
L_08B0383C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08B039FC;
      }
      goto L_08B03858;
    }
L_08B03858:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08B0385C;
L_08B0385C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B0386C;
      }
      goto L_08B03864;
    }
L_08B03864:
    { const bool branch_taken = 0u == 0u;
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
      if (branch_taken) {
          goto L_08B03A00;
      }
      goto L_08B0386C;
    }
L_08B0386C:
    ctx.set_gpr(31, 0x08B03874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03874u) goto L_08B03874;
    return;
L_08B03874:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B038A8u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B038A8u) goto L_08B038A8;
    return;
L_08B038A8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, 16704u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08B0385C;
      }
      goto L_08B038D4;
    }
L_08B038D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B039FC;
      }
      goto L_08B038DC;
    }
L_08B038DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B038EC;
      }
      goto L_08B038E4;
    }
L_08B038E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03A00;
      }
      goto L_08B038EC;
    }
L_08B038EC:
    ctx.set_gpr(31, 0x08B038F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B038F4u) goto L_08B038F4;
    return;
L_08B038F4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03928u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B03928u) goto L_08B03928;
    return;
L_08B03928:
    ctx.set_gpr(31, 0x08B03930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03930u) goto L_08B03930;
    return;
L_08B03930:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03964u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03964u) goto L_08B03964;
    return;
L_08B03964:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 16896u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08B039FC;
      }
      goto L_08B03980;
    }
L_08B03980:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08B03984;
L_08B03984:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B03994;
      }
      goto L_08B0398C;
    }
L_08B0398C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
      if (branch_taken) {
          goto L_08B03A00;
      }
      goto L_08B03994;
    }
L_08B03994:
    ctx.set_gpr(31, 0x08B0399Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0399Cu) goto L_08B0399C;
    return;
L_08B0399C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B039D0u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08B039D0u) goto L_08B039D0;
    return;
L_08B039D0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, 16704u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08B03984;
      }
      goto L_08B039FC;
    }
L_08B039FC:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08B03A00;
L_08B03A00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03A20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B03A48;
      }
      goto L_08B03A40;
    }
L_08B03A40:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03B18;
      }
      goto L_08B03A48;
    }
L_08B03A48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
        goto L_08B03A5C;
    }
    goto L_08B03A54;
L_08B03A54:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03B18;
      }
      goto L_08B03A5C;
    }
L_08B03A5C:
    ctx.set_gpr(31, 0x08B03A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B03A64u) goto L_08B03A64;
    return;
L_08B03A64:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03A8Cu);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03A8Cu) goto L_08B03A8C;
    return;
L_08B03A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03A9Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B03A9Cu) goto L_08B03A9C;
    return;
L_08B03A9C:
    ctx.set_gpr(31, 0x08B03AA4u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03AA4u) goto L_08B03AA4;
    return;
L_08B03AA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B03AB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03AB4u) goto L_08B03AB4;
    return;
L_08B03AB4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03AC0u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03AC0u) goto L_08B03AC0;
    return;
L_08B03AC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03AF4u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03AF4u) goto L_08B03AF4;
    return;
L_08B03AF4:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    goto L_08B03B18;
L_08B03B18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03B30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B03B58;
      }
      goto L_08B03B50;
    }
L_08B03B50:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03D14;
      }
      goto L_08B03B58;
    }
L_08B03B58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B03C44;
      }
      goto L_08B03B64;
    }
L_08B03B64:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_08B03B74;
    }
    goto L_08B03B6C;
L_08B03B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03D14;
      }
      goto L_08B03B74;
    }
L_08B03B74:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
        goto L_08B03B84;
    }
    goto L_08B03B7C;
L_08B03B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B03D18;
      }
      goto L_08B03B84;
    }
L_08B03B84:
    ctx.set_gpr(31, 0x08B03B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B03B8Cu) goto L_08B03B8C;
    return;
L_08B03B8C:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03BB4u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03BB4u) goto L_08B03BB4;
    return;
L_08B03BB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03BC4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B03BC4u) goto L_08B03BC4;
    return;
L_08B03BC4:
    ctx.set_gpr(31, 0x08B03BCCu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03BCCu) goto L_08B03BCC;
    return;
L_08B03BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B03BDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03BDCu) goto L_08B03BDC;
    return;
L_08B03BDC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03BE8u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03BE8u) goto L_08B03BE8;
    return;
L_08B03BE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03C1Cu);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03C1Cu) goto L_08B03C1C;
    return;
L_08B03C1C:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
      if (branch_taken) {
          goto L_08B03D14;
      }
      goto L_08B03C44;
    }
L_08B03C44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
        goto L_08B03C58;
    }
    goto L_08B03C50;
L_08B03C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03D14;
      }
      goto L_08B03C58;
    }
L_08B03C58:
    ctx.set_gpr(31, 0x08B03C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 42u, 0x08B04390u>(ctx, &aot_mem) && ctx.pc == 0x08B03C60u) goto L_08B03C60;
    return;
L_08B03C60:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03C88u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03C88u) goto L_08B03C88;
    return;
L_08B03C88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03C98u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08B03C98u) goto L_08B03C98;
    return;
L_08B03C98:
    ctx.set_gpr(31, 0x08B03CA0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03CA0u) goto L_08B03CA0;
    return;
L_08B03CA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B03CB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03CB0u) goto L_08B03CB0;
    return;
L_08B03CB0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03CBCu);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03CBCu) goto L_08B03CBC;
    return;
L_08B03CBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03CF0u);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03CF0u) goto L_08B03CF0;
    return;
L_08B03CF0:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    goto L_08B03D14;
L_08B03D14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B03D18;
L_08B03D18:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03D2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(31, 0x08B03D60u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03D60u) goto L_08B03D60;
    return;
L_08B03D60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03D70u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B03D70u) goto L_08B03D70;
    return;
L_08B03D70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B03DDC;
      }
      goto L_08B03D7C;
    }
L_08B03D7C:
    ctx.set_gpr(31, 0x08B03D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03D84u) goto L_08B03D84;
    return;
L_08B03D84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03D94u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03D94u) goto L_08B03D94;
    return;
L_08B03D94:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B03DACu);
    ctx.fpr[21] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03DACu) goto L_08B03DAC;
    return;
L_08B03DAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03DBCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B03DBCu) goto L_08B03DBC;
    return;
L_08B03DBC:
    ctx.set_gpr(31, 0x08B03DC4u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03DC4u) goto L_08B03DC4;
    return;
L_08B03DC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03DDCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B03DDCu) goto L_08B03DDC;
    return;
L_08B03DDC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-48)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03DF0u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03DF0u) goto L_08B03DF0;
    return;
L_08B03DF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03E00u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B03E00u) goto L_08B03E00;
    return;
L_08B03E00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B03E6C;
      }
      goto L_08B03E0C;
    }
L_08B03E0C:
    ctx.set_gpr(31, 0x08B03E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03E14u) goto L_08B03E14;
    return;
L_08B03E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03E24u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03E24u) goto L_08B03E24;
    return;
L_08B03E24:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B03E3Cu);
    ctx.fpr[21] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03E3Cu) goto L_08B03E3C;
    return;
L_08B03E3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03E4Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B03E4Cu) goto L_08B03E4C;
    return;
L_08B03E4C:
    ctx.set_gpr(31, 0x08B03E54u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03E54u) goto L_08B03E54;
    return;
L_08B03E54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03E6Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B03E6Cu) goto L_08B03E6C;
    return;
L_08B03E6C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03E80u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03E80u) goto L_08B03E80;
    return;
L_08B03E80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03E90u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B03E90u) goto L_08B03E90;
    return;
L_08B03E90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B03EF0;
      }
      goto L_08B03E9C;
    }
L_08B03E9C:
    ctx.set_gpr(31, 0x08B03EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03EA4u) goto L_08B03EA4;
    return;
L_08B03EA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03EB4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03EB4u) goto L_08B03EB4;
    return;
L_08B03EB4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(31, 0x08B03EC0u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03EC0u) goto L_08B03EC0;
    return;
L_08B03EC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03ED0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B03ED0u) goto L_08B03ED0;
    return;
L_08B03ED0:
    ctx.set_gpr(31, 0x08B03ED8u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03ED8u) goto L_08B03ED8;
    return;
L_08B03ED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03EF0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B03EF0u) goto L_08B03EF0;
    return;
L_08B03EF0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08B03F04u);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03F04u) goto L_08B03F04;
    return;
L_08B03F04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03F14u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08B03F14u) goto L_08B03F14;
    return;
L_08B03F14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B03F74;
      }
      goto L_08B03F20;
    }
L_08B03F20:
    ctx.set_gpr(31, 0x08B03F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03F28u) goto L_08B03F28;
    return;
L_08B03F28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03F38u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08B03F38u) goto L_08B03F38;
    return;
L_08B03F38:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(31, 0x08B03F44u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-8)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03F44u) goto L_08B03F44;
    return;
L_08B03F44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03F54u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08B03F54u) goto L_08B03F54;
    return;
L_08B03F54:
    ctx.set_gpr(31, 0x08B03F5Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03F5Cu) goto L_08B03F5C;
    return;
L_08B03F5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03F74u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B03F74u) goto L_08B03F74;
    return;
L_08B03F74:
    ctx.set_gpr(31, 0x08B03F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03F7Cu) goto L_08B03F7C;
    return;
L_08B03F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03F90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03F90u) goto L_08B03F90;
    return;
L_08B03F90:
    ctx.set_gpr(31, 0x08B03F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03F98u) goto L_08B03F98;
    return;
L_08B03F98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03FACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03FACu) goto L_08B03FAC;
    return;
L_08B03FAC:
    ctx.set_gpr(31, 0x08B03FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03FB4u) goto L_08B03FB4;
    return;
L_08B03FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03FC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03FC8u) goto L_08B03FC8;
    return;
L_08B03FC8:
    ctx.set_gpr(31, 0x08B03FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B03FD0u) goto L_08B03FD0;
    return;
L_08B03FD0:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08B03FE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03FE4u) goto L_08B03FE4;
    return;
L_08B03FE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x08B04000u; return;
}

void recomp_unit_0191(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0191_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_191(Runtime &runtime) {
    runtime.register_generated_unit(191u, 0x08B00000u, 16384u, &recomp_unit_0191, &recomp_unit_0191_entry);
    runtime.register_function(0x08B00000u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00034u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00068u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00070u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00098u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0020Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00214u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0021Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00224u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00248u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0025Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0026Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00274u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0027Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00304u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00308u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0032Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00338u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00358u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00360u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00368u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00374u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00394u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00404u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0041Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00424u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0042Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00438u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00450u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00458u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00460u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0046Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00484u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00488u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00508u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00520u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00528u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00554u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0055Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00584u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00590u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00598u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00604u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00630u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00650u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0067Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00684u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0071Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00724u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00744u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0074Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00770u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00780u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0078Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00794u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0079Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00814u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00870u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0087Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00884u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00894u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00900u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00908u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00928u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00930u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00950u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00984u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0099Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ABCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ACCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ED8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01008u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0101Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01030u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0103Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01058u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0106Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01080u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01094u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0110Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01120u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0112Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01144u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0114Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01154u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01174u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0118Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01198u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0120Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01214u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0121Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0123Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01270u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01278u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01298u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01300u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01308u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01310u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01330u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01344u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0135Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01364u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0136Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01390u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0141Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01424u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01450u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01454u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01618u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01630u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01640u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01660u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01674u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01680u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0169Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01700u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01720u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0173Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01744u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0174Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01754u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01774u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01790u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01798u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0181Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01838u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0183Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01850u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01868u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01880u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01894u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01918u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01920u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01928u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0194Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0195Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01970u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0197Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01998u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01ECCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01ED4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02034u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0206Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02084u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0209Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02100u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02108u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02110u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02118u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0212Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02134u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0213Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02144u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0214Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02164u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02170u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02178u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02200u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02224u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02238u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02244u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02304u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02328u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02334u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02350u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0241Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02424u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02430u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02438u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02440u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02444u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0244Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02480u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02488u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02518u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02520u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0252Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02538u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02540u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02570u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02580u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02618u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02620u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02628u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02630u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02660u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02680u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02694u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02704u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0270Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02718u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02724u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0272Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02730u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02738u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0274Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02754u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02758u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02760u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02780u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0278Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02794u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02798u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B027E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0283Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02840u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0284Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02874u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02888u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0289Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02900u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0290Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02914u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0291Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02924u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02934u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0293Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02954u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02968u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0297Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02990u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02ECCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03000u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0302Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0304Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03058u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03060u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03078u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0308Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0309Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03110u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03130u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03138u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0314Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03154u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03168u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03170u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03184u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03190u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03194u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0319Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0320Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03238u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0326Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03274u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03278u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03284u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03294u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0329Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03318u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0332Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03330u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0334Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03374u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03380u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03388u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03390u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03398u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0340Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03420u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03428u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03430u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03438u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0343Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0344Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03460u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03468u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03504u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0350Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03518u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03520u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03528u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03550u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03560u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03568u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03578u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03580u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03590u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03598u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03620u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0363Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03644u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0364Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03654u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03688u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03708u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03710u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03718u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03740u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03750u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03758u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03768u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03770u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03780u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03788u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03798u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03800u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03808u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0383Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03858u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0385Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03864u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0386Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03874u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03928u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03930u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03964u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03980u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03984u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0398Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03994u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0399Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B039FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03AF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03B8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03BE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03ED0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03ED8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FE4u, &recomp_unit_0191, "recomp_unit_0191");
}
} // namespace psprecomp
