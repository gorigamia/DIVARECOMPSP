#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0132[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 0,
    0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0,
    0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0,
    0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 129,
    0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0,
    0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254,
    0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267,
    0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0,
    284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0,
    299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 321, 0, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0,
    0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0,
    0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0,
    0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0,
    0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0,
    415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422,
    0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0,
    0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478,
    0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0,
    488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0,
    498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0,
    0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509,
    0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0,
    0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518,
    0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0,
    550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0,
    555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0,
    0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 593, 0,
    0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0,
    607, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613,
    0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0,
    617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 632,
    0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0,
    0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0,
    0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 0, 662, 0, 663,
    0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0,
    673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0,
    679, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0,
    0, 0, 684, 0, 685, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 692,
    0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0,
    0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0,
    703, 0, 704, 0, 0, 705, 0, 0, 706, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0,
    0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0,
    0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0,
    0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0,
    0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750,
};
void recomp_unit_0132_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A14000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0132[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A14000;
    case 2u: goto L_08A14018;
    case 3u: goto L_08A14024;
    case 4u: goto L_08A14038;
    case 5u: goto L_08A14048;
    case 6u: goto L_08A14070;
    case 7u: goto L_08A1408C;
    case 8u: goto L_08A140A4;
    case 9u: goto L_08A140AC;
    case 10u: goto L_08A140B8;
    case 11u: goto L_08A140C4;
    case 12u: goto L_08A140CC;
    case 13u: goto L_08A140E4;
    case 14u: goto L_08A140FC;
    case 15u: goto L_08A14110;
    case 16u: goto L_08A14118;
    case 17u: goto L_08A14130;
    case 18u: goto L_08A14144;
    case 19u: goto L_08A14158;
    case 20u: goto L_08A14174;
    case 21u: goto L_08A1418C;
    case 22u: goto L_08A1419C;
    case 23u: goto L_08A141AC;
    case 24u: goto L_08A14200;
    case 25u: goto L_08A14210;
    case 26u: goto L_08A14220;
    case 27u: goto L_08A14230;
    case 28u: goto L_08A14248;
    case 29u: goto L_08A14250;
    case 30u: goto L_08A1425C;
    case 31u: goto L_08A14268;
    case 32u: goto L_08A14270;
    case 33u: goto L_08A14288;
    case 34u: goto L_08A142A0;
    case 35u: goto L_08A142B4;
    case 36u: goto L_08A142BC;
    case 37u: goto L_08A142D4;
    case 38u: goto L_08A142EC;
    case 39u: goto L_08A14310;
    case 40u: goto L_08A14334;
    case 41u: goto L_08A1433C;
    case 42u: goto L_08A14348;
    case 43u: goto L_08A14350;
    case 44u: goto L_08A1435C;
    case 45u: goto L_08A14364;
    case 46u: goto L_08A14370;
    case 47u: goto L_08A14378;
    case 48u: goto L_08A14390;
    case 49u: goto L_08A143A8;
    case 50u: goto L_08A143B8;
    case 51u: goto L_08A143C8;
    case 52u: goto L_08A14424;
    case 53u: goto L_08A14434;
    case 54u: goto L_08A14444;
    case 55u: goto L_08A14454;
    case 56u: goto L_08A1447C;
    case 57u: goto L_08A14498;
    case 58u: goto L_08A144A8;
    case 59u: goto L_08A144B4;
    case 60u: goto L_08A144C8;
    case 61u: goto L_08A144D4;
    case 62u: goto L_08A144E8;
    case 63u: goto L_08A144F4;
    case 64u: goto L_08A14510;
    case 65u: goto L_08A1451C;
    case 66u: goto L_08A14538;
    case 67u: goto L_08A14548;
    case 68u: goto L_08A14558;
    case 69u: goto L_08A14568;
    case 70u: goto L_08A14578;
    case 71u: goto L_08A14590;
    case 72u: goto L_08A145AC;
    case 73u: goto L_08A145DC;
    case 74u: goto L_08A145F8;
    case 75u: goto L_08A14610;
    case 76u: goto L_08A14624;
    case 77u: goto L_08A1462C;
    case 78u: goto L_08A14644;
    case 79u: goto L_08A1465C;
    case 80u: goto L_08A1468C;
    case 81u: goto L_08A146B0;
    case 82u: goto L_08A146B8;
    case 83u: goto L_08A146C4;
    case 84u: goto L_08A146CC;
    case 85u: goto L_08A146D8;
    case 86u: goto L_08A146E0;
    case 87u: goto L_08A146EC;
    case 88u: goto L_08A146F4;
    case 89u: goto L_08A1470C;
    case 90u: goto L_08A14718;
    case 91u: goto L_08A14728;
    case 92u: goto L_08A14740;
    case 93u: goto L_08A14758;
    case 94u: goto L_08A14768;
    case 95u: goto L_08A14778;
    case 96u: goto L_08A147D4;
    case 97u: goto L_08A147E4;
    case 98u: goto L_08A147F4;
    case 99u: goto L_08A14804;
    case 100u: goto L_08A14814;
    case 101u: goto L_08A1483C;
    case 102u: goto L_08A14858;
    case 103u: goto L_08A14868;
    case 104u: goto L_08A14874;
    case 105u: goto L_08A14888;
    case 106u: goto L_08A14894;
    case 107u: goto L_08A148B0;
    case 108u: goto L_08A148BC;
    case 109u: goto L_08A148D8;
    case 110u: goto L_08A148E4;
    case 111u: goto L_08A14900;
    case 112u: goto L_08A14918;
    case 113u: goto L_08A14934;
    case 114u: goto L_08A14944;
    case 115u: goto L_08A14954;
    case 116u: goto L_08A14968;
    case 117u: goto L_08A14990;
    case 118u: goto L_08A149AC;
    case 119u: goto L_08A149C4;
    case 120u: goto L_08A149D8;
    case 121u: goto L_08A149E0;
    case 122u: goto L_08A149F8;
    case 123u: goto L_08A14A10;
    case 124u: goto L_08A14A30;
    case 125u: goto L_08A14A54;
    case 126u: goto L_08A14A5C;
    case 127u: goto L_08A14A68;
    case 128u: goto L_08A14A70;
    case 129u: goto L_08A14A7C;
    case 130u: goto L_08A14A84;
    case 131u: goto L_08A14A9C;
    case 132u: goto L_08A14AB4;
    case 133u: goto L_08A14AC4;
    case 134u: goto L_08A14AD4;
    case 135u: goto L_08A14B30;
    case 136u: goto L_08A14B40;
    case 137u: goto L_08A14B50;
    case 138u: goto L_08A14B60;
    case 139u: goto L_08A14B88;
    case 140u: goto L_08A14BA4;
    case 141u: goto L_08A14BB4;
    case 142u: goto L_08A14BC0;
    case 143u: goto L_08A14BDC;
    case 144u: goto L_08A14BE8;
    case 145u: goto L_08A14C04;
    case 146u: goto L_08A14C10;
    case 147u: goto L_08A14C2C;
    case 148u: goto L_08A14C3C;
    case 149u: goto L_08A14C64;
    case 150u: goto L_08A14C80;
    case 151u: goto L_08A14C98;
    case 152u: goto L_08A14CA0;
    case 153u: goto L_08A14CAC;
    case 154u: goto L_08A14CB8;
    case 155u: goto L_08A14CC0;
    case 156u: goto L_08A14CD8;
    case 157u: goto L_08A14CF0;
    case 158u: goto L_08A14D04;
    case 159u: goto L_08A14D0C;
    case 160u: goto L_08A14D24;
    case 161u: goto L_08A14D38;
    case 162u: goto L_08A14D4C;
    case 163u: goto L_08A14D68;
    case 164u: goto L_08A14D80;
    case 165u: goto L_08A14D90;
    case 166u: goto L_08A14DA0;
    case 167u: goto L_08A14DF4;
    case 168u: goto L_08A14E04;
    case 169u: goto L_08A14E14;
    case 170u: goto L_08A14E24;
    case 171u: goto L_08A14E3C;
    case 172u: goto L_08A14E44;
    case 173u: goto L_08A14E50;
    case 174u: goto L_08A14E5C;
    case 175u: goto L_08A14E64;
    case 176u: goto L_08A14E7C;
    case 177u: goto L_08A14E94;
    case 178u: goto L_08A14EA8;
    case 179u: goto L_08A14EB0;
    case 180u: goto L_08A14EC8;
    case 181u: goto L_08A14EE0;
    case 182u: goto L_08A14EFC;
    case 183u: goto L_08A14F20;
    case 184u: goto L_08A14F28;
    case 185u: goto L_08A14F34;
    case 186u: goto L_08A14F3C;
    case 187u: goto L_08A14F54;
    case 188u: goto L_08A14F6C;
    case 189u: goto L_08A14F7C;
    case 190u: goto L_08A14F8C;
    case 191u: goto L_08A14FE8;
    case 192u: goto L_08A14FF8;
    case 193u: goto L_08A15008;
    case 194u: goto L_08A15018;
    case 195u: goto L_08A15040;
    case 196u: goto L_08A1505C;
    case 197u: goto L_08A1506C;
    case 198u: goto L_08A15084;
    case 199u: goto L_08A150A0;
    case 200u: goto L_08A150B8;
    case 201u: goto L_08A150D4;
    case 202u: goto L_08A150E0;
    case 203u: goto L_08A150FC;
    case 204u: goto L_08A1510C;
    case 205u: goto L_08A1511C;
    case 206u: goto L_08A15128;
    case 207u: goto L_08A1515C;
    case 208u: goto L_08A15178;
    case 209u: goto L_08A15190;
    case 210u: goto L_08A151A4;
    case 211u: goto L_08A151AC;
    case 212u: goto L_08A151C4;
    case 213u: goto L_08A151DC;
    case 214u: goto L_08A1520C;
    case 215u: goto L_08A15230;
    case 216u: goto L_08A15238;
    case 217u: goto L_08A15244;
    case 218u: goto L_08A1524C;
    case 219u: goto L_08A15258;
    case 220u: goto L_08A15260;
    case 221u: goto L_08A1526C;
    case 222u: goto L_08A15274;
    case 223u: goto L_08A1528C;
    case 224u: goto L_08A15298;
    case 225u: goto L_08A152A8;
    case 226u: goto L_08A152C0;
    case 227u: goto L_08A152D8;
    case 228u: goto L_08A152E8;
    case 229u: goto L_08A152F8;
    case 230u: goto L_08A15354;
    case 231u: goto L_08A15364;
    case 232u: goto L_08A15374;
    case 233u: goto L_08A15384;
    case 234u: goto L_08A153AC;
    case 235u: goto L_08A153C8;
    case 236u: goto L_08A153D8;
    case 237u: goto L_08A153E4;
    case 238u: goto L_08A15400;
    case 239u: goto L_08A1540C;
    case 240u: goto L_08A15428;
    case 241u: goto L_08A15434;
    case 242u: goto L_08A15448;
    case 243u: goto L_08A15454;
    case 244u: goto L_08A15480;
    case 245u: goto L_08A1549C;
    case 246u: goto L_08A154B4;
    case 247u: goto L_08A154C8;
    case 248u: goto L_08A154D0;
    case 249u: goto L_08A154E8;
    case 250u: goto L_08A15500;
    case 251u: goto L_08A15544;
    case 252u: goto L_08A15568;
    case 253u: goto L_08A15570;
    case 254u: goto L_08A1557C;
    case 255u: goto L_08A15584;
    case 256u: goto L_08A15590;
    case 257u: goto L_08A15598;
    case 258u: goto L_08A155A4;
    case 259u: goto L_08A155AC;
    case 260u: goto L_08A155B8;
    case 261u: goto L_08A155C0;
    case 262u: goto L_08A155CC;
    case 263u: goto L_08A155D4;
    case 264u: goto L_08A155E0;
    case 265u: goto L_08A155E8;
    case 266u: goto L_08A155F4;
    case 267u: goto L_08A155FC;
    case 268u: goto L_08A15608;
    case 269u: goto L_08A15610;
    case 270u: goto L_08A15628;
    case 271u: goto L_08A15634;
    case 272u: goto L_08A15644;
    case 273u: goto L_08A1565C;
    case 274u: goto L_08A15674;
    case 275u: goto L_08A15684;
    case 276u: goto L_08A15694;
    case 277u: goto L_08A156F0;
    case 278u: goto L_08A15700;
    case 279u: goto L_08A15710;
    case 280u: goto L_08A15720;
    case 281u: goto L_08A15748;
    case 282u: goto L_08A15764;
    case 283u: goto L_08A15774;
    case 284u: goto L_08A15780;
    case 285u: goto L_08A15794;
    case 286u: goto L_08A157A0;
    case 287u: goto L_08A157B4;
    case 288u: goto L_08A157C0;
    case 289u: goto L_08A157D4;
    case 290u: goto L_08A157E0;
    case 291u: goto L_08A157F4;
    case 292u: goto L_08A15800;
    case 293u: goto L_08A15820;
    case 294u: goto L_08A1582C;
    case 295u: goto L_08A15840;
    case 296u: goto L_08A1584C;
    case 297u: goto L_08A15860;
    case 298u: goto L_08A1586C;
    case 299u: goto L_08A15880;
    case 300u: goto L_08A1588C;
    case 301u: goto L_08A158C4;
    case 302u: goto L_08A158E0;
    case 303u: goto L_08A158F8;
    case 304u: goto L_08A1590C;
    case 305u: goto L_08A15920;
    case 306u: goto L_08A15938;
    case 307u: goto L_08A15940;
    case 308u: goto L_08A1594C;
    case 309u: goto L_08A15958;
    case 310u: goto L_08A15960;
    case 311u: goto L_08A15978;
    case 312u: goto L_08A15990;
    case 313u: goto L_08A159A4;
    case 314u: goto L_08A159AC;
    case 315u: goto L_08A159C4;
    case 316u: goto L_08A159DC;
    case 317u: goto L_08A15A10;
    case 318u: goto L_08A15A34;
    case 319u: goto L_08A15A3C;
    case 320u: goto L_08A15A48;
    case 321u: goto L_08A15A50;
    case 322u: goto L_08A15A5C;
    case 323u: goto L_08A15A64;
    case 324u: goto L_08A15A70;
    case 325u: goto L_08A15A78;
    case 326u: goto L_08A15A84;
    case 327u: goto L_08A15A8C;
    case 328u: goto L_08A15A98;
    case 329u: goto L_08A15AA0;
    case 330u: goto L_08A15AAC;
    case 331u: goto L_08A15AB4;
    case 332u: goto L_08A15AC0;
    case 333u: goto L_08A15AC8;
    case 334u: goto L_08A15AE0;
    case 335u: goto L_08A15AF8;
    case 336u: goto L_08A15B08;
    case 337u: goto L_08A15B18;
    case 338u: goto L_08A15B74;
    case 339u: goto L_08A15B84;
    case 340u: goto L_08A15B94;
    case 341u: goto L_08A15BA4;
    case 342u: goto L_08A15BCC;
    case 343u: goto L_08A15BE8;
    case 344u: goto L_08A15BF8;
    case 345u: goto L_08A15C04;
    case 346u: goto L_08A15C18;
    case 347u: goto L_08A15C24;
    case 348u: goto L_08A15C38;
    case 349u: goto L_08A15C44;
    case 350u: goto L_08A15C58;
    case 351u: goto L_08A15C64;
    case 352u: goto L_08A15C78;
    case 353u: goto L_08A15C84;
    case 354u: goto L_08A15C98;
    case 355u: goto L_08A15CA4;
    case 356u: goto L_08A15CB8;
    case 357u: goto L_08A15CD0;
    case 358u: goto L_08A15CEC;
    case 359u: goto L_08A15CF8;
    case 360u: goto L_08A15D0C;
    case 361u: goto L_08A15D18;
    case 362u: goto L_08A15D44;
    case 363u: goto L_08A15D60;
    case 364u: goto L_08A15D78;
    case 365u: goto L_08A15D8C;
    case 366u: goto L_08A15D94;
    case 367u: goto L_08A15DAC;
    case 368u: goto L_08A15DC4;
    case 369u: goto L_08A15DE4;
    case 370u: goto L_08A15E08;
    case 371u: goto L_08A15E18;
    case 372u: goto L_08A15E30;
    case 373u: goto L_08A15E48;
    case 374u: goto L_08A15E58;
    case 375u: goto L_08A15E68;
    case 376u: goto L_08A15EBC;
    case 377u: goto L_08A15ECC;
    case 378u: goto L_08A15EDC;
    case 379u: goto L_08A15EEC;
    case 380u: goto L_08A15F10;
    case 381u: goto L_08A15F2C;
    case 382u: goto L_08A15F3C;
    case 383u: goto L_08A15F4C;
    case 384u: goto L_08A15F74;
    case 385u: goto L_08A15F8C;
    case 386u: goto L_08A15FA4;
    case 387u: goto L_08A15FAC;
    case 388u: goto L_08A15FB8;
    case 389u: goto L_08A15FC4;
    case 390u: goto L_08A15FCC;
    case 391u: goto L_08A15FE4;
    case 392u: goto L_08A15FFC;
    case 393u: goto L_08A16010;
    case 394u: goto L_08A16018;
    case 395u: goto L_08A16030;
    case 396u: goto L_08A16044;
    case 397u: goto L_08A16058;
    case 398u: goto L_08A16074;
    case 399u: goto L_08A1608C;
    case 400u: goto L_08A1609C;
    case 401u: goto L_08A160AC;
    case 402u: goto L_08A16100;
    case 403u: goto L_08A16110;
    case 404u: goto L_08A16120;
    case 405u: goto L_08A16130;
    case 406u: goto L_08A16148;
    case 407u: goto L_08A1615C;
    case 408u: goto L_08A16164;
    case 409u: goto L_08A1617C;
    case 410u: goto L_08A16194;
    case 411u: goto L_08A161C0;
    case 412u: goto L_08A161E4;
    case 413u: goto L_08A161EC;
    case 414u: goto L_08A161F8;
    case 415u: goto L_08A16200;
    case 416u: goto L_08A1620C;
    case 417u: goto L_08A16214;
    case 418u: goto L_08A1622C;
    case 419u: goto L_08A1623C;
    case 420u: goto L_08A16254;
    case 421u: goto L_08A1626C;
    case 422u: goto L_08A1627C;
    case 423u: goto L_08A1628C;
    case 424u: goto L_08A162E8;
    case 425u: goto L_08A162F8;
    case 426u: goto L_08A16308;
    case 427u: goto L_08A16318;
    case 428u: goto L_08A16340;
    case 429u: goto L_08A1635C;
    case 430u: goto L_08A1636C;
    case 431u: goto L_08A16378;
    case 432u: goto L_08A163A0;
    case 433u: goto L_08A163AC;
    case 434u: goto L_08A163C4;
    case 435u: goto L_08A163D8;
    case 436u: goto L_08A163EC;
    case 437u: goto L_08A16400;
    case 438u: goto L_08A16414;
    case 439u: goto L_08A16428;
    case 440u: goto L_08A1643C;
    case 441u: goto L_08A16458;
    case 442u: goto L_08A16468;
    case 443u: goto L_08A16474;
    case 444u: goto L_08A164A0;
    case 445u: goto L_08A164BC;
    case 446u: goto L_08A164D4;
    case 447u: goto L_08A164E8;
    case 448u: goto L_08A164F0;
    case 449u: goto L_08A16508;
    case 450u: goto L_08A16520;
    case 451u: goto L_08A16544;
    case 452u: goto L_08A16568;
    case 453u: goto L_08A16570;
    case 454u: goto L_08A16588;
    case 455u: goto L_08A16598;
    case 456u: goto L_08A165B0;
    case 457u: goto L_08A165C8;
    case 458u: goto L_08A165D8;
    case 459u: goto L_08A165E8;
    case 460u: goto L_08A16644;
    case 461u: goto L_08A16654;
    case 462u: goto L_08A16664;
    case 463u: goto L_08A16674;
    case 464u: goto L_08A1669C;
    case 465u: goto L_08A166B8;
    case 466u: goto L_08A166C8;
    case 467u: goto L_08A166D4;
    case 468u: goto L_08A16714;
    case 469u: goto L_08A16730;
    case 470u: goto L_08A16748;
    case 471u: goto L_08A1675C;
    case 472u: goto L_08A16764;
    case 473u: goto L_08A1677C;
    case 474u: goto L_08A16794;
    case 475u: goto L_08A167B8;
    case 476u: goto L_08A167DC;
    case 477u: goto L_08A167E4;
    case 478u: goto L_08A167FC;
    case 479u: goto L_08A16808;
    case 480u: goto L_08A16824;
    case 481u: goto L_08A1683C;
    case 482u: goto L_08A16854;
    case 483u: goto L_08A16864;
    case 484u: goto L_08A16874;
    case 485u: goto L_08A168D0;
    case 486u: goto L_08A168E0;
    case 487u: goto L_08A168F0;
    case 488u: goto L_08A16900;
    case 489u: goto L_08A16910;
    case 490u: goto L_08A16938;
    case 491u: goto L_08A16954;
    case 492u: goto L_08A16964;
    case 493u: goto L_08A16970;
    case 494u: goto L_08A169B0;
    case 495u: goto L_08A169CC;
    case 496u: goto L_08A169E4;
    case 497u: goto L_08A169F8;
    case 498u: goto L_08A16A00;
    case 499u: goto L_08A16A18;
    case 500u: goto L_08A16A34;
    case 501u: goto L_08A16A50;
    case 502u: goto L_08A16A6C;
    case 503u: goto L_08A16A78;
    case 504u: goto L_08A16A9C;
    case 505u: goto L_08A16AA4;
    case 506u: goto L_08A16ABC;
    case 507u: goto L_08A16ACC;
    case 508u: goto L_08A16AE4;
    case 509u: goto L_08A16AFC;
    case 510u: goto L_08A16B0C;
    case 511u: goto L_08A16B1C;
    case 512u: goto L_08A16B78;
    case 513u: goto L_08A16B88;
    case 514u: goto L_08A16B98;
    case 515u: goto L_08A16BA8;
    case 516u: goto L_08A16BD0;
    case 517u: goto L_08A16BEC;
    case 518u: goto L_08A16BFC;
    case 519u: goto L_08A16C08;
    case 520u: goto L_08A16C34;
    case 521u: goto L_08A16C50;
    case 522u: goto L_08A16C68;
    case 523u: goto L_08A16C7C;
    case 524u: goto L_08A16C90;
    case 525u: goto L_08A16CA8;
    case 526u: goto L_08A16CBC;
    case 527u: goto L_08A16CC4;
    case 528u: goto L_08A16CDC;
    case 529u: goto L_08A16CF0;
    case 530u: goto L_08A16D04;
    case 531u: goto L_08A16D20;
    case 532u: goto L_08A16D38;
    case 533u: goto L_08A16D48;
    case 534u: goto L_08A16D58;
    case 535u: goto L_08A16DB4;
    case 536u: goto L_08A16DC4;
    case 537u: goto L_08A16DD4;
    case 538u: goto L_08A16DE4;
    case 539u: goto L_08A16DF4;
    case 540u: goto L_08A16E1C;
    case 541u: goto L_08A16E38;
    case 542u: goto L_08A16E48;
    case 543u: goto L_08A16E54;
    case 544u: goto L_08A16E6C;
    case 545u: goto L_08A16E98;
    case 546u: goto L_08A16EB4;
    case 547u: goto L_08A16ECC;
    case 548u: goto L_08A16EE0;
    case 549u: goto L_08A16EE8;
    case 550u: goto L_08A16F00;
    case 551u: goto L_08A16F18;
    case 552u: goto L_08A16F3C;
    case 553u: goto L_08A16F60;
    case 554u: goto L_08A16F68;
    case 555u: goto L_08A16F80;
    case 556u: goto L_08A16F8C;
    case 557u: goto L_08A16FA8;
    case 558u: goto L_08A16FC0;
    case 559u: goto L_08A16FD8;
    case 560u: goto L_08A16FE8;
    case 561u: goto L_08A16FF8;
    case 562u: goto L_08A17054;
    case 563u: goto L_08A17064;
    case 564u: goto L_08A17074;
    case 565u: goto L_08A17084;
    case 566u: goto L_08A170AC;
    case 567u: goto L_08A170C8;
    case 568u: goto L_08A170D8;
    case 569u: goto L_08A170E4;
    case 570u: goto L_08A17118;
    case 571u: goto L_08A17134;
    case 572u: goto L_08A1714C;
    case 573u: goto L_08A17154;
    case 574u: goto L_08A17160;
    case 575u: goto L_08A1716C;
    case 576u: goto L_08A17174;
    case 577u: goto L_08A1718C;
    case 578u: goto L_08A171A4;
    case 579u: goto L_08A171B8;
    case 580u: goto L_08A171C0;
    case 581u: goto L_08A171D8;
    case 582u: goto L_08A171EC;
    case 583u: goto L_08A17200;
    case 584u: goto L_08A1721C;
    case 585u: goto L_08A17234;
    case 586u: goto L_08A17244;
    case 587u: goto L_08A17254;
    case 588u: goto L_08A172A8;
    case 589u: goto L_08A172B8;
    case 590u: goto L_08A172C8;
    case 591u: goto L_08A172D8;
    case 592u: goto L_08A172F0;
    case 593u: goto L_08A172F8;
    case 594u: goto L_08A17304;
    case 595u: goto L_08A17310;
    case 596u: goto L_08A17318;
    case 597u: goto L_08A17330;
    case 598u: goto L_08A17348;
    case 599u: goto L_08A1735C;
    case 600u: goto L_08A17364;
    case 601u: goto L_08A1737C;
    case 602u: goto L_08A17398;
    case 603u: goto L_08A173B0;
    case 604u: goto L_08A173CC;
    case 605u: goto L_08A173E8;
    case 606u: goto L_08A173F4;
    case 607u: goto L_08A17400;
    case 608u: goto L_08A17408;
    case 609u: goto L_08A1742C;
    case 610u: goto L_08A1743C;
    case 611u: goto L_08A17454;
    case 612u: goto L_08A1746C;
    case 613u: goto L_08A1747C;
    case 614u: goto L_08A1748C;
    case 615u: goto L_08A174E0;
    case 616u: goto L_08A174F0;
    case 617u: goto L_08A17500;
    case 618u: goto L_08A17510;
    case 619u: goto L_08A17520;
    case 620u: goto L_08A17548;
    case 621u: goto L_08A17564;
    case 622u: goto L_08A17574;
    case 623u: goto L_08A175CC;
    case 624u: goto L_08A175DC;
    case 625u: goto L_08A175EC;
    case 626u: goto L_08A175FC;
    case 627u: goto L_08A1760C;
    case 628u: goto L_08A17634;
    case 629u: goto L_08A17650;
    case 630u: goto L_08A17668;
    case 631u: goto L_08A17670;
    case 632u: goto L_08A1767C;
    case 633u: goto L_08A17688;
    case 634u: goto L_08A17690;
    case 635u: goto L_08A176A8;
    case 636u: goto L_08A176C0;
    case 637u: goto L_08A176D4;
    case 638u: goto L_08A176DC;
    case 639u: goto L_08A176F4;
    case 640u: goto L_08A17708;
    case 641u: goto L_08A1771C;
    case 642u: goto L_08A17738;
    case 643u: goto L_08A17750;
    case 644u: goto L_08A17760;
    case 645u: goto L_08A17770;
    case 646u: goto L_08A177C4;
    case 647u: goto L_08A177D4;
    case 648u: goto L_08A177E4;
    case 649u: goto L_08A177F4;
    case 650u: goto L_08A1780C;
    case 651u: goto L_08A17820;
    case 652u: goto L_08A17828;
    case 653u: goto L_08A17840;
    case 654u: goto L_08A1785C;
    case 655u: goto L_08A17878;
    case 656u: goto L_08A178A0;
    case 657u: goto L_08A178A8;
    case 658u: goto L_08A178CC;
    case 659u: goto L_08A178D4;
    case 660u: goto L_08A178E0;
    case 661u: goto L_08A178E8;
    case 662u: goto L_08A178F4;
    case 663u: goto L_08A178FC;
    case 664u: goto L_08A17914;
    case 665u: goto L_08A17924;
    case 666u: goto L_08A1793C;
    case 667u: goto L_08A17954;
    case 668u: goto L_08A17964;
    case 669u: goto L_08A17974;
    case 670u: goto L_08A179D0;
    case 671u: goto L_08A179E0;
    case 672u: goto L_08A179F0;
    case 673u: goto L_08A17A00;
    case 674u: goto L_08A17A28;
    case 675u: goto L_08A17A44;
    case 676u: goto L_08A17A54;
    case 677u: goto L_08A17A60;
    case 678u: goto L_08A17A74;
    case 679u: goto L_08A17A80;
    case 680u: goto L_08A17A94;
    case 681u: goto L_08A17AA0;
    case 682u: goto L_08A17AD4;
    case 683u: goto L_08A17AF0;
    case 684u: goto L_08A17B08;
    case 685u: goto L_08A17B10;
    case 686u: goto L_08A17B1C;
    case 687u: goto L_08A17B28;
    case 688u: goto L_08A17B30;
    case 689u: goto L_08A17B48;
    case 690u: goto L_08A17B60;
    case 691u: goto L_08A17B74;
    case 692u: goto L_08A17B7C;
    case 693u: goto L_08A17B94;
    case 694u: goto L_08A17BB0;
    case 695u: goto L_08A17BDC;
    case 696u: goto L_08A17BE8;
    case 697u: goto L_08A17C0C;
    case 698u: goto L_08A17C14;
    case 699u: goto L_08A17C24;
    case 700u: goto L_08A17C3C;
    case 701u: goto L_08A17C5C;
    case 702u: goto L_08A17C74;
    case 703u: goto L_08A17C80;
    case 704u: goto L_08A17C88;
    case 705u: goto L_08A17C94;
    case 706u: goto L_08A17CA0;
    case 707u: goto L_08A17CA8;
    case 708u: goto L_08A17CB4;
    case 709u: goto L_08A17CC0;
    case 710u: goto L_08A17CC8;
    case 711u: goto L_08A17CD4;
    case 712u: goto L_08A17CE0;
    case 713u: goto L_08A17CE8;
    case 714u: goto L_08A17CF0;
    case 715u: goto L_08A17D08;
    case 716u: goto L_08A17D18;
    case 717u: goto L_08A17D20;
    case 718u: goto L_08A17D28;
    case 719u: goto L_08A17D30;
    case 720u: goto L_08A17D40;
    case 721u: goto L_08A17D4C;
    case 722u: goto L_08A17D58;
    case 723u: goto L_08A17D74;
    case 724u: goto L_08A17D8C;
    case 725u: goto L_08A17D9C;
    case 726u: goto L_08A17DAC;
    case 727u: goto L_08A17E08;
    case 728u: goto L_08A17E18;
    case 729u: goto L_08A17E28;
    case 730u: goto L_08A17E38;
    case 731u: goto L_08A17E48;
    case 732u: goto L_08A17E70;
    case 733u: goto L_08A17E8C;
    case 734u: goto L_08A17E9C;
    case 735u: goto L_08A17EA8;
    case 736u: goto L_08A17ECC;
    case 737u: goto L_08A17ED8;
    case 738u: goto L_08A17F00;
    case 739u: goto L_08A17F0C;
    case 740u: goto L_08A17F34;
    case 741u: goto L_08A17F40;
    case 742u: goto L_08A17F64;
    case 743u: goto L_08A17F70;
    case 744u: goto L_08A17F94;
    case 745u: goto L_08A17FA0;
    case 746u: goto L_08A17FB8;
    case 747u: goto L_08A17FC4;
    case 748u: goto L_08A17FD8;
    case 749u: goto L_08A17FE8;
    case 750u: goto L_08A17FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A14000:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14018u) goto L_08A14018;
    return;
L_08A14018:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 636u, 0x08A13448u>(ctx, &aot_mem) && ctx.pc == 0x08A14024u) goto L_08A14024;
    return;
L_08A14024:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14038u) goto L_08A14038;
    return;
L_08A14038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A14048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A14048u) goto L_08A14048;
    return;
L_08A14048:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1608));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1628));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1648));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A14070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14070u) goto L_08A14070;
    return;
L_08A14070:
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
L_08A1408C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24920)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A140CC;
      }
      goto L_08A140A4;
    }
L_08A140A4:
    ctx.set_gpr(31, 0x08A140ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A140ACu) goto L_08A140AC;
    return;
L_08A140AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A140B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A140B8u) goto L_08A140B8;
    return;
L_08A140B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A140C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A140C4u) goto L_08A140C4;
    return;
L_08A140C4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24920), ctx.gpr[2]);
    goto L_08A140CC;
L_08A140CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A140E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24920)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14110;
      }
      goto L_08A140FC;
    }
L_08A140FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14118;
      }
      goto L_08A14110;
    }
L_08A14110:
    ctx.set_gpr(31, 0x08A14118u);
    // nop
    goto L_08A14174;
L_08A14118:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A14144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A14144u) goto L_08A14144;
    return;
L_08A14144:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5876));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A14158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A14158u) goto L_08A14158;
    return;
L_08A14158:
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
L_08A14174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16796));
    ctx.set_gpr(31, 0x08A1418Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1418Cu) goto L_08A1418C;
    return;
L_08A1418C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1419C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A141ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A141ACu) goto L_08A141AC;
    return;
L_08A141AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1668));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24920));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16912));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1676));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(16688));
    ctx.set_gpr(31, 0x08A14200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A14200u) goto L_08A14200;
    return;
L_08A14200:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14220u);
    // nop
    goto L_08A140E4;
L_08A14220:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14230:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24916)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14270;
      }
      goto L_08A14248;
    }
L_08A14248:
    ctx.set_gpr(31, 0x08A14250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A14250u) goto L_08A14250;
    return;
L_08A14250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1425Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1425Cu) goto L_08A1425C;
    return;
L_08A1425C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A14268u) goto L_08A14268;
    return;
L_08A14268:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24916), ctx.gpr[2]);
    goto L_08A14270;
L_08A14270:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24916)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14288:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24916)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A142B4;
      }
      goto L_08A142A0;
    }
L_08A142A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A142BC;
      }
      goto L_08A142B4;
    }
L_08A142B4:
    ctx.set_gpr(31, 0x08A142BCu);
    // nop
    goto L_08A14390;
L_08A142BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24916)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A142D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A142ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A142ECu) goto L_08A142EC;
    return;
L_08A142EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x08A14310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A14310u) goto L_08A14310;
    return;
L_08A14310:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1433C;
      }
      goto L_08A14334;
    }
L_08A14334:
    ctx.set_gpr(31, 0x08A1433Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1433Cu) goto L_08A1433C;
    return;
L_08A1433C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14350;
      }
      goto L_08A14348;
    }
L_08A14348:
    ctx.set_gpr(31, 0x08A14350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14350u) goto L_08A14350;
    return;
L_08A14350:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14364;
      }
      goto L_08A1435C;
    }
L_08A1435C:
    ctx.set_gpr(31, 0x08A14364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14364u) goto L_08A14364;
    return;
L_08A14364:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14378;
      }
      goto L_08A14370;
    }
L_08A14370:
    ctx.set_gpr(31, 0x08A14378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14378u) goto L_08A14378;
    return;
L_08A14378:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17336));
    ctx.set_gpr(31, 0x08A143A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A143A8u) goto L_08A143A8;
    return;
L_08A143A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A143B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A143C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A143C8u) goto L_08A143C8;
    return;
L_08A143C8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24916));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(17460));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1704));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(17108));
    ctx.set_gpr(31, 0x08A14424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A14424u) goto L_08A14424;
    return;
L_08A14424:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14434:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14444u);
    // nop
    goto L_08A14288;
L_08A14444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24916)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1447Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1447Cu) goto L_08A1447C;
    return;
L_08A1447C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1732));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A14498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A14498u) goto L_08A14498;
    return;
L_08A14498:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A144A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A144A8u) goto L_08A144A8;
    return;
L_08A144A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A144B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 424u, 0x0898E584u>(ctx, &aot_mem) && ctx.pc == 0x08A144B4u) goto L_08A144B4;
    return;
L_08A144B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A144C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A144C8u) goto L_08A144C8;
    return;
L_08A144C8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A144D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 371u, 0x08992004u>(ctx, &aot_mem) && ctx.pc == 0x08A144D4u) goto L_08A144D4;
    return;
L_08A144D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A144E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A144E8u) goto L_08A144E8;
    return;
L_08A144E8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A144F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A144F4u) goto L_08A144F4;
    return;
L_08A144F4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14510u) goto L_08A14510;
    return;
L_08A14510:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1451Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1451Cu) goto L_08A1451C;
    return;
L_08A1451C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14538u) goto L_08A14538;
    return;
L_08A14538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A14548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x08A14548u) goto L_08A14548;
    return;
L_08A14548:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14558u) goto L_08A14558;
    return;
L_08A14558:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A14568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 843u, 0x0895F91Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14568u) goto L_08A14568;
    return;
L_08A14568:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14578u) goto L_08A14578;
    return;
L_08A14578:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2076));
    ctx.set_gpr(31, 0x08A14590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A14590u) goto L_08A14590;
    return;
L_08A14590:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A145ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A145ACu) goto L_08A145AC;
    return;
L_08A145AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1956));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1996));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2036));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A145DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A145DCu) goto L_08A145DC;
    return;
L_08A145DC:
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
L_08A145F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24872)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14624;
      }
      goto L_08A14610;
    }
L_08A14610:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1462C;
      }
      goto L_08A14624;
    }
L_08A14624:
    ctx.set_gpr(31, 0x08A1462Cu);
    // nop
    goto L_08A14740;
L_08A1462C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24872)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1465Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 727u, 0x08A0720Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1465Cu) goto L_08A1465C;
    return;
L_08A1465C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6052));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(31, 0x08A1468Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1468Cu) goto L_08A1468C;
    return;
L_08A1468C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6052));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A146B8;
      }
      goto L_08A146B0;
    }
L_08A146B0:
    ctx.set_gpr(31, 0x08A146B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A146B8u) goto L_08A146B8;
    return;
L_08A146B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A146CC;
      }
      goto L_08A146C4;
    }
L_08A146C4:
    ctx.set_gpr(31, 0x08A146CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A146CCu) goto L_08A146CC;
    return;
L_08A146CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A146E0;
      }
      goto L_08A146D8;
    }
L_08A146D8:
    ctx.set_gpr(31, 0x08A146E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A146E0u) goto L_08A146E0;
    return;
L_08A146E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A146F4;
      }
      goto L_08A146EC;
    }
L_08A146EC:
    ctx.set_gpr(31, 0x08A146F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A146F4u) goto L_08A146F4;
    return;
L_08A146F4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A1470Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1470Cu) goto L_08A1470C;
    return;
L_08A1470C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A14718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14718u) goto L_08A14718;
    return;
L_08A14718:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A14728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 320u, 0x08A09D30u>(ctx, &aot_mem) && ctx.pc == 0x08A14728u) goto L_08A14728;
    return;
L_08A14728:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(18280));
    ctx.set_gpr(31, 0x08A14758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A14758u) goto L_08A14758;
    return;
L_08A14758:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A14778u) goto L_08A14778;
    return;
L_08A14778:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18452));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24872));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22840));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18436));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(18404));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2100));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(17988));
    ctx.set_gpr(31, 0x08A147D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A147D4u) goto L_08A147D4;
    return;
L_08A147D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A147E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A147F4u);
    // nop
    goto L_08A145F8;
L_08A147F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14804:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24872)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1483Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1483Cu) goto L_08A1483C;
    return;
L_08A1483C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2132));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A14858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A14858u) goto L_08A14858;
    return;
L_08A14858:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A14868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14868u) goto L_08A14868;
    return;
L_08A14868:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14874u);
    // nop
    goto L_08A14230;
L_08A14874:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14888u) goto L_08A14888;
    return;
L_08A14888:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 371u, 0x08992004u>(ctx, &aot_mem) && ctx.pc == 0x08A14894u) goto L_08A14894;
    return;
L_08A14894:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A148B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A148B0u) goto L_08A148B0;
    return;
L_08A148B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A148BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A148BCu) goto L_08A148BC;
    return;
L_08A148BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A148D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A148D8u) goto L_08A148D8;
    return;
L_08A148D8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A148E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 543u, 0x088FAF98u>(ctx, &aot_mem) && ctx.pc == 0x08A148E4u) goto L_08A148E4;
    return;
L_08A148E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14900u) goto L_08A14900;
    return;
L_08A14900:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2560));
    ctx.set_gpr(31, 0x08A14918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A14918u) goto L_08A14918;
    return;
L_08A14918:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14934u) goto L_08A14934;
    return;
L_08A14934:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32240)));
    ctx.set_gpr(31, 0x08A14944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A14944u) goto L_08A14944;
    return;
L_08A14944:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14954u) goto L_08A14954;
    return;
L_08A14954:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A14968u) goto L_08A14968;
    return;
L_08A14968:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2416));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2464));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2512));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A14990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14990u) goto L_08A14990;
    return;
L_08A14990:
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
L_08A149AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24820)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A149D8;
      }
      goto L_08A149C4;
    }
L_08A149C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A149E0;
      }
      goto L_08A149D8;
    }
L_08A149D8:
    ctx.set_gpr(31, 0x08A149E0u);
    // nop
    goto L_08A14A9C;
L_08A149E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24820)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A149F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A14A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A14A10u) goto L_08A14A10;
    return;
L_08A14A10:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x08A14A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A14A30u) goto L_08A14A30;
    return;
L_08A14A30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14A5C;
      }
      goto L_08A14A54;
    }
L_08A14A54:
    ctx.set_gpr(31, 0x08A14A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14A5Cu) goto L_08A14A5C;
    return;
L_08A14A5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14A70;
      }
      goto L_08A14A68;
    }
L_08A14A68:
    ctx.set_gpr(31, 0x08A14A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14A70u) goto L_08A14A70;
    return;
L_08A14A70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14A84;
      }
      goto L_08A14A7C;
    }
L_08A14A7C:
    ctx.set_gpr(31, 0x08A14A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14A84u) goto L_08A14A84;
    return;
L_08A14A84:
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
L_08A14A9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(19140));
    ctx.set_gpr(31, 0x08A14AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A14AB4u) goto L_08A14AB4;
    return;
L_08A14AB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14AC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A14AD4u) goto L_08A14AD4;
    return;
L_08A14AD4:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2564));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24820));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(19264));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2576));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(18936));
    ctx.set_gpr(31, 0x08A14B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A14B30u) goto L_08A14B30;
    return;
L_08A14B30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14B50u);
    // nop
    goto L_08A149AC;
L_08A14B50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14B60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24820)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A14B88u) goto L_08A14B88;
    return;
L_08A14B88:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2596));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A14BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A14BA4u) goto L_08A14BA4;
    return;
L_08A14BA4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14BB4u) goto L_08A14BB4;
    return;
L_08A14BB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x08A14BC0u) goto L_08A14BC0;
    return;
L_08A14BC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14BDCu) goto L_08A14BDC;
    return;
L_08A14BDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A14BE8u) goto L_08A14BE8;
    return;
L_08A14BE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14C04u) goto L_08A14C04;
    return;
L_08A14C04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A14C10u) goto L_08A14C10;
    return;
L_08A14C10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A14C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14C2Cu) goto L_08A14C2C;
    return;
L_08A14C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A14C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A14C3Cu) goto L_08A14C3C;
    return;
L_08A14C3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2680));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2704));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2728));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A14C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14C64u) goto L_08A14C64;
    return;
L_08A14C64:
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
L_08A14C80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24792)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14CC0;
      }
      goto L_08A14C98;
    }
L_08A14C98:
    ctx.set_gpr(31, 0x08A14CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A14CA0u) goto L_08A14CA0;
    return;
L_08A14CA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A14CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A14CACu) goto L_08A14CAC;
    return;
L_08A14CAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A14CB8u) goto L_08A14CB8;
    return;
L_08A14CB8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24792), ctx.gpr[2]);
    goto L_08A14CC0;
L_08A14CC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24792)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24792)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14D04;
      }
      goto L_08A14CF0;
    }
L_08A14CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14D0C;
      }
      goto L_08A14D04;
    }
L_08A14D04:
    ctx.set_gpr(31, 0x08A14D0Cu);
    // nop
    goto L_08A14D68;
L_08A14D0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24792)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14D24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A14D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A14D38u) goto L_08A14D38;
    return;
L_08A14D38:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6248));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A14D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A14D4Cu) goto L_08A14D4C;
    return;
L_08A14D4C:
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
L_08A14D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(19856));
    ctx.set_gpr(31, 0x08A14D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A14D80u) goto L_08A14D80;
    return;
L_08A14D80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A14DA0u) goto L_08A14DA0;
    return;
L_08A14DA0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24792));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(19972));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2760));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(19748));
    ctx.set_gpr(31, 0x08A14DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A14DF4u) goto L_08A14DF4;
    return;
L_08A14DF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14E14u);
    // nop
    goto L_08A14CD8;
L_08A14E14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14E24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24788)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14E64;
      }
      goto L_08A14E3C;
    }
L_08A14E3C:
    ctx.set_gpr(31, 0x08A14E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A14E44u) goto L_08A14E44;
    return;
L_08A14E44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A14E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A14E50u) goto L_08A14E50;
    return;
L_08A14E50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A14E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A14E5Cu) goto L_08A14E5C;
    return;
L_08A14E5C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24788), ctx.gpr[2]);
    goto L_08A14E64;
L_08A14E64:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24788)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14E7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24788)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14EA8;
      }
      goto L_08A14E94;
    }
L_08A14E94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14EB0;
      }
      goto L_08A14EA8;
    }
L_08A14EA8:
    ctx.set_gpr(31, 0x08A14EB0u);
    // nop
    goto L_08A14F54;
L_08A14EB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24788)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14EC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A14EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A14EE0u) goto L_08A14EE0;
    return;
L_08A14EE0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x08A14EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A14EFCu) goto L_08A14EFC;
    return;
L_08A14EFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14F28;
      }
      goto L_08A14F20;
    }
L_08A14F20:
    ctx.set_gpr(31, 0x08A14F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14F28u) goto L_08A14F28;
    return;
L_08A14F28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14F3C;
      }
      goto L_08A14F34;
    }
L_08A14F34:
    ctx.set_gpr(31, 0x08A14F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A14F3Cu) goto L_08A14F3C;
    return;
L_08A14F3C:
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
L_08A14F54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20348));
    ctx.set_gpr(31, 0x08A14F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A14F6Cu) goto L_08A14F6C;
    return;
L_08A14F6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A14F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A14F8Cu) goto L_08A14F8C;
    return;
L_08A14F8C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20504));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24788));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20472));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2796));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(20168));
    ctx.set_gpr(31, 0x08A14FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A14FE8u) goto L_08A14FE8;
    return;
L_08A14FE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14FF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15008u);
    // nop
    goto L_08A14E7C;
L_08A15008:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24788)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A15040u) goto L_08A15040;
    return;
L_08A15040:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2812));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08A1505Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1505Cu) goto L_08A1505C;
    return;
L_08A1505C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1506Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1506Cu) goto L_08A1506C;
    return;
L_08A1506C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3032));
    ctx.set_gpr(31, 0x08A15084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A15084u) goto L_08A15084;
    return;
L_08A15084:
    ctx.set_gpr(2, 2215u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-528));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A150A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A150A0u) goto L_08A150A0;
    return;
L_08A150A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3036));
    ctx.set_gpr(31, 0x08A150B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A150B8u) goto L_08A150B8;
    return;
L_08A150B8:
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10264));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A150D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A150D4u) goto L_08A150D4;
    return;
L_08A150D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A150E0u);
    // nop
    goto L_08A14C80;
L_08A150E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A150FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A150FCu) goto L_08A150FC;
    return;
L_08A150FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A1510Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A1510Cu) goto L_08A1510C;
    return;
L_08A1510C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1511Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1511Cu) goto L_08A1511C;
    return;
L_08A1511C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x08A15128u) goto L_08A15128;
    return;
L_08A15128:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2900));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2944));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2988));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1515Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1515Cu) goto L_08A1515C;
    return;
L_08A1515C:
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
L_08A15178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24740)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A151A4;
      }
      goto L_08A15190;
    }
L_08A15190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A151AC;
      }
      goto L_08A151A4;
    }
L_08A151A4:
    ctx.set_gpr(31, 0x08A151ACu);
    // nop
    goto L_08A152C0;
L_08A151AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24740)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A151C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A151DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 727u, 0x08A0720Cu>(ctx, &aot_mem) && ctx.pc == 0x08A151DCu) goto L_08A151DC;
    return;
L_08A151DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x08A1520Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1520Cu) goto L_08A1520C;
    return;
L_08A1520C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15238;
      }
      goto L_08A15230;
    }
L_08A15230:
    ctx.set_gpr(31, 0x08A15238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15238u) goto L_08A15238;
    return;
L_08A15238:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1524C;
      }
      goto L_08A15244;
    }
L_08A15244:
    ctx.set_gpr(31, 0x08A1524Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1524Cu) goto L_08A1524C;
    return;
L_08A1524C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15260;
      }
      goto L_08A15258;
    }
L_08A15258:
    ctx.set_gpr(31, 0x08A15260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15260u) goto L_08A15260;
    return;
L_08A15260:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15274;
      }
      goto L_08A1526C;
    }
L_08A1526C:
    ctx.set_gpr(31, 0x08A15274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15274u) goto L_08A15274;
    return;
L_08A15274:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A1528Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1528Cu) goto L_08A1528C;
    return;
L_08A1528C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A15298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15298u) goto L_08A15298;
    return;
L_08A15298:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A152A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 320u, 0x08A09D30u>(ctx, &aot_mem) && ctx.pc == 0x08A152A8u) goto L_08A152A8;
    return;
L_08A152A8:
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
L_08A152C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21224));
    ctx.set_gpr(31, 0x08A152D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A152D8u) goto L_08A152D8;
    return;
L_08A152D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A152E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A152F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A152F8u) goto L_08A152F8;
    return;
L_08A152F8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24740));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22840));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18436));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(21348));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(20932));
    ctx.set_gpr(31, 0x08A15354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A15354u) goto L_08A15354;
    return;
L_08A15354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15374u);
    // nop
    goto L_08A15178;
L_08A15374:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24740)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A153ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A153ACu) goto L_08A153AC;
    return;
L_08A153AC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3080));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A153C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A153C8u) goto L_08A153C8;
    return;
L_08A153C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A153D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A153D8u) goto L_08A153D8;
    return;
L_08A153D8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A153E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A153E4u) goto L_08A153E4;
    return;
L_08A153E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15400u) goto L_08A15400;
    return;
L_08A15400:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1540Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A1540Cu) goto L_08A1540C;
    return;
L_08A1540C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15428u) goto L_08A15428;
    return;
L_08A15428:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15434u);
    // nop
    goto L_08A14E24;
L_08A15434:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15448u) goto L_08A15448;
    return;
L_08A15448:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 323u, 0x088B9D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15454u) goto L_08A15454;
    return;
L_08A15454:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3172));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3188));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(3204));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A15480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15480u) goto L_08A15480;
    return;
L_08A15480:
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
L_08A1549C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24720)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A154C8;
      }
      goto L_08A154B4;
    }
L_08A154B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A154D0;
      }
      goto L_08A154C8;
    }
L_08A154C8:
    ctx.set_gpr(31, 0x08A154D0u);
    // nop
    goto L_08A1565C;
L_08A154D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A154E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A15500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 727u, 0x08A0720Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15500u) goto L_08A15500;
    return;
L_08A15500:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18216));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(31, 0x08A15544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A15544u) goto L_08A15544;
    return;
L_08A15544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18216));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15570;
      }
      goto L_08A15568;
    }
L_08A15568:
    ctx.set_gpr(31, 0x08A15570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15570u) goto L_08A15570;
    return;
L_08A15570:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15584;
      }
      goto L_08A1557C;
    }
L_08A1557C:
    ctx.set_gpr(31, 0x08A15584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15584u) goto L_08A15584;
    return;
L_08A15584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15598;
      }
      goto L_08A15590;
    }
L_08A15590:
    ctx.set_gpr(31, 0x08A15598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15598u) goto L_08A15598;
    return;
L_08A15598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A155AC;
      }
      goto L_08A155A4;
    }
L_08A155A4:
    ctx.set_gpr(31, 0x08A155ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A155ACu) goto L_08A155AC;
    return;
L_08A155AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A155C0;
      }
      goto L_08A155B8;
    }
L_08A155B8:
    ctx.set_gpr(31, 0x08A155C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A155C0u) goto L_08A155C0;
    return;
L_08A155C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A155D4;
      }
      goto L_08A155CC;
    }
L_08A155CC:
    ctx.set_gpr(31, 0x08A155D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A155D4u) goto L_08A155D4;
    return;
L_08A155D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A155E8;
      }
      goto L_08A155E0;
    }
L_08A155E0:
    ctx.set_gpr(31, 0x08A155E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A155E8u) goto L_08A155E8;
    return;
L_08A155E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A155FC;
      }
      goto L_08A155F4;
    }
L_08A155F4:
    ctx.set_gpr(31, 0x08A155FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A155FCu) goto L_08A155FC;
    return;
L_08A155FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15610;
      }
      goto L_08A15608;
    }
L_08A15608:
    ctx.set_gpr(31, 0x08A15610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15610u) goto L_08A15610;
    return;
L_08A15610:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A15628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15628u) goto L_08A15628;
    return;
L_08A15628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A15634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15634u) goto L_08A15634;
    return;
L_08A15634:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A15644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 320u, 0x08A09D30u>(ctx, &aot_mem) && ctx.pc == 0x08A15644u) goto L_08A15644;
    return;
L_08A15644:
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
L_08A1565C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22148));
    ctx.set_gpr(31, 0x08A15674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A15674u) goto L_08A15674;
    return;
L_08A15674:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A15694u) goto L_08A15694;
    return;
L_08A15694:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22840));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18436));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(22272));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3248));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(84));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(21736));
    ctx.set_gpr(31, 0x08A156F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A156F0u) goto L_08A156F0;
    return;
L_08A156F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15700:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15710u);
    // nop
    goto L_08A1549C;
L_08A15710:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24720)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A15748u) goto L_08A15748;
    return;
L_08A15748:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3264));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A15764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A15764u) goto L_08A15764;
    return;
L_08A15764:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A15774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15774u) goto L_08A15774;
    return;
L_08A15774:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15780u);
    // nop
    goto L_08A15920;
L_08A15780:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15794u) goto L_08A15794;
    return;
L_08A15794:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A157A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A157A0u) goto L_08A157A0;
    return;
L_08A157A0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A157B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A157B4u) goto L_08A157B4;
    return;
L_08A157B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A157C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A157C0u) goto L_08A157C0;
    return;
L_08A157C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A157D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A157D4u) goto L_08A157D4;
    return;
L_08A157D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A157E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 750u, 0x088F7FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A157E0u) goto L_08A157E0;
    return;
L_08A157E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A157F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A157F4u) goto L_08A157F4;
    return;
L_08A157F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 543u, 0x088FAF98u>(ctx, &aot_mem) && ctx.pc == 0x08A15800u) goto L_08A15800;
    return;
L_08A15800:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15820u) goto L_08A15820;
    return;
L_08A15820:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1582Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 424u, 0x0898E584u>(ctx, &aot_mem) && ctx.pc == 0x08A1582Cu) goto L_08A1582C;
    return;
L_08A1582C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15840u) goto L_08A15840;
    return;
L_08A15840:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1584Cu);
    // nop
    goto L_08A14E24;
L_08A1584C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15860u) goto L_08A15860;
    return;
L_08A15860:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1586Cu);
    // nop
    goto L_08A15920;
L_08A1586C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15880u) goto L_08A15880;
    return;
L_08A15880:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1588Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 543u, 0x088FAF98u>(ctx, &aot_mem) && ctx.pc == 0x08A1588Cu) goto L_08A1588C;
    return;
L_08A1588C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3404));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3440));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(3476));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A158C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A158C4u) goto L_08A158C4;
    return;
L_08A158C4:
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
L_08A158E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A158F8u);
    // nop
    goto L_08A15AE0;
L_08A158F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24680)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1590Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1590Cu) goto L_08A1590C;
    return;
L_08A1590C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15920:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24680)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A15960;
      }
      goto L_08A15938;
    }
L_08A15938:
    ctx.set_gpr(31, 0x08A15940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A15940u) goto L_08A15940;
    return;
L_08A15940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1594Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1594Cu) goto L_08A1594C;
    return;
L_08A1594C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A15958u) goto L_08A15958;
    return;
L_08A15958:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24680), ctx.gpr[2]);
    goto L_08A15960;
L_08A15960:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24680)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24680)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A159A4;
      }
      goto L_08A15990;
    }
L_08A15990:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A159AC;
      }
      goto L_08A159A4;
    }
L_08A159A4:
    ctx.set_gpr(31, 0x08A159ACu);
    // nop
    goto L_08A15AE0;
L_08A159AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24680)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A159C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A159DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A159DCu) goto L_08A159DC;
    return;
L_08A159DC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x08A15A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A15A10u) goto L_08A15A10;
    return;
L_08A15A10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15A3C;
      }
      goto L_08A15A34;
    }
L_08A15A34:
    ctx.set_gpr(31, 0x08A15A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15A3Cu) goto L_08A15A3C;
    return;
L_08A15A3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15A50;
      }
      goto L_08A15A48;
    }
L_08A15A48:
    ctx.set_gpr(31, 0x08A15A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15A50u) goto L_08A15A50;
    return;
L_08A15A50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15A64;
      }
      goto L_08A15A5C;
    }
L_08A15A5C:
    ctx.set_gpr(31, 0x08A15A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15A64u) goto L_08A15A64;
    return;
L_08A15A64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15A78;
      }
      goto L_08A15A70;
    }
L_08A15A70:
    ctx.set_gpr(31, 0x08A15A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15A78u) goto L_08A15A78;
    return;
L_08A15A78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15A8C;
      }
      goto L_08A15A84;
    }
L_08A15A84:
    ctx.set_gpr(31, 0x08A15A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15A8Cu) goto L_08A15A8C;
    return;
L_08A15A8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15AA0;
      }
      goto L_08A15A98;
    }
L_08A15A98:
    ctx.set_gpr(31, 0x08A15AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15AA0u) goto L_08A15AA0;
    return;
L_08A15AA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15AB4;
      }
      goto L_08A15AAC;
    }
L_08A15AAC:
    ctx.set_gpr(31, 0x08A15AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15AB4u) goto L_08A15AB4;
    return;
L_08A15AB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15AC8;
      }
      goto L_08A15AC0;
    }
L_08A15AC0:
    ctx.set_gpr(31, 0x08A15AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A15AC8u) goto L_08A15AC8;
    return;
L_08A15AC8:
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
L_08A15AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23304));
    ctx.set_gpr(31, 0x08A15AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A15AF8u) goto L_08A15AF8;
    return;
L_08A15AF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15B08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A15B18u) goto L_08A15B18;
    return;
L_08A15B18:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23460));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3512));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24680));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23428));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3540));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(22980));
    ctx.set_gpr(31, 0x08A15B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A15B74u) goto L_08A15B74;
    return;
L_08A15B74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15B84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15B94u);
    // nop
    goto L_08A15978;
L_08A15B94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15BA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24680)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A15BCCu) goto L_08A15BCC;
    return;
L_08A15BCC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3552));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08A15BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A15BE8u) goto L_08A15BE8;
    return;
L_08A15BE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A15BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15BF8u) goto L_08A15BF8;
    return;
L_08A15BF8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 424u, 0x0898E584u>(ctx, &aot_mem) && ctx.pc == 0x08A15C04u) goto L_08A15C04;
    return;
L_08A15C04:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15C18u) goto L_08A15C18;
    return;
L_08A15C18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 371u, 0x08992004u>(ctx, &aot_mem) && ctx.pc == 0x08A15C24u) goto L_08A15C24;
    return;
L_08A15C24:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15C38u) goto L_08A15C38;
    return;
L_08A15C38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 254u, 0x089F55B4u>(ctx, &aot_mem) && ctx.pc == 0x08A15C44u) goto L_08A15C44;
    return;
L_08A15C44:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15C58u) goto L_08A15C58;
    return;
L_08A15C58:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 222u, 0x088F937Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15C64u) goto L_08A15C64;
    return;
L_08A15C64:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15C78u) goto L_08A15C78;
    return;
L_08A15C78:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 254u, 0x089F55B4u>(ctx, &aot_mem) && ctx.pc == 0x08A15C84u) goto L_08A15C84;
    return;
L_08A15C84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15C98u) goto L_08A15C98;
    return;
L_08A15C98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 222u, 0x088F937Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15CA4u) goto L_08A15CA4;
    return;
L_08A15CA4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15CB8u) goto L_08A15CB8;
    return;
L_08A15CB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3900));
    ctx.set_gpr(31, 0x08A15CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A15CD0u) goto L_08A15CD0;
    return;
L_08A15CD0:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20212));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15CECu) goto L_08A15CEC;
    return;
L_08A15CEC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x08A15CF8u) goto L_08A15CF8;
    return;
L_08A15CF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15D0Cu) goto L_08A15D0C;
    return;
L_08A15D0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 708u, 0x0898FEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A15D18u) goto L_08A15D18;
    return;
L_08A15D18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3744));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3796));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(3848));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A15D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15D44u) goto L_08A15D44;
    return;
L_08A15D44:
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
L_08A15D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24624)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A15D8C;
      }
      goto L_08A15D78;
    }
L_08A15D78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A15D94;
      }
      goto L_08A15D8C;
    }
L_08A15D8C:
    ctx.set_gpr(31, 0x08A15D94u);
    // nop
    goto L_08A15E30;
L_08A15D94:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24624)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15DAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A15DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15DC4u) goto L_08A15DC4;
    return;
L_08A15DC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6664));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A15DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A15DE4u) goto L_08A15DE4;
    return;
L_08A15DE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A15E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15E08u) goto L_08A15E08;
    return;
L_08A15E08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A15E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A15E18u) goto L_08A15E18;
    return;
L_08A15E18:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24152));
    ctx.set_gpr(31, 0x08A15E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A15E48u) goto L_08A15E48;
    return;
L_08A15E48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15E58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A15E68u) goto L_08A15E68;
    return;
L_08A15E68:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24624));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24268));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3904));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(23980));
    ctx.set_gpr(31, 0x08A15EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A15EBCu) goto L_08A15EBC;
    return;
L_08A15EBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15ECC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A15EDCu);
    // nop
    goto L_08A15D60;
L_08A15EDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24624)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A15F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A15F10u) goto L_08A15F10;
    return;
L_08A15F10:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3932));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A15F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A15F2Cu) goto L_08A15F2C;
    return;
L_08A15F2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A15F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15F3Cu) goto L_08A15F3C;
    return;
L_08A15F3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A15F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A15F4Cu) goto L_08A15F4C;
    return;
L_08A15F4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3952));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3956));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(3960));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A15F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A15F74u) goto L_08A15F74;
    return;
L_08A15F74:
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
L_08A15F8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24616)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A15FCC;
      }
      goto L_08A15FA4;
    }
L_08A15FA4:
    ctx.set_gpr(31, 0x08A15FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A15FACu) goto L_08A15FAC;
    return;
L_08A15FAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A15FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A15FB8u) goto L_08A15FB8;
    return;
L_08A15FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A15FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A15FC4u) goto L_08A15FC4;
    return;
L_08A15FC4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24616), ctx.gpr[2]);
    goto L_08A15FCC;
L_08A15FCC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24616)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A15FE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24616)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16010;
      }
      goto L_08A15FFC;
    }
L_08A15FFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A16018;
      }
      goto L_08A16010;
    }
L_08A16010:
    ctx.set_gpr(31, 0x08A16018u);
    // nop
    goto L_08A16074;
L_08A16018:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24616)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A16044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A16044u) goto L_08A16044;
    return;
L_08A16044:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A16058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A16058u) goto L_08A16058;
    return;
L_08A16058:
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
L_08A16074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24732));
    ctx.set_gpr(31, 0x08A1608Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1608Cu) goto L_08A1608C;
    return;
L_08A1608C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1609C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A160ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A160ACu) goto L_08A160AC;
    return;
L_08A160AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3964));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24616));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24848));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3972));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(24624));
    ctx.set_gpr(31, 0x08A16100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A16100u) goto L_08A16100;
    return;
L_08A16100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16120u);
    // nop
    goto L_08A15FE4;
L_08A16120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24612)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1615C;
      }
      goto L_08A16148;
    }
L_08A16148:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A16164;
      }
      goto L_08A1615C;
    }
L_08A1615C:
    ctx.set_gpr(31, 0x08A16164u);
    // nop
    goto L_08A16254;
L_08A16164:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1617C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A16194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16194u) goto L_08A16194;
    return;
L_08A16194:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, 0x08A161C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A161C0u) goto L_08A161C0;
    return;
L_08A161C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A161EC;
      }
      goto L_08A161E4;
    }
L_08A161E4:
    ctx.set_gpr(31, 0x08A161ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A161ECu) goto L_08A161EC;
    return;
L_08A161EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16200;
      }
      goto L_08A161F8;
    }
L_08A161F8:
    ctx.set_gpr(31, 0x08A16200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A16200u) goto L_08A16200;
    return;
L_08A16200:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16214;
      }
      goto L_08A1620C;
    }
L_08A1620C:
    ctx.set_gpr(31, 0x08A16214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A16214u) goto L_08A16214;
    return;
L_08A16214:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A1622Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1622Cu) goto L_08A1622C;
    return;
L_08A1622C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1623Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1623Cu) goto L_08A1623C;
    return;
L_08A1623C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25212));
    ctx.set_gpr(31, 0x08A1626Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1626Cu) goto L_08A1626C;
    return;
L_08A1626C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1627C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1628Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1628Cu) goto L_08A1628C;
    return;
L_08A1628C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4004));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24612));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25336));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4016));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(24956));
    ctx.set_gpr(31, 0x08A162E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A162E8u) goto L_08A162E8;
    return;
L_08A162E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A162F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16308u);
    // nop
    goto L_08A16130;
L_08A16308:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24612)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A16340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A16340u) goto L_08A16340;
    return;
L_08A16340:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A1635Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1635Cu) goto L_08A1635C;
    return;
L_08A1635C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1636Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1636Cu) goto L_08A1636C;
    return;
L_08A1636C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A16378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A16378u) goto L_08A16378;
    return;
L_08A16378:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A163A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A163A0u) goto L_08A163A0;
    return;
L_08A163A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A163ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 468u, 0x08A1255Cu>(ctx, &aot_mem) && ctx.pc == 0x08A163ACu) goto L_08A163AC;
    return;
L_08A163AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A163C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A163C4u) goto L_08A163C4;
    return;
L_08A163C4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A163D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A163D8u) goto L_08A163D8;
    return;
L_08A163D8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A163ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A163ECu) goto L_08A163EC;
    return;
L_08A163EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A16400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A16400u) goto L_08A16400;
    return;
L_08A16400:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A16414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16414u) goto L_08A16414;
    return;
L_08A16414:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A16428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A16428u) goto L_08A16428;
    return;
L_08A16428:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1643Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1643Cu) goto L_08A1643C;
    return;
L_08A1643C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A16458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16458u) goto L_08A16458;
    return;
L_08A16458:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A16468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16468u) goto L_08A16468;
    return;
L_08A16468:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A16474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A16474u) goto L_08A16474;
    return;
L_08A16474:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4136));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4164));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4192));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A164A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A164A0u) goto L_08A164A0;
    return;
L_08A164A0:
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
L_08A164BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24580)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A164E8;
      }
      goto L_08A164D4;
    }
L_08A164D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A164F0;
      }
      goto L_08A164E8;
    }
L_08A164E8:
    ctx.set_gpr(31, 0x08A164F0u);
    // nop
    goto L_08A165B0;
L_08A164F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24580)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A16520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16520u) goto L_08A16520;
    return;
L_08A16520:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x08A16544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A16544u) goto L_08A16544;
    return;
L_08A16544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16570;
      }
      goto L_08A16568;
    }
L_08A16568:
    ctx.set_gpr(31, 0x08A16570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A16570u) goto L_08A16570;
    return;
L_08A16570:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A16588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16588u) goto L_08A16588;
    return;
L_08A16588:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A16598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A16598u) goto L_08A16598;
    return;
L_08A16598:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A165B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26072));
    ctx.set_gpr(31, 0x08A165C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A165C8u) goto L_08A165C8;
    return;
L_08A165C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A165D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A165E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A165E8u) goto L_08A165E8;
    return;
L_08A165E8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26228));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24580));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26196));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4228));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25864));
    ctx.set_gpr(31, 0x08A16644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A16644u) goto L_08A16644;
    return;
L_08A16644:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16664u);
    // nop
    goto L_08A164BC;
L_08A16664:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16674:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24580)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1669Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1669Cu) goto L_08A1669C;
    return;
L_08A1669C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4244));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A166B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A166B8u) goto L_08A166B8;
    return;
L_08A166B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A166C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A166C8u) goto L_08A166C8;
    return;
L_08A166C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A166D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 684u, 0x088BBF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A166D4u) goto L_08A166D4;
    return;
L_08A166D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4264));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4268));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4272));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A16714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16714u) goto L_08A16714;
    return;
L_08A16714:
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
L_08A16730:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24572)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1675C;
      }
      goto L_08A16748;
    }
L_08A16748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A16764;
      }
      goto L_08A1675C;
    }
L_08A1675C:
    ctx.set_gpr(31, 0x08A16764u);
    // nop
    goto L_08A1683C;
L_08A16764:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24572)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1677C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A16794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A16794u) goto L_08A16794;
    return;
L_08A16794:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A167B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A167B8u) goto L_08A167B8;
    return;
L_08A167B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A167E4;
      }
      goto L_08A167DC;
    }
L_08A167DC:
    ctx.set_gpr(31, 0x08A167E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A167E4u) goto L_08A167E4;
    return;
L_08A167E4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A167FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A167FCu) goto L_08A167FC;
    return;
L_08A167FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A16808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16808u) goto L_08A16808;
    return;
L_08A16808:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A16824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A16824u) goto L_08A16824;
    return;
L_08A16824:
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
L_08A1683C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26724));
    ctx.set_gpr(31, 0x08A16854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A16854u) goto L_08A16854;
    return;
L_08A16854:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A16874u) goto L_08A16874;
    return;
L_08A16874:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26896));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4276));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24572));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9936));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26880));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26848));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4284));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(26492));
    ctx.set_gpr(31, 0x08A168D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A168D0u) goto L_08A168D0;
    return;
L_08A168D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A168E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A168F0u);
    // nop
    goto L_08A16730;
L_08A168F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16900:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24572)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A16938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A16938u) goto L_08A16938;
    return;
L_08A16938:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4296));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A16954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A16954u) goto L_08A16954;
    return;
L_08A16954:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A16964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16964u) goto L_08A16964;
    return;
L_08A16964:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A16970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 66u, 0x088BC69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16970u) goto L_08A16970;
    return;
L_08A16970:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4300));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4304));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4308));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A169B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A169B0u) goto L_08A169B0;
    return;
L_08A169B0:
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
L_08A169CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A169F8;
      }
      goto L_08A169E4;
    }
L_08A169E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A16A00;
      }
      goto L_08A169F8;
    }
L_08A169F8:
    ctx.set_gpr(31, 0x08A16A00u);
    // nop
    goto L_08A16AE4;
L_08A16A00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A16A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A16A34u) goto L_08A16A34;
    return;
L_08A16A34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A16A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A16A50u) goto L_08A16A50;
    return;
L_08A16A50:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08A16A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A16A6Cu) goto L_08A16A6C;
    return;
L_08A16A6C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    ctx.set_gpr(31, 0x08A16A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A16A78u) goto L_08A16A78;
    return;
L_08A16A78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16AA4;
      }
      goto L_08A16A9C;
    }
L_08A16A9C:
    ctx.set_gpr(31, 0x08A16AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A16AA4u) goto L_08A16AA4;
    return;
L_08A16AA4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(31, 0x08A16ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16ABCu) goto L_08A16ABC;
    return;
L_08A16ABC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A16ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A16ACCu) goto L_08A16ACC;
    return;
L_08A16ACC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16AE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27404));
    ctx.set_gpr(31, 0x08A16AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A16AFCu) goto L_08A16AFC;
    return;
L_08A16AFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16B0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A16B1Cu) goto L_08A16B1C;
    return;
L_08A16B1C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4312));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24564));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2852));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27528));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4320));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(172));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27160));
    ctx.set_gpr(31, 0x08A16B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A16B78u) goto L_08A16B78;
    return;
L_08A16B78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16B88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16B98u);
    // nop
    goto L_08A169CC;
L_08A16B98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16BA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A16BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A16BD0u) goto L_08A16BD0;
    return;
L_08A16BD0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4328));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A16BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A16BECu) goto L_08A16BEC;
    return;
L_08A16BEC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A16BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16BFCu) goto L_08A16BFC;
    return;
L_08A16BFC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A16C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 588u, 0x08A73754u>(ctx, &aot_mem) && ctx.pc == 0x08A16C08u) goto L_08A16C08;
    return;
L_08A16C08:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4380));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4388));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4396));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A16C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16C34u) goto L_08A16C34;
    return;
L_08A16C34:
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
L_08A16C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A16C68u);
    // nop
    goto L_08A16D20;
L_08A16C68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24552)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A16C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A16C7Cu) goto L_08A16C7C;
    return;
L_08A16C7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24552)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16CBC;
      }
      goto L_08A16CA8;
    }
L_08A16CA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A16CC4;
      }
      goto L_08A16CBC;
    }
L_08A16CBC:
    ctx.set_gpr(31, 0x08A16CC4u);
    // nop
    goto L_08A16D20;
L_08A16CC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24552)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16CDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A16CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A16CF0u) goto L_08A16CF0;
    return;
L_08A16CF0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A16D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A16D04u) goto L_08A16D04;
    return;
L_08A16D04:
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
L_08A16D20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27976));
    ctx.set_gpr(31, 0x08A16D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A16D38u) goto L_08A16D38;
    return;
L_08A16D38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16D48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A16D58u) goto L_08A16D58;
    return;
L_08A16D58:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4404));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24552));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14956));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(28132));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28100));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4412));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27868));
    ctx.set_gpr(31, 0x08A16DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A16DB4u) goto L_08A16DB4;
    return;
L_08A16DB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16DC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16DD4u);
    // nop
    goto L_08A16C90;
L_08A16DD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16DE4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22844)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16DF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24552)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A16E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A16E1Cu) goto L_08A16E1C;
    return;
L_08A16E1C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4440));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A16E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A16E38u) goto L_08A16E38;
    return;
L_08A16E38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A16E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16E48u) goto L_08A16E48;
    return;
L_08A16E48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A16E54u);
    // nop
    goto L_08A17AF0;
L_08A16E54:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A16E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16E6Cu) goto L_08A16E6C;
    return;
L_08A16E6C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4492));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4504));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4516));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A16E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16E98u) goto L_08A16E98;
    return;
L_08A16E98:
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
L_08A16EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24536)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16EE0;
      }
      goto L_08A16ECC;
    }
L_08A16ECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A16EE8;
      }
      goto L_08A16EE0;
    }
L_08A16EE0:
    ctx.set_gpr(31, 0x08A16EE8u);
    // nop
    goto L_08A16FC0;
L_08A16EE8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24536)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16F00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A16F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A16F18u) goto L_08A16F18;
    return;
L_08A16F18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A16F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A16F3Cu) goto L_08A16F3C;
    return;
L_08A16F3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16F68;
      }
      goto L_08A16F60;
    }
L_08A16F60:
    ctx.set_gpr(31, 0x08A16F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A16F68u) goto L_08A16F68;
    return;
L_08A16F68:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A16F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16F80u) goto L_08A16F80;
    return;
L_08A16F80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A16F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16F8Cu) goto L_08A16F8C;
    return;
L_08A16F8C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A16FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A16FA8u) goto L_08A16FA8;
    return;
L_08A16FA8:
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
L_08A16FC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28648));
    ctx.set_gpr(31, 0x08A16FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A16FD8u) goto L_08A16FD8;
    return;
L_08A16FD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16FE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A16FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A16FF8u) goto L_08A16FF8;
    return;
L_08A16FF8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24536));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9936));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26880));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28772));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4536));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(28416));
    ctx.set_gpr(31, 0x08A17054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A17054u) goto L_08A17054;
    return;
L_08A17054:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17064:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A17074u);
    // nop
    goto L_08A16EB4;
L_08A17074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24536)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A170ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A170ACu) goto L_08A170AC;
    return;
L_08A170AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4564));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A170C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A170C8u) goto L_08A170C8;
    return;
L_08A170C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A170D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A170D8u) goto L_08A170D8;
    return;
L_08A170D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A170E4u);
    // nop
    goto L_08A17650;
L_08A170E4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4580));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4584));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4588));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A17118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17118u) goto L_08A17118;
    return;
L_08A17118:
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
L_08A17134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24528)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A17174;
      }
      goto L_08A1714C;
    }
L_08A1714C:
    ctx.set_gpr(31, 0x08A17154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A17154u) goto L_08A17154;
    return;
L_08A17154:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A17160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A17160u) goto L_08A17160;
    return;
L_08A17160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1716Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1716Cu) goto L_08A1716C;
    return;
L_08A1716C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24528), ctx.gpr[2]);
    goto L_08A17174;
L_08A17174:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24528)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1718C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24528)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A171B8;
      }
      goto L_08A171A4;
    }
L_08A171A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A171C0;
      }
      goto L_08A171B8;
    }
L_08A171B8:
    ctx.set_gpr(31, 0x08A171C0u);
    // nop
    goto L_08A1721C;
L_08A171C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24528)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A171D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A171ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A171ECu) goto L_08A171EC;
    return;
L_08A171EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7032));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A17200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A17200u) goto L_08A17200;
    return;
L_08A17200:
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
L_08A1721C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29252));
    ctx.set_gpr(31, 0x08A17234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A17234u) goto L_08A17234;
    return;
L_08A17234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A17254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A17254u) goto L_08A17254;
    return;
L_08A17254:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4592));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24528));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(29368));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4600));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(29144));
    ctx.set_gpr(31, 0x08A172A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A172A8u) goto L_08A172A8;
    return;
L_08A172A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A172B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A172C8u);
    // nop
    goto L_08A1718C;
L_08A172C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A172D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A17318;
      }
      goto L_08A172F0;
    }
L_08A172F0:
    ctx.set_gpr(31, 0x08A172F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A172F8u) goto L_08A172F8;
    return;
L_08A172F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A17304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A17304u) goto L_08A17304;
    return;
L_08A17304:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A17310u) goto L_08A17310;
    return;
L_08A17310:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24524), ctx.gpr[2]);
    goto L_08A17318;
L_08A17318:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1735C;
      }
      goto L_08A17348;
    }
L_08A17348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A17364;
      }
      goto L_08A1735C;
    }
L_08A1735C:
    ctx.set_gpr(31, 0x08A17364u);
    // nop
    goto L_08A17454;
L_08A17364:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1737C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 727u, 0x08A0720Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17398u) goto L_08A17398;
    return;
L_08A17398:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A173B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A173B0u) goto L_08A173B0;
    return;
L_08A173B0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08A173CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A173CCu) goto L_08A173CC;
    return;
L_08A173CC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A173E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A173E8u) goto L_08A173E8;
    return;
L_08A173E8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(31, 0x08A173F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A173F4u) goto L_08A173F4;
    return;
L_08A173F4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(31, 0x08A17400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A17400u) goto L_08A17400;
    return;
L_08A17400:
    ctx.set_gpr(31, 0x08A17408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A17408u) goto L_08A17408;
    return;
L_08A17408:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x08A1742Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1742Cu) goto L_08A1742C;
    return;
L_08A1742C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1743Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 762u, 0x08A07558u>(ctx, &aot_mem) && ctx.pc == 0x08A1743Cu) goto L_08A1743C;
    return;
L_08A1743C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29820));
    ctx.set_gpr(31, 0x08A1746Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1746Cu) goto L_08A1746C;
    return;
L_08A1746C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1747C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1748Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1748Cu) goto L_08A1748C;
    return;
L_08A1748C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24524));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27404));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29968));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(29936));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4632));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(364));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(29564));
    ctx.set_gpr(31, 0x08A174E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A174E0u) goto L_08A174E0;
    return;
L_08A174E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A174F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A17500u);
    // nop
    goto L_08A17330;
L_08A17500:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17510:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A17548u) goto L_08A17548;
    return;
L_08A17548:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4660));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A17564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A17564u) goto L_08A17564;
    return;
L_08A17564:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17574u) goto L_08A17574;
    return;
L_08A17574:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A175CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A175CCu) goto L_08A175CC;
    return;
L_08A175CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A175DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A175DCu) goto L_08A175DC;
    return;
L_08A175DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A175ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A175ECu) goto L_08A175EC;
    return;
L_08A175EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A175FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A175FCu) goto L_08A175FC;
    return;
L_08A175FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A1760Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1760Cu) goto L_08A1760C;
    return;
L_08A1760C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4720));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4732));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4744));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A17634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17634u) goto L_08A17634;
    return;
L_08A17634:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24508)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A17690;
      }
      goto L_08A17668;
    }
L_08A17668:
    ctx.set_gpr(31, 0x08A17670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A17670u) goto L_08A17670;
    return;
L_08A17670:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1767Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1767Cu) goto L_08A1767C;
    return;
L_08A1767C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A17688u) goto L_08A17688;
    return;
L_08A17688:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24508), ctx.gpr[2]);
    goto L_08A17690;
L_08A17690:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24508)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A176A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24508)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A176D4;
      }
      goto L_08A176C0;
    }
L_08A176C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A176DC;
      }
      goto L_08A176D4;
    }
L_08A176D4:
    ctx.set_gpr(31, 0x08A176DCu);
    // nop
    goto L_08A17738;
L_08A176DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24508)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A176F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A17708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A17708u) goto L_08A17708;
    return;
L_08A17708:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1771Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1771Cu) goto L_08A1771C;
    return;
L_08A1771C:
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
L_08A17738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30560));
    ctx.set_gpr(31, 0x08A17750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A17750u) goto L_08A17750;
    return;
L_08A17750:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A17770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A17770u) goto L_08A17770;
    return;
L_08A17770:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4756));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24508));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(30676));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4764));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(30452));
    ctx.set_gpr(31, 0x08A177C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A177C4u) goto L_08A177C4;
    return;
L_08A177C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A177D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A177E4u);
    // nop
    goto L_08A176A8;
L_08A177E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A177F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24504)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17820;
      }
      goto L_08A1780C;
    }
L_08A1780C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A17828;
      }
      goto L_08A17820;
    }
L_08A17820:
    ctx.set_gpr(31, 0x08A17828u);
    // nop
    goto L_08A1793C;
L_08A17828:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24504)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1785Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A1785Cu) goto L_08A1785C;
    return;
L_08A1785C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A17878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A17878u) goto L_08A17878;
    return;
L_08A17878:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x08A178A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A178A0u) goto L_08A178A0;
    return;
L_08A178A0:
    ctx.set_gpr(31, 0x08A178A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A178A8u) goto L_08A178A8;
    return;
L_08A178A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A178D4;
      }
      goto L_08A178CC;
    }
L_08A178CC:
    ctx.set_gpr(31, 0x08A178D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A178D4u) goto L_08A178D4;
    return;
L_08A178D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A178E8;
      }
      goto L_08A178E0;
    }
L_08A178E0:
    ctx.set_gpr(31, 0x08A178E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A178E8u) goto L_08A178E8;
    return;
L_08A178E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A178FC;
      }
      goto L_08A178F4;
    }
L_08A178F4:
    ctx.set_gpr(31, 0x08A178FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A178FCu) goto L_08A178FC;
    return;
L_08A178FC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08A17914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17914u) goto L_08A17914;
    return;
L_08A17914:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A17924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A17924u) goto L_08A17924;
    return;
L_08A17924:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1793C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31076));
    ctx.set_gpr(31, 0x08A17954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A17954u) goto L_08A17954;
    return;
L_08A17954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A17974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A17974u) goto L_08A17974;
    return;
L_08A17974:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4796));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24504));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2852));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31200));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4808));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(180));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(30784));
    ctx.set_gpr(31, 0x08A179D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A179D0u) goto L_08A179D0;
    return;
L_08A179D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A179E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A179F0u);
    // nop
    goto L_08A177F4;
L_08A179F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17A00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24504)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A17A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A17A28u) goto L_08A17A28;
    return;
L_08A17A28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4836));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A17A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A17A44u) goto L_08A17A44;
    return;
L_08A17A44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A17A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17A54u) goto L_08A17A54;
    return;
L_08A17A54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17A60u);
    // nop
    goto L_08A172D8;
L_08A17A60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A17A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17A74u) goto L_08A17A74;
    return;
L_08A17A74:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17A80u);
    // nop
    goto L_08A172D8;
L_08A17A80:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A17A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17A94u) goto L_08A17A94;
    return;
L_08A17A94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17AA0u);
    // nop
    goto L_08A17134;
L_08A17AA0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4908));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4940));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A17AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17AD4u) goto L_08A17AD4;
    return;
L_08A17AD4:
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
L_08A17AF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24484)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A17B30;
      }
      goto L_08A17B08;
    }
L_08A17B08:
    ctx.set_gpr(31, 0x08A17B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A17B10u) goto L_08A17B10;
    return;
L_08A17B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A17B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A17B1Cu) goto L_08A17B1C;
    return;
L_08A17B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A17B28u) goto L_08A17B28;
    return;
L_08A17B28:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24484), ctx.gpr[2]);
    goto L_08A17B30;
L_08A17B30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24484)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24484)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17B74;
      }
      goto L_08A17B60;
    }
L_08A17B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A17B7C;
      }
      goto L_08A17B74;
    }
L_08A17B74:
    ctx.set_gpr(31, 0x08A17B7Cu);
    // nop
    goto L_08A17D74;
L_08A17B7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24484)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17B94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A17BB0u) goto L_08A17BB0;
    return;
L_08A17BB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16896));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A17BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A17BDCu) goto L_08A17BDC;
    return;
L_08A17BDC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(31, 0x08A17BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A17BE8u) goto L_08A17BE8;
    return;
L_08A17BE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16896));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17C14;
      }
      goto L_08A17C0C;
    }
L_08A17C0C:
    ctx.set_gpr(31, 0x08A17C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A17C14u) goto L_08A17C14;
    return;
L_08A17C14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A17C24u);
    // nop
    goto L_08A17C3C;
L_08A17C24:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17C3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17D58;
      }
      goto L_08A17C5C;
    }
L_08A17C5C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7388));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17C88;
      }
      goto L_08A17C74;
    }
L_08A17C74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17C88;
      }
      goto L_08A17C80;
    }
L_08A17C80:
    ctx.set_gpr(31, 0x08A17C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A17C88u) goto L_08A17C88;
    return;
L_08A17C88:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17CA8;
      }
      goto L_08A17C94;
    }
L_08A17C94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17CA8;
      }
      goto L_08A17CA0;
    }
L_08A17CA0:
    ctx.set_gpr(31, 0x08A17CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A17CA8u) goto L_08A17CA8;
    return;
L_08A17CA8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17CC8;
      }
      goto L_08A17CB4;
    }
L_08A17CB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17CC8;
      }
      goto L_08A17CC0;
    }
L_08A17CC0:
    ctx.set_gpr(31, 0x08A17CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A17CC8u) goto L_08A17CC8;
    return;
L_08A17CC8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17CE8;
      }
      goto L_08A17CD4;
    }
L_08A17CD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17CE8;
      }
      goto L_08A17CE0;
    }
L_08A17CE0:
    ctx.set_gpr(31, 0x08A17CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A17CE8u) goto L_08A17CE8;
    return;
L_08A17CE8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17D40;
      }
      goto L_08A17CF0;
    }
L_08A17CF0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17D40;
      }
      goto L_08A17D08;
    }
L_08A17D08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17D28;
      }
      goto L_08A17D18;
    }
L_08A17D18:
    ctx.set_gpr(31, 0x08A17D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17D20u) goto L_08A17D20;
    return;
L_08A17D20:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A17D28;
L_08A17D28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17D40;
      }
      goto L_08A17D30;
    }
L_08A17D30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A17D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A17D40u) goto L_08A17D40;
    return;
L_08A17D40:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A17D58;
      }
      goto L_08A17D4C;
    }
L_08A17D4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A17D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x08A17D58u) goto L_08A17D58;
    return;
L_08A17D58:
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
L_08A17D74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32156));
    ctx.set_gpr(31, 0x08A17D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A17D8Cu) goto L_08A17D8C;
    return;
L_08A17D8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A17DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A17DACu) goto L_08A17DAC;
    return;
L_08A17DAC:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32328));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24484));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27280));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32312));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32280));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4968));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(176));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31636));
    ctx.set_gpr(31, 0x08A17E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A17E08u) goto L_08A17E08;
    return;
L_08A17E08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17E18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A17E28u);
    // nop
    goto L_08A17B48;
L_08A17E28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17E38:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22568)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24484)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A17E70u) goto L_08A17E70;
    return;
L_08A17E70:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5000));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08A17E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A17E8Cu) goto L_08A17E8C;
    return;
L_08A17E8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A17E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17E9Cu) goto L_08A17E9C;
    return;
L_08A17E9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x08A17EA8u) goto L_08A17EA8;
    return;
L_08A17EA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17ECCu) goto L_08A17ECC;
    return;
L_08A17ECC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x08A17ED8u) goto L_08A17ED8;
    return;
L_08A17ED8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F00u) goto L_08A17F00;
    return;
L_08A17F00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x08A17F0Cu) goto L_08A17F0C;
    return;
L_08A17F0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F34u) goto L_08A17F34;
    return;
L_08A17F34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F40u) goto L_08A17F40;
    return;
L_08A17F40:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F64u) goto L_08A17F64;
    return;
L_08A17F64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F70u) goto L_08A17F70;
    return;
L_08A17F70:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F94u) goto L_08A17F94;
    return;
L_08A17F94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 594u, 0x08A27370u>(ctx, &aot_mem) && ctx.pc == 0x08A17FA0u) goto L_08A17FA0;
    return;
L_08A17FA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17FB8u) goto L_08A17FB8;
    return;
L_08A17FB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A17FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 581u, 0x08A06414u>(ctx, &aot_mem) && ctx.pc == 0x08A17FC4u) goto L_08A17FC4;
    return;
L_08A17FC4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17FD8u) goto L_08A17FD8;
    return;
L_08A17FD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A17FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A17FE8u) goto L_08A17FE8;
    return;
L_08A17FE8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A17FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17FF8u) goto L_08A17FF8;
    return;
L_08A17FF8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.pc = 0x08A18000u; return;
}

void recomp_unit_0132(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0132_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_132(Runtime &runtime) {
    runtime.register_generated_unit(132u, 0x08A14000u, 16384u, &recomp_unit_0132, &recomp_unit_0132_entry);
    runtime.register_function(0x08A14000u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14018u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14024u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14038u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14048u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14070u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1408Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A140A4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A140ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A140B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A140C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A140CCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A140E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A140FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14110u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14118u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14130u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14144u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14158u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14174u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1418Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1419Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A141ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14200u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14210u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14220u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14230u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14248u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14250u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1425Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14268u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14270u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14288u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A142A0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A142B4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A142BCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A142D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A142ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14310u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14334u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1433Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14348u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14350u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1435Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14364u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14370u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14378u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14390u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A143A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A143B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A143C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14424u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14434u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14444u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14454u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1447Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14498u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A144A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A144B4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A144C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A144D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A144E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A144F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14510u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1451Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14538u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14548u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14558u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14568u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14578u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14590u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A145ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A145DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A145F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14610u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14624u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1462Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14644u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1465Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1468Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146B0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146CCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A146F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1470Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14718u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14728u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14740u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14758u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14768u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14778u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A147D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A147E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A147F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14804u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14814u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1483Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14858u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14868u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14874u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14888u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14894u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A148B0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A148BCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A148D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A148E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14900u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14918u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14934u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14944u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14954u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14968u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14990u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A149ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A149C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A149D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A149E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A149F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A10u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A30u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A54u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A5Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A68u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A70u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A7Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A84u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14A9Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14AB4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14AC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14AD4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14B30u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14B40u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14B50u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14B60u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14B88u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14BA4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14BB4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14BC0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14BDCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14BE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14C04u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14C10u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14C2Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14C3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14C64u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14C80u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14C98u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14CA0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14CACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14CB8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14CC0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14CD8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14CF0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D04u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D0Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D24u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D38u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D4Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D68u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D80u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14D90u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14DA0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14DF4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E04u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E14u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E24u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E44u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E50u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E5Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E64u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E7Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14E94u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14EA8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14EB0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14EC8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14EE0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14EFCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F20u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F28u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F34u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F54u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F6Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F7Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14F8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14FE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A14FF8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15008u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15018u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15040u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1505Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1506Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15084u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A150A0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A150B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A150D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A150E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A150FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1510Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1511Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15128u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1515Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15178u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15190u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A151A4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A151ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A151C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A151DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1520Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15230u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15238u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15244u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1524Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15258u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15260u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1526Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15274u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1528Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15298u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A152A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A152C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A152D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A152E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A152F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15354u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15364u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15374u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15384u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A153ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A153C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A153D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A153E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15400u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1540Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15428u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15434u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15448u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15454u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15480u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1549Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A154B4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A154C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A154D0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A154E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15500u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15544u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15568u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15570u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1557Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15584u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15590u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15598u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155A4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155CCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A155FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15608u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15610u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15628u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15634u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15644u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1565Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15674u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15684u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15694u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A156F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15700u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15710u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15720u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15748u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15764u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15774u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15780u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15794u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A157A0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A157B4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A157C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A157D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A157E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A157F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15800u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15820u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1582Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15840u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1584Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15860u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1586Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15880u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1588Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A158C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A158E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A158F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1590Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15920u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15938u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15940u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1594Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15958u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15960u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15978u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15990u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A159A4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A159ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A159C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A159DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A10u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A34u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A48u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A50u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A5Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A64u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A70u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A84u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15A98u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15AA0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15AACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15AB4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15AC0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15AC8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15AE0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15AF8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15B08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15B18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15B74u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15B84u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15B94u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15BA4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15BCCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15BE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15BF8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C04u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C24u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C38u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C44u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C58u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C64u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C84u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15C98u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15CA4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15CB8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15CD0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15CECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15CF8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15D0Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15D18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15D44u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15D60u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15D78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15D8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15D94u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15DACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15DC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15DE4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15E08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15E18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15E30u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15E48u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15E58u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15E68u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15EBCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15ECCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15EDCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15EECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15F10u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15F2Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15F3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15F4Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15F74u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15F8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15FA4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15FACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15FB8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15FC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15FCCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15FE4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A15FFCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16010u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16018u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16030u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16044u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16058u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16074u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1608Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1609Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A160ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16100u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16110u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16120u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16130u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16148u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1615Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16164u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1617Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16194u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A161C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A161E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A161ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A161F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16200u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1620Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16214u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1622Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1623Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16254u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1626Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1627Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1628Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A162E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A162F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16308u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16318u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16340u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1635Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1636Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16378u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A163A0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A163ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A163C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A163D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A163ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16400u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16414u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16428u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1643Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16458u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16468u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16474u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A164A0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A164BCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A164D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A164E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A164F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16508u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16520u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16544u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16568u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16570u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16588u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16598u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A165B0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A165C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A165D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A165E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16644u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16654u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16664u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16674u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1669Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A166B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A166C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A166D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16714u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16730u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16748u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1675Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16764u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1677Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16794u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A167B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A167DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A167E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A167FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16808u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16824u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1683Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16854u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16864u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16874u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A168D0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A168E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A168F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16900u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16910u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16938u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16954u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16964u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16970u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A169B0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A169CCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A169E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A169F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16A00u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16A18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16A34u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16A50u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16A6Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16A78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16A9Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16AA4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16ABCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16ACCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16AE4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16AFCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16B0Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16B1Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16B78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16B88u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16B98u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16BA8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16BD0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16BECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16BFCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16C08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16C34u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16C50u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16C68u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16C7Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16C90u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16CA8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16CBCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16CC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16CDCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16CF0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16D04u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16D20u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16D38u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16D48u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16D58u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16DB4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16DC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16DD4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16DE4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16DF4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16E1Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16E38u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16E48u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16E54u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16E6Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16E98u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16EB4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16ECCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16EE0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16EE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16F00u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16F18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16F3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16F60u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16F68u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16F80u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16F8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16FA8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16FC0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16FD8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16FE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A16FF8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17054u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17064u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17074u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17084u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A170ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A170C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A170D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A170E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17118u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17134u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1714Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17154u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17160u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1716Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17174u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1718Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A171A4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A171B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A171C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A171D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A171ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17200u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1721Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17234u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17244u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17254u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A172A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A172B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A172C8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A172D8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A172F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A172F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17304u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17310u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17318u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17330u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17348u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1735Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17364u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1737Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17398u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A173B0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A173CCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A173E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A173F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17400u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17408u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1742Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1743Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17454u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1746Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1747Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1748Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A174E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A174F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17500u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17510u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17520u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17548u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17564u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17574u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A175CCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A175DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A175ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A175FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1760Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17634u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17650u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17668u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17670u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1767Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17688u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17690u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A176A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A176C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A176D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A176DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A176F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17708u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1771Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17738u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17750u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17760u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17770u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A177C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A177D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A177E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A177F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1780Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17820u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17828u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17840u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1785Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17878u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178A0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178CCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A178FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17914u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17924u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A1793Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17954u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17964u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17974u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A179D0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A179E0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A179F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A00u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A28u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A44u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A54u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A60u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A74u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A80u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17A94u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17AA0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17AD4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17AF0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B10u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B1Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B28u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B30u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B48u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B60u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B74u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B7Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17B94u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17BB0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17BDCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17BE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C0Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C14u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C24u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C5Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C74u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C80u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C88u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17C94u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CA0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CA8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CB4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CC0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CC8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CD4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CE0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17CF0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D20u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D28u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D30u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D40u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D4Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D58u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D74u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17D9Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17DACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E28u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E38u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E48u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E70u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17E9Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17EA8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17ECCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17ED8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17F00u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17F0Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17F34u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17F40u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17F64u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17F70u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17F94u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17FA0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17FB8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17FC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17FD8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17FE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08A17FF8u, &recomp_unit_0132, "recomp_unit_0132");
}
} // namespace psprecomp
