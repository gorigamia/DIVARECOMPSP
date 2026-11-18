#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0008[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0,
    0, 13, 0, 14, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20,
    0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0,
    0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0,
    0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0,
    0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 120, 0, 0, 121, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 161, 162, 0, 0, 163, 0, 164,
    0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0,
    221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0,
    264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0,
    0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 316, 0, 0, 317, 0,
    318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 327,
    0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 348, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 0,
    0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 390, 391, 392, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 402, 403, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 411, 412, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 420, 0, 0, 0, 421, 422, 423, 0, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 430, 431, 432, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0,
    0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449,
    0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0,
    0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 463,
    0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489,
    0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0,
    0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 501, 0,
    502, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515,
    0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 522, 0,
    523, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528,
    0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0,
    0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    540, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0,
    0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0,
    567, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0,
    0, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 591, 0,
    0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 607, 0, 0, 608, 0, 0,
    0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0,
    0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    632, 0, 0, 633, 0, 634, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 0, 640, 0, 0, 0, 641, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0,
    648, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 653, 654, 0, 0, 655, 0,
    0, 0, 656, 657, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0,
    0, 663, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 671,
    0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0,
    0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 690, 0, 691, 0, 0, 692, 693,
    0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699,
    0, 0, 0, 0, 700, 0, 0, 0, 701, 702, 0, 0, 703, 0, 0, 0, 704, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 712, 0, 713,
};
void recomp_unit_0008_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08824000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0008[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08824000;
    case 2u: goto L_0882403C;
    case 3u: goto L_08824050;
    case 4u: goto L_08824088;
    case 5u: goto L_08824098;
    case 6u: goto L_088240A8;
    case 7u: goto L_088240B4;
    case 8u: goto L_088240C4;
    case 9u: goto L_088240CC;
    case 10u: goto L_088240E0;
    case 11u: goto L_088240EC;
    case 12u: goto L_088240F4;
    case 13u: goto L_08824104;
    case 14u: goto L_0882410C;
    case 15u: goto L_08824110;
    case 16u: goto L_08824120;
    case 17u: goto L_0882413C;
    case 18u: goto L_0882415C;
    case 19u: goto L_0882416C;
    case 20u: goto L_0882417C;
    case 21u: goto L_0882418C;
    case 22u: goto L_0882419C;
    case 23u: goto L_088241A4;
    case 24u: goto L_088241B4;
    case 25u: goto L_088241C4;
    case 26u: goto L_088241D0;
    case 27u: goto L_088241DC;
    case 28u: goto L_088241EC;
    case 29u: goto L_088241F4;
    case 30u: goto L_08824204;
    case 31u: goto L_08824214;
    case 32u: goto L_0882421C;
    case 33u: goto L_0882422C;
    case 34u: goto L_08824238;
    case 35u: goto L_0882424C;
    case 36u: goto L_08824258;
    case 37u: goto L_08824268;
    case 38u: goto L_08824278;
    case 39u: goto L_08824284;
    case 40u: goto L_08824290;
    case 41u: goto L_08824298;
    case 42u: goto L_088242AC;
    case 43u: goto L_088242B8;
    case 44u: goto L_088242C8;
    case 45u: goto L_088242D4;
    case 46u: goto L_088242E4;
    case 47u: goto L_088242F4;
    case 48u: goto L_088242FC;
    case 49u: goto L_08824308;
    case 50u: goto L_0882431C;
    case 51u: goto L_08824330;
    case 52u: goto L_08824334;
    case 53u: goto L_08824348;
    case 54u: goto L_0882434C;
    case 55u: goto L_08824384;
    case 56u: goto L_088243A0;
    case 57u: goto L_088243BC;
    case 58u: goto L_088243CC;
    case 59u: goto L_088243DC;
    case 60u: goto L_088243EC;
    case 61u: goto L_0882440C;
    case 62u: goto L_08824414;
    case 63u: goto L_08824420;
    case 64u: goto L_08824438;
    case 65u: goto L_08824440;
    case 66u: goto L_08824458;
    case 67u: goto L_0882446C;
    case 68u: goto L_08824484;
    case 69u: goto L_08824498;
    case 70u: goto L_088244B0;
    case 71u: goto L_088244B8;
    case 72u: goto L_088244D0;
    case 73u: goto L_088244E4;
    case 74u: goto L_088244F4;
    case 75u: goto L_08824508;
    case 76u: goto L_08824518;
    case 77u: goto L_08824528;
    case 78u: goto L_0882453C;
    case 79u: goto L_0882454C;
    case 80u: goto L_08824558;
    case 81u: goto L_08824568;
    case 82u: goto L_088245B4;
    case 83u: goto L_088245C4;
    case 84u: goto L_088245D0;
    case 85u: goto L_088245DC;
    case 86u: goto L_088245EC;
    case 87u: goto L_088245FC;
    case 88u: goto L_0882461C;
    case 89u: goto L_0882462C;
    case 90u: goto L_08824640;
    case 91u: goto L_08824650;
    case 92u: goto L_0882466C;
    case 93u: goto L_08824678;
    case 94u: goto L_0882468C;
    case 95u: goto L_0882469C;
    case 96u: goto L_088246B0;
    case 97u: goto L_088246C0;
    case 98u: goto L_088246D8;
    case 99u: goto L_088246E8;
    case 100u: goto L_088246FC;
    case 101u: goto L_0882470C;
    case 102u: goto L_08824720;
    case 103u: goto L_08824734;
    case 104u: goto L_08824748;
    case 105u: goto L_08824758;
    case 106u: goto L_08824768;
    case 107u: goto L_0882477C;
    case 108u: goto L_0882478C;
    case 109u: goto L_088247A8;
    case 110u: goto L_088247BC;
    case 111u: goto L_088247D0;
    case 112u: goto L_088247E4;
    case 113u: goto L_088247F8;
    case 114u: goto L_08824808;
    case 115u: goto L_0882481C;
    case 116u: goto L_08824830;
    case 117u: goto L_0882483C;
    case 118u: goto L_08824854;
    case 119u: goto L_08824860;
    case 120u: goto L_08824864;
    case 121u: goto L_08824870;
    case 122u: goto L_08824874;
    case 123u: goto L_088248A4;
    case 124u: goto L_088248B8;
    case 125u: goto L_088248C8;
    case 126u: goto L_088248D8;
    case 127u: goto L_088248E4;
    case 128u: goto L_088248F0;
    case 129u: goto L_088248F8;
    case 130u: goto L_08824928;
    case 131u: goto L_08824944;
    case 132u: goto L_08824954;
    case 133u: goto L_08824958;
    case 134u: goto L_08824960;
    case 135u: goto L_0882496C;
    case 136u: goto L_08824974;
    case 137u: goto L_088249A8;
    case 138u: goto L_088249C4;
    case 139u: goto L_088249D4;
    case 140u: goto L_088249D8;
    case 141u: goto L_088249E0;
    case 142u: goto L_088249EC;
    case 143u: goto L_088249F4;
    case 144u: goto L_08824A28;
    case 145u: goto L_08824A44;
    case 146u: goto L_08824A54;
    case 147u: goto L_08824A58;
    case 148u: goto L_08824A60;
    case 149u: goto L_08824A6C;
    case 150u: goto L_08824A90;
    case 151u: goto L_08824A98;
    case 152u: goto L_08824AAC;
    case 153u: goto L_08824AC4;
    case 154u: goto L_08824AF8;
    case 155u: goto L_08824B0C;
    case 156u: goto L_08824B18;
    case 157u: goto L_08824B30;
    case 158u: goto L_08824B3C;
    case 159u: goto L_08824B54;
    case 160u: goto L_08824B60;
    case 161u: goto L_08824B64;
    case 162u: goto L_08824B68;
    case 163u: goto L_08824B74;
    case 164u: goto L_08824B7C;
    case 165u: goto L_08824B88;
    case 166u: goto L_08824B94;
    case 167u: goto L_08824BA0;
    case 168u: goto L_08824BAC;
    case 169u: goto L_08824BB4;
    case 170u: goto L_08824BC4;
    case 171u: goto L_08824BE4;
    case 172u: goto L_08824BF0;
    case 173u: goto L_08824BF8;
    case 174u: goto L_08824C2C;
    case 175u: goto L_08824C50;
    case 176u: goto L_08824C5C;
    case 177u: goto L_08824C64;
    case 178u: goto L_08824C78;
    case 179u: goto L_08824CA0;
    case 180u: goto L_08824CAC;
    case 181u: goto L_08824CB4;
    case 182u: goto L_08824CC8;
    case 183u: goto L_08824D0C;
    case 184u: goto L_08824D18;
    case 185u: goto L_08824D24;
    case 186u: goto L_08824D34;
    case 187u: goto L_08824D54;
    case 188u: goto L_08824D68;
    case 189u: goto L_08824D74;
    case 190u: goto L_08824D9C;
    case 191u: goto L_08824DA4;
    case 192u: goto L_08824DB8;
    case 193u: goto L_08824DC8;
    case 194u: goto L_08824DE0;
    case 195u: goto L_08824E24;
    case 196u: goto L_08824E30;
    case 197u: goto L_08824E38;
    case 198u: goto L_08824E50;
    case 199u: goto L_08824ED4;
    case 200u: goto L_08824EE0;
    case 201u: goto L_08824EE8;
    case 202u: goto L_08824EF4;
    case 203u: goto L_08824F04;
    case 204u: goto L_08824F1C;
    case 205u: goto L_08824F40;
    case 206u: goto L_08824F4C;
    case 207u: goto L_08824F54;
    case 208u: goto L_08824F6C;
    case 209u: goto L_08824FB0;
    case 210u: goto L_08824FBC;
    case 211u: goto L_08824FC4;
    case 212u: goto L_08824FD8;
    case 213u: goto L_08824FE8;
    case 214u: goto L_08824FFC;
    case 215u: goto L_08825018;
    case 216u: goto L_08825024;
    case 217u: goto L_0882502C;
    case 218u: goto L_08825040;
    case 219u: goto L_0882506C;
    case 220u: goto L_08825078;
    case 221u: goto L_08825080;
    case 222u: goto L_0882508C;
    case 223u: goto L_0882509C;
    case 224u: goto L_088250B4;
    case 225u: goto L_088250E0;
    case 226u: goto L_088250EC;
    case 227u: goto L_088250F4;
    case 228u: goto L_08825108;
    case 229u: goto L_08825134;
    case 230u: goto L_08825140;
    case 231u: goto L_08825148;
    case 232u: goto L_08825160;
    case 233u: goto L_08825170;
    case 234u: goto L_0882517C;
    case 235u: goto L_08825190;
    case 236u: goto L_088251AC;
    case 237u: goto L_088251B8;
    case 238u: goto L_088251DC;
    case 239u: goto L_088251F0;
    case 240u: goto L_0882520C;
    case 241u: goto L_08825218;
    case 242u: goto L_08825238;
    case 243u: goto L_08825244;
    case 244u: goto L_08825250;
    case 245u: goto L_08825264;
    case 246u: goto L_08825298;
    case 247u: goto L_088252A4;
    case 248u: goto L_088252CC;
    case 249u: goto L_088252E0;
    case 250u: goto L_08825314;
    case 251u: goto L_08825320;
    case 252u: goto L_08825340;
    case 253u: goto L_0882534C;
    case 254u: goto L_0882535C;
    case 255u: goto L_08825368;
    case 256u: goto L_08825384;
    case 257u: goto L_088253C0;
    case 258u: goto L_088253CC;
    case 259u: goto L_088253F0;
    case 260u: goto L_0882540C;
    case 261u: goto L_08825448;
    case 262u: goto L_08825454;
    case 263u: goto L_08825474;
    case 264u: goto L_08825480;
    case 265u: goto L_0882548C;
    case 266u: goto L_088254A8;
    case 267u: goto L_0882551C;
    case 268u: goto L_08825528;
    case 269u: goto L_08825550;
    case 270u: goto L_0882556C;
    case 271u: goto L_088255E0;
    case 272u: goto L_088255EC;
    case 273u: goto L_08825604;
    case 274u: goto L_0882560C;
    case 275u: goto L_08825620;
    case 276u: goto L_08825630;
    case 277u: goto L_08825638;
    case 278u: goto L_08825644;
    case 279u: goto L_08825660;
    case 280u: goto L_08825684;
    case 281u: goto L_08825690;
    case 282u: goto L_08825698;
    case 283u: goto L_088256B8;
    case 284u: goto L_088256F4;
    case 285u: goto L_08825700;
    case 286u: goto L_08825708;
    case 287u: goto L_08825714;
    case 288u: goto L_08825720;
    case 289u: goto L_0882573C;
    case 290u: goto L_08825768;
    case 291u: goto L_08825774;
    case 292u: goto L_0882577C;
    case 293u: goto L_08825798;
    case 294u: goto L_088257E4;
    case 295u: goto L_088257F0;
    case 296u: goto L_08825834;
    case 297u: goto L_0882583C;
    case 298u: goto L_08825868;
    case 299u: goto L_08825880;
    case 300u: goto L_08825890;
    case 301u: goto L_0882589C;
    case 302u: goto L_088258A8;
    case 303u: goto L_088258BC;
    case 304u: goto L_088258F0;
    case 305u: goto L_088258FC;
    case 306u: goto L_08825944;
    case 307u: goto L_08825950;
    case 308u: goto L_08825954;
    case 309u: goto L_08825960;
    case 310u: goto L_08825968;
    case 311u: goto L_0882597C;
    case 312u: goto L_08825994;
    case 313u: goto L_088259A0;
    case 314u: goto L_088259DC;
    case 315u: goto L_088259E8;
    case 316u: goto L_088259EC;
    case 317u: goto L_088259F8;
    case 318u: goto L_08825A00;
    case 319u: goto L_08825A0C;
    case 320u: goto L_08825A18;
    case 321u: goto L_08825A2C;
    case 322u: goto L_08825A74;
    case 323u: goto L_08825A80;
    case 324u: goto L_08825A88;
    case 325u: goto L_08825B58;
    case 326u: goto L_08825B70;
    case 327u: goto L_08825B7C;
    case 328u: goto L_08825B84;
    case 329u: goto L_08825B98;
    case 330u: goto L_08825BE0;
    case 331u: goto L_08825BEC;
    case 332u: goto L_08825BF0;
    case 333u: goto L_08825C2C;
    case 334u: goto L_08825C38;
    case 335u: goto L_08825C48;
    case 336u: goto L_08825C58;
    case 337u: goto L_08825C64;
    case 338u: goto L_08825C70;
    case 339u: goto L_08825C80;
    case 340u: goto L_08825CB0;
    case 341u: goto L_08825CBC;
    case 342u: goto L_08825CC0;
    case 343u: goto L_08825D0C;
    case 344u: goto L_08825D18;
    case 345u: goto L_08825D20;
    case 346u: goto L_08825D30;
    case 347u: goto L_08825D44;
    case 348u: goto L_08825D50;
    case 349u: goto L_08825D54;
    case 350u: goto L_08825D8C;
    case 351u: goto L_08825D98;
    case 352u: goto L_08825DA0;
    case 353u: goto L_08825DAC;
    case 354u: goto L_08825DB8;
    case 355u: goto L_08825DC8;
    case 356u: goto L_08825E0C;
    case 357u: goto L_08825E18;
    case 358u: goto L_08825E20;
    case 359u: goto L_08825EF0;
    case 360u: goto L_08825F1C;
    case 361u: goto L_08825F28;
    case 362u: goto L_08825F30;
    case 363u: goto L_08825F40;
    case 364u: goto L_08825F84;
    case 365u: goto L_08825F90;
    case 366u: goto L_08825F94;
    case 367u: goto L_08825FE4;
    case 368u: goto L_08825FF0;
    case 369u: goto L_08826034;
    case 370u: goto L_08826050;
    case 371u: goto L_0882609C;
    case 372u: goto L_088260AC;
    case 373u: goto L_088260B8;
    case 374u: goto L_088260C0;
    case 375u: goto L_088260CC;
    case 376u: goto L_088260D8;
    case 377u: goto L_088260E4;
    case 378u: goto L_088260EC;
    case 379u: goto L_088260F4;
    case 380u: goto L_08826104;
    case 381u: goto L_08826110;
    case 382u: goto L_08826118;
    case 383u: goto L_08826120;
    case 384u: goto L_0882612C;
    case 385u: goto L_08826134;
    case 386u: goto L_08826148;
    case 387u: goto L_08826160;
    case 388u: goto L_08826194;
    case 389u: goto L_0882619C;
    case 390u: goto L_088261AC;
    case 391u: goto L_088261B0;
    case 392u: goto L_088261B4;
    case 393u: goto L_088261C0;
    case 394u: goto L_088261C8;
    case 395u: goto L_088261D0;
    case 396u: goto L_088261E0;
    case 397u: goto L_088261F8;
    case 398u: goto L_08826234;
    case 399u: goto L_0882628C;
    case 400u: goto L_08826294;
    case 401u: goto L_088262A4;
    case 402u: goto L_088262A8;
    case 403u: goto L_088262AC;
    case 404u: goto L_088262B8;
    case 405u: goto L_088262C0;
    case 406u: goto L_088262D0;
    case 407u: goto L_088262E8;
    case 408u: goto L_0882631C;
    case 409u: goto L_08826324;
    case 410u: goto L_08826334;
    case 411u: goto L_08826338;
    case 412u: goto L_0882633C;
    case 413u: goto L_08826348;
    case 414u: goto L_08826350;
    case 415u: goto L_08826358;
    case 416u: goto L_0882636C;
    case 417u: goto L_08826384;
    case 418u: goto L_088263C0;
    case 419u: goto L_08826408;
    case 420u: goto L_08826410;
    case 421u: goto L_08826420;
    case 422u: goto L_08826424;
    case 423u: goto L_08826428;
    case 424u: goto L_08826434;
    case 425u: goto L_0882643C;
    case 426u: goto L_08826450;
    case 427u: goto L_08826468;
    case 428u: goto L_0882649C;
    case 429u: goto L_088264A4;
    case 430u: goto L_088264B4;
    case 431u: goto L_088264B8;
    case 432u: goto L_088264BC;
    case 433u: goto L_088264C8;
    case 434u: goto L_088264D0;
    case 435u: goto L_088264D8;
    case 436u: goto L_088264E8;
    case 437u: goto L_088264F8;
    case 438u: goto L_08826508;
    case 439u: goto L_08826514;
    case 440u: goto L_0882651C;
    case 441u: goto L_08826528;
    case 442u: goto L_08826530;
    case 443u: goto L_08826540;
    case 444u: goto L_08826550;
    case 445u: goto L_08826558;
    case 446u: goto L_08826560;
    case 447u: goto L_0882656C;
    case 448u: goto L_08826574;
    case 449u: goto L_0882657C;
    case 450u: goto L_0882658C;
    case 451u: goto L_088265AC;
    case 452u: goto L_088265C8;
    case 453u: goto L_088265F0;
    case 454u: goto L_088265F8;
    case 455u: goto L_08826604;
    case 456u: goto L_0882660C;
    case 457u: goto L_0882661C;
    case 458u: goto L_0882663C;
    case 459u: goto L_08826650;
    case 460u: goto L_08826658;
    case 461u: goto L_08826664;
    case 462u: goto L_0882666C;
    case 463u: goto L_0882667C;
    case 464u: goto L_08826684;
    case 465u: goto L_08826694;
    case 466u: goto L_088266A4;
    case 467u: goto L_088266B4;
    case 468u: goto L_088266C4;
    case 469u: goto L_088266E4;
    case 470u: goto L_08826714;
    case 471u: goto L_0882671C;
    case 472u: goto L_08826728;
    case 473u: goto L_08826730;
    case 474u: goto L_08826740;
    case 475u: goto L_08826750;
    case 476u: goto L_08826760;
    case 477u: goto L_08826770;
    case 478u: goto L_08826788;
    case 479u: goto L_08826790;
    case 480u: goto L_0882679C;
    case 481u: goto L_088267A4;
    case 482u: goto L_088267AC;
    case 483u: goto L_088267BC;
    case 484u: goto L_08826804;
    case 485u: goto L_08826814;
    case 486u: goto L_08826824;
    case 487u: goto L_08826868;
    case 488u: goto L_088268F4;
    case 489u: goto L_088268FC;
    case 490u: goto L_08826908;
    case 491u: goto L_08826910;
    case 492u: goto L_08826920;
    case 493u: goto L_08826968;
    case 494u: goto L_08826978;
    case 495u: goto L_08826988;
    case 496u: goto L_088269C4;
    case 497u: goto L_088269CC;
    case 498u: goto L_088269D8;
    case 499u: goto L_088269E0;
    case 500u: goto L_088269F0;
    case 501u: goto L_088269F8;
    case 502u: goto L_08826A00;
    case 503u: goto L_08826A08;
    case 504u: goto L_08826A1C;
    case 505u: goto L_08826A2C;
    case 506u: goto L_08826A44;
    case 507u: goto L_08826A4C;
    case 508u: goto L_08826A5C;
    case 509u: goto L_08826AA8;
    case 510u: goto L_08826AB4;
    case 511u: goto L_08826AC0;
    case 512u: goto L_08826AC8;
    case 513u: goto L_08826ADC;
    case 514u: goto L_08826AEC;
    case 515u: goto L_08826AFC;
    case 516u: goto L_08826B04;
    case 517u: goto L_08826B14;
    case 518u: goto L_08826B50;
    case 519u: goto L_08826B5C;
    case 520u: goto L_08826B68;
    case 521u: goto L_08826B70;
    case 522u: goto L_08826B78;
    case 523u: goto L_08826B80;
    case 524u: goto L_08826B88;
    case 525u: goto L_08826B9C;
    case 526u: goto L_08826BBC;
    case 527u: goto L_08826BF4;
    case 528u: goto L_08826BFC;
    case 529u: goto L_08826C18;
    case 530u: goto L_08826C9C;
    case 531u: goto L_08826CA8;
    case 532u: goto L_08826CB4;
    case 533u: goto L_08826CBC;
    case 534u: goto L_08826CD0;
    case 535u: goto L_08826CF0;
    case 536u: goto L_08826D04;
    case 537u: goto L_08826D0C;
    case 538u: goto L_08826D14;
    case 539u: goto L_08826D30;
    case 540u: goto L_08826D80;
    case 541u: goto L_08826D8C;
    case 542u: goto L_08826D98;
    case 543u: goto L_08826DA0;
    case 544u: goto L_08826DB0;
    case 545u: goto L_08826DB8;
    case 546u: goto L_08826DC0;
    case 547u: goto L_08826DC8;
    case 548u: goto L_08826DDC;
    case 549u: goto L_08826DEC;
    case 550u: goto L_08826E24;
    case 551u: goto L_08826E2C;
    case 552u: goto L_08826E4C;
    case 553u: goto L_08826F20;
    case 554u: goto L_08826F2C;
    case 555u: goto L_08826F38;
    case 556u: goto L_08826F40;
    case 557u: goto L_08826F54;
    case 558u: goto L_08826F64;
    case 559u: goto L_08826F84;
    case 560u: goto L_08826F8C;
    case 561u: goto L_08826FAC;
    case 562u: goto L_08827050;
    case 563u: goto L_0882705C;
    case 564u: goto L_08827068;
    case 565u: goto L_08827070;
    case 566u: goto L_08827078;
    case 567u: goto L_08827080;
    case 568u: goto L_08827088;
    case 569u: goto L_0882709C;
    case 570u: goto L_088270BC;
    case 571u: goto L_08827154;
    case 572u: goto L_0882715C;
    case 573u: goto L_088271A0;
    case 574u: goto L_08827324;
    case 575u: goto L_08827330;
    case 576u: goto L_0882733C;
    case 577u: goto L_08827344;
    case 578u: goto L_08827358;
    case 579u: goto L_08827378;
    case 580u: goto L_0882738C;
    case 581u: goto L_08827394;
    case 582u: goto L_0882739C;
    case 583u: goto L_088273E0;
    case 584u: goto L_088274C8;
    case 585u: goto L_088274D4;
    case 586u: goto L_088274E0;
    case 587u: goto L_088274F0;
    case 588u: goto L_08827530;
    case 589u: goto L_0882755C;
    case 590u: goto L_08827570;
    case 591u: goto L_08827578;
    case 592u: goto L_08827584;
    case 593u: goto L_0882758C;
    case 594u: goto L_08827598;
    case 595u: goto L_088275A4;
    case 596u: goto L_088275B0;
    case 597u: goto L_088275BC;
    case 598u: goto L_088275C4;
    case 599u: goto L_088275D0;
    case 600u: goto L_088275E0;
    case 601u: goto L_08827618;
    case 602u: goto L_08827624;
    case 603u: goto L_0882762C;
    case 604u: goto L_0882763C;
    case 605u: goto L_088276D4;
    case 606u: goto L_088276E0;
    case 607u: goto L_088276E8;
    case 608u: goto L_088276F4;
    case 609u: goto L_08827704;
    case 610u: goto L_0882773C;
    case 611u: goto L_08827748;
    case 612u: goto L_08827750;
    case 613u: goto L_08827760;
    case 614u: goto L_088277F8;
    case 615u: goto L_08827804;
    case 616u: goto L_0882780C;
    case 617u: goto L_08827818;
    case 618u: goto L_08827828;
    case 619u: goto L_08827840;
    case 620u: goto L_0882784C;
    case 621u: goto L_08827854;
    case 622u: goto L_08827864;
    case 623u: goto L_0882789C;
    case 624u: goto L_088278A8;
    case 625u: goto L_088278B0;
    case 626u: goto L_088278BC;
    case 627u: goto L_088278CC;
    case 628u: goto L_08827990;
    case 629u: goto L_0882799C;
    case 630u: goto L_088279AC;
    case 631u: goto L_088279BC;
    case 632u: goto L_08827A00;
    case 633u: goto L_08827A0C;
    case 634u: goto L_08827A14;
    case 635u: goto L_08827A20;
    case 636u: goto L_08827A30;
    case 637u: goto L_08827A48;
    case 638u: goto L_08827A54;
    case 639u: goto L_08827A5C;
    case 640u: goto L_08827A68;
    case 641u: goto L_08827A78;
    case 642u: goto L_08827AB0;
    case 643u: goto L_08827ABC;
    case 644u: goto L_08827AC4;
    case 645u: goto L_08827AD8;
    case 646u: goto L_08827AE8;
    case 647u: goto L_08827AF4;
    case 648u: goto L_08827B00;
    case 649u: goto L_08827B0C;
    case 650u: goto L_08827B14;
    case 651u: goto L_08827B44;
    case 652u: goto L_08827B58;
    case 653u: goto L_08827B68;
    case 654u: goto L_08827B6C;
    case 655u: goto L_08827B78;
    case 656u: goto L_08827B88;
    case 657u: goto L_08827B8C;
    case 658u: goto L_08827B94;
    case 659u: goto L_08827BA0;
    case 660u: goto L_08827BA8;
    case 661u: goto L_08827BD8;
    case 662u: goto L_08827BF4;
    case 663u: goto L_08827C04;
    case 664u: goto L_08827C08;
    case 665u: goto L_08827C10;
    case 666u: goto L_08827C1C;
    case 667u: goto L_08827C24;
    case 668u: goto L_08827C4C;
    case 669u: goto L_08827C68;
    case 670u: goto L_08827C78;
    case 671u: goto L_08827C7C;
    case 672u: goto L_08827C84;
    case 673u: goto L_08827C90;
    case 674u: goto L_08827CA0;
    case 675u: goto L_08827CB0;
    case 676u: goto L_08827CB8;
    case 677u: goto L_08827CC0;
    case 678u: goto L_08827CE0;
    case 679u: goto L_08827CF0;
    case 680u: goto L_08827D04;
    case 681u: goto L_08827D14;
    case 682u: goto L_08827D68;
    case 683u: goto L_08827D74;
    case 684u: goto L_08827DA4;
    case 685u: goto L_08827DC8;
    case 686u: goto L_08827E1C;
    case 687u: goto L_08827E28;
    case 688u: goto L_08827E4C;
    case 689u: goto L_08827E54;
    case 690u: goto L_08827E64;
    case 691u: goto L_08827E6C;
    case 692u: goto L_08827E78;
    case 693u: goto L_08827E7C;
    case 694u: goto L_08827E90;
    case 695u: goto L_08827E9C;
    case 696u: goto L_08827EA8;
    case 697u: goto L_08827EB4;
    case 698u: goto L_08827EBC;
    case 699u: goto L_08827EFC;
    case 700u: goto L_08827F10;
    case 701u: goto L_08827F20;
    case 702u: goto L_08827F24;
    case 703u: goto L_08827F30;
    case 704u: goto L_08827F40;
    case 705u: goto L_08827F44;
    case 706u: goto L_08827F4C;
    case 707u: goto L_08827F58;
    case 708u: goto L_08827F60;
    case 709u: goto L_08827FAC;
    case 710u: goto L_08827FE0;
    case 711u: goto L_08827FF0;
    case 712u: goto L_08827FF4;
    case 713u: goto L_08827FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08824000:
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] & 255u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, ctx.gpr[8] >> (ctx.gpr[9] & 31u));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[4] & 255u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(8, ctx.gpr[8] >> (ctx.gpr[9] & 31u));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] & 65535u);
    goto L_0882403C;
L_0882403C:
    ctx.set_gpr(9, ctx.gpr[7] & 65535u);
    ctx.set_gpr(8, ctx.gpr[3] & 65535u);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 906u, 0x08823FE0u>(ctx, &aot_mem); return;
      }
      goto L_08824050;
    }
L_08824050:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 4096u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824110;
      }
      goto L_08824098;
    }
L_08824098:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088240E0;
      }
      goto L_088240A8;
    }
L_088240A8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088240C4;
      }
      goto L_088240B4;
    }
L_088240B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088240CC;
      }
      goto L_088240C4;
    }
L_088240C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088240CC;
L_088240CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824110;
      }
      goto L_088240E0;
    }
L_088240E0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088240F4;
      }
      goto L_088240EC;
    }
L_088240EC:
    ctx.set_gpr(3, ctx.gpr[6] | 4u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088240F4;
L_088240F4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882410C;
      }
      goto L_08824104;
    }
L_08824104:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882410C;
L_0882410C:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    goto L_08824110;
L_08824110:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882415C;
      }
      goto L_08824120;
    }
L_08824120:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] & 251u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(90));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    goto L_0882413C;
L_0882413C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882413C;
      }
      goto L_0882415C;
    }
L_0882415C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 8192u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882417C;
      }
      goto L_0882416C;
    }
L_0882416C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(236), ctx.gpr[3]);
    goto L_0882417C;
L_0882417C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088241A4;
      }
      goto L_0882418C;
    }
L_0882418C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088241A4;
      }
      goto L_0882419C;
    }
L_0882419C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088241A4;
L_088241A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088241F4;
      }
      goto L_088241B4;
    }
L_088241B4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088241D0;
      }
      goto L_088241C4;
    }
L_088241C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088241F4;
      }
      goto L_088241D0;
    }
L_088241D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088241F4;
      }
      goto L_088241DC;
    }
L_088241DC:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088241F4;
      }
      goto L_088241EC;
    }
L_088241EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088241F4;
L_088241F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882421C;
      }
      goto L_08824204;
    }
L_08824204:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882421C;
      }
      goto L_08824214;
    }
L_08824214:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882421C;
L_0882421C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 16384u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824238;
      }
      goto L_0882422C;
    }
L_0882422C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08824238;
L_08824238:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 96u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824258;
      }
      goto L_0882424C;
    }
L_0882424C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] & 253u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08824258;
L_08824258:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824278;
      }
      goto L_08824268;
    }
L_08824268:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824298;
      }
      goto L_08824278;
    }
L_08824278:
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824290;
      }
      goto L_08824284;
    }
L_08824284:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824298;
      }
      goto L_08824290;
    }
L_08824290:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08824298;
L_08824298:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 4u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088242B8;
      }
      goto L_088242AC;
    }
L_088242AC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] & 251u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088242B8;
L_088242B8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088242D4;
      }
      goto L_088242C8;
    }
L_088242C8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088242D4;
L_088242D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 32768u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824308;
      }
      goto L_088242E4;
    }
L_088242E4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088242FC;
      }
      goto L_088242F4;
    }
L_088242F4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824308;
      }
      goto L_088242FC;
    }
L_088242FC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08824308;
L_08824308:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882434C;
      }
      goto L_0882431C;
    }
L_0882431C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824334;
      }
      goto L_08824330;
    }
L_08824330:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08824334;
L_08824334:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882434C;
      }
      goto L_08824348;
    }
L_08824348:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882434C;
L_0882434C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088243CC;
      }
      goto L_088243A0;
    }
L_088243A0:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4820));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x088243BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088243BCu) goto L_088243BC;
    return;
L_088243BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088243CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x088243CCu) goto L_088243CC;
    return;
L_088243CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 4096u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824458;
      }
      goto L_088243DC;
    }
L_088243DC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08824414;
      }
      goto L_088243EC;
    }
L_088243EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(31, 0x0882440Cu);
    // nop
    goto L_08827AC4;
L_0882440C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824458;
      }
      goto L_08824414;
    }
L_08824414:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824440;
      }
      goto L_08824420;
    }
L_08824420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(31, 0x08824438u);
    // nop
    goto L_08827E54;
L_08824438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824458;
      }
      goto L_08824440;
    }
L_08824440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08824458u);
    // nop
    goto L_08827E54;
L_08824458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 4u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824484;
      }
      goto L_0882446C;
    }
L_0882446C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08824484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 683u, 0x0882F164u>(ctx, &aot_mem) && ctx.pc == 0x08824484u) goto L_08824484;
    return;
L_08824484:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 96u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824508;
      }
      goto L_08824498;
    }
L_08824498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088244B0u);
    // nop
    goto L_0882583C;
L_088244B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824508;
      }
      goto L_088244B8;
    }
L_088244B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 64u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088244E4;
      }
      goto L_088244D0;
    }
L_088244D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4860));
    ctx.set_gpr(31, 0x088244E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x088244E4u) goto L_088244E4;
    return;
L_088244E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 32u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824508;
      }
      goto L_088244F4;
    }
L_088244F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4860));
    ctx.set_gpr(31, 0x08824508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08824508u) goto L_08824508;
    return;
L_08824508:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 16384u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882453C;
      }
      goto L_08824518;
    }
L_08824518:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] & 2048u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882453C;
      }
      goto L_08824528;
    }
L_08824528:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882453Cu);
    // nop
    goto L_0882560C;
L_0882453C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088245B4;
      }
      goto L_0882454C;
    }
L_0882454C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824568;
      }
      goto L_08824558;
    }
L_08824558:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088245B4;
      }
      goto L_08824568;
    }
L_08824568:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(258));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(31, 0x088245B4u);
    // nop
    goto L_08826050;
L_088245B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882461C;
      }
      goto L_088245C4;
    }
L_088245C4:
    ctx.set_gpr(3, ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088245EC;
      }
      goto L_088245D0;
    }
L_088245D0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882461C;
      }
      goto L_088245DC;
    }
L_088245DC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882461C;
      }
      goto L_088245EC;
    }
L_088245EC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882461C;
      }
      goto L_088245FC;
    }
L_088245FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(31, 0x0882461Cu);
    // nop
    goto L_0882755C;
L_0882461C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824640;
      }
      goto L_0882462C;
    }
L_0882462C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08824640u);
    // nop
    goto L_08824D24;
L_08824640:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882468C;
      }
      goto L_08824650;
    }
L_08824650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    ctx.set_gpr(31, 0x0882466Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 50u, 0x08828400u>(ctx, &aot_mem) && ctx.pc == 0x0882466Cu) goto L_0882466C;
    return;
L_0882466C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882468C;
      }
      goto L_08824678;
    }
L_08824678:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4900));
    ctx.set_gpr(31, 0x0882468Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882468Cu) goto L_0882468C;
    return;
L_0882468C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088246B0;
      }
      goto L_0882469C;
    }
L_0882469C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088246B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 660u, 0x0882F014u>(ctx, &aot_mem) && ctx.pc == 0x088246B0u) goto L_088246B0;
    return;
L_088246B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088246D8;
      }
      goto L_088246C0;
    }
L_088246C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(321));
    ctx.set_gpr(31, 0x088246D8u);
    // nop
    goto L_08824A98;
L_088246D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088246FC;
      }
      goto L_088246E8;
    }
L_088246E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088246FCu);
    // nop
    goto L_088248B8;
L_088246FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824720;
      }
      goto L_0882470C;
    }
L_0882470C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08824720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 726u, 0x0882F480u>(ctx, &aot_mem) && ctx.pc == 0x08824720u) goto L_08824720;
    return;
L_08824720:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824748;
      }
      goto L_08824734;
    }
L_08824734:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08824748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 671u, 0x0882F0C0u>(ctx, &aot_mem) && ctx.pc == 0x08824748u) goto L_08824748;
    return;
L_08824748:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 16384u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882477C;
      }
      goto L_08824758;
    }
L_08824758:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] & 2048u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882477C;
      }
      goto L_08824768;
    }
L_08824768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882477Cu);
    // nop
    goto L_0882560C;
L_0882477C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 32768u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088247A8;
      }
      goto L_0882478C;
    }
L_0882478C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(238)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x088247A8u);
    // nop
    goto L_08825148;
L_088247A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088247D0;
      }
      goto L_088247BC;
    }
L_088247BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088247D0u);
    // nop
    goto L_08824FC4;
L_088247D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088247F8;
      }
      goto L_088247E4;
    }
L_088247E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088247F8u);
    // nop
    goto L_08824DA4;
L_088247F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882481C;
      }
      goto L_08824808;
    }
L_08824808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882481Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 666u, 0x0882F068u>(ctx, &aot_mem) && ctx.pc == 0x0882481Cu) goto L_0882481C;
    return;
L_0882481C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088248A4;
      }
      goto L_08824830;
    }
L_08824830:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824854;
      }
      goto L_0882483C;
    }
L_0882483C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08824854u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08824854u) goto L_08824854;
    return;
L_08824854:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824864;
      }
      goto L_08824860;
    }
L_08824860:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(201), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08824864;
L_08824864:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824874;
      }
      goto L_08824870;
    }
L_08824870:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(202), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08824874;
L_08824874:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(201)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(202)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(203), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(203)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    goto L_088248A4;
L_088248A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088248B8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824A90;
      }
      goto L_088248C8;
    }
L_088248C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088249F4;
      }
      goto L_088248D8;
    }
L_088248D8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824974;
      }
      goto L_088248E4;
    }
L_088248E4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088248F8;
      }
      goto L_088248F0;
    }
L_088248F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824A6C;
      }
      goto L_088248F8;
    }
L_088248F8:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] >> 3u);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, ctx.gpr[5] & 7u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(7, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824960;
      }
      goto L_08824928;
    }
L_08824928:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(6, ctx.gpr[6] & 1u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824954;
      }
      goto L_08824944;
    }
L_08824944:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824958;
      }
      goto L_08824954;
    }
L_08824954:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08824958;
L_08824958:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08824960;
L_08824960:
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824928;
      }
      goto L_0882496C;
    }
L_0882496C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824A6C;
      }
      goto L_08824974;
    }
L_08824974:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] >> 2u);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[5] & 3u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088249E0;
      }
      goto L_088249A8;
    }
L_088249A8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(6, ctx.gpr[6] & 3u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088249D4;
      }
      goto L_088249C4;
    }
L_088249C4:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088249D8;
      }
      goto L_088249D4;
    }
L_088249D4:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_088249D8;
L_088249D8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088249E0;
L_088249E0:
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088249A8;
      }
      goto L_088249EC;
    }
L_088249EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824A6C;
      }
      goto L_088249F4;
    }
L_088249F4:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] >> 1u);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] & 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824A60;
      }
      goto L_08824A28;
    }
L_08824A28:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(6, ctx.gpr[6] & 15u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824A54;
      }
      goto L_08824A44;
    }
L_08824A44:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824A58;
      }
      goto L_08824A54;
    }
L_08824A54:
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_08824A58;
L_08824A58:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08824A60;
L_08824A60:
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824A28;
      }
      goto L_08824A6C;
    }
L_08824A6C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08824A90;
L_08824A90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824A98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08824D18;
      }
      goto L_08824AAC;
    }
L_08824AAC:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824AF8;
      }
      goto L_08824AC4;
    }
L_08824AC4:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[7] - ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(9, ctx.gpr[7] - ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(9, ctx.gpr[7] - ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824B0C;
      }
      goto L_08824AF8;
    }
L_08824AF8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, ctx.gpr[7] - ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08824B0C;
L_08824B0C:
    ctx.set_gpr(10, ctx.gpr[11] & 4u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824B30;
      }
      goto L_08824B18;
    }
L_08824B18:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, ctx.gpr[7] - ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[9] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08824B30;
L_08824B30:
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824B68;
      }
      goto L_08824B3C;
    }
L_08824B3C:
    ctx.set_gpr(6, ctx.gpr[11] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[29]);
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08824B60;
      }
      goto L_08824B54;
    }
L_08824B54:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824B60;
    }
L_08824B60:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08824B64;
L_08824B64:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08824B68;
L_08824B68:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824B3C;
      }
      goto L_08824B74;
    }
L_08824B74:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D18;
      }
      goto L_08824B7C;
    }
L_08824B7C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824CB4;
      }
      goto L_08824B88;
    }
L_08824B88:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08824C64;
      }
      goto L_08824B94;
    }
L_08824B94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824BF8;
      }
      goto L_08824BA0;
    }
L_08824BA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824BB4;
      }
      goto L_08824BAC;
    }
L_08824BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D18;
      }
      goto L_08824BB4;
    }
L_08824BB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824BE4;
      }
      goto L_08824BC4;
    }
L_08824BC4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 85u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08824BE4;
L_08824BE4:
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824BC4;
      }
      goto L_08824BF0;
    }
L_08824BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D18;
      }
      goto L_08824BF8;
    }
L_08824BF8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(4, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[3] & 255u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824C50;
      }
      goto L_08824C2C;
    }
L_08824C2C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08824C50;
L_08824C50:
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824C2C;
      }
      goto L_08824C5C;
    }
L_08824C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D18;
      }
      goto L_08824C64;
    }
L_08824C64:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824CA0;
      }
      goto L_08824C78;
    }
L_08824C78:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08824CA0;
L_08824CA0:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824C78;
      }
      goto L_08824CAC;
    }
L_08824CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D18;
      }
      goto L_08824CB4;
    }
L_08824CB4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D0C;
      }
      goto L_08824CC8;
    }
L_08824CC8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08824D0C;
L_08824D0C:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824CC8;
      }
      goto L_08824D18;
    }
L_08824D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824D24:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824D9C;
      }
      goto L_08824D34;
    }
L_08824D34:
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D68;
      }
      goto L_08824D54;
    }
L_08824D54:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08824D68;
L_08824D68:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824D54;
      }
      goto L_08824D74;
    }
L_08824D74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08824D9C;
L_08824D9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824DA4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824EE8;
      }
      goto L_08824DB8;
    }
L_08824DB8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824E38;
      }
      goto L_08824DC8;
    }
L_08824DC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[12] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824E24;
      }
      goto L_08824DE0;
    }
L_08824DE0:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(7, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08824E24;
L_08824E24:
    ctx.set_gpr(3, ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824DE0;
      }
      goto L_08824E30;
    }
L_08824E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824FBC;
      }
      goto L_08824E38;
    }
L_08824E38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824ED4;
      }
      goto L_08824E50;
    }
L_08824E50:
    ctx.set_gpr(13, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(9, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(12, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(11, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-5)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-6)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(-7)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08824ED4;
L_08824ED4:
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824E50;
      }
      goto L_08824EE0;
    }
L_08824EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824FBC;
      }
      goto L_08824EE8;
    }
L_08824EE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824FBC;
      }
      goto L_08824EF4;
    }
L_08824EF4:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08824F54;
      }
      goto L_08824F04;
    }
L_08824F04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824F40;
      }
      goto L_08824F1C;
    }
L_08824F1C:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08824F40;
L_08824F40:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824F1C;
      }
      goto L_08824F4C;
    }
L_08824F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824FBC;
      }
      goto L_08824F54;
    }
L_08824F54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[12] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824FB0;
      }
      goto L_08824F6C;
    }
L_08824F6C:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08824FB0;
L_08824FB0:
    ctx.set_gpr(3, ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824F6C;
      }
      goto L_08824FBC;
    }
L_08824FBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824FC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08825080;
      }
      goto L_08824FD8;
    }
L_08824FD8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882502C;
      }
      goto L_08824FE8;
    }
L_08824FE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825018;
      }
      goto L_08824FFC;
    }
L_08824FFC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08825018;
L_08825018:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824FFC;
      }
      goto L_08825024;
    }
L_08825024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825140;
      }
      goto L_0882502C;
    }
L_0882502C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882506C;
      }
      goto L_08825040;
    }
L_08825040:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0882506C;
L_0882506C:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825040;
      }
      goto L_08825078;
    }
L_08825078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825140;
      }
      goto L_08825080;
    }
L_08825080:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08825140;
      }
      goto L_0882508C;
    }
L_0882508C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088250F4;
      }
      goto L_0882509C;
    }
L_0882509C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088250E0;
      }
      goto L_088250B4;
    }
L_088250B4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_088250E0;
L_088250E0:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088250B4;
      }
      goto L_088250EC;
    }
L_088250EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825140;
      }
      goto L_088250F4;
    }
L_088250F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825134;
      }
      goto L_08825108;
    }
L_08825108:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08825134;
L_08825134:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825108;
      }
      goto L_08825140;
    }
L_08825140:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825148:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, (ctx.gpr[6] >> 8u) & 0x000000FFu);
    ctx.set_gpr(6, ctx.gpr[6] & 255u);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825340;
      }
      goto L_08825160;
    }
L_08825160:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08825238;
      }
      goto L_08825170;
    }
L_08825170:
    ctx.set_gpr(3, ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088251DC;
      }
      goto L_0882517C;
    }
L_0882517C:
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088251AC;
      }
      goto L_08825190;
    }
L_08825190:
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088251AC;
L_088251AC:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825190;
      }
      goto L_088251B8;
    }
L_088251B8:
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_088251DC;
    }
L_088251DC:
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882520C;
      }
      goto L_088251F0;
    }
L_088251F0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_0882520C;
L_0882520C:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088251F0;
      }
      goto L_08825218;
    }
L_08825218:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_08825238;
    }
L_08825238:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_08825244;
    }
L_08825244:
    ctx.set_gpr(3, ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088252CC;
      }
      goto L_08825250;
    }
L_08825250:
    ctx.set_gpr(13, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825298;
      }
      goto L_08825264;
    }
L_08825264:
    ctx.set_gpr(10, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08825298;
L_08825298:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825264;
      }
      goto L_088252A4;
    }
L_088252A4:
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_088252CC;
    }
L_088252CC:
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825314;
      }
      goto L_088252E0;
    }
L_088252E0:
    ctx.set_gpr(5, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08825314;
L_08825314:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088252E0;
      }
      goto L_08825320;
    }
L_08825320:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_08825340;
    }
L_08825340:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_0882534C;
    }
L_0882534C:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08825474;
      }
      goto L_0882535C;
    }
L_0882535C:
    ctx.set_gpr(3, ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088253F0;
      }
      goto L_08825368;
    }
L_08825368:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(13, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088253C0;
      }
      goto L_08825384;
    }
L_08825384:
    ctx.set_gpr(10, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088253C0;
L_088253C0:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825384;
      }
      goto L_088253CC;
    }
L_088253CC:
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_088253F0;
    }
L_088253F0:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(13, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825448;
      }
      goto L_0882540C;
    }
L_0882540C:
    ctx.set_gpr(10, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(8, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(13, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08825448;
L_08825448:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882540C;
      }
      goto L_08825454;
    }
L_08825454:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_08825474;
    }
L_08825474:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_08825480;
    }
L_08825480:
    ctx.set_gpr(3, ctx.gpr[7] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825550;
      }
      goto L_0882548C;
    }
L_0882548C:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(10, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882551C;
      }
      goto L_088254A8;
    }
L_088254A8:
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(14, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-5), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-5)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-5)));
    ctx.set_gpr(7, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_0882551C;
L_0882551C:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088254A8;
      }
      goto L_08825528;
    }
L_08825528:
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825604;
      }
      goto L_08825550;
    }
L_08825550:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088255E0;
      }
      goto L_0882556C;
    }
L_0882556C:
    ctx.set_gpr(14, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-5)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(7, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(-5)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088255E0;
L_088255E0:
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882556C;
      }
      goto L_088255EC;
    }
L_088255EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08825604;
L_08825604:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882560C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[8]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825834;
      }
      goto L_08825620;
    }
L_08825620:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[7] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825834;
      }
      goto L_08825630;
    }
L_08825630:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825708;
      }
      goto L_08825638;
    }
L_08825638:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08825698;
      }
      goto L_08825644;
    }
L_08825644:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825684;
      }
      goto L_08825660;
    }
L_08825660:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08825684;
L_08825684:
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825660;
      }
      goto L_08825690;
    }
L_08825690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088257F0;
      }
      goto L_08825698;
    }
L_08825698:
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088256F4;
      }
      goto L_088256B8;
    }
L_088256B8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088256F4;
L_088256F4:
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088256B8;
      }
      goto L_08825700;
    }
L_08825700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088257F0;
      }
      goto L_08825708;
    }
L_08825708:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088257F0;
      }
      goto L_08825714;
    }
L_08825714:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882577C;
      }
      goto L_08825720;
    }
L_08825720:
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825768;
      }
      goto L_0882573C;
    }
L_0882573C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08825768;
L_08825768:
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882573C;
      }
      goto L_08825774;
    }
L_08825774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088257F0;
      }
      goto L_0882577C;
    }
L_0882577C:
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088257E4;
      }
      goto L_08825798;
    }
L_08825798:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-3)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-3)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-3)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088257E4;
L_088257E4:
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825798;
      }
      goto L_088257F0;
    }
L_088257F0:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] | 2u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08825834;
L_08825834:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882583C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826034;
      }
      goto L_08825868;
    }
L_08825868:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(426)));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(430)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08825C38;
      }
      goto L_08825880;
    }
L_08825880:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08825A00;
      }
      goto L_08825890;
    }
L_08825890:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825968;
      }
      goto L_0882589C;
    }
L_0882589C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825968;
      }
      goto L_088258A8;
    }
L_088258A8:
    ctx.set_gpr(12, ctx.gpr[6] + 0u);
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825954;
      }
      goto L_088258BC;
    }
L_088258BC:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[15] + ctx.gpr[13]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, ctx.gpr[15] + ctx.gpr[13]);
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, ctx.gpr[15] + ctx.gpr[13]);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088258FC;
      }
      goto L_088258F0;
    }
L_088258F0:
    ctx.set_gpr(13, ctx.gpr[15] & 255u);
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08825944;
      }
      goto L_088258FC;
    }
L_088258FC:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[15] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(14, ctx.gpr[13] >> 15u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825950;
      }
      goto L_08825944;
    }
L_08825944:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08825950;
L_08825950:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08825954;
L_08825954:
    ctx.set_gpr(13, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_088258BC;
      }
      goto L_08825960;
    }
L_08825960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825C38;
      }
      goto L_08825968;
    }
L_08825968:
    ctx.set_gpr(12, ctx.gpr[6] + 0u);
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088259EC;
      }
      goto L_0882597C;
    }
L_0882597C:
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088259A0;
      }
      goto L_08825994;
    }
L_08825994:
    ctx.set_gpr(13, ctx.gpr[15] & 255u);
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_088259DC;
      }
      goto L_088259A0;
    }
L_088259A0:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[15] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[13] >> 15u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088259E8;
      }
      goto L_088259DC;
    }
L_088259DC:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088259E8;
L_088259E8:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_088259EC;
L_088259EC:
    ctx.set_gpr(13, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882597C;
      }
      goto L_088259F8;
    }
L_088259F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825C38;
      }
      goto L_08825A00;
    }
L_08825A00:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B84;
      }
      goto L_08825A0C;
    }
L_08825A0C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B84;
      }
      goto L_08825A18;
    }
L_08825A18:
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B70;
      }
      goto L_08825A2C;
    }
L_08825A2C:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[11] << 8u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[11]);
    ctx.set_gpr(11, ctx.gpr[11] & 65535u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, ctx.gpr[12] << 8u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[12]);
    ctx.set_gpr(25, ctx.gpr[12] & 65535u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(13, ctx.gpr[12] << 8u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[12]);
    ctx.set_gpr(24, ctx.gpr[12] & 65535u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_08825A88;
      }
      goto L_08825A74;
    }
L_08825A74:
    ctx.set_gpr(12, ctx.gpr[24] & 65535u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08825A88;
      }
      goto L_08825A80;
    }
L_08825A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825B58;
      }
      goto L_08825A88;
    }
L_08825A88:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(14, ctx.gpr[25] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(18, ctx.gpr[11] & 65535u);
    ctx.set_gpr(12, ctx.gpr[24] & 65535u);
    ctx.set_gpr(11, ctx.gpr[11] & 255u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(11, ctx.gpr[11] << 2u);
    ctx.set_gpr(19, ctx.gpr[13] + ctx.gpr[11]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 8u));
    ctx.set_gpr(18, ctx.gpr[11] << 1u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[18]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[25] & 255u);
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(18, ctx.gpr[18] << 2u);
    ctx.set_gpr(25, ctx.gpr[13] + ctx.gpr[18]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 8u));
    ctx.set_gpr(18, ctx.gpr[14] << 1u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[18]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[14]);
    ctx.set_gpr(14, ctx.gpr[24] & 255u);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(14, ctx.gpr[14] << 2u);
    ctx.set_gpr(14, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    ctx.set_gpr(13, ctx.gpr[12] << 1u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(14, (ctx.gpr[11] >> 15u) & 0x0000FFFFu);
    ctx.set_gpr(11, (ctx.gpr[11] >> 15u) & 0x000000FFu);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(12, ctx.gpr[11] << 2u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(13, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 8u));
    ctx.set_gpr(12, ctx.gpr[11] << 1u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    goto L_08825B58;
L_08825B58:
    ctx.set_gpr(12, ctx.gpr[11] & 65535u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08825B70;
L_08825B70:
    ctx.set_gpr(11, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825A2C;
      }
      goto L_08825B7C;
    }
L_08825B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825C38;
      }
      goto L_08825B84;
    }
L_08825B84:
    ctx.set_gpr(12, ctx.gpr[6] + 0u);
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825C2C;
      }
      goto L_08825B98;
    }
L_08825B98:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[13] << 8u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[13]);
    ctx.set_gpr(17, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, ctx.gpr[13] << 8u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[13]);
    ctx.set_gpr(16, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, ctx.gpr[13] << 8u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[13]);
    ctx.set_gpr(15, ctx.gpr[13] & 65535u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08825BEC;
      }
      goto L_08825BE0;
    }
L_08825BE0:
    ctx.set_gpr(13, ctx.gpr[15] & 65535u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08825BF0;
      }
      goto L_08825BEC;
    }
L_08825BEC:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    goto L_08825BF0;
L_08825BF0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[15] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(14, (ctx.gpr[13] >> 15u) & 0x0000FFFFu);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08825C2C;
L_08825C2C:
    ctx.set_gpr(13, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825B98;
      }
      goto L_08825C38;
    }
L_08825C38:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08825FF0;
      }
      goto L_08825C48;
    }
L_08825C48:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08825DA0;
      }
      goto L_08825C58;
    }
L_08825C58:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825D20;
      }
      goto L_08825C64;
    }
L_08825C64:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825D20;
      }
      goto L_08825C70;
    }
L_08825C70:
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825D0C;
      }
      goto L_08825C80;
    }
L_08825C80:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[14] + ctx.gpr[12]);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(12, ctx.gpr[14] + ctx.gpr[12]);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, ctx.gpr[14] + ctx.gpr[12]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_08825CBC;
      }
      goto L_08825CB0;
    }
L_08825CB0:
    ctx.set_gpr(12, ctx.gpr[14] & 255u);
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08825CC0;
      }
      goto L_08825CBC;
    }
L_08825CBC:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    goto L_08825CC0;
L_08825CC0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[14] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[12] >> 15u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08825D0C;
L_08825D0C:
    ctx.set_gpr(12, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825C80;
      }
      goto L_08825D18;
    }
L_08825D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825FF0;
      }
      goto L_08825D20;
    }
L_08825D20:
    ctx.set_gpr(13, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825D8C;
      }
      goto L_08825D30;
    }
L_08825D30:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08825D50;
      }
      goto L_08825D44;
    }
L_08825D44:
    ctx.set_gpr(4, ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08825D54;
      }
      goto L_08825D50;
    }
L_08825D50:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    goto L_08825D54;
L_08825D54:
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[11] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08825D8C;
L_08825D8C:
    ctx.set_gpr(4, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825D30;
      }
      goto L_08825D98;
    }
L_08825D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825FF0;
      }
      goto L_08825DA0;
    }
L_08825DA0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825F30;
      }
      goto L_08825DAC;
    }
L_08825DAC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825F30;
      }
      goto L_08825DB8;
    }
L_08825DB8:
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825F1C;
      }
      goto L_08825DC8;
    }
L_08825DC8:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[11] << 8u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[11]);
    ctx.set_gpr(11, ctx.gpr[11] & 65535u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, ctx.gpr[12] << 8u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[12]);
    ctx.set_gpr(25, ctx.gpr[12] & 65535u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(13, ctx.gpr[12] << 8u);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[12]);
    ctx.set_gpr(24, ctx.gpr[12] & 65535u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_08825E20;
      }
      goto L_08825E0C;
    }
L_08825E0C:
    ctx.set_gpr(12, ctx.gpr[24] & 65535u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08825E20;
      }
      goto L_08825E18;
    }
L_08825E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825EF0;
      }
      goto L_08825E20;
    }
L_08825E20:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(14, ctx.gpr[25] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(17, ctx.gpr[11] & 65535u);
    ctx.set_gpr(12, ctx.gpr[24] & 65535u);
    ctx.set_gpr(11, ctx.gpr[11] & 255u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(11, ctx.gpr[11] << 2u);
    ctx.set_gpr(18, ctx.gpr[13] + ctx.gpr[11]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 8u));
    ctx.set_gpr(17, ctx.gpr[11] << 1u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[17]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[25] & 255u);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(17, ctx.gpr[17] << 2u);
    ctx.set_gpr(25, ctx.gpr[13] + ctx.gpr[17]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 8u));
    ctx.set_gpr(17, ctx.gpr[14] << 1u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[14]);
    ctx.set_gpr(14, ctx.gpr[24] & 255u);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(14, ctx.gpr[14] << 2u);
    ctx.set_gpr(14, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    ctx.set_gpr(13, ctx.gpr[12] << 1u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(14, (ctx.gpr[11] >> 15u) & 0x0000FFFFu);
    ctx.set_gpr(11, (ctx.gpr[11] >> 15u) & 0x000000FFu);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[15] & 31u)));
    ctx.set_gpr(12, ctx.gpr[11] << 2u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(13, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 8u));
    ctx.set_gpr(12, ctx.gpr[11] << 1u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    goto L_08825EF0;
L_08825EF0:
    ctx.set_gpr(12, ctx.gpr[11] & 65535u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(7)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08825F1C;
L_08825F1C:
    ctx.set_gpr(11, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825DC8;
      }
      goto L_08825F28;
    }
L_08825F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825FF0;
      }
      goto L_08825F30;
    }
L_08825F30:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825FE4;
      }
      goto L_08825F40;
    }
L_08825F40:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[11] << 8u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[11]);
    ctx.set_gpr(15, ctx.gpr[11] & 65535u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, ctx.gpr[11] << 8u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[11]);
    ctx.set_gpr(14, ctx.gpr[11] & 65535u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(12, ctx.gpr[11] << 8u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[11]);
    ctx.set_gpr(13, ctx.gpr[11] & 65535u);
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08825F90;
      }
      goto L_08825F84;
    }
L_08825F84:
    ctx.set_gpr(11, ctx.gpr[13] & 65535u);
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08825F94;
      }
      goto L_08825F90;
    }
L_08825F90:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    goto L_08825F94;
L_08825F94:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(11, ctx.gpr[13] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(12, (ctx.gpr[11] >> 15u) & 0x0000FFFFu);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(7)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08825FE4;
L_08825FE4:
    ctx.set_gpr(11, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825F40;
      }
      goto L_08825FF0;
    }
L_08825FF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 253u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08826034;
L_08826034:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08826050:
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
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827530;
      }
      goto L_0882609C;
    }
L_0882609C:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[15] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088260C0;
      }
      goto L_088260AC;
    }
L_088260AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827530;
      }
      goto L_088260B8;
    }
L_088260B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827530;
      }
      goto L_088260C0;
    }
L_088260C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08826DA0;
      }
      goto L_088260CC;
    }
L_088260CC:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088269E0;
      }
      goto L_088260D8;
    }
L_088260D8:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0882666C;
      }
      goto L_088260E4;
    }
L_088260E4:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    // nop
      if (branch_taken) {
          goto L_088260F4;
      }
      goto L_088260EC;
    }
L_088260EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_088260F4;
    }
L_088260F4:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826574;
      }
      goto L_08826104;
    }
L_08826104:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088264D0;
      }
      goto L_08826110;
    }
L_08826110:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08826350;
      }
      goto L_08826118;
    }
L_08826118:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088261C8;
      }
      goto L_08826120;
    }
L_08826120:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826134;
      }
      goto L_0882612C;
    }
L_0882612C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826134;
    }
L_08826134:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088261B4;
      }
      goto L_08826148;
    }
L_08826148:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826194;
      }
      goto L_08826160;
    }
L_08826160:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32639));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[5] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826194;
L_08826194:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088261AC;
      }
      goto L_0882619C;
    }
L_0882619C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088261B0;
      }
      goto L_088261AC;
    }
L_088261AC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_088261B0;
L_088261B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088261B4;
L_088261B4:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826148;
      }
      goto L_088261C0;
    }
L_088261C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_088261C8;
    }
L_088261C8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088262C0;
      }
      goto L_088261D0;
    }
L_088261D0:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088262AC;
      }
      goto L_088261E0;
    }
L_088261E0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(7, ctx.gpr[5] & 3u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08826234;
      }
      goto L_088261F8;
    }
L_088261F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(7, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16191));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882628C;
      }
      goto L_08826234;
    }
L_08826234:
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] << 4u);
    ctx.set_gpr(5, ctx.gpr[8] << 2u);
    ctx.set_gpr(5, ctx.gpr[8] | ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[8] << 6u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, (ctx.gpr[5] >> 6u) & 0x00000003u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(7, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16191));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[8] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882628C;
L_0882628C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088262A4;
      }
      goto L_08826294;
    }
L_08826294:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088262A8;
      }
      goto L_088262A4;
    }
L_088262A4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    goto L_088262A8;
L_088262A8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088262AC;
L_088262AC:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088261E0;
      }
      goto L_088262B8;
    }
L_088262B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_088262C0;
    }
L_088262C0:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882633C;
      }
      goto L_088262D0;
    }
L_088262D0:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882631C;
      }
      goto L_088262E8;
    }
L_088262E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16191));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[5] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882631C;
L_0882631C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826334;
      }
      goto L_08826324;
    }
L_08826324:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826338;
      }
      goto L_08826334;
    }
L_08826334:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    goto L_08826338;
L_08826338:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0882633C;
L_0882633C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088262D0;
      }
      goto L_08826348;
    }
L_08826348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826350;
    }
L_08826350:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882643C;
      }
      goto L_08826358;
    }
L_08826358:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[14] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826428;
      }
      goto L_0882636C;
    }
L_0882636C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(7, ctx.gpr[5] & 15u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088263C0;
      }
      goto L_08826384;
    }
L_08826384:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3855));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826408;
      }
      goto L_088263C0;
    }
L_088263C0:
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[7] << 4u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, (ctx.gpr[5] >> 4u) & 0x0000000Fu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3855));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[8] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826408;
L_08826408:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826420;
      }
      goto L_08826410;
    }
L_08826410:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826424;
      }
      goto L_08826420;
    }
L_08826420:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    goto L_08826424;
L_08826424:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08826428;
L_08826428:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882636C;
      }
      goto L_08826434;
    }
L_08826434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_0882643C;
    }
L_0882643C:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[14] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088264BC;
      }
      goto L_08826450;
    }
L_08826450:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[4] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882649C;
      }
      goto L_08826468;
    }
L_08826468:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3855));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[5] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0882649C;
L_0882649C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088264B4;
      }
      goto L_088264A4;
    }
L_088264A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088264B8;
      }
      goto L_088264B4;
    }
L_088264B4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    goto L_088264B8;
L_088264B8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088264BC;
L_088264BC:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826450;
      }
      goto L_088264C8;
    }
L_088264C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_088264D0;
    }
L_088264D0:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826530;
      }
      goto L_088264D8;
    }
L_088264D8:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882651C;
      }
      goto L_088264E8;
    }
L_088264E8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826508;
      }
      goto L_088264F8;
    }
L_088264F8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826514;
      }
      goto L_08826508;
    }
L_08826508:
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826514;
L_08826514:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0882651C;
L_0882651C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088264E8;
      }
      goto L_08826528;
    }
L_08826528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826530;
    }
L_08826530:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826560;
      }
      goto L_08826540;
    }
L_08826540:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826558;
      }
      goto L_08826550;
    }
L_08826550:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826558;
L_08826558:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08826560;
L_08826560:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826540;
      }
      goto L_0882656C;
    }
L_0882656C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826574;
    }
L_08826574:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882660C;
      }
      goto L_0882657C;
    }
L_0882657C:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088265F8;
      }
      goto L_0882658C;
    }
L_0882658C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088265C8;
      }
      goto L_088265AC;
    }
L_088265AC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088265F0;
      }
      goto L_088265C8;
    }
L_088265C8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088265F0;
L_088265F0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    goto L_088265F8;
L_088265F8:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882658C;
      }
      goto L_08826604;
    }
L_08826604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_0882660C;
    }
L_0882660C:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826658;
      }
      goto L_0882661C;
    }
L_0882661C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826650;
      }
      goto L_0882663C;
    }
L_0882663C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826650;
L_08826650:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08826658;
L_08826658:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882661C;
      }
      goto L_08826664;
    }
L_08826664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_0882666C;
    }
L_0882666C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088267A4;
      }
      goto L_0882667C;
    }
L_0882667C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826730;
      }
      goto L_08826684;
    }
L_08826684:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882671C;
      }
      goto L_08826694;
    }
L_08826694:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088266E4;
      }
      goto L_088266A4;
    }
L_088266A4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088266E4;
      }
      goto L_088266B4;
    }
L_088266B4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088266E4;
      }
      goto L_088266C4;
    }
L_088266C4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826714;
      }
      goto L_088266E4;
    }
L_088266E4:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826714;
L_08826714:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    goto L_0882671C;
L_0882671C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826694;
      }
      goto L_08826728;
    }
L_08826728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826730;
    }
L_08826730:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826790;
      }
      goto L_08826740;
    }
L_08826740:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826788;
      }
      goto L_08826750;
    }
L_08826750:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826788;
      }
      goto L_08826760;
    }
L_08826760:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826788;
      }
      goto L_08826770;
    }
L_08826770:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826788;
L_08826788:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    goto L_08826790;
L_08826790:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826740;
      }
      goto L_0882679C;
    }
L_0882679C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_088267A4;
    }
L_088267A4:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826910;
      }
      goto L_088267AC;
    }
L_088267AC:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088268FC;
      }
      goto L_088267BC;
    }
L_088267BC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[8] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826868;
      }
      goto L_08826804;
    }
L_08826804:
    ctx.set_gpr(4, ctx.gpr[10] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826868;
      }
      goto L_08826814;
    }
L_08826814:
    ctx.set_gpr(4, ctx.gpr[9] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826868;
      }
      goto L_08826824;
    }
L_08826824:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088268F4;
      }
      goto L_08826868;
    }
L_08826868:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[8] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088268F4;
L_088268F4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(6));
    goto L_088268FC;
L_088268FC:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088267BC;
      }
      goto L_08826908;
    }
L_08826908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826910;
    }
L_08826910:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088269CC;
      }
      goto L_08826920;
    }
L_08826920:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088269C4;
      }
      goto L_08826968;
    }
L_08826968:
    ctx.set_gpr(4, ctx.gpr[7] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088269C4;
      }
      goto L_08826978;
    }
L_08826978:
    ctx.set_gpr(4, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088269C4;
      }
      goto L_08826988;
    }
L_08826988:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088269C4;
L_088269C4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(6));
    goto L_088269CC;
L_088269CC:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826920;
      }
      goto L_088269D8;
    }
L_088269D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_088269E0;
    }
L_088269E0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826B70;
      }
      goto L_088269F0;
    }
L_088269F0:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826AC8;
      }
      goto L_088269F8;
    }
L_088269F8:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826AC8;
      }
      goto L_08826A00;
    }
L_08826A00:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826AC8;
      }
      goto L_08826A08;
    }
L_08826A08:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826AB4;
      }
      goto L_08826A1C;
    }
L_08826A1C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08826A44;
      }
      goto L_08826A2C;
    }
L_08826A2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826AA8;
      }
      goto L_08826A44;
    }
L_08826A44:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826A5C;
      }
      goto L_08826A4C;
    }
L_08826A4C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826AA8;
      }
      goto L_08826A5C;
    }
L_08826A5C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826AA8;
L_08826AA8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08826AB4;
L_08826AB4:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826A1C;
      }
      goto L_08826AC0;
    }
L_08826AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826AC8;
    }
L_08826AC8:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826B5C;
      }
      goto L_08826ADC;
    }
L_08826ADC:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826AFC;
      }
      goto L_08826AEC;
    }
L_08826AEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826B50;
      }
      goto L_08826AFC;
    }
L_08826AFC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826B14;
      }
      goto L_08826B04;
    }
L_08826B04:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826B50;
      }
      goto L_08826B14;
    }
L_08826B14:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826B50;
L_08826B50:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08826B5C;
L_08826B5C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826ADC;
      }
      goto L_08826B68;
    }
L_08826B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826B70;
    }
L_08826B70:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826CBC;
      }
      goto L_08826B78;
    }
L_08826B78:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826CBC;
      }
      goto L_08826B80;
    }
L_08826B80:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826CBC;
      }
      goto L_08826B88;
    }
L_08826B88:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826CA8;
      }
      goto L_08826B9C;
    }
L_08826B9C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826BF4;
      }
      goto L_08826BBC;
    }
L_08826BBC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826C9C;
      }
      goto L_08826BF4;
    }
L_08826BF4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826C18;
      }
      goto L_08826BFC;
    }
L_08826BFC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826C9C;
      }
      goto L_08826C18;
    }
L_08826C18:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] >> 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[3] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(3, (ctx.gpr[3] >> 16u) & 0x000000FFu);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08826C9C;
L_08826C9C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    goto L_08826CA8;
L_08826CA8:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826B9C;
      }
      goto L_08826CB4;
    }
L_08826CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826CBC;
    }
L_08826CBC:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826D8C;
      }
      goto L_08826CD0;
    }
L_08826CD0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] & 65535u);
    ctx.set_gpr(6, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08826D0C;
      }
      goto L_08826CF0;
    }
L_08826CF0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08826D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08826D04u) goto L_08826D04;
    return;
L_08826D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826D80;
      }
      goto L_08826D0C;
    }
L_08826D0C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826D30;
      }
      goto L_08826D14;
    }
L_08826D14:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826D80;
      }
      goto L_08826D30;
    }
L_08826D30:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[7]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] >> 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[3] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08826D80;
L_08826D80:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    goto L_08826D8C;
L_08826D8C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826CD0;
      }
      goto L_08826D98;
    }
L_08826D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826DA0;
    }
L_08826DA0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827070;
      }
      goto L_08826DB0;
    }
L_08826DB0:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826F40;
      }
      goto L_08826DB8;
    }
L_08826DB8:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826F40;
      }
      goto L_08826DC0;
    }
L_08826DC0:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826F40;
      }
      goto L_08826DC8;
    }
L_08826DC8:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826F2C;
      }
      goto L_08826DDC;
    }
L_08826DDC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08826E24;
      }
      goto L_08826DEC;
    }
L_08826DEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826F20;
      }
      goto L_08826E24;
    }
L_08826E24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826E4C;
      }
      goto L_08826E2C;
    }
L_08826E2C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826F20;
      }
      goto L_08826E4C;
    }
L_08826E4C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[5] & 65535u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x000000FFu);
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, ctx.gpr[11] + ctx.gpr[5]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[5] & 65535u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x000000FFu);
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[11] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(6)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08826F20;
L_08826F20:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_08826F2C;
L_08826F2C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826DDC;
      }
      goto L_08826F38;
    }
L_08826F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08826F40;
    }
L_08826F40:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882705C;
      }
      goto L_08826F54;
    }
L_08826F54:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08826F84;
      }
      goto L_08826F64;
    }
L_08826F64:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827050;
      }
      goto L_08826F84;
    }
L_08826F84:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826FAC;
      }
      goto L_08826F8C;
    }
L_08826F8C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827050;
      }
      goto L_08826FAC;
    }
L_08826FAC:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[5] & 65535u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[5] & 65535u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08827050;
L_08827050:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_0882705C;
L_0882705C:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826F54;
      }
      goto L_08827068;
    }
L_08827068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08827070;
    }
L_08827070:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827344;
      }
      goto L_08827078;
    }
L_08827078:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827344;
      }
      goto L_08827080;
    }
L_08827080:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827344;
      }
      goto L_08827088;
    }
L_08827088:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827330;
      }
      goto L_0882709C;
    }
L_0882709C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(10, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08827154;
      }
      goto L_088270BC;
    }
L_088270BC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827324;
      }
      goto L_08827154;
    }
L_08827154:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088271A0;
      }
      goto L_0882715C;
    }
L_0882715C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827324;
      }
      goto L_088271A0;
    }
L_088271A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[10] - ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] >> 16u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, (ctx.gpr[5] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(5, (ctx.gpr[5] >> 16u) & 0x000000FFu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(9, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] >> 16u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, (ctx.gpr[5] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(5, (ctx.gpr[5] >> 16u) & 0x000000FFu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(9, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] >> 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[3] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(3, (ctx.gpr[3] >> 16u) & 0x000000FFu);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08827324;
L_08827324:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    goto L_08827330;
L_08827330:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882709C;
      }
      goto L_0882733C;
    }
L_0882733C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274E0;
      }
      goto L_08827344;
    }
L_08827344:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274D4;
      }
      goto L_08827358;
    }
L_08827358:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[3] & 65535u);
    ctx.set_gpr(7, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08827394;
      }
      goto L_08827378;
    }
L_08827378:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0882738Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0882738Cu) goto L_0882738C;
    return;
L_0882738C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274C8;
      }
      goto L_08827394;
    }
L_08827394:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088273E0;
      }
      goto L_0882739C;
    }
L_0882739C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088274C8;
      }
      goto L_088273E0;
    }
L_088273E0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[7] << 8u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[8] >> 16u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(8, (ctx.gpr[7] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[7] >> 16u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(7, (ctx.gpr[5] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] >> 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[3] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088274C8;
L_088274C8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    goto L_088274D4;
L_088274D4:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827358;
      }
      goto L_088274E0;
    }
L_088274E0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827530;
      }
      goto L_088274F0;
    }
L_088274F0:
    ctx.set_gpr(3, ctx.gpr[4] & 251u);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08827530;
L_08827530:
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
L_0882755C:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827578;
      }
      goto L_08827570;
    }
L_08827570:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882758C;
      }
      goto L_08827578;
    }
L_08827578:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_08827584;
    }
L_08827584:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_0882758C;
    }
L_0882758C:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088278B0;
      }
      goto L_08827598;
    }
L_08827598:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882780C;
      }
      goto L_088275A4;
    }
L_088275A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088276E8;
      }
      goto L_088275B0;
    }
L_088275B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088275C4;
      }
      goto L_088275BC;
    }
L_088275BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_088275C4;
    }
L_088275C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882762C;
      }
      goto L_088275D0;
    }
L_088275D0:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827618;
      }
      goto L_088275E0;
    }
L_088275E0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08827618;
L_08827618:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088275E0;
      }
      goto L_08827624;
    }
L_08827624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_0882762C;
    }
L_0882762C:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088276D4;
      }
      goto L_0882763C;
    }
L_0882763C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_088276D4;
L_088276D4:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882763C;
      }
      goto L_088276E0;
    }
L_088276E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_088276E8;
    }
L_088276E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827750;
      }
      goto L_088276F4;
    }
L_088276F4:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882773C;
      }
      goto L_08827704;
    }
L_08827704:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_0882773C;
L_0882773C:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827704;
      }
      goto L_08827748;
    }
L_08827748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_08827750;
    }
L_08827750:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088277F8;
      }
      goto L_08827760;
    }
L_08827760:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_088277F8;
L_088277F8:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827760;
      }
      goto L_08827804;
    }
L_08827804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_0882780C;
    }
L_0882780C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827854;
      }
      goto L_08827818;
    }
L_08827818:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827840;
      }
      goto L_08827828;
    }
L_08827828:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08827840;
L_08827840:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827828;
      }
      goto L_0882784C;
    }
L_0882784C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_08827854;
    }
L_08827854:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882789C;
      }
      goto L_08827864;
    }
L_08827864:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_0882789C;
L_0882789C:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827864;
      }
      goto L_088278A8;
    }
L_088278A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_088278B0;
    }
L_088278B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882799C;
      }
      goto L_088278BC;
    }
L_088278BC:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827990;
      }
      goto L_088278CC;
    }
L_088278CC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[3] & 192u);
    ctx.set_gpr(10, ctx.gpr[3] & 48u);
    ctx.set_gpr(9, ctx.gpr[3] & 12u);
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 4u));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 2u));
    ctx.set_gpr(14, ctx.gpr[24] | ctx.gpr[14]);
    ctx.set_gpr(15, ctx.gpr[15] | ctx.gpr[14]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 6u));
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(14, ctx.gpr[6] + ctx.gpr[14]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[14] & 192u);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.set_gpr(14, ctx.gpr[10] << 2u);
    ctx.set_gpr(14, ctx.gpr[10] | ctx.gpr[14]);
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[14]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 4u));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[14]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.set_gpr(10, ctx.gpr[10] & 48u);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[10]);
    ctx.set_gpr(14, ctx.gpr[9] << 4u);
    ctx.set_gpr(10, ctx.gpr[9] << 2u);
    ctx.set_gpr(10, ctx.gpr[14] | ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 4u));
    ctx.set_gpr(9, ctx.gpr[9] & 12u);
    ctx.set_gpr(14, ctx.gpr[9] | ctx.gpr[15]);
    ctx.set_gpr(10, ctx.gpr[3] << 6u);
    ctx.set_gpr(9, ctx.gpr[3] << 4u);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[3] << 2u);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 6u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(4));
    goto L_08827990;
L_08827990:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088278CC;
      }
      goto L_0882799C;
    }
L_0882799C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827A14;
      }
      goto L_088279AC;
    }
L_088279AC:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827A00;
      }
      goto L_088279BC;
    }
L_088279BC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] & 240u);
    ctx.set_gpr(5, ctx.gpr[3] & 15u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    goto L_08827A00;
L_08827A00:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088279BC;
      }
      goto L_08827A0C;
    }
L_08827A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_08827A14;
    }
L_08827A14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827A5C;
      }
      goto L_08827A20;
    }
L_08827A20:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827A48;
      }
      goto L_08827A30;
    }
L_08827A30:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08827A48;
L_08827A48:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827A30;
      }
      goto L_08827A54;
    }
L_08827A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_08827A5C;
    }
L_08827A5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827ABC;
      }
      goto L_08827A68;
    }
L_08827A68:
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827AB0;
      }
      goto L_08827A78;
    }
L_08827A78:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08827AB0;
L_08827AB0:
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827A78;
      }
      goto L_08827ABC;
    }
L_08827ABC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08827AC4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08827E4C;
      }
      goto L_08827AD8;
    }
L_08827AD8:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827CA0;
      }
      goto L_08827AE8;
    }
L_08827AE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827C24;
      }
      goto L_08827AF4;
    }
L_08827AF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827BA8;
      }
      goto L_08827B00;
    }
L_08827B00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827B14;
      }
      goto L_08827B0C;
    }
L_08827B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827C90;
      }
      goto L_08827B14;
    }
L_08827B14:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(10, ctx.gpr[3] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[10]);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827B94;
      }
      goto L_08827B44;
    }
L_08827B44:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[3] & 31u)));
    ctx.set_gpr(13, ctx.gpr[13] & 1u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827B68;
      }
      goto L_08827B58;
    }
L_08827B58:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827B6C;
      }
      goto L_08827B68;
    }
L_08827B68:
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08827B6C;
L_08827B6C:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08827B88;
      }
      goto L_08827B78;
    }
L_08827B78:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827B8C;
      }
      goto L_08827B88;
    }
L_08827B88:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08827B8C;
L_08827B8C:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08827B94;
L_08827B94:
    ctx.set_gpr(13, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827B44;
      }
      goto L_08827BA0;
    }
L_08827BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827C90;
      }
      goto L_08827BA8;
    }
L_08827BA8:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
    ctx.set_gpr(3, ctx.gpr[13] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827C10;
      }
      goto L_08827BD8;
    }
L_08827BD8:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[3] & 31u)));
    ctx.set_gpr(13, ctx.gpr[13] & 3u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08827C04;
      }
      goto L_08827BF4;
    }
L_08827BF4:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827C08;
      }
      goto L_08827C04;
    }
L_08827C04:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    goto L_08827C08;
L_08827C08:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08827C10;
L_08827C10:
    ctx.set_gpr(13, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827BD8;
      }
      goto L_08827C1C;
    }
L_08827C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827C90;
      }
      goto L_08827C24;
    }
L_08827C24:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[9] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827C84;
      }
      goto L_08827C4C;
    }
L_08827C4C:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[3] & 31u)));
    ctx.set_gpr(13, ctx.gpr[13] & 15u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08827C78;
      }
      goto L_08827C68;
    }
L_08827C68:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827C7C;
      }
      goto L_08827C78;
    }
L_08827C78:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_08827C7C;
L_08827C7C:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08827C84;
L_08827C84:
    ctx.set_gpr(13, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827C4C;
      }
      goto L_08827C90;
    }
L_08827C90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    goto L_08827CA0;
L_08827CA0:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08827CB8;
      }
      goto L_08827CB0;
    }
L_08827CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827E4C;
      }
      goto L_08827CB8;
    }
L_08827CB8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827DA4;
      }
      goto L_08827CC0;
    }
L_08827CC0:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827D68;
      }
      goto L_08827CE0;
    }
L_08827CE0:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827D04;
      }
      goto L_08827CF0;
    }
L_08827CF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827D14;
      }
      goto L_08827D04;
    }
L_08827D04:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    goto L_08827D14;
L_08827D14:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08827D68;
L_08827D68:
    ctx.set_gpr(3, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827CE0;
      }
      goto L_08827D74;
    }
L_08827D74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827E4C;
      }
      goto L_08827DA4;
    }
L_08827DA4:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827E1C;
      }
      goto L_08827DC8;
    }
L_08827DC8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[7] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[7] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[7] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08827E1C;
L_08827E1C:
    ctx.set_gpr(5, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827DC8;
      }
      goto L_08827E28;
    }
L_08827E28:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08827E4C;
L_08827E4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08827E54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 27u, 0x0882820Cu>(ctx, &aot_mem); return;
      }
      goto L_08827E64;
    }
L_08827E64:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827E78;
      }
      goto L_08827E6C;
    }
L_08827E6C:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827E7C;
      }
      goto L_08827E78;
    }
L_08827E78:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08827E7C;
L_08827E7C:
    ctx.set_gpr(7, ctx.gpr[7] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 10u, 0x088280B0u>(ctx, &aot_mem); return;
      }
      goto L_08827E90;
    }
L_08827E90:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 3u, 0x08828010u>(ctx, &aot_mem); return;
      }
      goto L_08827E9C;
    }
L_08827E9C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08827F60;
      }
      goto L_08827EA8;
    }
L_08827EA8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08827EBC;
      }
      goto L_08827EB4;
    }
L_08827EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 9u, 0x088280A0u>(ctx, &aot_mem); return;
      }
      goto L_08827EBC;
    }
L_08827EBC:
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, ctx.gpr[8] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] & 65535u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] >> 3u);
    ctx.set_gpr(10, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(11, ctx.gpr[8] & 7u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(11, ctx.gpr[8] - ctx.gpr[11]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827F4C;
      }
      goto L_08827EFC;
    }
L_08827EFC:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[11] & 31u)));
    ctx.set_gpr(12, ctx.gpr[12] & 1u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827F20;
      }
      goto L_08827F10;
    }
L_08827F10:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827F24;
      }
      goto L_08827F20;
    }
L_08827F20:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08827F24;
L_08827F24:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08827F40;
      }
      goto L_08827F30;
    }
L_08827F30:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827F44;
      }
      goto L_08827F40;
    }
L_08827F40:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08827F44;
L_08827F44:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08827F4C;
L_08827F4C:
    ctx.set_gpr(12, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827EFC;
      }
      goto L_08827F58;
    }
L_08827F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 9u, 0x088280A0u>(ctx, &aot_mem); return;
      }
      goto L_08827F60;
    }
L_08827F60:
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, ctx.gpr[8] << 4u);
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[8] << 2u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 65535u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] >> 2u);
    ctx.set_gpr(10, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(11, ctx.gpr[8] & 3u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[11]);
    ctx.set_gpr(11, ctx.gpr[8] << 1u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827FFC;
      }
      goto L_08827FAC;
    }
L_08827FAC:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[11] & 31u)));
    ctx.set_gpr(14, ctx.gpr[12] & 3u);
    ctx.set_gpr(13, ctx.gpr[14] << 4u);
    ctx.set_gpr(12, ctx.gpr[14] << 2u);
    ctx.set_gpr(12, ctx.gpr[14] | ctx.gpr[12]);
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[14] << 6u);
    ctx.set_gpr(12, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08827FF0;
      }
      goto L_08827FE0;
    }
L_08827FE0:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08827FF4;
      }
      goto L_08827FF0;
    }
L_08827FF0:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    goto L_08827FF4;
L_08827FF4:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08827FFC;
L_08827FFC:
    ctx.set_gpr(12, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    ctx.pc = 0x08828000u; return;
}

void recomp_unit_0008(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0008_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_8(Runtime &runtime) {
    runtime.register_generated_unit(8u, 0x08824000u, 16384u, &recomp_unit_0008, &recomp_unit_0008_entry);
    runtime.register_function(0x08824000u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882403Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824050u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824088u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824098u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824104u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882410Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824110u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824120u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882413Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882415Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882416Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882417Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882418Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882419Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824204u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824214u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882421Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882422Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824238u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882424Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824258u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824268u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824278u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824284u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824290u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824298u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824308u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882431Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824330u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824334u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824348u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882434Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824384u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882440Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824414u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824420u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824438u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824440u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824458u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882446Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824484u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824498u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824508u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824518u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824528u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882453Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882454Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824558u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824568u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882461Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882462Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824640u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824650u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882466Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824678u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882468Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882469Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882470Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824720u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824734u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824748u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824758u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824768u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882477Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882478Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824808u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882481Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824830u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882483Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824854u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824860u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824864u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824870u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824874u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824928u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824944u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824954u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824958u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824960u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882496Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824974u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824ED4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825018u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825024u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882502Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825040u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882506Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825078u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825080u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882508Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882509Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825108u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825134u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825140u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825148u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825160u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825170u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882517Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825190u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882520Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825218u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825238u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825244u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825250u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825264u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825298u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825314u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825320u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825340u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882534Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882535Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825368u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825384u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882540Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825448u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825454u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825474u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825480u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882548Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882551Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825528u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825550u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882556Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825604u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882560Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825620u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825630u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825638u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825644u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825660u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825684u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825690u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825698u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825700u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825708u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825714u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825720u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882573Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825768u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825774u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882577Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825798u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825834u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882583Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825868u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825880u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825890u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882589Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825944u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825950u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825954u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825960u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825968u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882597Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825994u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825BE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825BECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825BF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C48u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825EF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826034u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826050u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882609Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826104u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826110u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826118u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826120u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882612Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826134u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826148u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826160u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826194u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882619Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826234u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882628Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826294u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882631Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826324u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826334u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826338u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882633Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826348u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826350u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826358u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882636Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826384u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826408u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826410u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826420u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826424u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826428u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826434u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882643Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826450u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826468u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882649Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826508u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826514u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882651Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826528u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826530u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826540u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826550u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826558u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826560u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882656Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826574u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882657Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882658Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826604u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882660Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882661Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882663Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826650u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826658u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826664u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882666Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882667Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826684u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826694u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826714u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882671Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826728u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826730u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826740u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826750u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826760u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826770u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826788u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826790u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882679Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826804u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826814u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826824u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826868u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826908u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826910u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826920u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826968u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826978u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826988u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826ADCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CD0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DDCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826FACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827050u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882705Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827068u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827070u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827078u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827080u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827088u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882709Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088270BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827154u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882715Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827324u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827330u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882733Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827344u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827358u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827378u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882738Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827394u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882739Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827530u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882755Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827570u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827578u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827584u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882758Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827598u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827618u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827624u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882762Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882763Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827704u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882773Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827748u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827750u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827760u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088277F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827804u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882780Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827818u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827828u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827840u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882784Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827854u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827864u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882789Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827990u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882799Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A48u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827ABCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827DA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827DC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FFCu, &recomp_unit_0008, "recomp_unit_0008");
}
} // namespace psprecomp
