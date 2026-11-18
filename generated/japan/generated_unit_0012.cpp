#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0012[4088] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0,
    34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0,
    73, 0, 0, 0, 74, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0,
    87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0,
    112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0,
    0, 120, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 140, 141, 0, 142, 0, 0, 143, 144, 0, 0, 145, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 152, 153, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 177, 0, 178, 0, 0, 179, 180, 0, 0, 181, 182, 0, 0, 183, 0, 0, 184,
    0, 185, 0, 186, 0, 0, 187, 0, 188, 189, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 195, 0, 0, 196,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0,
    210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 217, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0,
    0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0,
    234, 0, 0, 235, 0, 0, 236, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0,
    0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 267, 0, 268, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0,
    275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 301, 0,
    0, 302, 0, 0, 303, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0,
    0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 332, 0, 0, 0, 0, 333,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342,
    0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0,
    350, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 358,
    0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0,
    376, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 400, 0, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 403, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0,
    407, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 415, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 418, 0, 0, 0, 419, 420, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438,
    0, 0, 439, 0, 0, 0, 440, 0, 441, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447,
    0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 454, 0, 0, 455, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 461, 0, 0, 0, 462, 463,
    0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 472, 0,
    0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0,
    0, 481, 0, 0, 0, 482, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0,
    488, 0, 489, 0, 0, 0, 490, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 497,
    498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 504, 0, 505, 0, 0, 506, 0, 0, 507,
    508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 515,
    0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0,
    527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0,
    0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 536, 0, 0, 0, 537,
    538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 545, 0, 0, 0, 0, 0,
    0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 551, 0, 552, 0, 0, 553, 0, 0, 554, 555, 0, 0, 0, 0, 0,
    0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561, 0, 0, 562, 0, 563, 0, 0, 564, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0,
    0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0,
    0, 574, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0,
    0, 586, 0, 0, 587, 0, 0, 0, 588, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0,
    597, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0,
    0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 614, 0, 615, 0, 0, 616,
    0, 0, 617, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0,
    624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 630, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0,
    636, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 643, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0,
    658, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0,
    665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 684, 685, 0,
    0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0,
    0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0,
    700, 0, 0, 701, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 709, 710, 0, 0, 0, 711, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    714, 0, 0, 715, 0, 0, 716, 717, 0, 0, 718, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0,
    722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    736, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0,
    0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0,
    746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0,
    0, 752, 0, 0, 753, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0,
    0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0,
    762, 0, 0, 763, 764, 0, 0, 765, 0, 0, 766, 767, 0, 768, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779,
    0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 782, 783, 0, 0, 0, 0, 0, 0, 0, 784, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 790, 0, 791, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0, 795,
};
void recomp_unit_0012_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08834000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0012[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08834000;
    case 2u: goto L_08834008;
    case 3u: goto L_08834014;
    case 4u: goto L_08834024;
    case 5u: goto L_08834044;
    case 6u: goto L_08834058;
    case 7u: goto L_08834080;
    case 8u: goto L_08834084;
    case 9u: goto L_08834090;
    case 10u: goto L_088340C4;
    case 11u: goto L_088340D4;
    case 12u: goto L_088340DC;
    case 13u: goto L_088340E8;
    case 14u: goto L_08834100;
    case 15u: goto L_08834114;
    case 16u: goto L_08834120;
    case 17u: goto L_0883412C;
    case 18u: goto L_0883414C;
    case 19u: goto L_08834158;
    case 20u: goto L_08834164;
    case 21u: goto L_08834170;
    case 22u: goto L_08834188;
    case 23u: goto L_088341A8;
    case 24u: goto L_088341C0;
    case 25u: goto L_088341E8;
    case 26u: goto L_088341EC;
    case 27u: goto L_088341F8;
    case 28u: goto L_0883422C;
    case 29u: goto L_0883423C;
    case 30u: goto L_08834244;
    case 31u: goto L_0883425C;
    case 32u: goto L_08834270;
    case 33u: goto L_08834278;
    case 34u: goto L_08834280;
    case 35u: goto L_08834290;
    case 36u: goto L_0883429C;
    case 37u: goto L_088342A8;
    case 38u: goto L_088342C8;
    case 39u: goto L_088342D0;
    case 40u: goto L_088342D8;
    case 41u: goto L_088342E8;
    case 42u: goto L_088342F8;
    case 43u: goto L_08834308;
    case 44u: goto L_08834318;
    case 45u: goto L_08834338;
    case 46u: goto L_08834350;
    case 47u: goto L_08834378;
    case 48u: goto L_0883437C;
    case 49u: goto L_08834388;
    case 50u: goto L_088343BC;
    case 51u: goto L_088343CC;
    case 52u: goto L_088343D4;
    case 53u: goto L_088343E0;
    case 54u: goto L_088343E8;
    case 55u: goto L_088343F4;
    case 56u: goto L_08834410;
    case 57u: goto L_08834430;
    case 58u: goto L_0883443C;
    case 59u: goto L_08834448;
    case 60u: goto L_08834454;
    case 61u: goto L_0883446C;
    case 62u: goto L_0883448C;
    case 63u: goto L_088344A4;
    case 64u: goto L_088344CC;
    case 65u: goto L_088344D0;
    case 66u: goto L_088344DC;
    case 67u: goto L_08834510;
    case 68u: goto L_08834520;
    case 69u: goto L_08834528;
    case 70u: goto L_08834544;
    case 71u: goto L_08834570;
    case 72u: goto L_08834578;
    case 73u: goto L_08834580;
    case 74u: goto L_08834590;
    case 75u: goto L_08834594;
    case 76u: goto L_088345A0;
    case 77u: goto L_088345B0;
    case 78u: goto L_088345D0;
    case 79u: goto L_088345E8;
    case 80u: goto L_08834610;
    case 81u: goto L_08834614;
    case 82u: goto L_08834620;
    case 83u: goto L_08834654;
    case 84u: goto L_08834664;
    case 85u: goto L_0883466C;
    case 86u: goto L_08834678;
    case 87u: goto L_08834680;
    case 88u: goto L_0883468C;
    case 89u: goto L_088346A8;
    case 90u: goto L_088346CC;
    case 91u: goto L_088346D8;
    case 92u: goto L_088346E4;
    case 93u: goto L_088346FC;
    case 94u: goto L_08834704;
    case 95u: goto L_08834724;
    case 96u: goto L_08834730;
    case 97u: goto L_0883473C;
    case 98u: goto L_08834748;
    case 99u: goto L_08834760;
    case 100u: goto L_08834780;
    case 101u: goto L_08834798;
    case 102u: goto L_088347C0;
    case 103u: goto L_088347C4;
    case 104u: goto L_088347D0;
    case 105u: goto L_08834804;
    case 106u: goto L_08834814;
    case 107u: goto L_0883481C;
    case 108u: goto L_08834838;
    case 109u: goto L_08834868;
    case 110u: goto L_08834870;
    case 111u: goto L_08834878;
    case 112u: goto L_08834880;
    case 113u: goto L_0883488C;
    case 114u: goto L_08834898;
    case 115u: goto L_088348B0;
    case 116u: goto L_088348B8;
    case 117u: goto L_088348E4;
    case 118u: goto L_088348EC;
    case 119u: goto L_088348F4;
    case 120u: goto L_08834904;
    case 121u: goto L_08834908;
    case 122u: goto L_08834914;
    case 123u: goto L_08834924;
    case 124u: goto L_08834944;
    case 125u: goto L_08834958;
    case 126u: goto L_08834980;
    case 127u: goto L_08834984;
    case 128u: goto L_08834990;
    case 129u: goto L_088349C4;
    case 130u: goto L_088349D4;
    case 131u: goto L_088349DC;
    case 132u: goto L_088349E8;
    case 133u: goto L_088349F0;
    case 134u: goto L_088349FC;
    case 135u: goto L_08834A18;
    case 136u: goto L_08834A38;
    case 137u: goto L_08834A44;
    case 138u: goto L_08834A54;
    case 139u: goto L_08834A7C;
    case 140u: goto L_08834A88;
    case 141u: goto L_08834A8C;
    case 142u: goto L_08834A94;
    case 143u: goto L_08834AA0;
    case 144u: goto L_08834AA4;
    case 145u: goto L_08834AB0;
    case 146u: goto L_08834AB4;
    case 147u: goto L_08834AC0;
    case 148u: goto L_08834ACC;
    case 149u: goto L_08834AD4;
    case 150u: goto L_08834ADC;
    case 151u: goto L_08834AE8;
    case 152u: goto L_08834AF0;
    case 153u: goto L_08834AF4;
    case 154u: goto L_08834AF8;
    case 155u: goto L_08834B10;
    case 156u: goto L_08834B1C;
    case 157u: goto L_08834B28;
    case 158u: goto L_08834B34;
    case 159u: goto L_08834B4C;
    case 160u: goto L_08834B6C;
    case 161u: goto L_08834B84;
    case 162u: goto L_08834BAC;
    case 163u: goto L_08834BB0;
    case 164u: goto L_08834BBC;
    case 165u: goto L_08834BF0;
    case 166u: goto L_08834C00;
    case 167u: goto L_08834C08;
    case 168u: goto L_08834C24;
    case 169u: goto L_08834C50;
    case 170u: goto L_08834C58;
    case 171u: goto L_08834C60;
    case 172u: goto L_08834C68;
    case 173u: goto L_08834C74;
    case 174u: goto L_08834C84;
    case 175u: goto L_08834CAC;
    case 176u: goto L_08834CB8;
    case 177u: goto L_08834CBC;
    case 178u: goto L_08834CC4;
    case 179u: goto L_08834CD0;
    case 180u: goto L_08834CD4;
    case 181u: goto L_08834CE0;
    case 182u: goto L_08834CE4;
    case 183u: goto L_08834CF0;
    case 184u: goto L_08834CFC;
    case 185u: goto L_08834D04;
    case 186u: goto L_08834D0C;
    case 187u: goto L_08834D18;
    case 188u: goto L_08834D20;
    case 189u: goto L_08834D24;
    case 190u: goto L_08834D28;
    case 191u: goto L_08834D4C;
    case 192u: goto L_08834D54;
    case 193u: goto L_08834D5C;
    case 194u: goto L_08834D6C;
    case 195u: goto L_08834D70;
    case 196u: goto L_08834D7C;
    case 197u: goto L_08834D8C;
    case 198u: goto L_08834DAC;
    case 199u: goto L_08834DC4;
    case 200u: goto L_08834DEC;
    case 201u: goto L_08834DF0;
    case 202u: goto L_08834DFC;
    case 203u: goto L_08834E30;
    case 204u: goto L_08834E40;
    case 205u: goto L_08834E48;
    case 206u: goto L_08834E54;
    case 207u: goto L_08834E58;
    case 208u: goto L_08834E68;
    case 209u: goto L_08834E74;
    case 210u: goto L_08834E80;
    case 211u: goto L_08834E94;
    case 212u: goto L_08834EA0;
    case 213u: goto L_08834EB0;
    case 214u: goto L_08834ED0;
    case 215u: goto L_08834EF0;
    case 216u: goto L_08834F00;
    case 217u: goto L_08834F08;
    case 218u: goto L_08834F14;
    case 219u: goto L_08834F20;
    case 220u: goto L_08834F28;
    case 221u: goto L_08834F3C;
    case 222u: goto L_08834F48;
    case 223u: goto L_08834F5C;
    case 224u: goto L_08834F6C;
    case 225u: goto L_08834F78;
    case 226u: goto L_08834F84;
    case 227u: goto L_08834F90;
    case 228u: goto L_08834F9C;
    case 229u: goto L_08834FB4;
    case 230u: goto L_08834FC4;
    case 231u: goto L_08834FD0;
    case 232u: goto L_08834FE4;
    case 233u: goto L_08834FF4;
    case 234u: goto L_08835000;
    case 235u: goto L_0883500C;
    case 236u: goto L_08835018;
    case 237u: goto L_0883501C;
    case 238u: goto L_08835028;
    case 239u: goto L_088350F0;
    case 240u: goto L_088350FC;
    case 241u: goto L_08835104;
    case 242u: goto L_08835124;
    case 243u: goto L_08835138;
    case 244u: goto L_08835140;
    case 245u: goto L_08835148;
    case 246u: goto L_08835150;
    case 247u: goto L_08835158;
    case 248u: goto L_08835164;
    case 249u: goto L_08835170;
    case 250u: goto L_08835280;
    case 251u: goto L_0883528C;
    case 252u: goto L_08835294;
    case 253u: goto L_088352CC;
    case 254u: goto L_088352D0;
    case 255u: goto L_088352D8;
    case 256u: goto L_08835324;
    case 257u: goto L_0883533C;
    case 258u: goto L_08835348;
    case 259u: goto L_08835354;
    case 260u: goto L_0883535C;
    case 261u: goto L_08835368;
    case 262u: goto L_08835378;
    case 263u: goto L_08835388;
    case 264u: goto L_08835394;
    case 265u: goto L_088353A0;
    case 266u: goto L_088353AC;
    case 267u: goto L_088353B0;
    case 268u: goto L_088353B8;
    case 269u: goto L_088353C0;
    case 270u: goto L_088353C8;
    case 271u: goto L_088353D4;
    case 272u: goto L_088353E0;
    case 273u: goto L_088353EC;
    case 274u: goto L_088353F8;
    case 275u: goto L_08835400;
    case 276u: goto L_0883540C;
    case 277u: goto L_08835414;
    case 278u: goto L_08835420;
    case 279u: goto L_0883542C;
    case 280u: goto L_08835444;
    case 281u: goto L_08835450;
    case 282u: goto L_0883545C;
    case 283u: goto L_088354C8;
    case 284u: goto L_088354E4;
    case 285u: goto L_08835500;
    case 286u: goto L_08835528;
    case 287u: goto L_08835544;
    case 288u: goto L_08835550;
    case 289u: goto L_0883555C;
    case 290u: goto L_08835568;
    case 291u: goto L_08835580;
    case 292u: goto L_0883558C;
    case 293u: goto L_088355D0;
    case 294u: goto L_08835600;
    case 295u: goto L_08835614;
    case 296u: goto L_08835620;
    case 297u: goto L_0883562C;
    case 298u: goto L_08835638;
    case 299u: goto L_08835644;
    case 300u: goto L_08835674;
    case 301u: goto L_08835678;
    case 302u: goto L_08835684;
    case 303u: goto L_08835690;
    case 304u: goto L_08835694;
    case 305u: goto L_088356B0;
    case 306u: goto L_088356BC;
    case 307u: goto L_088356C0;
    case 308u: goto L_088356D4;
    case 309u: goto L_08835710;
    case 310u: goto L_0883573C;
    case 311u: goto L_08835740;
    case 312u: goto L_08835748;
    case 313u: goto L_0883575C;
    case 314u: goto L_088357B0;
    case 315u: goto L_088357B8;
    case 316u: goto L_088357D0;
    case 317u: goto L_088357F4;
    case 318u: goto L_08835800;
    case 319u: goto L_0883580C;
    case 320u: goto L_08835814;
    case 321u: goto L_08835820;
    case 322u: goto L_0883582C;
    case 323u: goto L_08835838;
    case 324u: goto L_08835844;
    case 325u: goto L_08835854;
    case 326u: goto L_08835860;
    case 327u: goto L_08835878;
    case 328u: goto L_08835884;
    case 329u: goto L_0883589C;
    case 330u: goto L_088358B8;
    case 331u: goto L_088358E4;
    case 332u: goto L_088358E8;
    case 333u: goto L_088358FC;
    case 334u: goto L_08835900;
    case 335u: goto L_08835928;
    case 336u: goto L_08835934;
    case 337u: goto L_08835944;
    case 338u: goto L_08835950;
    case 339u: goto L_08835958;
    case 340u: goto L_08835964;
    case 341u: goto L_08835970;
    case 342u: goto L_0883597C;
    case 343u: goto L_08835990;
    case 344u: goto L_0883599C;
    case 345u: goto L_088359A8;
    case 346u: goto L_088359B4;
    case 347u: goto L_088359CC;
    case 348u: goto L_088359DC;
    case 349u: goto L_088359E8;
    case 350u: goto L_08835A00;
    case 351u: goto L_08835A0C;
    case 352u: goto L_08835A18;
    case 353u: goto L_08835A20;
    case 354u: goto L_08835A2C;
    case 355u: goto L_08835A5C;
    case 356u: goto L_08835A6C;
    case 357u: goto L_08835A74;
    case 358u: goto L_08835A7C;
    case 359u: goto L_08835A88;
    case 360u: goto L_08835A94;
    case 361u: goto L_08835A9C;
    case 362u: goto L_08835AA8;
    case 363u: goto L_08835AB4;
    case 364u: goto L_08835ABC;
    case 365u: goto L_08835AC8;
    case 366u: goto L_08835AD0;
    case 367u: goto L_08835AE8;
    case 368u: goto L_08835AF4;
    case 369u: goto L_08835B24;
    case 370u: goto L_08835B30;
    case 371u: goto L_08835B3C;
    case 372u: goto L_08835B50;
    case 373u: goto L_08835B5C;
    case 374u: goto L_08835B68;
    case 375u: goto L_08835B74;
    case 376u: goto L_08835B80;
    case 377u: goto L_08835B94;
    case 378u: goto L_08835BA0;
    case 379u: goto L_08835BAC;
    case 380u: goto L_08835BC0;
    case 381u: goto L_08835BDC;
    case 382u: goto L_08835BF8;
    case 383u: goto L_08835C04;
    case 384u: goto L_08835C10;
    case 385u: goto L_08835C20;
    case 386u: goto L_08835C2C;
    case 387u: goto L_08835C38;
    case 388u: goto L_08835C44;
    case 389u: goto L_08835C50;
    case 390u: goto L_08835C60;
    case 391u: goto L_08835C70;
    case 392u: goto L_08835C80;
    case 393u: goto L_08835C90;
    case 394u: goto L_08835CA0;
    case 395u: goto L_08835CB0;
    case 396u: goto L_08835CC0;
    case 397u: goto L_08835CD4;
    case 398u: goto L_08835CE4;
    case 399u: goto L_08835CF0;
    case 400u: goto L_08835CF4;
    case 401u: goto L_08835D0C;
    case 402u: goto L_08835D38;
    case 403u: goto L_08835D3C;
    case 404u: goto L_08835D44;
    case 405u: goto L_08835D50;
    case 406u: goto L_08835D6C;
    case 407u: goto L_08835D80;
    case 408u: goto L_08835D84;
    case 409u: goto L_08835D98;
    case 410u: goto L_08835DB4;
    case 411u: goto L_08835DD0;
    case 412u: goto L_08835E1C;
    case 413u: goto L_08835EE0;
    case 414u: goto L_08835F14;
    case 415u: goto L_08835F20;
    case 416u: goto L_08835F24;
    case 417u: goto L_08835F4C;
    case 418u: goto L_08835F50;
    case 419u: goto L_08835F60;
    case 420u: goto L_08835F64;
    case 421u: goto L_08835F80;
    case 422u: goto L_08835F90;
    case 423u: goto L_08835FA0;
    case 424u: goto L_08835FB4;
    case 425u: goto L_08835FBC;
    case 426u: goto L_08835FD8;
    case 427u: goto L_08835FF4;
    case 428u: goto L_08836010;
    case 429u: goto L_0883602C;
    case 430u: goto L_08836048;
    case 431u: goto L_08836064;
    case 432u: goto L_08836080;
    case 433u: goto L_08836098;
    case 434u: goto L_088360A4;
    case 435u: goto L_088360C0;
    case 436u: goto L_088360D4;
    case 437u: goto L_088360E0;
    case 438u: goto L_088360FC;
    case 439u: goto L_08836108;
    case 440u: goto L_08836118;
    case 441u: goto L_08836120;
    case 442u: goto L_08836124;
    case 443u: goto L_08836134;
    case 444u: goto L_08836150;
    case 445u: goto L_0883616C;
    case 446u: goto L_08836174;
    case 447u: goto L_0883617C;
    case 448u: goto L_08836188;
    case 449u: goto L_08836194;
    case 450u: goto L_088361A0;
    case 451u: goto L_088361B8;
    case 452u: goto L_088361CC;
    case 453u: goto L_08836200;
    case 454u: goto L_08836214;
    case 455u: goto L_08836220;
    case 456u: goto L_08836224;
    case 457u: goto L_08836234;
    case 458u: goto L_08836244;
    case 459u: goto L_08836258;
    case 460u: goto L_08836264;
    case 461u: goto L_08836268;
    case 462u: goto L_08836278;
    case 463u: goto L_0883627C;
    case 464u: goto L_0883628C;
    case 465u: goto L_088362AC;
    case 466u: goto L_088362C4;
    case 467u: goto L_08836300;
    case 468u: goto L_08836310;
    case 469u: goto L_08836320;
    case 470u: goto L_0883633C;
    case 471u: goto L_08836374;
    case 472u: goto L_08836378;
    case 473u: goto L_08836388;
    case 474u: goto L_08836394;
    case 475u: goto L_088363A0;
    case 476u: goto L_088363A8;
    case 477u: goto L_088363B4;
    case 478u: goto L_088363BC;
    case 479u: goto L_088363E0;
    case 480u: goto L_088363EC;
    case 481u: goto L_08836404;
    case 482u: goto L_08836414;
    case 483u: goto L_08836418;
    case 484u: goto L_08836430;
    case 485u: goto L_08836444;
    case 486u: goto L_08836454;
    case 487u: goto L_08836460;
    case 488u: goto L_08836480;
    case 489u: goto L_08836488;
    case 490u: goto L_08836498;
    case 491u: goto L_0883649C;
    case 492u: goto L_088364B0;
    case 493u: goto L_088364C4;
    case 494u: goto L_088364D4;
    case 495u: goto L_088364E0;
    case 496u: goto L_088364EC;
    case 497u: goto L_088364FC;
    case 498u: goto L_08836500;
    case 499u: goto L_0883651C;
    case 500u: goto L_08836530;
    case 501u: goto L_08836540;
    case 502u: goto L_0883654C;
    case 503u: goto L_08836558;
    case 504u: goto L_0883655C;
    case 505u: goto L_08836564;
    case 506u: goto L_08836570;
    case 507u: goto L_0883657C;
    case 508u: goto L_08836580;
    case 509u: goto L_0883659C;
    case 510u: goto L_088365BC;
    case 511u: goto L_088365CC;
    case 512u: goto L_088365D8;
    case 513u: goto L_088365E8;
    case 514u: goto L_088365F0;
    case 515u: goto L_088365FC;
    case 516u: goto L_08836604;
    case 517u: goto L_08836610;
    case 518u: goto L_08836680;
    case 519u: goto L_08836688;
    case 520u: goto L_088366A4;
    case 521u: goto L_088366B4;
    case 522u: goto L_088366C4;
    case 523u: goto L_088366C8;
    case 524u: goto L_088366D8;
    case 525u: goto L_08836754;
    case 526u: goto L_0883676C;
    case 527u: goto L_08836780;
    case 528u: goto L_088367D0;
    case 529u: goto L_088367E0;
    case 530u: goto L_088367E8;
    case 531u: goto L_08836874;
    case 532u: goto L_08836888;
    case 533u: goto L_088368DC;
    case 534u: goto L_08836958;
    case 535u: goto L_08836960;
    case 536u: goto L_0883696C;
    case 537u: goto L_0883697C;
    case 538u: goto L_08836980;
    case 539u: goto L_08836998;
    case 540u: goto L_088369AC;
    case 541u: goto L_088369BC;
    case 542u: goto L_088369C8;
    case 543u: goto L_088369D4;
    case 544u: goto L_088369E4;
    case 545u: goto L_088369E8;
    case 546u: goto L_08836A04;
    case 547u: goto L_08836A18;
    case 548u: goto L_08836A28;
    case 549u: goto L_08836A34;
    case 550u: goto L_08836A40;
    case 551u: goto L_08836A44;
    case 552u: goto L_08836A4C;
    case 553u: goto L_08836A58;
    case 554u: goto L_08836A64;
    case 555u: goto L_08836A68;
    case 556u: goto L_08836A84;
    case 557u: goto L_08836AA4;
    case 558u: goto L_08836AB4;
    case 559u: goto L_08836AC0;
    case 560u: goto L_08836AD0;
    case 561u: goto L_08836AD8;
    case 562u: goto L_08836AE4;
    case 563u: goto L_08836AEC;
    case 564u: goto L_08836AF8;
    case 565u: goto L_08836B68;
    case 566u: goto L_08836B88;
    case 567u: goto L_08836B9C;
    case 568u: goto L_08836BB8;
    case 569u: goto L_08836BC4;
    case 570u: goto L_08836BD4;
    case 571u: goto L_08836BD8;
    case 572u: goto L_08836BE8;
    case 573u: goto L_08836BF8;
    case 574u: goto L_08836C04;
    case 575u: goto L_08836C1C;
    case 576u: goto L_08836C24;
    case 577u: goto L_08836C34;
    case 578u: goto L_08836C44;
    case 579u: goto L_08836CD0;
    case 580u: goto L_08836CE8;
    case 581u: goto L_08836CFC;
    case 582u: goto L_08836D48;
    case 583u: goto L_08836D60;
    case 584u: goto L_08836DD0;
    case 585u: goto L_08836DE4;
    case 586u: goto L_08836E04;
    case 587u: goto L_08836E10;
    case 588u: goto L_08836E20;
    case 589u: goto L_08836E24;
    case 590u: goto L_08836E3C;
    case 591u: goto L_08836E50;
    case 592u: goto L_08836E60;
    case 593u: goto L_08836E6C;
    case 594u: goto L_08836E78;
    case 595u: goto L_08836EE4;
    case 596u: goto L_08836EF0;
    case 597u: goto L_08836F00;
    case 598u: goto L_08836F04;
    case 599u: goto L_08836F1C;
    case 600u: goto L_08836F30;
    case 601u: goto L_08836F58;
    case 602u: goto L_08836F64;
    case 603u: goto L_08836F8C;
    case 604u: goto L_08836F98;
    case 605u: goto L_08836FEC;
    case 606u: goto L_08836FF8;
    case 607u: goto L_08837008;
    case 608u: goto L_0883700C;
    case 609u: goto L_08837028;
    case 610u: goto L_0883703C;
    case 611u: goto L_0883704C;
    case 612u: goto L_08837058;
    case 613u: goto L_08837064;
    case 614u: goto L_08837068;
    case 615u: goto L_08837070;
    case 616u: goto L_0883707C;
    case 617u: goto L_08837088;
    case 618u: goto L_0883708C;
    case 619u: goto L_088370A8;
    case 620u: goto L_088370C8;
    case 621u: goto L_088370D0;
    case 622u: goto L_088370E0;
    case 623u: goto L_088370EC;
    case 624u: goto L_08837100;
    case 625u: goto L_08837110;
    case 626u: goto L_08837120;
    case 627u: goto L_08837144;
    case 628u: goto L_08837158;
    case 629u: goto L_08837160;
    case 630u: goto L_08837178;
    case 631u: goto L_088371B4;
    case 632u: goto L_088371C0;
    case 633u: goto L_088371C8;
    case 634u: goto L_088371E0;
    case 635u: goto L_088371EC;
    case 636u: goto L_08837200;
    case 637u: goto L_0883720C;
    case 638u: goto L_08837224;
    case 639u: goto L_08837230;
    case 640u: goto L_08837244;
    case 641u: goto L_08837258;
    case 642u: goto L_08837264;
    case 643u: goto L_0883728C;
    case 644u: goto L_08837290;
    case 645u: goto L_088372B0;
    case 646u: goto L_0883730C;
    case 647u: goto L_08837320;
    case 648u: goto L_0883732C;
    case 649u: goto L_0883733C;
    case 650u: goto L_08837358;
    case 651u: goto L_08837360;
    case 652u: goto L_0883736C;
    case 653u: goto L_088373A8;
    case 654u: goto L_088373B0;
    case 655u: goto L_088373CC;
    case 656u: goto L_088373D8;
    case 657u: goto L_088373F4;
    case 658u: goto L_08837400;
    case 659u: goto L_0883740C;
    case 660u: goto L_08837414;
    case 661u: goto L_0883741C;
    case 662u: goto L_0883743C;
    case 663u: goto L_08837458;
    case 664u: goto L_08837474;
    case 665u: goto L_08837480;
    case 666u: goto L_088374BC;
    case 667u: goto L_088374C4;
    case 668u: goto L_088374DC;
    case 669u: goto L_088374F0;
    case 670u: goto L_08837548;
    case 671u: goto L_08837550;
    case 672u: goto L_08837558;
    case 673u: goto L_08837564;
    case 674u: goto L_088375A0;
    case 675u: goto L_088375A8;
    case 676u: goto L_088375C4;
    case 677u: goto L_088375D0;
    case 678u: goto L_088375E4;
    case 679u: goto L_08837634;
    case 680u: goto L_0883763C;
    case 681u: goto L_08837650;
    case 682u: goto L_0883765C;
    case 683u: goto L_08837668;
    case 684u: goto L_08837674;
    case 685u: goto L_08837678;
    case 686u: goto L_08837684;
    case 687u: goto L_0883768C;
    case 688u: goto L_088376C8;
    case 689u: goto L_088376D0;
    case 690u: goto L_088376DC;
    case 691u: goto L_088376E8;
    case 692u: goto L_088376F8;
    case 693u: goto L_08837708;
    case 694u: goto L_0883771C;
    case 695u: goto L_08837724;
    case 696u: goto L_08837730;
    case 697u: goto L_08837748;
    case 698u: goto L_08837760;
    case 699u: goto L_08837774;
    case 700u: goto L_08837780;
    case 701u: goto L_0883778C;
    case 702u: goto L_08837798;
    case 703u: goto L_088377A8;
    case 704u: goto L_088377BC;
    case 705u: goto L_088377C4;
    case 706u: goto L_088377D0;
    case 707u: goto L_0883780C;
    case 708u: goto L_08837814;
    case 709u: goto L_08837828;
    case 710u: goto L_0883782C;
    case 711u: goto L_0883783C;
    case 712u: goto L_08837840;
    case 713u: goto L_08837854;
    case 714u: goto L_08837880;
    case 715u: goto L_0883788C;
    case 716u: goto L_08837898;
    case 717u: goto L_0883789C;
    case 718u: goto L_088378A8;
    case 719u: goto L_088378B0;
    case 720u: goto L_088378BC;
    case 721u: goto L_088378F8;
    case 722u: goto L_08837900;
    case 723u: goto L_0883791C;
    case 724u: goto L_08837928;
    case 725u: goto L_08837940;
    case 726u: goto L_08837950;
    case 727u: goto L_088379A0;
    case 728u: goto L_088379A8;
    case 729u: goto L_088379C4;
    case 730u: goto L_088379D0;
    case 731u: goto L_08837A0C;
    case 732u: goto L_08837A14;
    case 733u: goto L_08837A30;
    case 734u: goto L_08837A38;
    case 735u: goto L_08837A44;
    case 736u: goto L_08837A80;
    case 737u: goto L_08837A88;
    case 738u: goto L_08837AA4;
    case 739u: goto L_08837AB0;
    case 740u: goto L_08837AEC;
    case 741u: goto L_08837B08;
    case 742u: goto L_08837B10;
    case 743u: goto L_08837B40;
    case 744u: goto L_08837B50;
    case 745u: goto L_08837B74;
    case 746u: goto L_08837B80;
    case 747u: goto L_08837B94;
    case 748u: goto L_08837BA4;
    case 749u: goto L_08837BAC;
    case 750u: goto L_08837BE8;
    case 751u: goto L_08837BF0;
    case 752u: goto L_08837C04;
    case 753u: goto L_08837C10;
    case 754u: goto L_08837C18;
    case 755u: goto L_08837C24;
    case 756u: goto L_08837C60;
    case 757u: goto L_08837C68;
    case 758u: goto L_08837C84;
    case 759u: goto L_08837C90;
    case 760u: goto L_08837CC8;
    case 761u: goto L_08837CF4;
    case 762u: goto L_08837D00;
    case 763u: goto L_08837D0C;
    case 764u: goto L_08837D10;
    case 765u: goto L_08837D1C;
    case 766u: goto L_08837D28;
    case 767u: goto L_08837D2C;
    case 768u: goto L_08837D34;
    case 769u: goto L_08837D3C;
    case 770u: goto L_08837D48;
    case 771u: goto L_08837D84;
    case 772u: goto L_08837D8C;
    case 773u: goto L_08837DA8;
    case 774u: goto L_08837DB8;
    case 775u: goto L_08837E04;
    case 776u: goto L_08837E10;
    case 777u: goto L_08837E18;
    case 778u: goto L_08837E2C;
    case 779u: goto L_08837E7C;
    case 780u: goto L_08837E84;
    case 781u: goto L_08837E90;
    case 782u: goto L_08837EA8;
    case 783u: goto L_08837EAC;
    case 784u: goto L_08837ECC;
    case 785u: goto L_08837ED0;
    case 786u: goto L_08837EF4;
    case 787u: goto L_08837F40;
    case 788u: goto L_08837F58;
    case 789u: goto L_08837F60;
    case 790u: goto L_08837F6C;
    case 791u: goto L_08837F74;
    case 792u: goto L_08837FB0;
    case 793u: goto L_08837FB8;
    case 794u: goto L_08837FD4;
    case 795u: goto L_08837FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08834000:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08834008;
L_08834008:
    ctx.set_gpr(9, ctx.gpr[11] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 853u, 0x08833FDCu>(ctx, &aot_mem); return;
      }
      goto L_08834014;
    }
L_08834014:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088340DC;
      }
      goto L_08834024;
    }
L_08834024:
    ctx.set_gpr(9, ctx.gpr[2] & 65535u);
    ctx.set_gpr(10, ctx.gpr[2] >> 10u);
    ctx.set_gpr(2, 63u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65472u);
    ctx.set_gpr(2, ctx.gpr[10] & ctx.gpr[2]);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834084;
      }
      goto L_08834044;
    }
L_08834044:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834080;
      }
      goto L_08834058;
    }
L_08834058:
    ctx.set_gpr(11, ctx.gpr[12] << 1u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    goto L_08834080;
L_08834080:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08834084;
L_08834084:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834044;
      }
      goto L_08834090;
    }
L_08834090:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088340D4;
      }
      goto L_088340C4;
    }
L_088340C4:
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088340DC;
      }
      goto L_088340D4;
    }
L_088340D4:
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    goto L_088340DC;
L_088340DC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08834164;
      }
      goto L_088340E8;
    }
L_088340E8:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834114;
      }
      goto L_08834100;
    }
L_08834100:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08834114;
L_08834114:
    ctx.set_gpr(5, ctx.gpr[10] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834100;
      }
      goto L_08834120;
    }
L_08834120:
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883414C;
      }
      goto L_0883412C;
    }
L_0883412C:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_0883414C;
L_0883414C:
    ctx.set_gpr(5, ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883412C;
      }
      goto L_08834158;
    }
L_08834158:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088343E8;
      }
      goto L_08834164;
    }
L_08834164:
    ctx.set_gpr(9, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088343E8;
      }
      goto L_08834170;
    }
L_08834170:
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08834244;
      }
      goto L_08834188;
    }
L_08834188:
    ctx.set_gpr(9, ctx.gpr[2] & 65535u);
    ctx.set_gpr(11, ctx.gpr[2] >> 10u);
    ctx.set_gpr(10, 63u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] | 65472u);
    ctx.set_gpr(10, ctx.gpr[11] & ctx.gpr[10]);
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088341EC;
      }
      goto L_088341A8;
    }
L_088341A8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[11]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_088341E8;
      }
      goto L_088341C0;
    }
L_088341C0:
    ctx.set_gpr(14, ctx.gpr[11] << 1u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[10] >> 8u);
    goto L_088341E8;
L_088341E8:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088341EC;
L_088341EC:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_088341A8;
      }
      goto L_088341F8;
    }
L_088341F8:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(11, ctx.gpr[9] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[9] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883423C;
      }
      goto L_0883422C;
    }
L_0883422C:
    ctx.set_gpr(9, 32767u << 16u);
    ctx.set_gpr(10, ctx.gpr[9] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834244;
      }
      goto L_0883423C;
    }
L_0883423C:
    ctx.set_gpr(9, ctx.gpr[9] << 10u);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[11]);
    goto L_08834244;
L_08834244:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834290;
      }
      goto L_0883425C;
    }
L_0883425C:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[15]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834278;
      }
      goto L_08834270;
    }
L_08834270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834280;
      }
      goto L_08834278;
    }
L_08834278:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(15, ctx.gpr[14] - ctx.gpr[15]);
    goto L_08834280;
L_08834280:
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[15]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08834290;
L_08834290:
    ctx.set_gpr(14, ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883425C;
      }
      goto L_0883429C;
    }
L_0883429C:
    ctx.set_gpr(19, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088342F8;
      }
      goto L_088342A8;
    }
L_088342A8:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[15] - ctx.gpr[14]);
    ctx.set_gpr(15, ctx.gpr[14] & 255u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[15]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088342D0;
      }
      goto L_088342C8;
    }
L_088342C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088342D8;
      }
      goto L_088342D0;
    }
L_088342D0:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(15, ctx.gpr[14] - ctx.gpr[15]);
    goto L_088342D8;
L_088342D8:
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[15]);
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834308;
      }
      goto L_088342E8;
    }
L_088342E8:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088342F8;
L_088342F8:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, ctx.gpr[9] < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_088342A8;
      }
      goto L_08834308;
    }
L_08834308:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088343D4;
      }
      goto L_08834318;
    }
L_08834318:
    ctx.set_gpr(5, ctx.gpr[12] & 65535u);
    ctx.set_gpr(10, ctx.gpr[12] >> 10u);
    ctx.set_gpr(9, 63u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] | 65472u);
    ctx.set_gpr(9, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883437C;
      }
      goto L_08834338;
    }
L_08834338:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[12]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08834378;
      }
      goto L_08834350;
    }
L_08834350:
    ctx.set_gpr(11, ctx.gpr[12] << 1u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    goto L_08834378;
L_08834378:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_0883437C;
L_0883437C:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834338;
      }
      goto L_08834388;
    }
L_08834388:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[5] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088343CC;
      }
      goto L_088343BC;
    }
L_088343BC:
    ctx.set_gpr(5, 32767u << 16u);
    ctx.set_gpr(12, ctx.gpr[5] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088343D4;
      }
      goto L_088343CC;
    }
L_088343CC:
    ctx.set_gpr(5, ctx.gpr[5] << 10u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[10]);
    goto L_088343D4;
L_088343D4:
    ctx.set_gpr(1, ctx.gpr[12] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088343E8;
      }
      goto L_088343E0;
    }
L_088343E0:
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    goto L_088343E8;
L_088343E8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08834448;
      }
      goto L_088343F4;
    }
L_088343F4:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834430;
      }
      goto L_08834410;
    }
L_08834410:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08834430;
L_08834430:
    ctx.set_gpr(5, ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834410;
      }
      goto L_0883443C;
    }
L_0883443C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834680;
      }
      goto L_08834448;
    }
L_08834448:
    ctx.set_gpr(5, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834680;
      }
      goto L_08834454;
    }
L_08834454:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(12, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08834528;
      }
      goto L_0883446C;
    }
L_0883446C:
    ctx.set_gpr(5, ctx.gpr[2] & 65535u);
    ctx.set_gpr(10, ctx.gpr[2] >> 10u);
    ctx.set_gpr(9, 63u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] | 65472u);
    ctx.set_gpr(9, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088344D0;
      }
      goto L_0883448C;
    }
L_0883448C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_088344CC;
      }
      goto L_088344A4;
    }
L_088344A4:
    ctx.set_gpr(13, ctx.gpr[10] << 1u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    goto L_088344CC;
L_088344CC:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_088344D0;
L_088344D0:
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883448C;
      }
      goto L_088344DC;
    }
L_088344DC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[5] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834520;
      }
      goto L_08834510;
    }
L_08834510:
    ctx.set_gpr(5, 32767u << 16u);
    ctx.set_gpr(12, ctx.gpr[5] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834528;
      }
      goto L_08834520;
    }
L_08834520:
    ctx.set_gpr(5, ctx.gpr[5] << 10u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[10]);
    goto L_08834528;
L_08834528:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(15, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(14, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834594;
      }
      goto L_08834544;
    }
L_08834544:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[5] & 255u);
    rt.memory().aot_store8(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834578;
      }
      goto L_08834570;
    }
L_08834570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834580;
      }
      goto L_08834578;
    }
L_08834578:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(9, ctx.gpr[5] - ctx.gpr[9]);
    goto L_08834580;
L_08834580:
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[9]);
    ctx.set_gpr(1, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088345A0;
      }
      goto L_08834590;
    }
L_08834590:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08834594;
L_08834594:
    ctx.set_gpr(5, ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834544;
      }
      goto L_088345A0;
    }
L_088345A0:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883466C;
      }
      goto L_088345B0;
    }
L_088345B0:
    ctx.set_gpr(5, ctx.gpr[11] & 65535u);
    ctx.set_gpr(10, ctx.gpr[11] >> 10u);
    ctx.set_gpr(9, 63u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] | 65472u);
    ctx.set_gpr(9, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834614;
      }
      goto L_088345D0;
    }
L_088345D0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[12]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08834610;
      }
      goto L_088345E8;
    }
L_088345E8:
    ctx.set_gpr(11, ctx.gpr[12] << 1u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    goto L_08834610;
L_08834610:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08834614;
L_08834614:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088345D0;
      }
      goto L_08834620;
    }
L_08834620:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[5] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834664;
      }
      goto L_08834654;
    }
L_08834654:
    ctx.set_gpr(5, 32767u << 16u);
    ctx.set_gpr(11, ctx.gpr[5] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883466C;
      }
      goto L_08834664;
    }
L_08834664:
    ctx.set_gpr(5, ctx.gpr[5] << 10u);
    ctx.set_gpr(11, ctx.gpr[5] + ctx.gpr[10]);
    goto L_0883466C;
L_0883466C:
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834680;
      }
      goto L_08834678;
    }
L_08834678:
    ctx.set_gpr(2, ctx.gpr[11] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    goto L_08834680;
L_08834680:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883473C;
      }
      goto L_0883468C;
    }
L_0883468C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(11, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088346CC;
      }
      goto L_088346A8;
    }
L_088346A8:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[12] >> 1u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] - ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088346CC;
L_088346CC:
    ctx.set_gpr(12, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088346A8;
      }
      goto L_088346D8;
    }
L_088346D8:
    ctx.set_gpr(14, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834724;
      }
      goto L_088346E4;
    }
L_088346E4:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834704;
      }
      goto L_088346FC;
    }
L_088346FC:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    goto L_08834704;
L_08834704:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] - ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08834724;
L_08834724:
    ctx.set_gpr(12, ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088346E4;
      }
      goto L_08834730;
    }
L_08834730:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088349F0;
      }
      goto L_0883473C;
    }
L_0883473C:
    ctx.set_gpr(5, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088349F0;
      }
      goto L_08834748;
    }
L_08834748:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883481C;
      }
      goto L_08834760;
    }
L_08834760:
    ctx.set_gpr(5, ctx.gpr[2] & 65535u);
    ctx.set_gpr(10, ctx.gpr[2] >> 10u);
    ctx.set_gpr(9, 63u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] | 65472u);
    ctx.set_gpr(9, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088347C4;
      }
      goto L_08834780;
    }
L_08834780:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_088347C0;
      }
      goto L_08834798;
    }
L_08834798:
    ctx.set_gpr(13, ctx.gpr[10] << 1u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    goto L_088347C0;
L_088347C0:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_088347C4;
L_088347C4:
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834780;
      }
      goto L_088347D0;
    }
L_088347D0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[5] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834814;
      }
      goto L_08834804;
    }
L_08834804:
    ctx.set_gpr(5, 32767u << 16u);
    ctx.set_gpr(9, ctx.gpr[5] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883481C;
      }
      goto L_08834814;
    }
L_08834814:
    ctx.set_gpr(5, ctx.gpr[5] << 10u);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[10]);
    goto L_0883481C;
L_0883481C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(13, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834880;
      }
      goto L_08834838;
    }
L_08834838:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[10] >> 1u);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[15]);
    ctx.set_gpr(15, ctx.gpr[10] & 255u);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[15]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834870;
      }
      goto L_08834868;
    }
L_08834868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834878;
      }
      goto L_08834870;
    }
L_08834870:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(15, ctx.gpr[10] - ctx.gpr[15]);
    goto L_08834878;
L_08834878:
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[15]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08834880;
L_08834880:
    ctx.set_gpr(10, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834838;
      }
      goto L_0883488C;
    }
L_0883488C:
    ctx.set_gpr(10, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834908;
      }
      goto L_08834898;
    }
L_08834898:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[15]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088348B8;
      }
      goto L_088348B0;
    }
L_088348B0:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 1u));
    goto L_088348B8;
L_088348B8:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[15] - ctx.gpr[24]);
    ctx.set_gpr(24, ctx.gpr[15] & 255u);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[24]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088348EC;
      }
      goto L_088348E4;
    }
L_088348E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088348F4;
      }
      goto L_088348EC;
    }
L_088348EC:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(24, ctx.gpr[15] - ctx.gpr[24]);
    goto L_088348F4;
L_088348F4:
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[24]);
    ctx.set_gpr(1, ctx.gpr[9] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834914;
      }
      goto L_08834904;
    }
L_08834904:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08834908;
L_08834908:
    ctx.set_gpr(15, ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834898;
      }
      goto L_08834914;
    }
L_08834914:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088349DC;
      }
      goto L_08834924;
    }
L_08834924:
    ctx.set_gpr(5, ctx.gpr[11] & 65535u);
    ctx.set_gpr(10, ctx.gpr[11] >> 10u);
    ctx.set_gpr(9, 63u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] | 65472u);
    ctx.set_gpr(9, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834984;
      }
      goto L_08834944;
    }
L_08834944:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834980;
      }
      goto L_08834958;
    }
L_08834958:
    ctx.set_gpr(11, ctx.gpr[12] << 1u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    goto L_08834980;
L_08834980:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08834984;
L_08834984:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834944;
      }
      goto L_08834990;
    }
L_08834990:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[5] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088349D4;
      }
      goto L_088349C4;
    }
L_088349C4:
    ctx.set_gpr(5, 32767u << 16u);
    ctx.set_gpr(11, ctx.gpr[5] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088349DC;
      }
      goto L_088349D4;
    }
L_088349D4:
    ctx.set_gpr(5, ctx.gpr[5] << 10u);
    ctx.set_gpr(11, ctx.gpr[5] + ctx.gpr[10]);
    goto L_088349DC;
L_088349DC:
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088349F0;
      }
      goto L_088349E8;
    }
L_088349E8:
    ctx.set_gpr(2, ctx.gpr[11] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    goto L_088349F0;
L_088349F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08834B28;
      }
      goto L_088349FC;
    }
L_088349FC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834A38;
      }
      goto L_08834A18;
    }
L_08834A18:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[11] - ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08834A38;
L_08834A38:
    ctx.set_gpr(10, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834A18;
      }
      goto L_08834A44;
    }
L_08834A44:
    ctx.set_gpr(14, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834B10;
      }
      goto L_08834A54;
    }
L_08834A54:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[12] - ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[13] - ctx.gpr[11]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834A88;
      }
      goto L_08834A7C;
    }
L_08834A7C:
    ctx.set_gpr(7, 0u - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834A8C;
      }
      goto L_08834A88;
    }
L_08834A88:
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    goto L_08834A8C;
L_08834A8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834AA0;
      }
      goto L_08834A94;
    }
L_08834A94:
    ctx.set_gpr(6, 0u - ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834AA4;
      }
      goto L_08834AA0;
    }
L_08834AA0:
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    goto L_08834AA4;
L_08834AA4:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834AB4;
      }
      goto L_08834AB0;
    }
L_08834AB0:
    ctx.set_gpr(4, 0u - ctx.gpr[4]);
    goto L_08834AB4;
L_08834AB4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834ADC;
      }
      goto L_08834AC0;
    }
L_08834AC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834AD4;
      }
      goto L_08834ACC;
    }
L_08834ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834ADC;
      }
      goto L_08834AD4;
    }
L_08834AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834AF8;
      }
      goto L_08834ADC;
    }
L_08834ADC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834AF0;
      }
      goto L_08834AE8;
    }
L_08834AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834AF4;
      }
      goto L_08834AF0;
    }
L_08834AF0:
    ctx.set_gpr(12, ctx.gpr[11] + 0u);
    goto L_08834AF4;
L_08834AF4:
    ctx.set_gpr(13, ctx.gpr[12] + 0u);
    goto L_08834AF8;
L_08834AF8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08834B10;
L_08834B10:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834A54;
      }
      goto L_08834B1C;
    }
L_08834B1C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834E58;
      }
      goto L_08834B28;
    }
L_08834B28:
    ctx.set_gpr(3, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834E58;
      }
      goto L_08834B34;
    }
L_08834B34:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08834C08;
      }
      goto L_08834B4C;
    }
L_08834B4C:
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(10, ctx.gpr[2] >> 10u);
    ctx.set_gpr(5, 63u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 65472u);
    ctx.set_gpr(5, ctx.gpr[10] & ctx.gpr[5]);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834BB0;
      }
      goto L_08834B6C;
    }
L_08834B6C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[12]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08834BAC;
      }
      goto L_08834B84;
    }
L_08834B84:
    ctx.set_gpr(11, ctx.gpr[12] << 1u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    goto L_08834BAC;
L_08834BAC:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08834BB0;
L_08834BB0:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834B6C;
      }
      goto L_08834BBC;
    }
L_08834BBC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[3] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834C00;
      }
      goto L_08834BF0;
    }
L_08834BF0:
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834C08;
      }
      goto L_08834C00;
    }
L_08834C00:
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[10]);
    goto L_08834C08;
L_08834C08:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(11, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834C68;
      }
      goto L_08834C24;
    }
L_08834C24:
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[14] - ctx.gpr[13]);
    ctx.set_gpr(14, ctx.gpr[13] & 255u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834C58;
      }
      goto L_08834C50;
    }
L_08834C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834C60;
      }
      goto L_08834C58;
    }
L_08834C58:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(14, ctx.gpr[13] - ctx.gpr[14]);
    goto L_08834C60;
L_08834C60:
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[14]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08834C68;
L_08834C68:
    ctx.set_gpr(13, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834C24;
      }
      goto L_08834C74;
    }
L_08834C74:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D70;
      }
      goto L_08834C84;
    }
L_08834C84:
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[25] - ctx.gpr[24]);
    ctx.set_gpr(15, ctx.gpr[19] - ctx.gpr[24]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834CB8;
      }
      goto L_08834CAC;
    }
L_08834CAC:
    ctx.set_gpr(14, 0u - ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834CBC;
      }
      goto L_08834CB8;
    }
L_08834CB8:
    ctx.set_gpr(14, ctx.gpr[7] + 0u);
    goto L_08834CBC;
L_08834CBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834CD0;
      }
      goto L_08834CC4;
    }
L_08834CC4:
    ctx.set_gpr(13, 0u - ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834CD4;
      }
      goto L_08834CD0;
    }
L_08834CD0:
    ctx.set_gpr(13, ctx.gpr[15] + 0u);
    goto L_08834CD4;
L_08834CD4:
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[15]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08834CE4;
      }
      goto L_08834CE0;
    }
L_08834CE0:
    ctx.set_gpr(7, 0u - ctx.gpr[7]);
    goto L_08834CE4;
L_08834CE4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834D0C;
      }
      goto L_08834CF0;
    }
L_08834CF0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D04;
      }
      goto L_08834CFC;
    }
L_08834CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D0C;
      }
      goto L_08834D04;
    }
L_08834D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D28;
      }
      goto L_08834D0C;
    }
L_08834D0C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834D20;
      }
      goto L_08834D18;
    }
L_08834D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D24;
      }
      goto L_08834D20;
    }
L_08834D20:
    ctx.set_gpr(25, ctx.gpr[24] + 0u);
    goto L_08834D24;
L_08834D24:
    ctx.set_gpr(19, ctx.gpr[25] + 0u);
    goto L_08834D28;
L_08834D28:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[19]);
    ctx.set_gpr(13, ctx.gpr[7] & 255u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[13]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D54;
      }
      goto L_08834D4C;
    }
L_08834D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834D5C;
      }
      goto L_08834D54;
    }
L_08834D54:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(13, ctx.gpr[7] - ctx.gpr[13]);
    goto L_08834D5C;
L_08834D5C:
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[13]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834D7C;
      }
      goto L_08834D6C;
    }
L_08834D6C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08834D70;
L_08834D70:
    ctx.set_gpr(7, ctx.gpr[3] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834C84;
      }
      goto L_08834D7C;
    }
L_08834D7C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08834E48;
      }
      goto L_08834D8C;
    }
L_08834D8C:
    ctx.set_gpr(6, ctx.gpr[9] & 65535u);
    ctx.set_gpr(4, ctx.gpr[9] >> 10u);
    ctx.set_gpr(3, 63u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65472u);
    ctx.set_gpr(7, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834DF0;
      }
      goto L_08834DAC;
    }
L_08834DAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08834DEC;
      }
      goto L_08834DC4;
    }
L_08834DC4:
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[3] >> 8u);
    goto L_08834DEC;
L_08834DEC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08834DF0;
L_08834DF0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834DAC;
      }
      goto L_08834DFC;
    }
L_08834DFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[3] >> 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    ctx.set_gpr(1, 63u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65473u);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834E40;
      }
      goto L_08834E30;
    }
L_08834E30:
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(9, ctx.gpr[3] | 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834E48;
      }
      goto L_08834E40;
    }
L_08834E40:
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[4]);
    goto L_08834E48;
L_08834E48:
    ctx.set_gpr(1, ctx.gpr[9] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834E58;
      }
      goto L_08834E54;
    }
L_08834E54:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    goto L_08834E58;
L_08834E58:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08834E68u);
    // nop
    goto L_08834ED0;
L_08834E68:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(365)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08834EB0;
      }
      goto L_08834E74;
    }
L_08834E74:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834E94;
      }
      goto L_08834E80;
    }
L_08834E80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08834E94;
L_08834E94:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834E80;
      }
      goto L_08834EA0;
    }
L_08834EA0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08834EB0;
L_08834EB0:
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
L_08834ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08834EF0;
L_08834EF0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08834F00u);
    // nop
    goto L_088357D0;
L_08834F00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834F3C;
      }
      goto L_08834F08;
    }
L_08834F08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834F28;
      }
      goto L_08834F14;
    }
L_08834F14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08834F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08834F20u) goto L_08834F20;
    return;
L_08834F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08834F3C;
      }
      goto L_08834F28;
    }
L_08834F28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9432));
    ctx.set_gpr(31, 0x08834F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08834F3Cu) goto L_08834F3C;
    return;
L_08834F3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834F6C;
      }
      goto L_08834F48;
    }
L_08834F48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08834F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 466u, 0x088322B0u>(ctx, &aot_mem) && ctx.pc == 0x08834F5Cu) goto L_08834F5C;
    return;
L_08834F5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08834F6C;
L_08834F6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834EF0;
      }
      goto L_08834F78;
    }
L_08834F78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834F90;
      }
      goto L_08834F84;
    }
L_08834F84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    goto L_08834F90;
L_08834F90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08834F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 832u, 0x08833E38u>(ctx, &aot_mem) && ctx.pc == 0x08834F9Cu) goto L_08834F9C;
    return;
L_08834F9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08834FD0;
      }
      goto L_08834FB4;
    }
L_08834FB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(3, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08834FD0;
      }
      goto L_08834FC4;
    }
L_08834FC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08834FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 50u, 0x08830410u>(ctx, &aot_mem) && ctx.pc == 0x08834FD0u) goto L_08834FD0;
    return;
L_08834FD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08834FE4:
    ctx.set_gpr(7, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, (ctx.gpr[4] >> 16u) & 0x0000FFFFu);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835138;
      }
      goto L_08834FF4;
    }
L_08834FF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835148;
      }
      goto L_08835000;
    }
L_08835000:
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(5552) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835018;
      }
      goto L_0883500C;
    }
L_0883500C:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883501C;
      }
      goto L_08835018;
    }
L_08835018:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5552));
    goto L_0883501C;
L_0883501C:
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088350F0;
      }
      goto L_08835028;
    }
L_08835028:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16));
    goto L_088350F0;
L_088350F0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835028;
      }
      goto L_088350FC;
    }
L_088350FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835124;
      }
      goto L_08835104;
    }
L_08835104:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835104;
      }
      goto L_08835124;
    }
L_08835124:
    ctx.set_gpr(2, 0u | 65521u);
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(7, ctx.hi);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(4, ctx.hi);
    goto L_08835138;
L_08835138:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835000;
      }
      goto L_08835140;
    }
L_08835140:
    ctx.set_gpr(2, ctx.gpr[4] << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    goto L_08835148;
L_08835148:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835150:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835164;
      }
      goto L_08835158;
    }
L_08835158:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088352D0;
      }
      goto L_08835164;
    }
L_08835164:
    ctx.set_gpr(4, ~(ctx.gpr[4] | 0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835280;
      }
      goto L_08835170;
    }
L_08835170:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3656));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] >> 8u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08835280;
L_08835280:
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835170;
      }
      goto L_0883528C;
    }
L_0883528C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088352CC;
      }
      goto L_08835294;
    }
L_08835294:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3656));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] >> 8u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835294;
      }
      goto L_088352CC;
    }
L_088352CC:
    ctx.set_gpr(2, ~(ctx.gpr[4] | 0u));
    goto L_088352D0;
L_088352D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088352D8:
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
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835348;
      }
      goto L_08835324;
    }
L_08835324:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(10656)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835348;
      }
      goto L_0883533C;
    }
L_0883533C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835354;
      }
      goto L_08835348;
    }
L_08835348:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088355D0;
      }
      goto L_08835354;
    }
L_08835354:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835368;
      }
      goto L_0883535C;
    }
L_0883535C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088355D0;
      }
      goto L_08835368;
    }
L_08835368:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835388;
      }
      goto L_08835378;
    }
L_08835378:
    ctx.set_gpr(2, 2180u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13596));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), 0u);
    goto L_08835388;
L_08835388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088353A0;
      }
      goto L_08835394;
    }
L_08835394:
    ctx.set_gpr(2, 2180u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13556));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_088353A0;
L_088353A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088353B0;
      }
      goto L_088353AC;
    }
L_088353AC:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(6));
    goto L_088353B0;
L_088353B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088353C0;
      }
      goto L_088353B8;
    }
L_088353B8:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, 0u - ctx.gpr[19]);
    goto L_088353C0;
L_088353C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_088353C8;
    }
L_088353C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_088353D4;
    }
L_088353D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_088353E0;
    }
L_088353E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_088353EC;
    }
L_088353EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_088353F8;
    }
L_088353F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_08835400;
    }
L_08835400:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_0883540C;
    }
L_0883540C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08835420;
      }
      goto L_08835414;
    }
L_08835414:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883542C;
      }
      goto L_08835420;
    }
L_08835420:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088355D0;
      }
      goto L_0883542C;
    }
L_0883542C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5816));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835444u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835444u) goto L_08835444;
    return;
L_08835444:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883545C;
      }
      goto L_08835450;
    }
L_08835450:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088355D0;
      }
      goto L_0883545C;
    }
L_0883545C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[19] & 31u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088354C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088354C8u) goto L_088354C8;
    return;
L_088354C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088354E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088354E4u) goto L_088354E4;
    return;
L_088354E4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835500u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835500u) goto L_08835500;
    return;
L_08835500:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5780), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835528u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835528u) goto L_08835528;
    return;
L_08835528:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5780)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835568;
      }
      goto L_08835544;
    }
L_08835544:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835568;
      }
      goto L_08835550;
    }
L_08835550:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835568;
      }
      goto L_0883555C;
    }
L_0883555C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883558C;
      }
      goto L_08835568;
    }
L_08835568:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15880)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08835580u);
    // nop
    goto L_08835BDC;
L_08835580:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088355D0;
      }
      goto L_0883558C;
    }
L_0883558C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5780)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5788), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5780)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5776), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088355D0u);
    // nop
    goto L_08835600;
L_088355D0:
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
L_08835600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835638;
      }
      goto L_08835614;
    }
L_08835614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835638;
      }
      goto L_08835620;
    }
L_08835620:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835638;
      }
      goto L_0883562C;
    }
L_0883562C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835644;
      }
      goto L_08835638;
    }
L_08835638:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088356C0;
      }
      goto L_08835644;
    }
L_08835644:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08835678;
      }
      goto L_08835674;
    }
L_08835674:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08835678;
L_08835678:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835690;
      }
      goto L_08835684;
    }
L_08835684:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835694;
      }
      goto L_08835690;
    }
L_08835690:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    goto L_08835694;
L_08835694:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088356B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 467u, 0x0883A768u>(ctx, &aot_mem) && ctx.pc == 0x088356B0u) goto L_088356B0;
    return;
L_088356B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088356BCu);
    // nop
    goto L_08835DD0;
L_088356BC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088356C0;
L_088356C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088356D4:
    ctx.set_gpr(7, ctx.gpr[5] >> 8u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835740;
      }
      goto L_0883573C;
    }
L_0883573C:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_08835740;
L_08835740:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088357B8;
      }
      goto L_08835748;
    }
L_08835748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883575Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0883575Cu) goto L_0883575C;
    return;
L_0883575C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088357B8;
      }
      goto L_088357B0;
    }
L_088357B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_088357B8;
L_088357B8:
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
L_088357D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835814;
      }
      goto L_088357F4;
    }
L_088357F4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835814;
      }
      goto L_08835800;
    }
L_08835800:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835814;
      }
      goto L_0883580C;
    }
L_0883580C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08835820;
      }
      goto L_08835814;
    }
L_08835814:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835820;
    }
L_08835820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835860;
      }
      goto L_0883582C;
    }
L_0883582C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835844;
      }
      goto L_08835838;
    }
L_08835838:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835860;
      }
      goto L_08835844;
    }
L_08835844:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(666));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835878;
      }
      goto L_08835854;
    }
L_08835854:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835878;
      }
      goto L_08835860;
    }
L_08835860:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15872)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835878;
    }
L_08835878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883589C;
      }
      goto L_08835884;
    }
L_08835884:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15884)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_0883589C;
    }
L_0883589C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08835958;
      }
      goto L_088358B8;
    }
L_088358B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088358E8;
      }
      goto L_088358E4;
    }
L_088358E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    goto L_088358E8;
L_088358E8:
    ctx.set_gpr(3, ctx.gpr[3] << 6u);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835900;
      }
      goto L_088358FC;
    }
L_088358FC:
    ctx.set_gpr(5, ctx.gpr[5] | 32u);
    goto L_08835900;
L_08835900:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(31));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(113));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08835928u);
    // nop
    goto L_088356D4;
L_08835928:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835950;
      }
      goto L_08835934;
    }
L_08835934:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(31, 0x08835944u);
    // nop
    goto L_088356D4;
L_08835944:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08835950u);
    // nop
    goto L_088356D4;
L_08835950:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    goto L_08835958;
L_08835958:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835990;
      }
      goto L_08835964;
    }
L_08835964:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08835970u);
    // nop
    goto L_08835710;
L_08835970:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088359CC;
      }
      goto L_0883597C;
    }
L_0883597C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835990;
    }
L_08835990:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088359CC;
      }
      goto L_0883599C;
    }
L_0883599C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088359CC;
      }
      goto L_088359A8;
    }
L_088359A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088359CC;
      }
      goto L_088359B4;
    }
L_088359B4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15884)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_088359CC;
    }
L_088359CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(666));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835A00;
      }
      goto L_088359DC;
    }
L_088359DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835A00;
      }
      goto L_088359E8;
    }
L_088359E8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15884)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835A00;
    }
L_08835A00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835A2C;
      }
      goto L_08835A0C;
    }
L_08835A0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835A2C;
      }
      goto L_08835A18;
    }
L_08835A18:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835B50;
      }
      goto L_08835A20;
    }
L_08835A20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(666));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835B50;
      }
      goto L_08835A2C;
    }
L_08835A2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4688));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835A5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835A5Cu) goto L_08835A5C;
    return;
L_08835A5C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835A74;
      }
      goto L_08835A6C;
    }
L_08835A6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(666));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08835A74;
L_08835A74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835A88;
      }
      goto L_08835A7C;
    }
L_08835A7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08835AA8;
      }
      goto L_08835A88;
    }
L_08835A88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835A9C;
      }
      goto L_08835A94;
    }
L_08835A94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08835A9C;
L_08835A9C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835AA8;
    }
L_08835AA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08835B50;
      }
      goto L_08835AB4;
    }
L_08835AB4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08835AD0;
      }
      goto L_08835ABC;
    }
L_08835ABC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08835AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883BC58u>(ctx, &aot_mem) && ctx.pc == 0x08835AC8u) goto L_08835AC8;
    return;
L_08835AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835B24;
      }
      goto L_08835AD0;
    }
L_08835AD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08835AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 650u, 0x0883BB88u>(ctx, &aot_mem) && ctx.pc == 0x08835AE8u) goto L_08835AE8;
    return;
L_08835AE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835B24;
      }
      goto L_08835AF4;
    }
L_08835AF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08835B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08835B24u) goto L_08835B24;
    return;
L_08835B24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08835B30u);
    // nop
    goto L_08835710;
L_08835B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835B50;
      }
      goto L_08835B3C;
    }
L_08835B3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835B50;
    }
L_08835B50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835B68;
      }
      goto L_08835B5C;
    }
L_08835B5C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835B68;
    }
L_08835B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835B80;
      }
      goto L_08835B74;
    }
L_08835B74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835BC0;
      }
      goto L_08835B80;
    }
L_08835B80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] >> 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08835B94u);
    // nop
    goto L_088356D4;
L_08835B94:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08835BA0u);
    // nop
    goto L_088356D4;
L_08835BA0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08835BACu);
    // nop
    goto L_08835710;
L_08835BAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08835BC0;
L_08835BC0:
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
L_08835BDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835C04;
      }
      goto L_08835BF8;
    }
L_08835BF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835C10;
      }
      goto L_08835C04;
    }
L_08835C04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835CF4;
      }
      goto L_08835C10;
    }
L_08835C10:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835C44;
      }
      goto L_08835C20;
    }
L_08835C20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(113));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835C44;
      }
      goto L_08835C2C;
    }
L_08835C2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(666));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835C44;
      }
      goto L_08835C38;
    }
L_08835C38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835CF4;
      }
      goto L_08835C44;
    }
L_08835C44:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835C60;
      }
      goto L_08835C50;
    }
L_08835C50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835C60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835C60u) goto L_08835C60;
    return;
L_08835C60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835C80;
      }
      goto L_08835C70;
    }
L_08835C70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835C80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835C80u) goto L_08835C80;
    return;
L_08835C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835CA0;
      }
      goto L_08835C90;
    }
L_08835C90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835CA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835CA0u) goto L_08835CA0;
    return;
L_08835CA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835CC0;
      }
      goto L_08835CB0;
    }
L_08835CB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835CC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835CC0u) goto L_08835CC0;
    return;
L_08835CC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08835CD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08835CD4u) goto L_08835CD4;
    return;
L_08835CD4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(113));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08835CF0;
      }
      goto L_08835CE4;
    }
L_08835CE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835CF4;
      }
      goto L_08835CF0;
    }
L_08835CF0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08835CF4;
L_08835CF4:
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
L_08835D0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835D3C;
      }
      goto L_08835D38;
    }
L_08835D38:
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    goto L_08835D3C;
L_08835D3C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835D50;
      }
      goto L_08835D44;
    }
L_08835D44:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835DB4;
      }
      goto L_08835D50;
    }
L_08835D50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835D84;
      }
      goto L_08835D6C;
    }
L_08835D6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08835D80u);
    // nop
    goto L_08834FE4;
L_08835D80:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_08835D84;
L_08835D84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08835D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08835D98u) goto L_08835D98;
    return;
L_08835D98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08835DB4;
L_08835DB4:
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
L_08835DD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08835E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08835E1Cu) goto L_08835E1C;
    return;
L_08835E1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4682));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4680));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4684));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4686));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08835EE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(12, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-262));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835F20;
      }
      goto L_08835F14;
    }
L_08835F14:
    ctx.set_gpr(8, ctx.gpr[6] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08835F24;
      }
      goto L_08835F20;
    }
L_08835F20:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08835F24;
L_08835F24:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[12] + static_cast<std::uint32_t>(258));
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(14, ctx.gpr[2] < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835F50;
      }
      goto L_08835F4C;
    }
L_08835F4C:
    ctx.set_gpr(13, ctx.gpr[13] >> 2u);
    goto L_08835F50;
L_08835F50:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[14] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08835F64;
      }
      goto L_08835F60;
    }
L_08835F60:
    ctx.set_gpr(11, ctx.gpr[14] + 0u);
    goto L_08835F64;
L_08835F64:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(24, ctx.gpr[14] + ctx.gpr[5]);
    ctx.set_gpr(15, ctx.gpr[9] & 255u);
    ctx.set_gpr(16, ctx.gpr[24] + ctx.gpr[2]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360E0;
      }
      goto L_08835F80;
    }
L_08835F80:
    ctx.set_gpr(15, ctx.gpr[10] & 255u);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360E0;
      }
      goto L_08835F90;
    }
L_08835F90:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360E0;
      }
      goto L_08835FA0;
    }
L_08835FA0:
    ctx.set_gpr(16, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360E0;
      }
      goto L_08835FB4;
    }
L_08835FB4:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08835FBC;
L_08835FBC:
    ctx.set_gpr(25, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[25] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_08835FD8;
    }
L_08835FD8:
    ctx.set_gpr(16, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[16] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_08835FF4;
    }
L_08835FF4:
    ctx.set_gpr(24, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[24] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(16, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_08836010;
    }
L_08836010:
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[25] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_0883602C;
    }
L_0883602C:
    ctx.set_gpr(16, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[16] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_08836048;
    }
L_08836048:
    ctx.set_gpr(24, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[24] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(16, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_08836064;
    }
L_08836064:
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[25] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_08836080;
    }
L_08836080:
    ctx.set_gpr(12, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(16, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088360A4;
      }
      goto L_08836098;
    }
L_08836098:
    ctx.set_gpr(14, ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835FBC;
      }
      goto L_088360A4;
    }
L_088360A4:
    ctx.set_gpr(14, ctx.gpr[3] - ctx.gpr[12]);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(258));
    ctx.set_gpr(14, ctx.gpr[12] - ctx.gpr[14]);
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(-258));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088360E0;
      }
      goto L_088360C0;
    }
L_088360C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[14] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836108;
      }
      goto L_088360D4;
    }
L_088360D4:
    ctx.set_gpr(9, ctx.gpr[14] + ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_088360E0;
L_088360E0:
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836108;
      }
      goto L_088360FC;
    }
L_088360FC:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08835F64;
      }
      goto L_08836108;
    }
L_08836108:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836120;
      }
      goto L_08836118;
    }
L_08836118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836124;
      }
      goto L_08836120;
    }
L_08836120:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08836124;
L_08836124:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08836134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_08836150;
L_08836150:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[3] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836188;
      }
      goto L_0883616C;
    }
L_0883616C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836188;
      }
      goto L_08836174;
    }
L_08836174:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836188;
      }
      goto L_0883617C;
    }
L_0883617C:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883627C;
      }
      goto L_08836188;
    }
L_08836188:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088361A0;
      }
      goto L_08836194;
    }
L_08836194:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883627C;
      }
      goto L_088361A0;
    }
L_088361A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-262));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883627C;
      }
      goto L_088361B8;
    }
L_088361B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088361CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088361CCu) goto L_088361CC;
    return;
L_088361CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    goto L_08836200;
L_08836200:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836220;
      }
      goto L_08836214;
    }
L_08836214:
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836224;
      }
      goto L_08836220;
    }
L_08836220:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08836224;
L_08836224:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836200;
      }
      goto L_08836234;
    }
L_08836234:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    goto L_08836244;
L_08836244:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836264;
      }
      goto L_08836258;
    }
L_08836258:
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836268;
      }
      goto L_08836264;
    }
L_08836264:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08836268;
L_08836268:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836244;
      }
      goto L_08836278;
    }
L_08836278:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[16]);
    goto L_0883627C;
L_0883627C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836320;
      }
      goto L_0883628C;
    }
L_0883628C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088362ACu);
    // nop
    goto L_08835D0C;
L_088362AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836300;
      }
      goto L_088362C4;
    }
L_088362C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[5] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] ^ ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    goto L_08836300;
L_08836300:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(262) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836320;
      }
      goto L_08836310;
    }
L_08836310:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836150;
      }
      goto L_08836320;
    }
L_08836320:
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
L_0883633C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u | 65535u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(1, 0u | 65535u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836378;
      }
      goto L_08836374;
    }
L_08836374:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08836378;
L_08836378:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088363BC;
      }
      goto L_08836388;
    }
L_08836388:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08836394u);
    // nop
    goto L_08836134;
L_08836394:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088363B4;
      }
      goto L_088363A0;
    }
L_088363A0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088363B4;
      }
      goto L_088363A8;
    }
L_088363A8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836580;
      }
      goto L_088363B4;
    }
L_088363B4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088364E0;
      }
      goto L_088363BC;
    }
L_088363BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088363EC;
      }
      goto L_088363E0;
    }
L_088363E0:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836460;
      }
      goto L_088363EC;
    }
L_088363EC:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08836414;
      }
      goto L_08836404;
    }
L_08836404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836418;
      }
      goto L_08836414;
    }
L_08836414:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08836418;
L_08836418:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08836430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08836430u) goto L_08836430;
    return;
L_08836430:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08836444u);
    // nop
    goto L_08835710;
L_08836444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836460;
      }
      goto L_08836454;
    }
L_08836454:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836580;
      }
      goto L_08836460;
    }
L_08836460:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-262));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836378;
      }
      goto L_08836480;
    }
L_08836480:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08836498;
      }
      goto L_08836488;
    }
L_08836488:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883649C;
      }
      goto L_08836498;
    }
L_08836498:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0883649C;
L_0883649C:
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088364B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x088364B0u) goto L_088364B0;
    return;
L_088364B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088364C4u);
    // nop
    goto L_08835710;
L_088364C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836378;
      }
      goto L_088364D4;
    }
L_088364D4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836580;
      }
      goto L_088364E0;
    }
L_088364E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088364FC;
      }
      goto L_088364EC;
    }
L_088364EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836500;
      }
      goto L_088364FC;
    }
L_088364FC:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08836500;
L_08836500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[17] ^ 4u);
    ctx.set_gpr(7, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0883651Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x0883651Cu) goto L_0883651C;
    return;
L_0883651C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08836530u);
    // nop
    goto L_08835710;
L_08836530:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836564;
      }
      goto L_08836540;
    }
L_08836540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08836558;
      }
      goto L_0883654C;
    }
L_0883654C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883655C;
      }
      goto L_08836558;
    }
L_08836558:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883655C;
L_0883655C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836580;
      }
      goto L_08836564;
    }
L_08836564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883657C;
      }
      goto L_08836570;
    }
L_08836570:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836580;
      }
      goto L_0883657C;
    }
L_0883657C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08836580;
L_08836580:
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
L_0883659C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_088365BC;
L_088365BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(262) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836604;
      }
      goto L_088365CC;
    }
L_088365CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088365D8u);
    // nop
    goto L_08836134;
L_088365D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(262) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088365FC;
      }
      goto L_088365E8;
    }
L_088365E8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088365FC;
      }
      goto L_088365F0;
    }
L_088365F0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836A68;
      }
      goto L_088365FC;
    }
L_088365FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088369C8;
      }
      goto L_08836604;
    }
L_08836604:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836680;
      }
      goto L_08836610;
    }
L_08836610:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08836680;
L_08836680:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088366C8;
      }
      goto L_08836688;
    }
L_08836688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-262));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088366C8;
      }
      goto L_088366A4;
    }
L_088366A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088366C8;
      }
      goto L_088366B4;
    }
L_088366B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088366C4u);
    // nop
    goto L_08835EE0;
L_088366C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_088366C8;
L_088366C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088368DC;
      }
      goto L_088366D8;
    }
L_088366D8:
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(6, ctx.gpr[7] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5788)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5784), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5776)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7616));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(1168)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1168), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883676C;
      }
      goto L_08836754;
    }
L_08836754:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7104));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836780;
      }
      goto L_0883676C;
    }
L_0883676C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 7u));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7360));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08836780;
L_08836780:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2432), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5780)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836888;
      }
      goto L_088367D0;
    }
L_088367D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836888;
      }
      goto L_088367E0;
    }
L_088367E0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    goto L_088367E8;
L_088367E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088367E8;
      }
      goto L_08836874;
    }
L_08836874:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836958;
      }
      goto L_08836888;
    }
L_08836888:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[5] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] ^ ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836958;
      }
      goto L_088368DC;
    }
L_088368DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5788)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5784), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5776)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5780)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    goto L_08836958;
L_08836958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088365BC;
      }
      goto L_08836960;
    }
L_08836960:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0883697C;
      }
      goto L_0883696C;
    }
L_0883696C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836980;
      }
      goto L_0883697C;
    }
L_0883697C:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08836980;
L_08836980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08836998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08836998u) goto L_08836998;
    return;
L_08836998:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088369ACu);
    // nop
    goto L_08835710;
L_088369AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088365BC;
      }
      goto L_088369BC;
    }
L_088369BC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836A68;
      }
      goto L_088369C8;
    }
L_088369C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088369E4;
      }
      goto L_088369D4;
    }
L_088369D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088369E8;
      }
      goto L_088369E4;
    }
L_088369E4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_088369E8;
L_088369E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[17] ^ 4u);
    ctx.set_gpr(7, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08836A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08836A04u) goto L_08836A04;
    return;
L_08836A04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08836A18u);
    // nop
    goto L_08835710;
L_08836A18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836A4C;
      }
      goto L_08836A28;
    }
L_08836A28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08836A40;
      }
      goto L_08836A34;
    }
L_08836A34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836A44;
      }
      goto L_08836A40;
    }
L_08836A40:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08836A44;
L_08836A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836A68;
      }
      goto L_08836A4C;
    }
L_08836A4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08836A64;
      }
      goto L_08836A58;
    }
L_08836A58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836A68;
      }
      goto L_08836A64;
    }
L_08836A64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08836A68;
L_08836A68:
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
L_08836A84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08836AA4;
L_08836AA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(262) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836AEC;
      }
      goto L_08836AB4;
    }
L_08836AB4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08836AC0u);
    // nop
    goto L_08836134;
L_08836AC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(262) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836AE4;
      }
      goto L_08836AD0;
    }
L_08836AD0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836AE4;
      }
      goto L_08836AD8;
    }
L_08836AD8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883708C;
      }
      goto L_08836AE4;
    }
L_08836AE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836F8C;
      }
      goto L_08836AEC;
    }
L_08836AEC:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836B68;
      }
      goto L_08836AF8;
    }
L_08836AF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08836B68;
L_08836B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C24;
      }
      goto L_08836B88;
    }
L_08836B88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C24;
      }
      goto L_08836B9C;
    }
L_08836B9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-262));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836C24;
      }
      goto L_08836BB8;
    }
L_08836BB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08836BD8;
      }
      goto L_08836BC4;
    }
L_08836BC4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08836BD4u);
    // nop
    goto L_08835EE0;
L_08836BD4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_08836BD8;
L_08836BD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836C24;
      }
      goto L_08836BE8;
    }
L_08836BE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08836C1C;
      }
      goto L_08836BF8;
    }
L_08836BF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08836C24;
      }
      goto L_08836C04;
    }
L_08836C04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836C24;
      }
      goto L_08836C1C;
    }
L_08836C1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    goto L_08836C24;
L_08836C24:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836E6C;
      }
      goto L_08836C34;
    }
L_08836C34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836E6C;
      }
      goto L_08836C44;
    }
L_08836C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(7, ctx.gpr[8] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(4, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5788)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5784), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5776)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7616));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1168)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1168), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836CE8;
      }
      goto L_08836CD0;
    }
L_08836CD0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7104));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836CFC;
      }
      goto L_08836CE8;
    }
L_08836CE8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7360));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08836CFC;
L_08836CFC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2432), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5780)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_08836D48;
L_08836D48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836DD0;
      }
      goto L_08836D60;
    }
L_08836D60:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08836DD0;
L_08836DD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836D48;
      }
      goto L_08836DE4;
    }
L_08836DE4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836AA4;
      }
      goto L_08836E04;
    }
L_08836E04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08836E20;
      }
      goto L_08836E10;
    }
L_08836E10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836E24;
      }
      goto L_08836E20;
    }
L_08836E20:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08836E24;
L_08836E24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08836E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08836E3Cu) goto L_08836E3C;
    return;
L_08836E3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08836E50u);
    // nop
    goto L_08835710;
L_08836E50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836AA4;
      }
      goto L_08836E60;
    }
L_08836E60:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883708C;
      }
      goto L_08836E6C;
    }
L_08836E6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836F64;
      }
      goto L_08836E78;
    }
L_08836E78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5788)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5784), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5776)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5780)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836F30;
      }
      goto L_08836EE4;
    }
L_08836EE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08836F00;
      }
      goto L_08836EF0;
    }
L_08836EF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836F04;
      }
      goto L_08836F00;
    }
L_08836F00:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08836F04;
L_08836F04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08836F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08836F1Cu) goto L_08836F1C;
    return;
L_08836F1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08836F30u);
    // nop
    goto L_08835710;
L_08836F30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08836AA4;
      }
      goto L_08836F58;
    }
L_08836F58:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883708C;
      }
      goto L_08836F64;
    }
L_08836F64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08836AA4;
      }
      goto L_08836F8C;
    }
L_08836F8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08836FEC;
      }
      goto L_08836F98;
    }
L_08836F98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5788)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5784)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5784), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5776)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), 0u);
    goto L_08836FEC;
L_08836FEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08837008;
      }
      goto L_08836FF8;
    }
L_08836FF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883700C;
      }
      goto L_08837008;
    }
L_08837008:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0883700C;
L_0883700C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[17] ^ 4u);
    ctx.set_gpr(7, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08837028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 671u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08837028u) goto L_08837028;
    return;
L_08837028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0883703Cu);
    // nop
    goto L_08835710;
L_0883703C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837070;
      }
      goto L_0883704C;
    }
L_0883704C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08837064;
      }
      goto L_08837058;
    }
L_08837058:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837068;
      }
      goto L_08837064;
    }
L_08837064:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08837068;
L_08837068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883708C;
      }
      goto L_08837070;
    }
L_08837070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08837088;
      }
      goto L_0883707C;
    }
L_0883707C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883708C;
      }
      goto L_08837088;
    }
L_08837088:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0883708C;
L_0883708C:
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
L_088370A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088370D0;
      }
      goto L_088370C8;
    }
L_088370C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_088370D0;
L_088370D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088370EC;
      }
      goto L_088370E0;
    }
L_088370E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08837100;
      }
      goto L_088370EC;
    }
L_088370EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837100u) goto L_08837100;
    return;
L_08837100:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08837120;
      }
      goto L_08837110;
    }
L_08837110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08837120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 159u, 0x08838DDCu>(ctx, &aot_mem) && ctx.pc == 0x08837120u) goto L_08837120;
    return;
L_08837120:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837160;
      }
      goto L_08837144;
    }
L_08837144:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08837158u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837158u) goto L_08837158;
    return;
L_08837158:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_08837160;
L_08837160:
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
L_08837178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088371B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088371B4u) goto L_088371B4;
    return;
L_088371B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088371C8;
      }
      goto L_088371C0;
    }
L_088371C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837290;
      }
      goto L_088371C8;
    }
L_088371C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1440));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088371E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088371E0u) goto L_088371E0;
    return;
L_088371E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883720C;
      }
      goto L_088371EC;
    }
L_088371EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837200u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837200u) goto L_08837200;
    return;
L_08837200:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837290;
      }
      goto L_0883720C;
    }
L_0883720C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837224u) goto L_08837224;
    return;
L_08837224:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837264;
      }
      goto L_08837230;
    }
L_08837230:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837244u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837244u) goto L_08837244;
    return;
L_08837244:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837258u) goto L_08837258;
    return;
L_08837258:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837290;
      }
      goto L_08837264;
    }
L_08837264:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0883728Cu);
    // nop
    goto L_088370A8;
L_0883728C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08837290;
L_08837290:
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
L_088372B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837320;
      }
      goto L_0883730C;
    }
L_0883730C:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_08837320;
    }
L_08837320:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_0883732C;
L_0883732C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 24u, 0x0883820Cu>(ctx, &aot_mem); return;
      }
      goto L_0883733C;
    }
L_0883733C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4876));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08837358:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883736C;
      }
      goto L_08837360;
    }
L_08837360:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088373B0;
      }
      goto L_0883736C;
    }
L_0883736C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088373A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x088373A8u) goto L_088373A8;
    return;
L_088373A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_088373B0;
    }
L_088373B0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_088373CC;
L_088373CC:
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837358;
      }
      goto L_088373D8;
    }
L_088373D8:
    ctx.set_gpr(3, ctx.gpr[18] & 7u);
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088374F0;
      }
      goto L_088373F4;
    }
L_088373F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088374DC;
      }
      goto L_08837400;
    }
L_08837400:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883743C;
      }
      goto L_0883740C;
    }
L_0883740C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883741C;
      }
      goto L_08837414;
    }
L_08837414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_0883741C;
    }
L_0883741C:
    ctx.set_gpr(4, ctx.gpr[18] >> 3u);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
    ctx.set_gpr(18, ctx.gpr[4] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(17, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_0883743C;
    }
L_0883743C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08837458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 439u, 0x0883A564u>(ctx, &aot_mem) && ctx.pc == 0x08837458u) goto L_08837458;
    return;
L_08837458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08837474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x088382F8u>(ctx, &aot_mem) && ctx.pc == 0x08837474u) goto L_08837474;
    return;
L_08837474:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088374C4;
      }
      goto L_08837480;
    }
L_08837480:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(31, 0x088374BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x088374BCu) goto L_088374BC;
    return;
L_088374BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_088374C4;
    }
L_088374C4:
    ctx.set_gpr(18, ctx.gpr[18] >> 3u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_088374DC;
    }
L_088374DC:
    ctx.set_gpr(18, ctx.gpr[18] >> 3u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_088374F0;
    }
L_088374F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10660));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] >> 3u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x08837548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837548u) goto L_08837548;
    return;
L_08837548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837550;
    }
L_08837550:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837564;
      }
      goto L_08837558;
    }
L_08837558:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088375A8;
      }
      goto L_08837564;
    }
L_08837564:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088375A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x088375A0u) goto L_088375A0;
    return;
L_088375A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_088375A8;
    }
L_088375A8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_088375C4;
L_088375C4:
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837550;
      }
      goto L_088375D0;
    }
L_088375D0:
    ctx.set_gpr(2, ~(ctx.gpr[18] | 0u));
    ctx.set_gpr(3, (ctx.gpr[2] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[18] & 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883763C;
      }
      goto L_088375E4;
    }
L_088375E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10680));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x08837634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837634u) goto L_08837634;
    return;
L_08837634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_0883763C;
    }
L_0883763C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883765C;
      }
      goto L_08837650;
    }
L_08837650:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837678;
      }
      goto L_0883765C;
    }
L_0883765C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837674;
      }
      goto L_08837668;
    }
L_08837668:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837678;
      }
      goto L_08837674;
    }
L_08837674:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08837678;
L_08837678:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_08837684;
    }
L_08837684:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088376D0;
      }
      goto L_0883768C;
    }
L_0883768C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088376C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x088376C8u) goto L_088376C8;
    return;
L_088376C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_088376D0;
    }
L_088376D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837814;
      }
      goto L_088376DC;
    }
L_088376DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08837724;
      }
      goto L_088376E8;
    }
L_088376E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08837724;
      }
      goto L_088376F8;
    }
L_088376F8:
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883771C;
      }
      goto L_08837708;
    }
L_08837708:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837724;
      }
      goto L_0883771C;
    }
L_0883771C:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08837724;
L_08837724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837814;
      }
      goto L_08837730;
    }
L_08837730:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08837748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837748u) goto L_08837748;
    return;
L_08837748:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837774;
      }
      goto L_08837760;
    }
L_08837760:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837780;
      }
      goto L_08837774;
    }
L_08837774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08837780;
L_08837780:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088377C4;
      }
      goto L_0883778C;
    }
L_0883778C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088377C4;
      }
      goto L_08837798;
    }
L_08837798:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088377BC;
      }
      goto L_088377A8;
    }
L_088377A8:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088377C4;
      }
      goto L_088377BC;
    }
L_088377BC:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_088377C4;
L_088377C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837814;
      }
      goto L_088377D0;
    }
L_088377D0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0883780Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x0883780Cu) goto L_0883780C;
    return;
L_0883780C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837814;
    }
L_08837814:
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[21] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883782C;
      }
      goto L_08837828;
    }
L_08837828:
    ctx.set_gpr(30, ctx.gpr[21] + 0u);
    goto L_0883782C;
L_0883782C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837840;
      }
      goto L_0883783C;
    }
L_0883783C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_08837840;
L_08837840:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08837854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08837854u) goto L_08837854;
    return;
L_08837854:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[30]);
    ctx.set_gpr(21, ctx.gpr[21] - ctx.gpr[30]);
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_08837880;
    }
L_08837880:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837898;
      }
      goto L_0883788C;
    }
L_0883788C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883789C;
      }
      goto L_08837898;
    }
L_08837898:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883789C;
L_0883789C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883732C;
      }
      goto L_088378A8;
    }
L_088378A8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088378BC;
      }
      goto L_088378B0;
    }
L_088378B0:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837900;
      }
      goto L_088378BC;
    }
L_088378BC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088378F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x088378F8u) goto L_088378F8;
    return;
L_088378F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837900;
    }
L_08837900:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0883791C;
L_0883791C:
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088378A8;
      }
      goto L_08837928;
    }
L_08837928:
    ctx.set_gpr(3, ctx.gpr[18] & 16383u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] & 31u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837950;
      }
      goto L_08837940;
    }
L_08837940:
    ctx.set_gpr(3, (ctx.gpr[3] >> 5u) & 0x0000001Fu);
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088379A8;
      }
      goto L_08837950;
    }
L_08837950:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10712));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x088379A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x088379A0u) goto L_088379A0;
    return;
L_088379A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_088379A8;
    }
L_088379A8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(258));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088379C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088379C4u) goto L_088379C4;
    return;
L_088379C4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837A14;
      }
      goto L_088379D0;
    }
L_088379D0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(31, 0x08837A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837A0Cu) goto L_08837A0C;
    return;
L_08837A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837A14;
    }
L_08837A14:
    ctx.set_gpr(18, ctx.gpr[18] >> 14u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-14));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837AEC;
      }
      goto L_08837A30;
    }
L_08837A30:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837A44;
      }
      goto L_08837A38;
    }
L_08837A38:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837A88;
      }
      goto L_08837A44;
    }
L_08837A44:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08837A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837A80u) goto L_08837A80;
    return;
L_08837A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837A88;
    }
L_08837A88:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08837AA4;
L_08837AA4:
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837A30;
      }
      goto L_08837AB0;
    }
L_08837AB0:
    ctx.set_gpr(4, ctx.gpr[18] & 7u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4800));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[18] >> 3u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-3));
    goto L_08837AEC;
L_08837AEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837AA4;
      }
      goto L_08837B08;
    }
L_08837B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837B40;
      }
      goto L_08837B10;
    }
L_08837B10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4800));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08837B40;
L_08837B40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837B10;
      }
      goto L_08837B50;
    }
L_08837B50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08837B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 400u, 0x0883A1DCu>(ctx, &aot_mem) && ctx.pc == 0x08837B74u) goto L_08837B74;
    return;
L_08837B74:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837BF0;
      }
      goto L_08837B80;
    }
L_08837B80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837B94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837B94u) goto L_08837B94;
    return;
L_08837B94:
    ctx.set_gpr(23, ctx.gpr[30] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08837BAC;
      }
      goto L_08837BA4;
    }
L_08837BA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08837BAC;
L_08837BAC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08837BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837BE8u) goto L_08837BE8;
    return;
L_08837BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837BF0;
    }
L_08837BF0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837ED0;
      }
      goto L_08837C04;
    }
L_08837C04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837C84;
      }
      goto L_08837C10;
    }
L_08837C10:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837C24;
      }
      goto L_08837C18;
    }
L_08837C18:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837C68;
      }
      goto L_08837C24;
    }
L_08837C24:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08837C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837C60u) goto L_08837C60;
    return;
L_08837C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837C68;
    }
L_08837C68:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08837C84;
L_08837C84:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837C10;
      }
      goto L_08837C90;
    }
L_08837C90:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[18] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837CF4;
      }
      goto L_08837CC8;
    }
L_08837CC8:
    ctx.set_gpr(18, ctx.gpr[18] >> (ctx.gpr[8] & 31u));
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837ED0;
      }
      goto L_08837CF4;
    }
L_08837CF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08837D0C;
      }
      goto L_08837D00;
    }
L_08837D00:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837D10;
      }
      goto L_08837D0C;
    }
L_08837D0C:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-14));
    goto L_08837D10;
L_08837D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08837D28;
      }
      goto L_08837D1C;
    }
L_08837D1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837D2C;
      }
      goto L_08837D28;
    }
L_08837D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08837D2C;
L_08837D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837DA8;
      }
      goto L_08837D34;
    }
L_08837D34:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837D48;
      }
      goto L_08837D3C;
    }
L_08837D3C:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837D8C;
      }
      goto L_08837D48;
    }
L_08837D48:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08837D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837D84u) goto L_08837D84;
    return;
L_08837D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837D8C;
    }
L_08837D8C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << (ctx.gpr[17] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[7]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08837DA8;
L_08837DA8:
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[17] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837D34;
      }
      goto L_08837DB8;
    }
L_08837DB8:
    ctx.set_gpr(10, ctx.gpr[18] >> (ctx.gpr[8] & 31u));
    ctx.set_gpr(9, ctx.gpr[17] - ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[4] << 2u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[10] & ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(18, ctx.gpr[10] >> (ctx.gpr[4] & 31u));
    ctx.set_gpr(17, ctx.gpr[9] - ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] & 31u);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(258));
    ctx.set_gpr(4, (ctx.gpr[6] >> 5u) & 0x0000001Fu);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837E18;
      }
      goto L_08837E04;
    }
L_08837E04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08837E84;
      }
      goto L_08837E10;
    }
L_08837E10:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837E84;
      }
      goto L_08837E18;
    }
L_08837E18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837E2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837E2Cu) goto L_08837E2C;
    return;
L_08837E2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10748));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x08837E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837E7Cu) goto L_08837E7C;
    return;
L_08837E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837E84;
    }
L_08837E84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08837EA8;
      }
      goto L_08837E90;
    }
L_08837E90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08837EAC;
      }
      goto L_08837EA8;
    }
L_08837EA8:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08837EAC;
L_08837EAC:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837EAC;
      }
      goto L_08837ECC;
    }
L_08837ECC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08837ED0;
L_08837ED0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(258));
    ctx.set_gpr(2, (ctx.gpr[6] >> 5u) & 0x0000001Fu);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08837C04;
      }
      goto L_08837EF4;
    }
L_08837EF4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] & 31u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(257));
    ctx.set_gpr(2, (ctx.gpr[3] >> 5u) & 0x0000001Fu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08837F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 412u, 0x0883A304u>(ctx, &aot_mem) && ctx.pc == 0x08837F40u) goto L_08837F40;
    return;
L_08837F40:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08837F58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08837F58u) goto L_08837F58;
    return;
L_08837F58:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08837FB8;
      }
      goto L_08837F60;
    }
L_08837F60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08837F74;
      }
      goto L_08837F6C;
    }
L_08837F6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08837F74;
L_08837F74:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08837FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x0883A5A0u>(ctx, &aot_mem) && ctx.pc == 0x08837FB0u) goto L_08837FB0;
    return;
L_08837FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 25u, 0x08838248u>(ctx, &aot_mem); return;
      }
      goto L_08837FB8;
    }
L_08837FB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08837FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x088382F8u>(ctx, &aot_mem) && ctx.pc == 0x08837FD4u) goto L_08837FD4;
    return;
L_08837FD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 3u, 0x08838020u>(ctx, &aot_mem); return;
      }
      goto L_08837FDC;
    }
L_08837FDC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.pc = 0x08838000u; return;
}

void recomp_unit_0012(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0012_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_12(Runtime &runtime) {
    runtime.register_generated_unit(12u, 0x08834000u, 16384u, &recomp_unit_0012, &recomp_unit_0012_entry);
    runtime.register_function(0x08834000u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834008u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834014u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834024u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834044u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834058u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834080u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834084u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834090u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088340E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834100u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834114u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834120u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883412Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883414Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834158u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834164u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834170u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834188u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088341F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883422Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883423Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834244u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883425Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834270u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834278u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834280u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834290u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883429Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088342F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834308u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834318u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834338u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834350u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834378u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883437Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834388u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088343F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834410u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834430u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883443Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834448u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834454u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883446Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883448Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088344A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088344CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088344D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088344DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834510u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834520u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834528u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834544u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834570u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834578u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834580u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834590u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834594u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088345A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088345B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088345D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088345E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834610u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834614u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834620u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834654u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834664u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883466Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834678u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834680u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883468Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088346A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088346CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088346D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088346E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088346FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834704u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834724u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834730u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883473Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834748u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834760u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834780u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834798u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088347D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834804u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834814u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883481Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834838u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834868u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834870u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834878u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834880u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883488Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834898u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348B8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088348F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834904u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834908u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834914u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834924u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834944u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834958u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834980u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834984u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834990u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088349FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A54u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A88u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834A94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834ACCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834ADCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834AF8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834B84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BBCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834BF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834C84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CBCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CE0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834CFCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D0Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D54u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D70u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834D8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834DFCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E30u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E48u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E54u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834E94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834EA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834EB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834ED0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834EF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F14u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F48u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834F9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08834FF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835000u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883500Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835018u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883501Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835028u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088350F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088350FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835104u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835124u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835138u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835140u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835148u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835150u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835158u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835164u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835170u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835280u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883528Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835294u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088352CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088352D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088352D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835324u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883533Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835348u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835354u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883535Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835368u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835378u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835388u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835394u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353B8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088353F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835400u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883540Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835414u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835420u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883542Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835444u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835450u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883545Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088354C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088354E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835500u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835528u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835544u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835550u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883555Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835568u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835580u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883558Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088355D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835600u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835614u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835620u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883562Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835638u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835644u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835674u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835678u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835684u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835690u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835694u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088356D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835710u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883573Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835740u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835748u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883575Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088357B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088357B8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088357D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088357F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835800u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883580Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835814u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835820u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883582Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835838u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835844u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835854u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835860u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835878u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835884u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883589Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088358B8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088358E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088358E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088358FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835900u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835928u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835934u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835944u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835950u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835958u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835964u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835970u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883597Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835990u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883599Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088359E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A0Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A88u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835A9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835ABCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835AF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B30u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B5Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835B94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BDCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835BF8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C70u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835C90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835CF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D0Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835D98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835DB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835DD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835E1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835EE0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F14u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835F90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FA0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FBCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08835FF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836010u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883602Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836048u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836064u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836080u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836098u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088360FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836108u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836118u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836120u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836124u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836134u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836150u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883616Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836174u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883617Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836188u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836194u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361B8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088361CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836200u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836214u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836220u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836224u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836234u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836244u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836258u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836264u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836268u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836278u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883627Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883628Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088362C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836300u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836310u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836320u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883633Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836374u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836378u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836388u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836394u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088363ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836404u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836414u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836418u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836430u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836444u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836454u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836460u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836480u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836488u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836498u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883649Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088364FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836500u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883651Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836530u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836540u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883654Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836558u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883655Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836564u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836570u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883657Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836580u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883659Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088365BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088365CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088365D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088365E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088365F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088365FCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836604u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836610u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836680u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836688u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366A4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088366D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836754u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883676Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836780u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088367D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088367E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088367E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836874u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836888u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088368DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836958u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836960u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883696Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883697Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836980u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836998u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369ACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369D4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088369E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A4Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836A84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AB4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AC0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836AF8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B88u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836B9Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BC4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BD8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836BF8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836C44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836CD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836CE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836CFCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836D48u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836D60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836DD0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836DE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E20u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836E78u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836EE4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836EF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F30u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F64u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836F98u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836FECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08836FF8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837008u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883700Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837028u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883703Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883704Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837058u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837064u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837068u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837070u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883707Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837088u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883708Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088370ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837100u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837110u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837120u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837144u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837158u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837160u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837178u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371B4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371C0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371E0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088371ECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837200u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883720Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837224u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837230u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837244u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837258u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837264u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883728Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837290u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088372B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883730Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837320u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883732Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883733Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837358u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837360u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883736Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088373A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088373B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088373CCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088373D8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088373F4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837400u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883740Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837414u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883741Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883743Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837458u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837474u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837480u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088374BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088374C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088374DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088374F0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837548u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837550u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837558u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837564u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088375E4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837634u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883763Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837650u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883765Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837668u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837674u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837678u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837684u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883768Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376C8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376DCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376E8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088376F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837708u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883771Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837724u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837730u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837748u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837760u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837774u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837780u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883778Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837798u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088377D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883780Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837814u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837828u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883782Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883783Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837840u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837854u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837880u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883788Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837898u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883789Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088378A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088378B0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088378BCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088378F8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837900u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x0883791Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837928u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837940u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837950u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088379A0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088379A8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088379C4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x088379D0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A0Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A14u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A30u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A38u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A44u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837A88u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837AA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837AB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837AECu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837B08u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837B10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837B40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837B50u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837B74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837B80u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837B94u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837BA4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837BACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837BE8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837BF0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C24u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C68u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837C90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837CC8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837CF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D00u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D0Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D1Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D28u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D34u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D3Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D48u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837D8Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837DA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837DB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E04u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E10u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E18u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E2Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E7Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E84u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837E90u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837EA8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837EACu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837ECCu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837ED0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837EF4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837F40u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837F58u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837F60u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837F6Cu, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837F74u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FB0u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FB8u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FD4u, &recomp_unit_0012, "recomp_unit_0012");
    runtime.register_function(0x08837FDCu, &recomp_unit_0012, "recomp_unit_0012");
}
} // namespace psprecomp
