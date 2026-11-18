#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0110[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0,
    0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55,
    0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0,
    66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76,
    77, 0, 0, 78, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 83, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98,
    0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0,
    106, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0,
    0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0,
    0, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0,
    0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0,
    0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0,
    164, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 206, 0, 0, 207, 0, 0, 208, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 229, 0, 0, 0,
    230, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 237, 0, 0, 0, 238,
    0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 273,
    0, 0, 274, 275, 0, 276, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 282, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 336,
    0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352,
    0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 368,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 374, 0, 375, 0, 376,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0,
    0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 398, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0,
    0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0,
    427, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 440, 0,
    0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0,
    446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458,
    0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0,
    467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0,
    0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483,
    0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0, 0,
    0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0,
    0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510,
    0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0,
    0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0,
    529, 0, 530, 0, 531, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 538, 539, 0, 0, 0, 540, 0,
    0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0,
    546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556,
    0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562,
    0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568,
    0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 583, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0,
    0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0,
    0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0,
    0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0,
    0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0,
    0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0,
    643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0,
    0, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 656,
    0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 663,
    0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 670,
    0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0,
    677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0,
    0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 689,
};
void recomp_unit_0110_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089BC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0110[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089BC000;
    case 2u: goto L_089BC03C;
    case 3u: goto L_089BC05C;
    case 4u: goto L_089BC068;
    case 5u: goto L_089BC260;
    case 6u: goto L_089BC280;
    case 7u: goto L_089BC28C;
    case 8u: goto L_089BC2C4;
    case 9u: goto L_089BC2D4;
    case 10u: goto L_089BC2E0;
    case 11u: goto L_089BC328;
    case 12u: goto L_089BC340;
    case 13u: goto L_089BC34C;
    case 14u: goto L_089BC394;
    case 15u: goto L_089BC3AC;
    case 16u: goto L_089BC3B8;
    case 17u: goto L_089BC490;
    case 18u: goto L_089BC4B0;
    case 19u: goto L_089BC4BC;
    case 20u: goto L_089BC564;
    case 21u: goto L_089BC584;
    case 22u: goto L_089BC594;
    case 23u: goto L_089BC5A4;
    case 24u: goto L_089BC5B4;
    case 25u: goto L_089BC5C0;
    case 26u: goto L_089BC5D8;
    case 27u: goto L_089BC5E8;
    case 28u: goto L_089BC5F8;
    case 29u: goto L_089BC608;
    case 30u: goto L_089BC618;
    case 31u: goto L_089BC624;
    case 32u: goto L_089BC63C;
    case 33u: goto L_089BC64C;
    case 34u: goto L_089BC670;
    case 35u: goto L_089BC674;
    case 36u: goto L_089BC688;
    case 37u: goto L_089BC6A4;
    case 38u: goto L_089BC6B0;
    case 39u: goto L_089BC6BC;
    case 40u: goto L_089BC6C8;
    case 41u: goto L_089BC6D4;
    case 42u: goto L_089BC6E0;
    case 43u: goto L_089BC6EC;
    case 44u: goto L_089BC6F8;
    case 45u: goto L_089BC704;
    case 46u: goto L_089BC710;
    case 47u: goto L_089BC71C;
    case 48u: goto L_089BC728;
    case 49u: goto L_089BC734;
    case 50u: goto L_089BC740;
    case 51u: goto L_089BC74C;
    case 52u: goto L_089BC758;
    case 53u: goto L_089BC764;
    case 54u: goto L_089BC770;
    case 55u: goto L_089BC77C;
    case 56u: goto L_089BC788;
    case 57u: goto L_089BC794;
    case 58u: goto L_089BC7A0;
    case 59u: goto L_089BC7AC;
    case 60u: goto L_089BC7B8;
    case 61u: goto L_089BC7C4;
    case 62u: goto L_089BC7D0;
    case 63u: goto L_089BC7DC;
    case 64u: goto L_089BC7E8;
    case 65u: goto L_089BC7F4;
    case 66u: goto L_089BC800;
    case 67u: goto L_089BC80C;
    case 68u: goto L_089BC818;
    case 69u: goto L_089BC824;
    case 70u: goto L_089BC830;
    case 71u: goto L_089BC83C;
    case 72u: goto L_089BC848;
    case 73u: goto L_089BC854;
    case 74u: goto L_089BC868;
    case 75u: goto L_089BC870;
    case 76u: goto L_089BC87C;
    case 77u: goto L_089BC880;
    case 78u: goto L_089BC88C;
    case 79u: goto L_089BC890;
    case 80u: goto L_089BC8AC;
    case 81u: goto L_089BC8D8;
    case 82u: goto L_089BC8E0;
    case 83u: goto L_089BC8E4;
    case 84u: goto L_089BC904;
    case 85u: goto L_089BC90C;
    case 86u: goto L_089BC910;
    case 87u: goto L_089BC930;
    case 88u: goto L_089BC938;
    case 89u: goto L_089BC93C;
    case 90u: goto L_089BC988;
    case 91u: goto L_089BC9A0;
    case 92u: goto L_089BC9A8;
    case 93u: goto L_089BC9B4;
    case 94u: goto L_089BC9C0;
    case 95u: goto L_089BC9D0;
    case 96u: goto L_089BC9E4;
    case 97u: goto L_089BC9F0;
    case 98u: goto L_089BC9FC;
    case 99u: goto L_089BCA0C;
    case 100u: goto L_089BCA18;
    case 101u: goto L_089BCA24;
    case 102u: goto L_089BCA34;
    case 103u: goto L_089BCA48;
    case 104u: goto L_089BCA68;
    case 105u: goto L_089BCA78;
    case 106u: goto L_089BCA80;
    case 107u: goto L_089BCA8C;
    case 108u: goto L_089BCA98;
    case 109u: goto L_089BCAA0;
    case 110u: goto L_089BCACC;
    case 111u: goto L_089BCAE0;
    case 112u: goto L_089BCAF4;
    case 113u: goto L_089BCB0C;
    case 114u: goto L_089BCB44;
    case 115u: goto L_089BCB68;
    case 116u: goto L_089BCB94;
    case 117u: goto L_089BCBC8;
    case 118u: goto L_089BCBD0;
    case 119u: goto L_089BCBF0;
    case 120u: goto L_089BCBF8;
    case 121u: goto L_089BCC08;
    case 122u: goto L_089BCC1C;
    case 123u: goto L_089BCC38;
    case 124u: goto L_089BCC40;
    case 125u: goto L_089BCC48;
    case 126u: goto L_089BCC54;
    case 127u: goto L_089BCC6C;
    case 128u: goto L_089BCC74;
    case 129u: goto L_089BCC88;
    case 130u: goto L_089BCC90;
    case 131u: goto L_089BCC98;
    case 132u: goto L_089BCCA4;
    case 133u: goto L_089BCCB4;
    case 134u: goto L_089BCCC8;
    case 135u: goto L_089BCCD0;
    case 136u: goto L_089BCCD8;
    case 137u: goto L_089BCCE4;
    case 138u: goto L_089BCCF4;
    case 139u: goto L_089BCD08;
    case 140u: goto L_089BCD10;
    case 141u: goto L_089BCD18;
    case 142u: goto L_089BCD24;
    case 143u: goto L_089BCD34;
    case 144u: goto L_089BCD48;
    case 145u: goto L_089BCD50;
    case 146u: goto L_089BCD58;
    case 147u: goto L_089BCD64;
    case 148u: goto L_089BCD74;
    case 149u: goto L_089BCD88;
    case 150u: goto L_089BCD90;
    case 151u: goto L_089BCD98;
    case 152u: goto L_089BCDA4;
    case 153u: goto L_089BCDB4;
    case 154u: goto L_089BCDC8;
    case 155u: goto L_089BCDD0;
    case 156u: goto L_089BCDD8;
    case 157u: goto L_089BCDE4;
    case 158u: goto L_089BCDF4;
    case 159u: goto L_089BCE04;
    case 160u: goto L_089BCE14;
    case 161u: goto L_089BCE54;
    case 162u: goto L_089BCE60;
    case 163u: goto L_089BCE68;
    case 164u: goto L_089BCE80;
    case 165u: goto L_089BCE84;
    case 166u: goto L_089BCE90;
    case 167u: goto L_089BCEAC;
    case 168u: goto L_089BCEB4;
    case 169u: goto L_089BCED0;
    case 170u: goto L_089BCEDC;
    case 171u: goto L_089BCF04;
    case 172u: goto L_089BCF1C;
    case 173u: goto L_089BCF38;
    case 174u: goto L_089BCF44;
    case 175u: goto L_089BCF4C;
    case 176u: goto L_089BCF5C;
    case 177u: goto L_089BCF78;
    case 178u: goto L_089BCFD4;
    case 179u: goto L_089BCFF0;
    case 180u: goto L_089BCFFC;
    case 181u: goto L_089BD010;
    case 182u: goto L_089BD02C;
    case 183u: goto L_089BD038;
    case 184u: goto L_089BD044;
    case 185u: goto L_089BD05C;
    case 186u: goto L_089BD06C;
    case 187u: goto L_089BD088;
    case 188u: goto L_089BD098;
    case 189u: goto L_089BD148;
    case 190u: goto L_089BD160;
    case 191u: goto L_089BD168;
    case 192u: goto L_089BD174;
    case 193u: goto L_089BD184;
    case 194u: goto L_089BD234;
    case 195u: goto L_089BD250;
    case 196u: goto L_089BD260;
    case 197u: goto L_089BD29C;
    case 198u: goto L_089BD2A4;
    case 199u: goto L_089BD2B0;
    case 200u: goto L_089BD2C8;
    case 201u: goto L_089BD308;
    case 202u: goto L_089BD318;
    case 203u: goto L_089BD324;
    case 204u: goto L_089BD33C;
    case 205u: goto L_089BD358;
    case 206u: goto L_089BD35C;
    case 207u: goto L_089BD368;
    case 208u: goto L_089BD374;
    case 209u: goto L_089BD380;
    case 210u: goto L_089BD39C;
    case 211u: goto L_089BD3BC;
    case 212u: goto L_089BD3C0;
    case 213u: goto L_089BD3CC;
    case 214u: goto L_089BD3D0;
    case 215u: goto L_089BD3EC;
    case 216u: goto L_089BD400;
    case 217u: goto L_089BD418;
    case 218u: goto L_089BD430;
    case 219u: goto L_089BD458;
    case 220u: goto L_089BD474;
    case 221u: goto L_089BD48C;
    case 222u: goto L_089BD4A8;
    case 223u: goto L_089BD4C8;
    case 224u: goto L_089BD534;
    case 225u: goto L_089BD538;
    case 226u: goto L_089BD544;
    case 227u: goto L_089BD560;
    case 228u: goto L_089BD564;
    case 229u: goto L_089BD570;
    case 230u: goto L_089BD580;
    case 231u: goto L_089BD588;
    case 232u: goto L_089BD594;
    case 233u: goto L_089BD5B0;
    case 234u: goto L_089BD5C0;
    case 235u: goto L_089BD5DC;
    case 236u: goto L_089BD5E8;
    case 237u: goto L_089BD5EC;
    case 238u: goto L_089BD5FC;
    case 239u: goto L_089BD608;
    case 240u: goto L_089BD620;
    case 241u: goto L_089BD648;
    case 242u: goto L_089BD664;
    case 243u: goto L_089BD67C;
    case 244u: goto L_089BD698;
    case 245u: goto L_089BD6B4;
    case 246u: goto L_089BD720;
    case 247u: goto L_089BD724;
    case 248u: goto L_089BD730;
    case 249u: goto L_089BD7A0;
    case 250u: goto L_089BD7A4;
    case 251u: goto L_089BD7B0;
    case 252u: goto L_089BD7BC;
    case 253u: goto L_089BD7C8;
    case 254u: goto L_089BD7CC;
    case 255u: goto L_089BD800;
    case 256u: goto L_089BD82C;
    case 257u: goto L_089BD83C;
    case 258u: goto L_089BD854;
    case 259u: goto L_089BD86C;
    case 260u: goto L_089BD894;
    case 261u: goto L_089BD8A0;
    case 262u: goto L_089BD8CC;
    case 263u: goto L_089BD8E4;
    case 264u: goto L_089BD910;
    case 265u: goto L_089BD93C;
    case 266u: goto L_089BD968;
    case 267u: goto L_089BD994;
    case 268u: goto L_089BD9AC;
    case 269u: goto L_089BD9C4;
    case 270u: goto L_089BD9D0;
    case 271u: goto L_089BD9E8;
    case 272u: goto L_089BD9F8;
    case 273u: goto L_089BD9FC;
    case 274u: goto L_089BDA08;
    case 275u: goto L_089BDA0C;
    case 276u: goto L_089BDA14;
    case 277u: goto L_089BDA18;
    case 278u: goto L_089BDA24;
    case 279u: goto L_089BDA40;
    case 280u: goto L_089BDA5C;
    case 281u: goto L_089BDA7C;
    case 282u: goto L_089BDA98;
    case 283u: goto L_089BDA9C;
    case 284u: goto L_089BDAA8;
    case 285u: goto L_089BDAB4;
    case 286u: goto L_089BDACC;
    case 287u: goto L_089BDAE8;
    case 288u: goto L_089BDAF4;
    case 289u: goto L_089BDB0C;
    case 290u: goto L_089BDB24;
    case 291u: goto L_089BDB3C;
    case 292u: goto L_089BDB54;
    case 293u: goto L_089BDB6C;
    case 294u: goto L_089BDB8C;
    case 295u: goto L_089BDB98;
    case 296u: goto L_089BDBB0;
    case 297u: goto L_089BDBC8;
    case 298u: goto L_089BDBE0;
    case 299u: goto L_089BDC0C;
    case 300u: goto L_089BDC28;
    case 301u: goto L_089BDC44;
    case 302u: goto L_089BDC50;
    case 303u: goto L_089BDC74;
    case 304u: goto L_089BDC94;
    case 305u: goto L_089BDCC0;
    case 306u: goto L_089BDCDC;
    case 307u: goto L_089BDCF4;
    case 308u: goto L_089BDD0C;
    case 309u: goto L_089BDD24;
    case 310u: goto L_089BDD48;
    case 311u: goto L_089BDD60;
    case 312u: goto L_089BDD6C;
    case 313u: goto L_089BDD90;
    case 314u: goto L_089BDDB4;
    case 315u: goto L_089BDDD8;
    case 316u: goto L_089BDDF0;
    case 317u: goto L_089BDE08;
    case 318u: goto L_089BDE20;
    case 319u: goto L_089BDE38;
    case 320u: goto L_089BDE50;
    case 321u: goto L_089BDE68;
    case 322u: goto L_089BDE80;
    case 323u: goto L_089BDE98;
    case 324u: goto L_089BDEB0;
    case 325u: goto L_089BDEC8;
    case 326u: goto L_089BDEE0;
    case 327u: goto L_089BDEFC;
    case 328u: goto L_089BDF08;
    case 329u: goto L_089BDF24;
    case 330u: goto L_089BDF28;
    case 331u: goto L_089BDF34;
    case 332u: goto L_089BDF58;
    case 333u: goto L_089BDF64;
    case 334u: goto L_089BDF6C;
    case 335u: goto L_089BDF74;
    case 336u: goto L_089BDF7C;
    case 337u: goto L_089BDF84;
    case 338u: goto L_089BDF8C;
    case 339u: goto L_089BDF94;
    case 340u: goto L_089BDF9C;
    case 341u: goto L_089BDFA4;
    case 342u: goto L_089BDFAC;
    case 343u: goto L_089BDFB4;
    case 344u: goto L_089BDFBC;
    case 345u: goto L_089BDFC4;
    case 346u: goto L_089BDFCC;
    case 347u: goto L_089BDFD4;
    case 348u: goto L_089BDFDC;
    case 349u: goto L_089BDFE4;
    case 350u: goto L_089BDFEC;
    case 351u: goto L_089BDFF4;
    case 352u: goto L_089BDFFC;
    case 353u: goto L_089BE004;
    case 354u: goto L_089BE00C;
    case 355u: goto L_089BE080;
    case 356u: goto L_089BE088;
    case 357u: goto L_089BE0A0;
    case 358u: goto L_089BE0A8;
    case 359u: goto L_089BE0C8;
    case 360u: goto L_089BE11C;
    case 361u: goto L_089BE140;
    case 362u: goto L_089BE158;
    case 363u: goto L_089BE188;
    case 364u: goto L_089BE1C0;
    case 365u: goto L_089BE1CC;
    case 366u: goto L_089BE1DC;
    case 367u: goto L_089BE1F4;
    case 368u: goto L_089BE1FC;
    case 369u: goto L_089BE204;
    case 370u: goto L_089BE228;
    case 371u: goto L_089BE24C;
    case 372u: goto L_089BE254;
    case 373u: goto L_089BE25C;
    case 374u: goto L_089BE26C;
    case 375u: goto L_089BE274;
    case 376u: goto L_089BE27C;
    case 377u: goto L_089BE28C;
    case 378u: goto L_089BE2C8;
    case 379u: goto L_089BE2D4;
    case 380u: goto L_089BE2EC;
    case 381u: goto L_089BE30C;
    case 382u: goto L_089BE314;
    case 383u: goto L_089BE32C;
    case 384u: goto L_089BE350;
    case 385u: goto L_089BE378;
    case 386u: goto L_089BE384;
    case 387u: goto L_089BE3A4;
    case 388u: goto L_089BE3AC;
    case 389u: goto L_089BE3C8;
    case 390u: goto L_089BE3CC;
    case 391u: goto L_089BE3E4;
    case 392u: goto L_089BE404;
    case 393u: goto L_089BE42C;
    case 394u: goto L_089BE438;
    case 395u: goto L_089BE448;
    case 396u: goto L_089BE454;
    case 397u: goto L_089BE480;
    case 398u: goto L_089BE48C;
    case 399u: goto L_089BE498;
    case 400u: goto L_089BE4A0;
    case 401u: goto L_089BE4A8;
    case 402u: goto L_089BE4C0;
    case 403u: goto L_089BE4D4;
    case 404u: goto L_089BE4E8;
    case 405u: goto L_089BE508;
    case 406u: goto L_089BE51C;
    case 407u: goto L_089BE524;
    case 408u: goto L_089BE53C;
    case 409u: goto L_089BE554;
    case 410u: goto L_089BE560;
    case 411u: goto L_089BE568;
    case 412u: goto L_089BE58C;
    case 413u: goto L_089BE594;
    case 414u: goto L_089BE5A0;
    case 415u: goto L_089BE5A8;
    case 416u: goto L_089BE5B4;
    case 417u: goto L_089BE5C0;
    case 418u: goto L_089BE5F0;
    case 419u: goto L_089BE5F8;
    case 420u: goto L_089BE608;
    case 421u: goto L_089BE618;
    case 422u: goto L_089BE620;
    case 423u: goto L_089BE628;
    case 424u: goto L_089BE64C;
    case 425u: goto L_089BE65C;
    case 426u: goto L_089BE674;
    case 427u: goto L_089BE680;
    case 428u: goto L_089BE688;
    case 429u: goto L_089BE6A4;
    case 430u: goto L_089BE6B4;
    case 431u: goto L_089BE6C0;
    case 432u: goto L_089BE6C8;
    case 433u: goto L_089BE6DC;
    case 434u: goto L_089BE6F8;
    case 435u: goto L_089BE714;
    case 436u: goto L_089BE730;
    case 437u: goto L_089BE740;
    case 438u: goto L_089BE764;
    case 439u: goto L_089BE774;
    case 440u: goto L_089BE778;
    case 441u: goto L_089BE788;
    case 442u: goto L_089BE7A0;
    case 443u: goto L_089BE7C0;
    case 444u: goto L_089BE7E4;
    case 445u: goto L_089BE7F0;
    case 446u: goto L_089BE800;
    case 447u: goto L_089BE824;
    case 448u: goto L_089BE834;
    case 449u: goto L_089BE858;
    case 450u: goto L_089BE868;
    case 451u: goto L_089BE88C;
    case 452u: goto L_089BE898;
    case 453u: goto L_089BE8A4;
    case 454u: goto L_089BE8B4;
    case 455u: goto L_089BE8C0;
    case 456u: goto L_089BE8CC;
    case 457u: goto L_089BE8E4;
    case 458u: goto L_089BE8FC;
    case 459u: goto L_089BE90C;
    case 460u: goto L_089BE92C;
    case 461u: goto L_089BE93C;
    case 462u: goto L_089BE948;
    case 463u: goto L_089BE958;
    case 464u: goto L_089BE964;
    case 465u: goto L_089BE96C;
    case 466u: goto L_089BE978;
    case 467u: goto L_089BE980;
    case 468u: goto L_089BE998;
    case 469u: goto L_089BE9A8;
    case 470u: goto L_089BE9B4;
    case 471u: goto L_089BE9CC;
    case 472u: goto L_089BE9DC;
    case 473u: goto L_089BE9E8;
    case 474u: goto L_089BE9F8;
    case 475u: goto L_089BEA04;
    case 476u: goto L_089BEA0C;
    case 477u: goto L_089BEA18;
    case 478u: goto L_089BEA20;
    case 479u: goto L_089BEA38;
    case 480u: goto L_089BEA48;
    case 481u: goto L_089BEA54;
    case 482u: goto L_089BEA6C;
    case 483u: goto L_089BEA7C;
    case 484u: goto L_089BEA88;
    case 485u: goto L_089BEA98;
    case 486u: goto L_089BEAA4;
    case 487u: goto L_089BEAAC;
    case 488u: goto L_089BEAB8;
    case 489u: goto L_089BEAC0;
    case 490u: goto L_089BEAD8;
    case 491u: goto L_089BEAE8;
    case 492u: goto L_089BEAF4;
    case 493u: goto L_089BEB0C;
    case 494u: goto L_089BEB24;
    case 495u: goto L_089BEB2C;
    case 496u: goto L_089BEB3C;
    case 497u: goto L_089BEB54;
    case 498u: goto L_089BEB58;
    case 499u: goto L_089BEB60;
    case 500u: goto L_089BEB78;
    case 501u: goto L_089BEB84;
    case 502u: goto L_089BEB90;
    case 503u: goto L_089BEB98;
    case 504u: goto L_089BEBA8;
    case 505u: goto L_089BEBC0;
    case 506u: goto L_089BEBC4;
    case 507u: goto L_089BEBCC;
    case 508u: goto L_089BEBE4;
    case 509u: goto L_089BEBF0;
    case 510u: goto L_089BEBFC;
    case 511u: goto L_089BEC04;
    case 512u: goto L_089BEC14;
    case 513u: goto L_089BEC2C;
    case 514u: goto L_089BEC30;
    case 515u: goto L_089BEC38;
    case 516u: goto L_089BEC50;
    case 517u: goto L_089BEC5C;
    case 518u: goto L_089BEC68;
    case 519u: goto L_089BEC70;
    case 520u: goto L_089BEC88;
    case 521u: goto L_089BECA4;
    case 522u: goto L_089BECB4;
    case 523u: goto L_089BECC4;
    case 524u: goto L_089BECD8;
    case 525u: goto L_089BECE0;
    case 526u: goto L_089BECE8;
    case 527u: goto L_089BECF0;
    case 528u: goto L_089BECF8;
    case 529u: goto L_089BED00;
    case 530u: goto L_089BED08;
    case 531u: goto L_089BED10;
    case 532u: goto L_089BED1C;
    case 533u: goto L_089BED28;
    case 534u: goto L_089BED30;
    case 535u: goto L_089BED38;
    case 536u: goto L_089BED4C;
    case 537u: goto L_089BED5C;
    case 538u: goto L_089BED64;
    case 539u: goto L_089BED68;
    case 540u: goto L_089BED78;
    case 541u: goto L_089BED94;
    case 542u: goto L_089BEDA4;
    case 543u: goto L_089BEDC4;
    case 544u: goto L_089BEDD4;
    case 545u: goto L_089BEDF0;
    case 546u: goto L_089BEE00;
    case 547u: goto L_089BEE20;
    case 548u: goto L_089BEE30;
    case 549u: goto L_089BEE4C;
    case 550u: goto L_089BEE5C;
    case 551u: goto L_089BEE7C;
    case 552u: goto L_089BEE8C;
    case 553u: goto L_089BEE9C;
    case 554u: goto L_089BEEB4;
    case 555u: goto L_089BEEF4;
    case 556u: goto L_089BEEFC;
    case 557u: goto L_089BEF18;
    case 558u: goto L_089BEF3C;
    case 559u: goto L_089BEFA8;
    case 560u: goto L_089BEFB0;
    case 561u: goto L_089BEFB8;
    case 562u: goto L_089BEFFC;
    case 563u: goto L_089BF014;
    case 564u: goto L_089BF030;
    case 565u: goto L_089BF058;
    case 566u: goto L_089BF064;
    case 567u: goto L_089BF070;
    case 568u: goto L_089BF07C;
    case 569u: goto L_089BF088;
    case 570u: goto L_089BF094;
    case 571u: goto L_089BF0A0;
    case 572u: goto L_089BF0AC;
    case 573u: goto L_089BF0E8;
    case 574u: goto L_089BF120;
    case 575u: goto L_089BF150;
    case 576u: goto L_089BF168;
    case 577u: goto L_089BF198;
    case 578u: goto L_089BF1D4;
    case 579u: goto L_089BF1D8;
    case 580u: goto L_089BF1F0;
    case 581u: goto L_089BF220;
    case 582u: goto L_089BF25C;
    case 583u: goto L_089BF260;
    case 584u: goto L_089BF29C;
    case 585u: goto L_089BF2B8;
    case 586u: goto L_089BF354;
    case 587u: goto L_089BF378;
    case 588u: goto L_089BF3B0;
    case 589u: goto L_089BF3D4;
    case 590u: goto L_089BF410;
    case 591u: goto L_089BF434;
    case 592u: goto L_089BF46C;
    case 593u: goto L_089BF490;
    case 594u: goto L_089BF4CC;
    case 595u: goto L_089BF4F0;
    case 596u: goto L_089BF528;
    case 597u: goto L_089BF54C;
    case 598u: goto L_089BF580;
    case 599u: goto L_089BF5A4;
    case 600u: goto L_089BF5D4;
    case 601u: goto L_089BF5F8;
    case 602u: goto L_089BF62C;
    case 603u: goto L_089BF650;
    case 604u: goto L_089BF688;
    case 605u: goto L_089BF6AC;
    case 606u: goto L_089BF6E0;
    case 607u: goto L_089BF704;
    case 608u: goto L_089BF734;
    case 609u: goto L_089BF758;
    case 610u: goto L_089BF78C;
    case 611u: goto L_089BF7B0;
    case 612u: goto L_089BF7E0;
    case 613u: goto L_089BF804;
    case 614u: goto L_089BF830;
    case 615u: goto L_089BF854;
    case 616u: goto L_089BF878;
    case 617u: goto L_089BF89C;
    case 618u: goto L_089BF8CC;
    case 619u: goto L_089BF8FC;
    case 620u: goto L_089BF92C;
    case 621u: goto L_089BF95C;
    case 622u: goto L_089BF98C;
    case 623u: goto L_089BF9BC;
    case 624u: goto L_089BF9EC;
    case 625u: goto L_089BFA1C;
    case 626u: goto L_089BFA4C;
    case 627u: goto L_089BFA7C;
    case 628u: goto L_089BFAAC;
    case 629u: goto L_089BFADC;
    case 630u: goto L_089BFB0C;
    case 631u: goto L_089BFB3C;
    case 632u: goto L_089BFB98;
    case 633u: goto L_089BFBB4;
    case 634u: goto L_089BFBC4;
    case 635u: goto L_089BFBDC;
    case 636u: goto L_089BFBF8;
    case 637u: goto L_089BFC08;
    case 638u: goto L_089BFC1C;
    case 639u: goto L_089BFC2C;
    case 640u: goto L_089BFC3C;
    case 641u: goto L_089BFC54;
    case 642u: goto L_089BFC70;
    case 643u: goto L_089BFC80;
    case 644u: goto L_089BFC94;
    case 645u: goto L_089BFCA0;
    case 646u: goto L_089BFCB0;
    case 647u: goto L_089BFCC8;
    case 648u: goto L_089BFCE4;
    case 649u: goto L_089BFCF4;
    case 650u: goto L_089BFD08;
    case 651u: goto L_089BFD14;
    case 652u: goto L_089BFD24;
    case 653u: goto L_089BFD3C;
    case 654u: goto L_089BFD58;
    case 655u: goto L_089BFD68;
    case 656u: goto L_089BFD7C;
    case 657u: goto L_089BFD88;
    case 658u: goto L_089BFD94;
    case 659u: goto L_089BFDA4;
    case 660u: goto L_089BFDBC;
    case 661u: goto L_089BFDD8;
    case 662u: goto L_089BFDE8;
    case 663u: goto L_089BFDFC;
    case 664u: goto L_089BFE08;
    case 665u: goto L_089BFE18;
    case 666u: goto L_089BFE30;
    case 667u: goto L_089BFE4C;
    case 668u: goto L_089BFE5C;
    case 669u: goto L_089BFE70;
    case 670u: goto L_089BFE7C;
    case 671u: goto L_089BFE8C;
    case 672u: goto L_089BFEA4;
    case 673u: goto L_089BFEC0;
    case 674u: goto L_089BFED0;
    case 675u: goto L_089BFEE4;
    case 676u: goto L_089BFEF0;
    case 677u: goto L_089BFF00;
    case 678u: goto L_089BFF18;
    case 679u: goto L_089BFF34;
    case 680u: goto L_089BFF44;
    case 681u: goto L_089BFF58;
    case 682u: goto L_089BFF64;
    case 683u: goto L_089BFF84;
    case 684u: goto L_089BFF94;
    case 685u: goto L_089BFFAC;
    case 686u: goto L_089BFFC8;
    case 687u: goto L_089BFFD8;
    case 688u: goto L_089BFFEC;
    case 689u: goto L_089BFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089BC000:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29900), ctx.gpr[7]);
    ctx.set_gpr(7, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29896), ctx.gpr[6]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29884), ctx.gpr[9]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29880), ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29876), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29872), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29868), ctx.gpr[8]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32178), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC03C;
L_089BC03C:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30076));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC05C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32177))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC260;
      }
      goto L_089BC068;
    }
L_089BC068:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29836), ctx.gpr[10]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29832), ctx.gpr[9]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29828), ctx.gpr[8]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29824), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29800), ctx.gpr[10]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29796), ctx.gpr[9]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29792), ctx.gpr[8]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29788), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29764), ctx.gpr[10]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29760), ctx.gpr[9]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29756), ctx.gpr[8]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29752), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29728), ctx.gpr[10]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29724), ctx.gpr[9]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29720), ctx.gpr[8]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29716), ctx.gpr[7]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29712), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29708), ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29704), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29700), ctx.gpr[2]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29692), ctx.gpr[10]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29688), ctx.gpr[9]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29684), ctx.gpr[8]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29680), ctx.gpr[7]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29676), ctx.gpr[6]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29672), ctx.gpr[5]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29668), ctx.gpr[3]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29664), ctx.gpr[2]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29656), ctx.gpr[10]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29652), ctx.gpr[9]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29648), ctx.gpr[8]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29644), ctx.gpr[7]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29640), ctx.gpr[6]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29636), ctx.gpr[5]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29632), ctx.gpr[3]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29628), ctx.gpr[2]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29620), ctx.gpr[10]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29616), ctx.gpr[9]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29612), ctx.gpr[8]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29608), ctx.gpr[7]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29604), ctx.gpr[5]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29584), ctx.gpr[10]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29580), ctx.gpr[9]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29576), ctx.gpr[8]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29572), ctx.gpr[7]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29568), ctx.gpr[5]);
    ctx.set_gpr(11, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29548), ctx.gpr[10]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29544), ctx.gpr[9]);
    ctx.set_gpr(9, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29540), ctx.gpr[8]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29536), ctx.gpr[7]);
    ctx.set_gpr(7, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29532), ctx.gpr[6]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-29528), ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29524), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29520), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32177), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC260;
L_089BC260:
    ctx.set_gpr(2, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29836));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC280:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32176))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC2C4;
      }
      goto L_089BC28C;
    }
L_089BC28C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29476), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26760)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29472), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29468), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32176), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC2C4;
L_089BC2C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29476));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC2D4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32175))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC328;
      }
      goto L_089BC2E0;
    }
L_089BC2E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29460), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29452), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29444), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29436), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29412), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29404), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29396), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32175), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC328;
L_089BC328:
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29460));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC340:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32174))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC394;
      }
      goto L_089BC34C;
    }
L_089BC34C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29380), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29372), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29364), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29356), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29332), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29324), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29316), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32174), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC394;
L_089BC394:
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29380));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC3AC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32173))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC490;
      }
      goto L_089BC3B8;
    }
L_089BC3B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29300), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29296), ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29272), ctx.gpr[3]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29268), ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29244), ctx.gpr[3]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29240), ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29216), ctx.gpr[3]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29212), ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29188), ctx.gpr[3]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29184), ctx.gpr[2]);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29180), ctx.gpr[6]);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29176), ctx.gpr[6]);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29172), ctx.gpr[6]);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29168), ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29132), ctx.gpr[3]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29128), ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29104), ctx.gpr[3]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29100), ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29076), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29072), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32173), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC490;
L_089BC490:
    ctx.set_gpr(2, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29300));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC4B0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32172))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC564;
      }
      goto L_089BC4BC;
    }
L_089BC4BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29000), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28996), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28992), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28988), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28980), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28976), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28972), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28968), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28900), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28896), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28892), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28888), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28880), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28876), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28872), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28868), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32172), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC564;
L_089BC564:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29020));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC584:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28820));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC594:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28816));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC5A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28812));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC5B4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32171))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC5D8;
      }
      goto L_089BC5C0;
    }
L_089BC5C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28808), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32171), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC5D8;
L_089BC5D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28808));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC5E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28800));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC5F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28796));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC608:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28792));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC618:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32170))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC63C;
      }
      goto L_089BC624;
    }
L_089BC624:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28788), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32170), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BC63C;
L_089BC63C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28788));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC64C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BC674;
      }
      goto L_089BC670;
    }
L_089BC670:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_089BC674;
L_089BC674:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC688;
    }
L_089BC688:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-30564));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC6A4:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 689u, 0x089BBB3Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC6B0u) goto L_089BC6B0;
    return;
L_089BC6B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC6BC;
    }
L_089BC6BC:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 692u, 0x089BBC80u>(ctx, &aot_mem) && ctx.pc == 0x089BC6C8u) goto L_089BC6C8;
    return;
L_089BC6C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC6D4;
    }
L_089BC6D4:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 695u, 0x089BBD9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC6E0u) goto L_089BC6E0;
    return;
L_089BC6E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC6EC;
    }
L_089BC6EC:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 698u, 0x089BBEE0u>(ctx, &aot_mem) && ctx.pc == 0x089BC6F8u) goto L_089BC6F8;
    return;
L_089BC6F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC704;
    }
L_089BC704:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC710u);
    // nop
    goto L_089BC05C;
L_089BC710:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC71C;
    }
L_089BC71C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC728u);
    // nop
    goto L_089BC280;
L_089BC728:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC734;
    }
L_089BC734:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC740u);
    // nop
    goto L_089BC2D4;
L_089BC740:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC74C;
    }
L_089BC74C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC758u);
    // nop
    goto L_089BC340;
L_089BC758:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC764;
    }
L_089BC764:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC770u);
    // nop
    goto L_089BC3AC;
L_089BC770:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC77C;
    }
L_089BC77C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC788u);
    // nop
    goto L_089BC4B0;
L_089BC788:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC794;
    }
L_089BC794:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC7A0u);
    // nop
    goto L_089BC584;
L_089BC7A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC7AC;
    }
L_089BC7AC:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC7B8u);
    // nop
    goto L_089BC594;
L_089BC7B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC7C4;
    }
L_089BC7C4:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC7D0u);
    // nop
    goto L_089BC618;
L_089BC7D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC7DC;
    }
L_089BC7DC:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC7E8u);
    // nop
    goto L_089BC5B4;
L_089BC7E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC7F4;
    }
L_089BC7F4:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC800u);
    // nop
    goto L_089BC5E8;
L_089BC800:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC80C;
    }
L_089BC80C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC818u);
    // nop
    goto L_089BC5F8;
L_089BC818:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC824;
    }
L_089BC824:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC830u);
    // nop
    goto L_089BC5A4;
L_089BC830:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC83C;
    }
L_089BC83C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BC848u);
    // nop
    goto L_089BC608;
L_089BC848:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC880;
      }
      goto L_089BC854;
    }
L_089BC854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BC868u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BC868u) goto L_089BC868;
    return;
L_089BC868:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BC87C;
      }
      goto L_089BC870;
    }
L_089BC870:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC890;
      }
      goto L_089BC87C;
    }
L_089BC87C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089BC880;
L_089BC880:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC854;
      }
      goto L_089BC88C;
    }
L_089BC88C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089BC890;
L_089BC890:
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
L_089BC8AC:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[10] & ctx.gpr[11]);
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(5, (ctx.gpr[3] >> 16u) & 0x000000FFu);
    ctx.set_gpr(3, (ctx.gpr[6] >> 16u) & 0x000000FFu);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC8E0;
      }
      goto L_089BC8D8;
    }
L_089BC8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC8E4;
      }
      goto L_089BC8E0;
    }
L_089BC8E0:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_089BC8E4;
L_089BC8E4:
    ctx.set_gpr(8, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[11] & 240u);
    ctx.set_gpr(3, ctx.gpr[10] & 240u);
    ctx.set_gpr(5, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    ctx.set_gpr(3, (ctx.gpr[6] >> 4u) & 0x000000FFu);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC90C;
      }
      goto L_089BC904;
    }
L_089BC904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC910;
      }
      goto L_089BC90C;
    }
L_089BC90C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_089BC910;
L_089BC910:
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[11] & 3840u);
    ctx.set_gpr(3, ctx.gpr[10] & 3840u);
    ctx.set_gpr(5, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(3, (ctx.gpr[6] >> 8u) & 0x000000FFu);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC938;
      }
      goto L_089BC930;
    }
L_089BC930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC93C;
      }
      goto L_089BC938;
    }
L_089BC938:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_089BC93C;
L_089BC93C:
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, 65520u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(5, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[8] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-241));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3841));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] << 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089BC9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 425u, 0x08945E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC9A0u) goto L_089BC9A0;
    return;
L_089BC9A0:
    ctx.set_gpr(31, 0x089BC9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089BC9A8u) goto L_089BC9A8;
    return;
L_089BC9A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BC9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BC9B4u) goto L_089BC9B4;
    return;
L_089BC9B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BC9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 468u, 0x088E66A8u>(ctx, &aot_mem) && ctx.pc == 0x089BC9C0u) goto L_089BC9C0;
    return;
L_089BC9C0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BC9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089BC9D0u) goto L_089BC9D0;
    return;
L_089BC9D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BC9E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BC9E4u) goto L_089BC9E4;
    return;
L_089BC9E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BC9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC9F0u) goto L_089BC9F0;
    return;
L_089BC9F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BC9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 562u, 0x089971FCu>(ctx, &aot_mem) && ctx.pc == 0x089BC9FCu) goto L_089BC9FC;
    return;
L_089BC9FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(336));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BCA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCA0Cu) goto L_089BCA0C;
    return;
L_089BCA0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BCA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCA18u) goto L_089BCA18;
    return;
L_089BCA18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BCA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 611u, 0x08997668u>(ctx, &aot_mem) && ctx.pc == 0x089BCA24u) goto L_089BCA24;
    return;
L_089BCA24:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BCA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCA34u) goto L_089BCA34;
    return;
L_089BCA34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCA48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089BCA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x089BCA68u) goto L_089BCA68;
    return;
L_089BCA68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BCAA0;
      }
      goto L_089BCA78;
    }
L_089BCA78:
    ctx.set_gpr(31, 0x089BCA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089BCA80u) goto L_089BCA80;
    return;
L_089BCA80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BCA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BCA8Cu) goto L_089BCA8C;
    return;
L_089BCA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BCA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 140u, 0x0898CBBCu>(ctx, &aot_mem) && ctx.pc == 0x089BCA98u) goto L_089BCA98;
    return;
L_089BCA98:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28780), ctx.gpr[2]);
    goto L_089BCAA0;
L_089BCAA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCAE0;
      }
      goto L_089BCACC;
    }
L_089BCACC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCAF4;
      }
      goto L_089BCAE0;
    }
L_089BCAE0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089BCAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCAF4u) goto L_089BCAF4;
    return;
L_089BCAF4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(31, 0x089BCB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BCB0Cu) goto L_089BCB0C;
    return;
L_089BCB0C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(81)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13844));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089BCB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089BCB44u) goto L_089BCB44;
    return;
L_089BCB44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13828));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089BCB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089BCB68u) goto L_089BCB68;
    return;
L_089BCB68:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_089BCB94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BCBD0;
      }
      goto L_089BCBC8;
    }
L_089BCBC8:
    ctx.set_gpr(31, 0x089BCBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089BCBD0u) goto L_089BCBD0;
    return;
L_089BCBD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BCBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x089BCBF0u) goto L_089BCBF0;
    return;
L_089BCBF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BCC08;
      }
      goto L_089BCBF8;
    }
L_089BCBF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BCC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089BCC08u) goto L_089BCC08;
    return;
L_089BCC08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BCC48;
      }
      goto L_089BCC1C;
    }
L_089BCC1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BCC40;
      }
      goto L_089BCC38;
    }
L_089BCC38:
    ctx.set_gpr(31, 0x089BCC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089BCC40u) goto L_089BCC40;
    return;
L_089BCC40:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780), 0u);
    goto L_089BCC48;
L_089BCC48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BCC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x089BCC54u) goto L_089BCC54;
    return;
L_089BCC54:
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
L_089BCC6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCC74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCC90;
      }
      goto L_089BCC88;
    }
L_089BCC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCCA4;
      }
      goto L_089BCC90;
    }
L_089BCC90:
    ctx.set_gpr(31, 0x089BCC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 231u, 0x0893CECCu>(ctx, &aot_mem) && ctx.pc == 0x089BCC98u) goto L_089BCC98;
    return;
L_089BCC98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BCCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BCCA4u) goto L_089BCCA4;
    return;
L_089BCCA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCCB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCCD0;
      }
      goto L_089BCCC8;
    }
L_089BCCC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCCE4;
      }
      goto L_089BCCD0;
    }
L_089BCCD0:
    ctx.set_gpr(31, 0x089BCCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCCD8u) goto L_089BCCD8;
    return;
L_089BCCD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BCCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BCCE4u) goto L_089BCCE4;
    return;
L_089BCCE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCCF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCD10;
      }
      goto L_089BCD08;
    }
L_089BCD08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCD24;
      }
      goto L_089BCD10;
    }
L_089BCD10:
    ctx.set_gpr(31, 0x089BCD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089BCD18u) goto L_089BCD18;
    return;
L_089BCD18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BCD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BCD24u) goto L_089BCD24;
    return;
L_089BCD24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCD34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCD50;
      }
      goto L_089BCD48;
    }
L_089BCD48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCD64;
      }
      goto L_089BCD50;
    }
L_089BCD50:
    ctx.set_gpr(31, 0x089BCD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCD58u) goto L_089BCD58;
    return;
L_089BCD58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BCD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BCD64u) goto L_089BCD64;
    return;
L_089BCD64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCD90;
      }
      goto L_089BCD88;
    }
L_089BCD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCDA4;
      }
      goto L_089BCD90;
    }
L_089BCD90:
    ctx.set_gpr(31, 0x089BCD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCD98u) goto L_089BCD98;
    return;
L_089BCD98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BCDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BCDA4u) goto L_089BCDA4;
    return;
L_089BCDA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCDB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCDD0;
      }
      goto L_089BCDC8;
    }
L_089BCDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCDE4;
      }
      goto L_089BCDD0;
    }
L_089BCDD0:
    ctx.set_gpr(31, 0x089BCDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 229u, 0x0893CEACu>(ctx, &aot_mem) && ctx.pc == 0x089BCDD8u) goto L_089BCDD8;
    return;
L_089BCDD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BCDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BCDE4u) goto L_089BCDE4;
    return;
L_089BCDE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089BCE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCE04u) goto L_089BCE04;
    return;
L_089BCE04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCE14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCEB4;
      }
      goto L_089BCE54;
    }
L_089BCE54:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCE84;
      }
      goto L_089BCE60;
    }
L_089BCE60:
    ctx.set_gpr(31, 0x089BCE68u);
    // nop
    goto L_089BCC74;
L_089BCE68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BCE80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BCE80u) goto L_089BCE80;
    return;
L_089BCE80:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), 0u);
    goto L_089BCE84;
L_089BCE84:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089BCE90u);
    // nop
    goto L_089BCC74;
L_089BCE90:
    ctx.set_gpr(5, ctx.gpr[17] << 6u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BCEACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BCEACu) goto L_089BCEAC;
    return;
L_089BCEAC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    goto L_089BCEB4;
L_089BCEB4:
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
L_089BCED0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BCEDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCF4C;
      }
      goto L_089BCF04;
    }
L_089BCF04:
    ctx.set_gpr(3, ctx.gpr[16] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089BCF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x089BCF1Cu) goto L_089BCF1C;
    return;
L_089BCF1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089BCF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCF38u) goto L_089BCF38;
    return;
L_089BCF38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089BCF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 725u, 0x089FF93Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCF44u) goto L_089BCF44;
    return;
L_089BCF44:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BCF4C;
L_089BCF4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BCF04;
      }
      goto L_089BCF5C;
    }
L_089BCF5C:
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
L_089BCF78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(14));
    ctx.set_fpr_bits(22, ctx.fpr_bits(15));
    ctx.set_fpr_bits(21, ctx.fpr_bits(16));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BD010;
      }
      goto L_089BCFD4;
    }
L_089BCFD4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32488)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(26, 0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x089BCFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 431u, 0x0880E21Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCFF0u) goto L_089BCFF0;
    return;
L_089BCFF0:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x089BCFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 321u, 0x0880DA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCFFCu) goto L_089BCFFC;
    return;
L_089BCFFC:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD044;
      }
      goto L_089BD010;
    }
L_089BD010:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32488)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x089BD02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 431u, 0x0880E21Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD02Cu) goto L_089BD02C;
    return;
L_089BD02C:
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[20];
    ctx.set_gpr(31, 0x089BD038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 321u, 0x0880DA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD038u) goto L_089BD038;
    return;
L_089BD038:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(26, 0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_089BD044;
L_089BD044:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x089BD05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem) && ctx.pc == 0x089BD05Cu) goto L_089BD05C;
    return;
L_089BD05C:
    ctx.set_fpr_bits(25, ctx.fpr_bits(0));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x089BD06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 414u, 0x0880E13Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD06Cu) goto L_089BD06C;
    return;
L_089BD06C:
    ctx.set_fpr_bits(24, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(26, 0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(31, 0x089BD088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem) && ctx.pc == 0x089BD088u) goto L_089BD088;
    return;
L_089BD088:
    ctx.set_fpr_bits(23, ctx.fpr_bits(0));
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(31, 0x089BD098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 414u, 0x0880E13Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD098u) goto L_089BD098;
    return;
L_089BD098:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(1, ctx.fpr_bits(25) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_fpr_bits(1, ctx.fpr_bits(23) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(22) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD168;
      }
      goto L_089BD148;
    }
L_089BD148:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089BD160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 250u, 0x08A03084u>(ctx, &aot_mem) && ctx.pc == 0x089BD160u) goto L_089BD160;
    return;
L_089BD160:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BD168;
L_089BD168:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD148;
      }
      goto L_089BD174;
    }
L_089BD174:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089BD184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 255u, 0x089F9100u>(ctx, &aot_mem) && ctx.pc == 0x089BD184u) goto L_089BD184;
    return;
L_089BD184:
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BD234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089BD250u);
    // nop
    goto L_089BCF78;
L_089BD250:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BD260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD7C8;
      }
      goto L_089BD29C;
    }
L_089BD29C:
    ctx.set_gpr(31, 0x089BD2A4u);
    // nop
    goto L_089BCCB4;
L_089BD2A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BD2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem) && ctx.pc == 0x089BD2B0u) goto L_089BD2B0;
    return;
L_089BD2B0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD2C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD2C8u) goto L_089BD2C8;
    return;
L_089BD2C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-241));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3841));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD308u) goto L_089BD308;
    return;
L_089BD308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD368;
      }
      goto L_089BD318;
    }
L_089BD318:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD35C;
      }
      goto L_089BD324;
    }
L_089BD324:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD33Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD33Cu) goto L_089BD33C;
    return;
L_089BD33C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD358u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD358u) goto L_089BD358;
    return;
L_089BD358:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BD35C;
L_089BD35C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD324;
      }
      goto L_089BD368;
    }
L_089BD368:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD3D0;
      }
      goto L_089BD374;
    }
L_089BD374:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD3C0;
      }
      goto L_089BD380;
    }
L_089BD380:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD39Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD39Cu) goto L_089BD39C;
    return;
L_089BD39C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD3BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD3BCu) goto L_089BD3BC;
    return;
L_089BD3BC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BD3C0;
L_089BD3C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD380;
      }
      goto L_089BD3CC;
    }
L_089BD3CC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089BD3D0;
L_089BD3D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD374;
      }
      goto L_089BD3EC;
    }
L_089BD3EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD400u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD400u) goto L_089BD400;
    return;
L_089BD400:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(23, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD564;
      }
      goto L_089BD418;
    }
L_089BD418:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD430u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD430u) goto L_089BD430;
    return;
L_089BD430:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD538;
      }
      goto L_089BD458;
    }
L_089BD458:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD474u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD474u) goto L_089BD474;
    return;
L_089BD474:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BD534;
      }
      goto L_089BD48C;
    }
L_089BD48C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD4A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD4A8u) goto L_089BD4A8;
    return;
L_089BD4A8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089BD4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089BD4C8u) goto L_089BD4C8;
    return;
L_089BD4C8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BD534;
L_089BD534:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BD538;
L_089BD538:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD458;
      }
      goto L_089BD544;
    }
L_089BD544:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD560u) goto L_089BD560;
    return;
L_089BD560:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089BD564;
L_089BD564:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD418;
      }
      goto L_089BD570;
    }
L_089BD570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD7BC;
      }
      goto L_089BD580;
    }
L_089BD580:
    ctx.set_gpr(31, 0x089BD588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD588u) goto L_089BD588;
    return;
L_089BD588:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BD594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089BD594u) goto L_089BD594;
    return;
L_089BD594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[3] << 6u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD5B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD5B0u) goto L_089BD5B0;
    return;
L_089BD5B0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD5EC;
      }
      goto L_089BD5C0;
    }
L_089BD5C0:
    ctx.set_gpr(3, ctx.gpr[17] << 6u);
    ctx.set_gpr(18, ctx.gpr[22] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089BD5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x089BD5DCu) goto L_089BD5DC;
    return;
L_089BD5DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089BD5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 725u, 0x089FF93Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD5E8u) goto L_089BD5E8;
    return;
L_089BD5E8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BD5EC;
L_089BD5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD5C0;
      }
      goto L_089BD5FC;
    }
L_089BD5FC:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD7A4;
      }
      goto L_089BD608;
    }
L_089BD608:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD620u) goto L_089BD620;
    return;
L_089BD620:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD724;
      }
      goto L_089BD648;
    }
L_089BD648:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD664u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD664u) goto L_089BD664;
    return;
L_089BD664:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BD720;
      }
      goto L_089BD67C;
    }
L_089BD67C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD698u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD698u) goto L_089BD698;
    return;
L_089BD698:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(6, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089BD6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x089BD6B4u) goto L_089BD6B4;
    return;
L_089BD6B4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BD720;
L_089BD720:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BD724;
L_089BD724:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD648;
      }
      goto L_089BD730;
    }
L_089BD730:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD7A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD7A0u) goto L_089BD7A0;
    return;
L_089BD7A0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089BD7A4;
L_089BD7A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD608;
      }
      goto L_089BD7B0;
    }
L_089BD7B0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089BD7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089BD7BCu) goto L_089BD7BC;
    return;
L_089BD7BC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD7CC;
      }
      goto L_089BD7C8;
    }
L_089BD7C8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089BD7CC;
L_089BD7CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BD800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BD82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BD82Cu) goto L_089BD82C;
    return;
L_089BD82C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD894;
      }
      goto L_089BD83C;
    }
L_089BD83C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD854u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD854u) goto L_089BD854;
    return;
L_089BD854:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(444)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD86Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD86Cu) goto L_089BD86C;
    return;
L_089BD86C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD894u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD894u) goto L_089BD894;
    return;
L_089BD894:
    ctx.set_gpr(3, ctx.gpr[17] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD9C4;
      }
      goto L_089BD8A0;
    }
L_089BD8A0:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD8CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD8CCu) goto L_089BD8CC;
    return;
L_089BD8CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD8E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD8E4u) goto L_089BD8E4;
    return;
L_089BD8E4:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(400)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD910u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD910u) goto L_089BD910;
    return;
L_089BD910:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(408)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD93Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD93Cu) goto L_089BD93C;
    return;
L_089BD93C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(416)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD968u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD968u) goto L_089BD968;
    return;
L_089BD968:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(424)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD994u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD994u) goto L_089BD994;
    return;
L_089BD994:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(432)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD9ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD9ACu) goto L_089BD9AC;
    return;
L_089BD9AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(392)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD9C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD9C4u) goto L_089BD9C4;
    return;
L_089BD9C4:
    ctx.set_gpr(3, ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDAA8;
      }
      goto L_089BD9D0;
    }
L_089BD9D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BD9E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BD9E8u) goto L_089BD9E8;
    return;
L_089BD9E8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 513 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD9FC;
      }
      goto L_089BD9F8;
    }
L_089BD9F8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_089BD9FC;
L_089BD9FC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BDA0C;
      }
      goto L_089BDA08;
    }
L_089BDA08:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(16));
    goto L_089BDA0C;
L_089BDA0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_089BDA18;
      }
      goto L_089BDA14;
    }
L_089BDA14:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_089BDA18;
L_089BDA18:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDA9C;
      }
      goto L_089BDA24;
    }
L_089BDA24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDA40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDA40u) goto L_089BDA40;
    return;
L_089BDA40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(608)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDA5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDA5Cu) goto L_089BDA5C;
    return;
L_089BDA5C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(616)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDA7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDA7Cu) goto L_089BDA7C;
    return;
L_089BDA7C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(856)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDA98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDA98u) goto L_089BDA98;
    return;
L_089BDA98:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089BDA9C;
L_089BDA9C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BDA24;
      }
      goto L_089BDAA8;
    }
L_089BDAA8:
    ctx.set_gpr(3, ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDAE8;
      }
      goto L_089BDAB4;
    }
L_089BDAB4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(624)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDACCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDACCu) goto L_089BDACC;
    return;
L_089BDACC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(648)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDAE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDAE8u) goto L_089BDAE8;
    return;
L_089BDAE8:
    ctx.set_gpr(3, ctx.gpr[17] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDB8C;
      }
      goto L_089BDAF4;
    }
L_089BDAF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(652)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDB0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDB0Cu) goto L_089BDB0C;
    return;
L_089BDB0C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(660)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDB24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDB24u) goto L_089BDB24;
    return;
L_089BDB24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(668)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDB3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDB3Cu) goto L_089BDB3C;
    return;
L_089BDB3C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(684)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDB54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDB54u) goto L_089BDB54;
    return;
L_089BDB54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(692)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDB6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDB6Cu) goto L_089BDB6C;
    return;
L_089BDB6C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(676)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDB8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDB8Cu) goto L_089BDB8C;
    return;
L_089BDB8C:
    ctx.set_gpr(3, ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDC44;
      }
      goto L_089BDB98;
    }
L_089BDB98:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(972)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDBB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDBB0u) goto L_089BDBB0;
    return;
L_089BDBB0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(980)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDBC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDBC8u) goto L_089BDBC8;
    return;
L_089BDBC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(988)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDBE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDBE0u) goto L_089BDBE0;
    return;
L_089BDBE0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(996)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDC0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDC0Cu) goto L_089BDC0C;
    return;
L_089BDC0C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1004)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDC28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDC28u) goto L_089BDC28;
    return;
L_089BDC28:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1012)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDC44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDC44u) goto L_089BDC44;
    return;
L_089BDC44:
    ctx.set_gpr(3, ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDD60;
      }
      goto L_089BDC50;
    }
L_089BDC50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13804));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x089BDC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089BDC74u) goto L_089BDC74;
    return;
L_089BDC74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDC94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDC94u) goto L_089BDC94;
    return;
L_089BDC94:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDCC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDCC0u) goto L_089BDCC0;
    return;
L_089BDCC0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(748)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDCDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDCDCu) goto L_089BDCDC;
    return;
L_089BDCDC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(756)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDCF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDCF4u) goto L_089BDCF4;
    return;
L_089BDCF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(864)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDD0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDD0Cu) goto L_089BDD0C;
    return;
L_089BDD0C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(900)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDD24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDD24u) goto L_089BDD24;
    return;
L_089BDD24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(908)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDD48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDD48u) goto L_089BDD48;
    return;
L_089BDD48:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(916)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDD60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDD60u) goto L_089BDD60;
    return;
L_089BDD60:
    ctx.set_gpr(3, ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDF34;
      }
      goto L_089BDD6C;
    }
L_089BDD6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13792));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(191));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089BDD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089BDD90u) goto L_089BDD90;
    return;
L_089BDD90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13780));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089BDDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089BDDB4u) goto L_089BDDB4;
    return;
L_089BDDB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13768));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089BDDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089BDDD8u) goto L_089BDDD8;
    return;
L_089BDDD8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(876)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDDF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDDF0u) goto L_089BDDF0;
    return;
L_089BDDF0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(884)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDE08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDE08u) goto L_089BDE08;
    return;
L_089BDE08:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(892)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDE20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDE20u) goto L_089BDE20;
    return;
L_089BDE20:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(191)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(924)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDE38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDE38u) goto L_089BDE38;
    return;
L_089BDE38:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(932)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDE50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDE50u) goto L_089BDE50;
    return;
L_089BDE50:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDE68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDE68u) goto L_089BDE68;
    return;
L_089BDE68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(948)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDE80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDE80u) goto L_089BDE80;
    return;
L_089BDE80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(956)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDE98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDE98u) goto L_089BDE98;
    return;
L_089BDE98:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(964)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDEB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDEB0u) goto L_089BDEB0;
    return;
L_089BDEB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDEC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDEC8u) goto L_089BDEC8;
    return;
L_089BDEC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(784)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDEE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDEE0u) goto L_089BDEE0;
    return;
L_089BDEE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDEFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDEFCu) goto L_089BDEFC;
    return;
L_089BDEFC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDF28;
      }
      goto L_089BDF08;
    }
L_089BDF08:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BDF24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BDF24u) goto L_089BDF24;
    return;
L_089BDF24:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BDF28;
L_089BDF28:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BDF08;
      }
      goto L_089BDF34;
    }
L_089BDF34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF58:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDF9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDFFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE004:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE00C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28776)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28776), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28772)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28772), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28768)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28768), ctx.gpr[8]);
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13756)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BE088;
      }
      goto L_089BE080;
    }
L_089BE080:
    ctx.set_gpr(3, 2229u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-13756), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BE088;
L_089BE088:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28656)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BE0A8;
      }
      goto L_089BE0A0;
    }
L_089BE0A0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BE0A8;
L_089BE0A8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28776)));
    ctx.set_gpr(3, 16320u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BE1C0;
      }
      goto L_089BE0C8;
    }
L_089BE0C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28768)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28764), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28772)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[2];
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28760), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28656)));
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(31, 0x089BE11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089BE11Cu) goto L_089BE11C;
    return;
L_089BE11C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13756)));
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(31, 0x089BE140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089BE140u) goto L_089BE140;
    return;
L_089BE140:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28764)));
    ctx.set_gpr(31, 0x089BE158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x089BE158u) goto L_089BE158;
    return;
L_089BE158:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28756));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13752));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089BE188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089BE188u) goto L_089BE188;
    return;
L_089BE188:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28776), 0u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28772), 0u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28768), 0u);
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 16960u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2229u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-13756), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28656), 0u);
    goto L_089BE1C0;
L_089BE1C0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(81)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE204;
      }
      goto L_089BE1CC;
    }
L_089BE1CC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28768)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE228;
      }
      goto L_089BE1DC;
    }
L_089BE1DC:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13724));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28756));
    ctx.set_gpr(31, 0x089BE1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089BE1F4u) goto L_089BE1F4;
    return;
L_089BE1F4:
    ctx.set_gpr(31, 0x089BE1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089BE1FCu) goto L_089BE1FC;
    return;
L_089BE1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE228;
      }
      goto L_089BE204;
    }
L_089BE204:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 2246u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28756));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1056)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE228u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE228u) goto L_089BE228;
    return;
L_089BE228:
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
L_089BE24C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE254:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE25C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089BE26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 446u, 0x08906010u>(ctx, &aot_mem) && ctx.pc == 0x089BE26Cu) goto L_089BE26C;
    return;
L_089BE26C:
    ctx.set_gpr(31, 0x089BE274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 425u, 0x089FA1D0u>(ctx, &aot_mem) && ctx.pc == 0x089BE274u) goto L_089BE274;
    return;
L_089BE274:
    ctx.set_gpr(31, 0x089BE27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 552u, 0x0898AC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE27Cu) goto L_089BE27C;
    return;
L_089BE27C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE28C:
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
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE2C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE2C8u) goto L_089BE2C8;
    return;
L_089BE2C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE2EC;
      }
      goto L_089BE2D4;
    }
L_089BE2D4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE2ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE2ECu) goto L_089BE2EC;
    return;
L_089BE2EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE30Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE30Cu) goto L_089BE30C;
    return;
L_089BE30C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE32C;
      }
      goto L_089BE314;
    }
L_089BE314:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE32Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE32Cu) goto L_089BE32C;
    return;
L_089BE32C:
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
L_089BE350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE3E4;
      }
      goto L_089BE378;
    }
L_089BE378:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE3CC;
      }
      goto L_089BE384;
    }
L_089BE384:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    ctx.set_gpr(31, 0x089BE3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE3A4u) goto L_089BE3A4;
    return;
L_089BE3A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE3C8;
      }
      goto L_089BE3AC;
    }
L_089BE3AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE3E4;
      }
      goto L_089BE3C8;
    }
L_089BE3C8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BE3CC;
L_089BE3CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28780)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE384;
      }
      goto L_089BE3E4;
    }
L_089BE3E4:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089BE404:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089BE42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BE42Cu) goto L_089BE42C;
    return;
L_089BE42C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x089BE438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BE438u) goto L_089BE438;
    return;
L_089BE438:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089BE448u);
    // nop
    goto L_089BCCF4;
L_089BE448:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BE454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 398u, 0x088FA2C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE454u) goto L_089BE454;
    return;
L_089BE454:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13700));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(47));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089BE480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089BE480u) goto L_089BE480;
    return;
L_089BE480:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE4A8;
      }
      goto L_089BE48C;
    }
L_089BE48C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE4A0;
      }
      goto L_089BE498;
    }
L_089BE498:
    ctx.set_gpr(31, 0x089BE4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BE4A0u) goto L_089BE4A0;
    return;
L_089BE4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE568;
      }
      goto L_089BE4A8;
    }
L_089BE4A8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE4D4;
      }
      goto L_089BE4C0;
    }
L_089BE4C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE4E8;
      }
      goto L_089BE4D4;
    }
L_089BE4D4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089BE4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE4E8u) goto L_089BE4E8;
    return;
L_089BE4E8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089BE508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 776u, 0x089131BCu>(ctx, &aot_mem) && ctx.pc == 0x089BE508u) goto L_089BE508;
    return;
L_089BE508:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32616));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089BE51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 806u, 0x08913350u>(ctx, &aot_mem) && ctx.pc == 0x089BE51Cu) goto L_089BE51C;
    return;
L_089BE51C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE53C;
      }
      goto L_089BE524;
    }
L_089BE524:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089BE53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 946u, 0x08913B50u>(ctx, &aot_mem) && ctx.pc == 0x089BE53Cu) goto L_089BE53C;
    return;
L_089BE53C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089BE554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 968u, 0x08913CD8u>(ctx, &aot_mem) && ctx.pc == 0x089BE554u) goto L_089BE554;
    return;
L_089BE554:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE568;
      }
      goto L_089BE560;
    }
L_089BE560:
    ctx.set_gpr(31, 0x089BE568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BE568u) goto L_089BE568;
    return;
L_089BE568:
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
L_089BE58C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE594:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE5A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE5A8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE5B4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE5C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089BE5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE5F0u) goto L_089BE5F0;
    return;
L_089BE5F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE688;
      }
      goto L_089BE5F8;
    }
L_089BE5F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089BE608u);
    // nop
    goto L_089BE6A4;
L_089BE608:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE620;
      }
      goto L_089BE618;
    }
L_089BE618:
    ctx.set_gpr(31, 0x089BE620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BE620u) goto L_089BE620;
    return;
L_089BE620:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE64C;
      }
      goto L_089BE628;
    }
L_089BE628:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE64Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE64Cu) goto L_089BE64C;
    return;
L_089BE64C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089BE65Cu);
    // nop
    goto L_089BE6A4;
L_089BE65C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE674u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE674u) goto L_089BE674;
    return;
L_089BE674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE688;
      }
      goto L_089BE680;
    }
L_089BE680:
    ctx.set_gpr(31, 0x089BE688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BE688u) goto L_089BE688;
    return;
L_089BE688:
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
L_089BE6A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6C0;
      }
      goto L_089BE6B4;
    }
L_089BE6B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089BE6C0;
L_089BE6C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE6C8:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE6DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089BE6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE6F8u) goto L_089BE6F8;
    return;
L_089BE6F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089BE730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE730u) goto L_089BE730;
    return;
L_089BE730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE778;
      }
      goto L_089BE764;
    }
L_089BE764:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089BE774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x089BE774u) goto L_089BE774;
    return;
L_089BE774:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
    goto L_089BE778;
L_089BE778:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x089BE788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE788u) goto L_089BE788;
    return;
L_089BE788:
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
L_089BE7A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x089BE7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BE7C0u) goto L_089BE7C0;
    return;
L_089BE7C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13676));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089BE7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089BE7E4u) goto L_089BE7E4;
    return;
L_089BE7E4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC70;
      }
      goto L_089BE7F0;
    }
L_089BE7F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5000));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089BE800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BE800u) goto L_089BE800;
    return;
L_089BE800:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13652));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089BE824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089BE824u) goto L_089BE824;
    return;
L_089BE824:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1000));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089BE834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BE834u) goto L_089BE834;
    return;
L_089BE834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13620));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089BE858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089BE858u) goto L_089BE858;
    return;
L_089BE858:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089BE868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089BE868u) goto L_089BE868;
    return;
L_089BE868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13592));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089BE88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089BE88Cu) goto L_089BE88C;
    return;
L_089BE88C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BE898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE898u) goto L_089BE898;
    return;
L_089BE898:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BE8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 473u, 0x0898E9F8u>(ctx, &aot_mem) && ctx.pc == 0x089BE8A4u) goto L_089BE8A4;
    return;
L_089BE8A4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BE8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE8B4u) goto L_089BE8B4;
    return;
L_089BE8B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BE8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE8C0u) goto L_089BE8C0;
    return;
L_089BE8C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BE8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 749u, 0x088E3A00u>(ctx, &aot_mem) && ctx.pc == 0x089BE8CCu) goto L_089BE8CC;
    return;
L_089BE8CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BE8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE8E4u) goto L_089BE8E4;
    return;
L_089BE8E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089BE8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 828u, 0x089078F8u>(ctx, &aot_mem) && ctx.pc == 0x089BE8FCu) goto L_089BE8FC;
    return;
L_089BE8FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089BE90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 833u, 0x08907968u>(ctx, &aot_mem) && ctx.pc == 0x089BE90Cu) goto L_089BE90C;
    return;
L_089BE90C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BE92Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BE92Cu) goto L_089BE92C;
    return;
L_089BE92C:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16360));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE948;
      }
      goto L_089BE93C;
    }
L_089BE93C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE998;
      }
      goto L_089BE948;
    }
L_089BE948:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE980;
      }
      goto L_089BE958;
    }
L_089BE958:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089BE964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089BE964u) goto L_089BE964;
    return;
L_089BE964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE978;
      }
      goto L_089BE96C;
    }
L_089BE96C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BE978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089BE978u) goto L_089BE978;
    return;
L_089BE978:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089BE980;
L_089BE980:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16360));
    ctx.set_gpr(31, 0x089BE998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089BE998u) goto L_089BE998;
    return;
L_089BE998:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BE9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE9A8u) goto L_089BE9A8;
    return;
L_089BE9A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BE9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 517u, 0x0898EDD8u>(ctx, &aot_mem) && ctx.pc == 0x089BE9B4u) goto L_089BE9B4;
    return;
L_089BE9B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089BE9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 848u, 0x08907AB0u>(ctx, &aot_mem) && ctx.pc == 0x089BE9CCu) goto L_089BE9CC;
    return;
L_089BE9CC:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16364));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE9E8;
      }
      goto L_089BE9DC;
    }
L_089BE9DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEA38;
      }
      goto L_089BE9E8;
    }
L_089BE9E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEA20;
      }
      goto L_089BE9F8;
    }
L_089BE9F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089BEA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089BEA04u) goto L_089BEA04;
    return;
L_089BEA04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEA18;
      }
      goto L_089BEA0C;
    }
L_089BEA0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BEA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089BEA18u) goto L_089BEA18;
    return;
L_089BEA18:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089BEA20;
L_089BEA20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16364));
    ctx.set_gpr(31, 0x089BEA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089BEA38u) goto L_089BEA38;
    return;
L_089BEA38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BEA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BEA48u) goto L_089BEA48;
    return;
L_089BEA48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BEA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 536u, 0x0898EF94u>(ctx, &aot_mem) && ctx.pc == 0x089BEA54u) goto L_089BEA54;
    return;
L_089BEA54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089BEA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 848u, 0x08907AB0u>(ctx, &aot_mem) && ctx.pc == 0x089BEA6Cu) goto L_089BEA6C;
    return;
L_089BEA6C:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13564));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEA88;
      }
      goto L_089BEA7C;
    }
L_089BEA7C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEAD8;
      }
      goto L_089BEA88;
    }
L_089BEA88:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEAC0;
      }
      goto L_089BEA98;
    }
L_089BEA98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089BEAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089BEAA4u) goto L_089BEAA4;
    return;
L_089BEAA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEAB8;
      }
      goto L_089BEAAC;
    }
L_089BEAAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BEAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089BEAB8u) goto L_089BEAB8;
    return;
L_089BEAB8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089BEAC0;
L_089BEAC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13564));
    ctx.set_gpr(31, 0x089BEAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089BEAD8u) goto L_089BEAD8;
    return;
L_089BEAD8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BEAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089BEAE8u) goto L_089BEAE8;
    return;
L_089BEAE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BEAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 502u, 0x0898EC8Cu>(ctx, &aot_mem) && ctx.pc == 0x089BEAF4u) goto L_089BEAF4;
    return;
L_089BEAF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089BEB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 848u, 0x08907AB0u>(ctx, &aot_mem) && ctx.pc == 0x089BEB0Cu) goto L_089BEB0C;
    return;
L_089BEB0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(357), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEB2C;
      }
      goto L_089BEB24;
    }
L_089BEB24:
    ctx.set_gpr(31, 0x089BEB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BEB2Cu) goto L_089BEB2C;
    return;
L_089BEB2C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEB58;
      }
      goto L_089BEB3C;
    }
L_089BEB3C:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEB58;
      }
      goto L_089BEB54;
    }
L_089BEB54:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089BEB58;
L_089BEB58:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEB84;
      }
      goto L_089BEB60;
    }
L_089BEB60:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEB84;
      }
      goto L_089BEB78;
    }
L_089BEB78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BEB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BEB84u) goto L_089BEB84;
    return;
L_089BEB84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEB98;
      }
      goto L_089BEB90;
    }
L_089BEB90:
    ctx.set_gpr(31, 0x089BEB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BEB98u) goto L_089BEB98;
    return;
L_089BEB98:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEBC4;
      }
      goto L_089BEBA8;
    }
L_089BEBA8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEBC4;
      }
      goto L_089BEBC0;
    }
L_089BEBC0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089BEBC4;
L_089BEBC4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEBF0;
      }
      goto L_089BEBCC;
    }
L_089BEBCC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEBF0;
      }
      goto L_089BEBE4;
    }
L_089BEBE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BEBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BEBF0u) goto L_089BEBF0;
    return;
L_089BEBF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC04;
      }
      goto L_089BEBFC;
    }
L_089BEBFC:
    ctx.set_gpr(31, 0x089BEC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BEC04u) goto L_089BEC04;
    return;
L_089BEC04:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC30;
      }
      goto L_089BEC14;
    }
L_089BEC14:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC30;
      }
      goto L_089BEC2C;
    }
L_089BEC2C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089BEC30;
L_089BEC30:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC5C;
      }
      goto L_089BEC38;
    }
L_089BEC38:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC5C;
      }
      goto L_089BEC50;
    }
L_089BEC50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089BEC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089BEC5Cu) goto L_089BEC5C;
    return;
L_089BEC5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC70;
      }
      goto L_089BEC68;
    }
L_089BEC68:
    ctx.set_gpr(31, 0x089BEC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BEC70u) goto L_089BEC70;
    return;
L_089BEC70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEC88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BECC4;
      }
      goto L_089BECA4;
    }
L_089BECA4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BECB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BECB4u) goto L_089BECB4;
    return;
L_089BECB4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089BECC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089BECC4u) goto L_089BECC4;
    return;
L_089BECC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BECD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BECE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BECE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BECF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BECF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED10:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED1C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BED64;
      }
      goto L_089BED4C;
    }
L_089BED4C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BED5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BED5Cu) goto L_089BED5C;
    return;
L_089BED5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BED68;
      }
      goto L_089BED64;
    }
L_089BED64:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089BED68;
L_089BED68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BED78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30488));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089BED94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 499u, 0x0899EC00u>(ctx, &aot_mem) && ctx.pc == 0x089BED94u) goto L_089BED94;
    return;
L_089BED94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEDA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30488));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089BEDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 506u, 0x0899EC50u>(ctx, &aot_mem) && ctx.pc == 0x089BEDC4u) goto L_089BEDC4;
    return;
L_089BEDC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEDD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30140));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089BEDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 499u, 0x0899EC00u>(ctx, &aot_mem) && ctx.pc == 0x089BEDF0u) goto L_089BEDF0;
    return;
L_089BEDF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEE00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30140));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089BEE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 506u, 0x0899EC50u>(ctx, &aot_mem) && ctx.pc == 0x089BEE20u) goto L_089BEE20;
    return;
L_089BEE20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEE30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29792));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089BEE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 499u, 0x0899EC00u>(ctx, &aot_mem) && ctx.pc == 0x089BEE4Cu) goto L_089BEE4C;
    return;
L_089BEE4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEE5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29792));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089BEE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 506u, 0x0899EC50u>(ctx, &aot_mem) && ctx.pc == 0x089BEE7Cu) goto L_089BEE7C;
    return;
L_089BEE7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEE8C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEE9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BEEB4:
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
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BEEF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BEEF4u) goto L_089BEEF4;
    return;
L_089BEEF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEF18;
      }
      goto L_089BEEFC;
    }
L_089BEEFC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BEF18u);
    // nop
    goto L_089BEF3C;
L_089BEF18:
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
L_089BEF3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1520));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089BEFB0;
      }
      goto L_089BEFA8;
    }
L_089BEFA8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089BEFB8;
      }
      goto L_089BEFB0;
    }
L_089BEFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 38u, 0x089C4674u>(ctx, &aot_mem); return;
      }
      goto L_089BEFB8;
    }
L_089BEFB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(30, ctx.lo);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BEFFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BEFFCu) goto L_089BEFFC;
    return;
L_089BEFFC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF014u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF014u) goto L_089BF014;
    return;
L_089BF014:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x089BF030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem) && ctx.pc == 0x089BF030u) goto L_089BF030;
    return;
L_089BF030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1516));
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF058u) goto L_089BF058;
    return;
L_089BF058:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1484));
    ctx.set_gpr(31, 0x089BF064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF064u) goto L_089BF064;
    return;
L_089BF064:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.set_gpr(31, 0x089BF070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF070u) goto L_089BF070;
    return;
L_089BF070:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1428));
    ctx.set_gpr(31, 0x089BF07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF07Cu) goto L_089BF07C;
    return;
L_089BF07C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1400));
    ctx.set_gpr(31, 0x089BF088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF088u) goto L_089BF088;
    return;
L_089BF088:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1372));
    ctx.set_gpr(31, 0x089BF094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF094u) goto L_089BF094;
    return;
L_089BF094:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.set_gpr(31, 0x089BF0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF0A0u) goto L_089BF0A0;
    return;
L_089BF0A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1316));
    ctx.set_gpr(31, 0x089BF0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF0ACu) goto L_089BF0AC;
    return;
L_089BF0AC:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1404), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1400), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1408), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1412), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1400));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF0E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF0E8u) goto L_089BF0E8;
    return;
L_089BF0E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1488), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1484), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1492), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1496), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1484));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF120u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF120u) goto L_089BF120;
    return;
L_089BF120:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1500)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1356), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF150u) goto L_089BF150;
    return;
L_089BF150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF1D8;
      }
      goto L_089BF168;
    }
L_089BF168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1376), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1372), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1380), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1384), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1372));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF198u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF198u) goto L_089BF198;
    return;
L_089BF198:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1460), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1468), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF1D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF1D4u) goto L_089BF1D4;
    return;
L_089BF1D4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
    goto L_089BF1D8;
L_089BF1D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089BF260;
      }
      goto L_089BF1F0;
    }
L_089BF1F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1324), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1316));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF220u) goto L_089BF220;
    return;
L_089BF220:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1428));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BF25Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF25Cu) goto L_089BF25C;
    return;
L_089BF25C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1444)));
    goto L_089BF260;
L_089BF260:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 5u, 0x089C4150u>(ctx, &aot_mem); return;
      }
      goto L_089BF29C;
    }
L_089BF29C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(28, 0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 3u, 0x089C413Cu>(ctx, &aot_mem); return;
      }
      goto L_089BF2B8;
    }
L_089BF2B8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = ctx.fpr[5] - ctx.fpr[6];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(27, 0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(26, 0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(25, 0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[5] - ctx.fpr[28];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(31, 0x089BF354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF354u) goto L_089BF354;
    return;
L_089BF354:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.set_gpr(31, 0x089BF378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF378u) goto L_089BF378;
    return;
L_089BF378:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(748));
    ctx.set_gpr(31, 0x089BF3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF3B0u) goto L_089BF3B0;
    return;
L_089BF3B0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(760));
    ctx.set_gpr(31, 0x089BF3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF3D4u) goto L_089BF3D4;
    return;
L_089BF3D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(772));
    ctx.set_gpr(31, 0x089BF410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF410u) goto L_089BF410;
    return;
L_089BF410:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.set_gpr(31, 0x089BF434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF434u) goto L_089BF434;
    return;
L_089BF434:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(796));
    ctx.set_gpr(31, 0x089BF46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF46Cu) goto L_089BF46C;
    return;
L_089BF46C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(796)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(31, 0x089BF490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF490u) goto L_089BF490;
    return;
L_089BF490:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(820));
    ctx.set_gpr(31, 0x089BF4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF4CCu) goto L_089BF4CC;
    return;
L_089BF4CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(820)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(824)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(828)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.set_gpr(31, 0x089BF4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF4F0u) goto L_089BF4F0;
    return;
L_089BF4F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(844));
    ctx.set_gpr(31, 0x089BF528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF528u) goto L_089BF528;
    return;
L_089BF528:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(844)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(856));
    ctx.set_gpr(31, 0x089BF54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF54Cu) goto L_089BF54C;
    return;
L_089BF54C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(868));
    ctx.set_gpr(31, 0x089BF580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF580u) goto L_089BF580;
    return;
L_089BF580:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(876)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.set_gpr(31, 0x089BF5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF5A4u) goto L_089BF5A4;
    return;
L_089BF5A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(892));
    ctx.set_gpr(31, 0x089BF5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF5D4u) goto L_089BF5D4;
    return;
L_089BF5D4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(892)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(900)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(904));
    ctx.set_gpr(31, 0x089BF5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF5F8u) goto L_089BF5F8;
    return;
L_089BF5F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(916));
    ctx.set_gpr(31, 0x089BF62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF62Cu) goto L_089BF62C;
    return;
L_089BF62C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.set_gpr(31, 0x089BF650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF650u) goto L_089BF650;
    return;
L_089BF650:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(940));
    ctx.set_gpr(31, 0x089BF688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF688u) goto L_089BF688;
    return;
L_089BF688:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(952));
    ctx.set_gpr(31, 0x089BF6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF6ACu) goto L_089BF6AC;
    return;
L_089BF6AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(964));
    ctx.set_gpr(31, 0x089BF6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF6E0u) goto L_089BF6E0;
    return;
L_089BF6E0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(972)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.set_gpr(31, 0x089BF704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF704u) goto L_089BF704;
    return;
L_089BF704:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(988));
    ctx.set_gpr(31, 0x089BF734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF734u) goto L_089BF734;
    return;
L_089BF734:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1000));
    ctx.set_gpr(31, 0x089BF758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF758u) goto L_089BF758;
    return;
L_089BF758:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1012));
    ctx.set_gpr(31, 0x089BF78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF78Cu) goto L_089BF78C;
    return;
L_089BF78C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1020)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(31, 0x089BF7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF7B0u) goto L_089BF7B0;
    return;
L_089BF7B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1036));
    ctx.set_gpr(31, 0x089BF7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF7E0u) goto L_089BF7E0;
    return;
L_089BF7E0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1048));
    ctx.set_gpr(31, 0x089BF804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF804u) goto L_089BF804;
    return;
L_089BF804:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.set_gpr(31, 0x089BF830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF830u) goto L_089BF830;
    return;
L_089BF830:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.set_gpr(31, 0x089BF854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF854u) goto L_089BF854;
    return;
L_089BF854:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1084));
    ctx.set_gpr(31, 0x089BF878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF878u) goto L_089BF878;
    return;
L_089BF878:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1096));
    ctx.set_gpr(31, 0x089BF89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF89Cu) goto L_089BF89C;
    return;
L_089BF89C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1108));
    ctx.set_gpr(31, 0x089BF8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF8CCu) goto L_089BF8CC;
    return;
L_089BF8CC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.set_gpr(31, 0x089BF8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF8FCu) goto L_089BF8FC;
    return;
L_089BF8FC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1132));
    ctx.set_gpr(31, 0x089BF92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF92Cu) goto L_089BF92C;
    return;
L_089BF92C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1132)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1144));
    ctx.set_gpr(31, 0x089BF95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF95Cu) goto L_089BF95C;
    return;
L_089BF95C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1156));
    ctx.set_gpr(31, 0x089BF98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF98Cu) goto L_089BF98C;
    return;
L_089BF98C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.set_gpr(31, 0x089BF9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF9BCu) goto L_089BF9BC;
    return;
L_089BF9BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1180));
    ctx.set_gpr(31, 0x089BF9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF9ECu) goto L_089BF9EC;
    return;
L_089BF9EC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(904)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(908)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1192));
    ctx.set_gpr(31, 0x089BFA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BFA1Cu) goto L_089BFA1C;
    return;
L_089BFA1C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(880)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(884)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(888)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1204));
    ctx.set_gpr(31, 0x089BFA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BFA4Cu) goto L_089BFA4C;
    return;
L_089BFA4C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.set_gpr(31, 0x089BFA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BFA7Cu) goto L_089BFA7C;
    return;
L_089BFA7C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1228));
    ctx.set_gpr(31, 0x089BFAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BFAACu) goto L_089BFAAC;
    return;
L_089BFAAC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1240));
    ctx.set_gpr(31, 0x089BFADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BFADCu) goto L_089BFADC;
    return;
L_089BFADC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(788)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1252));
    ctx.set_gpr(31, 0x089BFB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BFB0Cu) goto L_089BFB0C;
    return;
L_089BFB0C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.set_gpr(31, 0x089BFB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089BFB3Cu) goto L_089BFB3C;
    return;
L_089BFB3C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(23, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 759u, 0x089C3D0Cu>(ctx, &aot_mem); return;
      }
      goto L_089BFB98;
    }
L_089BFB98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFBC4;
      }
      goto L_089BFBB4;
    }
L_089BFBB4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFBDC;
      }
      goto L_089BFBC4;
    }
L_089BFBC4:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFBDC;
L_089BFBDC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFC08;
      }
      goto L_089BFBF8;
    }
L_089BFBF8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFC1C;
      }
      goto L_089BFC08;
    }
L_089BFC08:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089BFC1C;
L_089BFC1C:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFC3C;
      }
      goto L_089BFC2C;
    }
L_089BFC2C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFC54;
      }
      goto L_089BFC3C;
    }
L_089BFC3C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFC54;
L_089BFC54:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFC80;
      }
      goto L_089BFC70;
    }
L_089BFC70:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFC94;
      }
      goto L_089BFC80;
    }
L_089BFC80:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089BFC94;
L_089BFC94:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFCB0;
      }
      goto L_089BFCA0;
    }
L_089BFCA0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFCC8;
      }
      goto L_089BFCB0;
    }
L_089BFCB0:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFCC8;
L_089BFCC8:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFCF4;
      }
      goto L_089BFCE4;
    }
L_089BFCE4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFD08;
      }
      goto L_089BFCF4;
    }
L_089BFCF4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089BFD08;
L_089BFD08:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFD24;
      }
      goto L_089BFD14;
    }
L_089BFD14:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFD3C;
      }
      goto L_089BFD24;
    }
L_089BFD24:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFD3C;
L_089BFD3C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFD68;
      }
      goto L_089BFD58;
    }
L_089BFD58:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFD7C;
      }
      goto L_089BFD68;
    }
L_089BFD68:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089BFD7C;
L_089BFD7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(540));
    ctx.set_gpr(31, 0x089BFD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089BFD88u) goto L_089BFD88;
    return;
L_089BFD88:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFDA4;
      }
      goto L_089BFD94;
    }
L_089BFD94:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFDBC;
      }
      goto L_089BFDA4;
    }
L_089BFDA4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFDBC;
L_089BFDBC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFDE8;
      }
      goto L_089BFDD8;
    }
L_089BFDD8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFDFC;
      }
      goto L_089BFDE8;
    }
L_089BFDE8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089BFDFC;
L_089BFDFC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFE18;
      }
      goto L_089BFE08;
    }
L_089BFE08:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFE30;
      }
      goto L_089BFE18;
    }
L_089BFE18:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFE30;
L_089BFE30:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFE5C;
      }
      goto L_089BFE4C;
    }
L_089BFE4C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFE70;
      }
      goto L_089BFE5C;
    }
L_089BFE5C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089BFE70;
L_089BFE70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(542)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFE8C;
      }
      goto L_089BFE7C;
    }
L_089BFE7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFEA4;
      }
      goto L_089BFE8C;
    }
L_089BFE8C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFEA4;
L_089BFEA4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFED0;
      }
      goto L_089BFEC0;
    }
L_089BFEC0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFEE4;
      }
      goto L_089BFED0;
    }
L_089BFED0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089BFEE4;
L_089BFEE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFF00;
      }
      goto L_089BFEF0;
    }
L_089BFEF0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFF18;
      }
      goto L_089BFF00;
    }
L_089BFF00:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFF18;
L_089BFF18:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFF44;
      }
      goto L_089BFF34;
    }
L_089BFF34:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFF58;
      }
      goto L_089BFF44;
    }
L_089BFF44:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089BFF58;
L_089BFF58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x089BFF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 41u, 0x089C4700u>(ctx, &aot_mem) && ctx.pc == 0x089BFF64u) goto L_089BFF64;
    return;
L_089BFF64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BFF94;
      }
      goto L_089BFF84;
    }
L_089BFF84:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFFAC;
      }
      goto L_089BFF94;
    }
L_089BFF94:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089BFFAC;
L_089BFFAC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BFFD8;
      }
      goto L_089BFFC8;
    }
L_089BFFC8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFFEC;
      }
      goto L_089BFFD8;
    }
L_089BFFD8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089BFFEC;
L_089BFFEC:
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 2u, 0x089C000Cu>(ctx, &aot_mem); return;
      }
      goto L_089BFFFC;
    }
L_089BFFFC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.pc = 0x089C0000u; return;
}

void recomp_unit_0110(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0110_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_110(Runtime &runtime) {
    runtime.register_generated_unit(110u, 0x089BC000u, 16384u, &recomp_unit_0110, &recomp_unit_0110_entry);
    runtime.register_function(0x089BC000u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC03Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC05Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC068u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC260u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC280u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC28Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC328u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC340u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC34Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC394u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC3ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC3B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC490u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC4B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC4BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC564u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC584u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC594u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC608u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC618u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC624u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC63Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC64Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC670u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC674u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC688u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC704u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC710u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC71Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC728u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC734u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC740u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC74Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC758u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC764u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC770u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC77Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC788u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC794u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC800u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC80Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC818u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC824u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC830u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC83Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC848u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC854u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC868u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC870u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC87Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC880u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC88Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC890u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC8ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC8D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC8E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC8E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC904u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC90Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC910u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC930u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC938u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC93Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC988u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCACCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC40u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC6Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE14u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCEACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCEB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCED0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCEDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD010u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD02Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD038u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD044u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD05Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD06Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD088u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD098u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD148u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD160u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD168u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD174u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD184u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD234u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD250u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD260u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD29Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD308u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD318u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD324u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD33Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD358u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD35Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD368u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD374u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD380u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD39Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD400u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD418u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD430u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD458u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD474u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD48Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD534u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD538u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD544u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD560u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD564u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD570u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD580u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD588u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD594u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD608u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD620u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD648u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD664u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD67Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD698u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD6B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD720u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD724u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD730u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD800u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD82Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD83Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD854u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD86Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD894u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD8A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD8CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD8E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD910u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD93Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD968u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD994u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA14u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA40u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDAA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDAB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDACCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDAE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDAF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB6Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDBB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDBC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDBE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC28u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDCC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDCDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDCF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDD0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDD24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDD48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDD60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDD6Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDD90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDDB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDDD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDDF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDEB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDEC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDEE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDEFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF28u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF6Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFC4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE004u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE00Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE080u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE088u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE11Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE140u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE158u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE188u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE204u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE228u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE24Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE254u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE25Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE26Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE274u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE27Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE28Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE30Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE314u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE32Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE350u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE378u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE384u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE404u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE42Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE438u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE448u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE454u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE480u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE48Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE498u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE508u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE51Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE524u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE53Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE554u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE560u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE568u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE58Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE594u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE608u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE618u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE620u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE628u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE64Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE65Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE674u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE680u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE688u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE714u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE730u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE740u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE764u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE774u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE778u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE788u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE800u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE824u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE834u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE858u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE868u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE88Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE898u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE90Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE92Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE93Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE948u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE958u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE964u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE96Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE978u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE980u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE998u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA6Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAB8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBC4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC14u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECC4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED28u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDC4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEEB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEEF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEEFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFB8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF014u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF030u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF058u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF064u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF070u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF07Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF088u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF094u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF120u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF150u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF168u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF198u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF220u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF25Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF260u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF29Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF2B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF354u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF378u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF3B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF3D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF410u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF434u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF46Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF490u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF4CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF4F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF528u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF54Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF580u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF5A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF5D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF5F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF62Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF650u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF688u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF704u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF734u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF758u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF78Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF804u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF830u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF854u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF878u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF89Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF92Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF95Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF98Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFAACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFADCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBC4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFCA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFCB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFCC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFCE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFCF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD14u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFDA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFDBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFDD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFDE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFDFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFED0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFFCu, &recomp_unit_0110, "recomp_unit_0110");
}
} // namespace psprecomp
