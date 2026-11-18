#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0107[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 61, 62, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 113, 114, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 135, 136, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148,
    0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 166, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0,
    0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 178,
    0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0,
    0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 208, 0, 209, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 227,
    0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    238, 0, 239, 240, 0, 241, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261,
    0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0,
    274, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0,
    296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0,
    0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321,
    0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329,
    0, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 339, 0, 340, 0, 0, 341,
    0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0,
    0, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359,
    0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0,
    0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0,
    0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384,
    0, 385, 0, 386, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 391, 0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 0,
    397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0,
    403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0,
    426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 0, 441, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0,
    0, 446, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 462, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479,
    0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 484, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488,
    0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492,
    0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0,
    505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 515, 0, 0, 0, 516, 0, 0,
    0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0,
    0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527,
    0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0,
    0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534,
    0, 0, 0, 0, 535, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 541, 542, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0,
    0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0,
    0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 563,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0,
    0, 569, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577,
    0, 578, 0, 579, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0,
    587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 591, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594,
    0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0,
    0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0,
    0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 613,
    0, 0, 0, 0, 614, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0,
    0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0,
    0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0,
    0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0,
    636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 643, 0, 644,
    645, 0, 646, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0,
    0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0,
    0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0,
    0, 0, 0, 0, 0, 677, 678, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685,
};
void recomp_unit_0107_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0107[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B0000;
    case 2u: goto L_089B00FC;
    case 3u: goto L_089B0104;
    case 4u: goto L_089B010C;
    case 5u: goto L_089B011C;
    case 6u: goto L_089B0128;
    case 7u: goto L_089B013C;
    case 8u: goto L_089B0144;
    case 9u: goto L_089B0154;
    case 10u: goto L_089B0184;
    case 11u: goto L_089B0194;
    case 12u: goto L_089B01A8;
    case 13u: goto L_089B01C4;
    case 14u: goto L_089B01E8;
    case 15u: goto L_089B0210;
    case 16u: goto L_089B023C;
    case 17u: goto L_089B0248;
    case 18u: goto L_089B0264;
    case 19u: goto L_089B026C;
    case 20u: goto L_089B027C;
    case 21u: goto L_089B0298;
    case 22u: goto L_089B02AC;
    case 23u: goto L_089B02E8;
    case 24u: goto L_089B02F4;
    case 25u: goto L_089B0310;
    case 26u: goto L_089B031C;
    case 27u: goto L_089B0338;
    case 28u: goto L_089B0348;
    case 29u: goto L_089B0364;
    case 30u: goto L_089B0370;
    case 31u: goto L_089B037C;
    case 32u: goto L_089B0398;
    case 33u: goto L_089B03B8;
    case 34u: goto L_089B03C0;
    case 35u: goto L_089B03E0;
    case 36u: goto L_089B03F0;
    case 37u: goto L_089B0400;
    case 38u: goto L_089B0410;
    case 39u: goto L_089B043C;
    case 40u: goto L_089B0444;
    case 41u: goto L_089B0454;
    case 42u: goto L_089B0460;
    case 43u: goto L_089B047C;
    case 44u: goto L_089B0490;
    case 45u: goto L_089B04AC;
    case 46u: goto L_089B04B0;
    case 47u: goto L_089B04C8;
    case 48u: goto L_089B04D4;
    case 49u: goto L_089B04E4;
    case 50u: goto L_089B04F8;
    case 51u: goto L_089B0520;
    case 52u: goto L_089B0544;
    case 53u: goto L_089B0564;
    case 54u: goto L_089B056C;
    case 55u: goto L_089B057C;
    case 56u: goto L_089B0594;
    case 57u: goto L_089B05A8;
    case 58u: goto L_089B05B4;
    case 59u: goto L_089B05C0;
    case 60u: goto L_089B05D4;
    case 61u: goto L_089B05D8;
    case 62u: goto L_089B05DC;
    case 63u: goto L_089B05F0;
    case 64u: goto L_089B0654;
    case 65u: goto L_089B0664;
    case 66u: goto L_089B0678;
    case 67u: goto L_089B0694;
    case 68u: goto L_089B06B8;
    case 69u: goto L_089B06D4;
    case 70u: goto L_089B06E8;
    case 71u: goto L_089B06F4;
    case 72u: goto L_089B06FC;
    case 73u: goto L_089B0720;
    case 74u: goto L_089B0748;
    case 75u: goto L_089B0778;
    case 76u: goto L_089B07A8;
    case 77u: goto L_089B07DC;
    case 78u: goto L_089B07F0;
    case 79u: goto L_089B081C;
    case 80u: goto L_089B084C;
    case 81u: goto L_089B0888;
    case 82u: goto L_089B08C4;
    case 83u: goto L_089B08F8;
    case 84u: goto L_089B0914;
    case 85u: goto L_089B0924;
    case 86u: goto L_089B0934;
    case 87u: goto L_089B096C;
    case 88u: goto L_089B0974;
    case 89u: goto L_089B0980;
    case 90u: goto L_089B099C;
    case 91u: goto L_089B09BC;
    case 92u: goto L_089B09E0;
    case 93u: goto L_089B0A1C;
    case 94u: goto L_089B0A30;
    case 95u: goto L_089B0A68;
    case 96u: goto L_089B0A7C;
    case 97u: goto L_089B0A98;
    case 98u: goto L_089B0AB8;
    case 99u: goto L_089B0ADC;
    case 100u: goto L_089B0B18;
    case 101u: goto L_089B0B38;
    case 102u: goto L_089B0B5C;
    case 103u: goto L_089B0B98;
    case 104u: goto L_089B0BA8;
    case 105u: goto L_089B0BC4;
    case 106u: goto L_089B0BD0;
    case 107u: goto L_089B0BEC;
    case 108u: goto L_089B0BFC;
    case 109u: goto L_089B0C18;
    case 110u: goto L_089B0C24;
    case 111u: goto L_089B0C44;
    case 112u: goto L_089B0C64;
    case 113u: goto L_089B0C68;
    case 114u: goto L_089B0C6C;
    case 115u: goto L_089B0C84;
    case 116u: goto L_089B0C98;
    case 117u: goto L_089B0CAC;
    case 118u: goto L_089B0CB4;
    case 119u: goto L_089B0CC0;
    case 120u: goto L_089B0CDC;
    case 121u: goto L_089B0CF0;
    case 122u: goto L_089B0CFC;
    case 123u: goto L_089B0D04;
    case 124u: goto L_089B0D28;
    case 125u: goto L_089B0D50;
    case 126u: goto L_089B0D80;
    case 127u: goto L_089B0DB0;
    case 128u: goto L_089B0DE4;
    case 129u: goto L_089B0DF8;
    case 130u: goto L_089B0E24;
    case 131u: goto L_089B0E54;
    case 132u: goto L_089B0E90;
    case 133u: goto L_089B0ECC;
    case 134u: goto L_089B0F00;
    case 135u: goto L_089B0F1C;
    case 136u: goto L_089B0F20;
    case 137u: goto L_089B0F24;
    case 138u: goto L_089B0F3C;
    case 139u: goto L_089B0F7C;
    case 140u: goto L_089B0FD4;
    case 141u: goto L_089B0FE4;
    case 142u: goto L_089B0FF8;
    case 143u: goto L_089B100C;
    case 144u: goto L_089B1018;
    case 145u: goto L_089B1028;
    case 146u: goto L_089B102C;
    case 147u: goto L_089B1074;
    case 148u: goto L_089B107C;
    case 149u: goto L_089B1084;
    case 150u: goto L_089B1094;
    case 151u: goto L_089B10A0;
    case 152u: goto L_089B10B0;
    case 153u: goto L_089B10BC;
    case 154u: goto L_089B10D8;
    case 155u: goto L_089B10E8;
    case 156u: goto L_089B10F4;
    case 157u: goto L_089B1100;
    case 158u: goto L_089B1124;
    case 159u: goto L_089B112C;
    case 160u: goto L_089B1140;
    case 161u: goto L_089B1158;
    case 162u: goto L_089B117C;
    case 163u: goto L_089B1198;
    case 164u: goto L_089B11BC;
    case 165u: goto L_089B11C8;
    case 166u: goto L_089B11CC;
    case 167u: goto L_089B11DC;
    case 168u: goto L_089B11E4;
    case 169u: goto L_089B11F0;
    case 170u: goto L_089B11F8;
    case 171u: goto L_089B1204;
    case 172u: goto L_089B1210;
    case 173u: goto L_089B1228;
    case 174u: goto L_089B1250;
    case 175u: goto L_089B1258;
    case 176u: goto L_089B1260;
    case 177u: goto L_089B1274;
    case 178u: goto L_089B127C;
    case 179u: goto L_089B1290;
    case 180u: goto L_089B1298;
    case 181u: goto L_089B12C4;
    case 182u: goto L_089B12FC;
    case 183u: goto L_089B1310;
    case 184u: goto L_089B1318;
    case 185u: goto L_089B1330;
    case 186u: goto L_089B1348;
    case 187u: goto L_089B138C;
    case 188u: goto L_089B139C;
    case 189u: goto L_089B13B8;
    case 190u: goto L_089B13CC;
    case 191u: goto L_089B13D4;
    case 192u: goto L_089B13F4;
    case 193u: goto L_089B1410;
    case 194u: goto L_089B141C;
    case 195u: goto L_089B1428;
    case 196u: goto L_089B143C;
    case 197u: goto L_089B144C;
    case 198u: goto L_089B1458;
    case 199u: goto L_089B146C;
    case 200u: goto L_089B1478;
    case 201u: goto L_089B148C;
    case 202u: goto L_089B1498;
    case 203u: goto L_089B14AC;
    case 204u: goto L_089B14B8;
    case 205u: goto L_089B14CC;
    case 206u: goto L_089B14D8;
    case 207u: goto L_089B14EC;
    case 208u: goto L_089B14F0;
    case 209u: goto L_089B14F8;
    case 210u: goto L_089B1508;
    case 211u: goto L_089B1520;
    case 212u: goto L_089B1544;
    case 213u: goto L_089B154C;
    case 214u: goto L_089B156C;
    case 215u: goto L_089B1584;
    case 216u: goto L_089B159C;
    case 217u: goto L_089B15B8;
    case 218u: goto L_089B15E4;
    case 219u: goto L_089B1608;
    case 220u: goto L_089B1614;
    case 221u: goto L_089B1630;
    case 222u: goto L_089B1638;
    case 223u: goto L_089B1648;
    case 224u: goto L_089B1658;
    case 225u: goto L_089B1668;
    case 226u: goto L_089B1670;
    case 227u: goto L_089B167C;
    case 228u: goto L_089B168C;
    case 229u: goto L_089B16A0;
    case 230u: goto L_089B16B0;
    case 231u: goto L_089B16C4;
    case 232u: goto L_089B16D0;
    case 233u: goto L_089B16E8;
    case 234u: goto L_089B16F4;
    case 235u: goto L_089B1718;
    case 236u: goto L_089B172C;
    case 237u: goto L_089B177C;
    case 238u: goto L_089B1780;
    case 239u: goto L_089B1788;
    case 240u: goto L_089B178C;
    case 241u: goto L_089B1794;
    case 242u: goto L_089B1798;
    case 243u: goto L_089B17A8;
    case 244u: goto L_089B17CC;
    case 245u: goto L_089B17D4;
    case 246u: goto L_089B17DC;
    case 247u: goto L_089B17E4;
    case 248u: goto L_089B17F0;
    case 249u: goto L_089B180C;
    case 250u: goto L_089B1820;
    case 251u: goto L_089B182C;
    case 252u: goto L_089B1838;
    case 253u: goto L_089B1870;
    case 254u: goto L_089B187C;
    case 255u: goto L_089B189C;
    case 256u: goto L_089B18A8;
    case 257u: goto L_089B18B8;
    case 258u: goto L_089B18C8;
    case 259u: goto L_089B18DC;
    case 260u: goto L_089B18EC;
    case 261u: goto L_089B18FC;
    case 262u: goto L_089B1908;
    case 263u: goto L_089B1918;
    case 264u: goto L_089B1924;
    case 265u: goto L_089B1934;
    case 266u: goto L_089B1940;
    case 267u: goto L_089B1950;
    case 268u: goto L_089B1978;
    case 269u: goto L_089B19BC;
    case 270u: goto L_089B19C4;
    case 271u: goto L_089B19D0;
    case 272u: goto L_089B19E0;
    case 273u: goto L_089B19F4;
    case 274u: goto L_089B1A00;
    case 275u: goto L_089B1A08;
    case 276u: goto L_089B1A14;
    case 277u: goto L_089B1A2C;
    case 278u: goto L_089B1A30;
    case 279u: goto L_089B1A58;
    case 280u: goto L_089B1A84;
    case 281u: goto L_089B1A90;
    case 282u: goto L_089B1AA0;
    case 283u: goto L_089B1AAC;
    case 284u: goto L_089B1AC4;
    case 285u: goto L_089B1AD0;
    case 286u: goto L_089B1ADC;
    case 287u: goto L_089B1AEC;
    case 288u: goto L_089B1AF8;
    case 289u: goto L_089B1B0C;
    case 290u: goto L_089B1B20;
    case 291u: goto L_089B1B34;
    case 292u: goto L_089B1B44;
    case 293u: goto L_089B1B50;
    case 294u: goto L_089B1B5C;
    case 295u: goto L_089B1B74;
    case 296u: goto L_089B1B80;
    case 297u: goto L_089B1B8C;
    case 298u: goto L_089B1B9C;
    case 299u: goto L_089B1BA8;
    case 300u: goto L_089B1BBC;
    case 301u: goto L_089B1BD0;
    case 302u: goto L_089B1BE4;
    case 303u: goto L_089B1BF0;
    case 304u: goto L_089B1BF8;
    case 305u: goto L_089B1C04;
    case 306u: goto L_089B1C0C;
    case 307u: goto L_089B1C1C;
    case 308u: goto L_089B1C28;
    case 309u: goto L_089B1C34;
    case 310u: goto L_089B1C44;
    case 311u: goto L_089B1C50;
    case 312u: goto L_089B1C7C;
    case 313u: goto L_089B1C88;
    case 314u: goto L_089B1C98;
    case 315u: goto L_089B1CA4;
    case 316u: goto L_089B1CB4;
    case 317u: goto L_089B1CC4;
    case 318u: goto L_089B1CD0;
    case 319u: goto L_089B1CE0;
    case 320u: goto L_089B1CEC;
    case 321u: goto L_089B1CFC;
    case 322u: goto L_089B1D08;
    case 323u: goto L_089B1D18;
    case 324u: goto L_089B1D2C;
    case 325u: goto L_089B1D40;
    case 326u: goto L_089B1D54;
    case 327u: goto L_089B1D68;
    case 328u: goto L_089B1D74;
    case 329u: goto L_089B1D7C;
    case 330u: goto L_089B1D88;
    case 331u: goto L_089B1D90;
    case 332u: goto L_089B1D9C;
    case 333u: goto L_089B1DA4;
    case 334u: goto L_089B1DB0;
    case 335u: goto L_089B1DB8;
    case 336u: goto L_089B1DCC;
    case 337u: goto L_089B1DD8;
    case 338u: goto L_089B1DE4;
    case 339u: goto L_089B1DE8;
    case 340u: goto L_089B1DF0;
    case 341u: goto L_089B1DFC;
    case 342u: goto L_089B1E08;
    case 343u: goto L_089B1E20;
    case 344u: goto L_089B1E2C;
    case 345u: goto L_089B1E38;
    case 346u: goto L_089B1E50;
    case 347u: goto L_089B1E5C;
    case 348u: goto L_089B1E6C;
    case 349u: goto L_089B1E78;
    case 350u: goto L_089B1E88;
    case 351u: goto L_089B1E94;
    case 352u: goto L_089B1E9C;
    case 353u: goto L_089B1EA4;
    case 354u: goto L_089B1EB0;
    case 355u: goto L_089B1EBC;
    case 356u: goto L_089B1ED4;
    case 357u: goto L_089B1EE0;
    case 358u: goto L_089B1EF0;
    case 359u: goto L_089B1EFC;
    case 360u: goto L_089B1F0C;
    case 361u: goto L_089B1F18;
    case 362u: goto L_089B1F20;
    case 363u: goto L_089B1F34;
    case 364u: goto L_089B1F40;
    case 365u: goto L_089B1F48;
    case 366u: goto L_089B1F58;
    case 367u: goto L_089B1F64;
    case 368u: goto L_089B1F70;
    case 369u: goto L_089B1F88;
    case 370u: goto L_089B1F94;
    case 371u: goto L_089B1FA0;
    case 372u: goto L_089B1FB0;
    case 373u: goto L_089B1FBC;
    case 374u: goto L_089B1FD0;
    case 375u: goto L_089B1FE4;
    case 376u: goto L_089B1FF8;
    case 377u: goto L_089B2004;
    case 378u: goto L_089B200C;
    case 379u: goto L_089B2018;
    case 380u: goto L_089B2020;
    case 381u: goto L_089B2034;
    case 382u: goto L_089B2050;
    case 383u: goto L_089B2068;
    case 384u: goto L_089B207C;
    case 385u: goto L_089B2084;
    case 386u: goto L_089B208C;
    case 387u: goto L_089B2090;
    case 388u: goto L_089B2098;
    case 389u: goto L_089B20B0;
    case 390u: goto L_089B20BC;
    case 391u: goto L_089B20C0;
    case 392u: goto L_089B20CC;
    case 393u: goto L_089B20D8;
    case 394u: goto L_089B20E0;
    case 395u: goto L_089B20EC;
    case 396u: goto L_089B20F4;
    case 397u: goto L_089B2100;
    case 398u: goto L_089B2108;
    case 399u: goto L_089B2130;
    case 400u: goto L_089B215C;
    case 401u: goto L_089B216C;
    case 402u: goto L_089B2174;
    case 403u: goto L_089B2180;
    case 404u: goto L_089B218C;
    case 405u: goto L_089B2198;
    case 406u: goto L_089B21AC;
    case 407u: goto L_089B21B8;
    case 408u: goto L_089B21C0;
    case 409u: goto L_089B21D0;
    case 410u: goto L_089B21E4;
    case 411u: goto L_089B21E8;
    case 412u: goto L_089B2214;
    case 413u: goto L_089B2220;
    case 414u: goto L_089B222C;
    case 415u: goto L_089B2240;
    case 416u: goto L_089B2248;
    case 417u: goto L_089B2250;
    case 418u: goto L_089B2270;
    case 419u: goto L_089B2294;
    case 420u: goto L_089B22B0;
    case 421u: goto L_089B2440;
    case 422u: goto L_089B2448;
    case 423u: goto L_089B2450;
    case 424u: goto L_089B2460;
    case 425u: goto L_089B246C;
    case 426u: goto L_089B2480;
    case 427u: goto L_089B2488;
    case 428u: goto L_089B2494;
    case 429u: goto L_089B2558;
    case 430u: goto L_089B2578;
    case 431u: goto L_089B258C;
    case 432u: goto L_089B25B0;
    case 433u: goto L_089B25D8;
    case 434u: goto L_089B25E8;
    case 435u: goto L_089B25F4;
    case 436u: goto L_089B2614;
    case 437u: goto L_089B2628;
    case 438u: goto L_089B2648;
    case 439u: goto L_089B2654;
    case 440u: goto L_089B267C;
    case 441u: goto L_089B269C;
    case 442u: goto L_089B26A0;
    case 443u: goto L_089B26B4;
    case 444u: goto L_089B26E0;
    case 445u: goto L_089B26F0;
    case 446u: goto L_089B2704;
    case 447u: goto L_089B2708;
    case 448u: goto L_089B2724;
    case 449u: goto L_089B2734;
    case 450u: goto L_089B2748;
    case 451u: goto L_089B274C;
    case 452u: goto L_089B2784;
    case 453u: goto L_089B2794;
    case 454u: goto L_089B27A4;
    case 455u: goto L_089B27B4;
    case 456u: goto L_089B27F0;
    case 457u: goto L_089B2800;
    case 458u: goto L_089B280C;
    case 459u: goto L_089B2834;
    case 460u: goto L_089B2848;
    case 461u: goto L_089B2864;
    case 462u: goto L_089B2868;
    case 463u: goto L_089B2880;
    case 464u: goto L_089B2894;
    case 465u: goto L_089B28AC;
    case 466u: goto L_089B28C0;
    case 467u: goto L_089B28D8;
    case 468u: goto L_089B28F0;
    case 469u: goto L_089B2900;
    case 470u: goto L_089B290C;
    case 471u: goto L_089B2924;
    case 472u: goto L_089B2938;
    case 473u: goto L_089B2950;
    case 474u: goto L_089B2988;
    case 475u: goto L_089B29AC;
    case 476u: goto L_089B29CC;
    case 477u: goto L_089B29D4;
    case 478u: goto L_089B29E4;
    case 479u: goto L_089B29FC;
    case 480u: goto L_089B2A10;
    case 481u: goto L_089B2A1C;
    case 482u: goto L_089B2A28;
    case 483u: goto L_089B2A3C;
    case 484u: goto L_089B2A40;
    case 485u: goto L_089B2A44;
    case 486u: goto L_089B2A58;
    case 487u: goto L_089B2B68;
    case 488u: goto L_089B2B7C;
    case 489u: goto L_089B2B9C;
    case 490u: goto L_089B2BB0;
    case 491u: goto L_089B2BD4;
    case 492u: goto L_089B2BFC;
    case 493u: goto L_089B2C0C;
    case 494u: goto L_089B2C1C;
    case 495u: goto L_089B2C28;
    case 496u: goto L_089B2C34;
    case 497u: goto L_089B2C54;
    case 498u: goto L_089B2C68;
    case 499u: goto L_089B2C88;
    case 500u: goto L_089B2C98;
    case 501u: goto L_089B2CB4;
    case 502u: goto L_089B2CC8;
    case 503u: goto L_089B2CD4;
    case 504u: goto L_089B2CDC;
    case 505u: goto L_089B2D00;
    case 506u: goto L_089B2D28;
    case 507u: goto L_089B2D58;
    case 508u: goto L_089B2D88;
    case 509u: goto L_089B2DC8;
    case 510u: goto L_089B2DF4;
    case 511u: goto L_089B2E24;
    case 512u: goto L_089B2E60;
    case 513u: goto L_089B2E9C;
    case 514u: goto L_089B2EE0;
    case 515u: goto L_089B2EE4;
    case 516u: goto L_089B2EF4;
    case 517u: goto L_089B2F04;
    case 518u: goto L_089B2F50;
    case 519u: goto L_089B2F5C;
    case 520u: goto L_089B2F78;
    case 521u: goto L_089B2F98;
    case 522u: goto L_089B2FBC;
    case 523u: goto L_089B3000;
    case 524u: goto L_089B3014;
    case 525u: goto L_089B304C;
    case 526u: goto L_089B3060;
    case 527u: goto L_089B307C;
    case 528u: goto L_089B309C;
    case 529u: goto L_089B30C0;
    case 530u: goto L_089B30F4;
    case 531u: goto L_089B3114;
    case 532u: goto L_089B3138;
    case 533u: goto L_089B316C;
    case 534u: goto L_089B317C;
    case 535u: goto L_089B3190;
    case 536u: goto L_089B3194;
    case 537u: goto L_089B31B0;
    case 538u: goto L_089B31C0;
    case 539u: goto L_089B31D4;
    case 540u: goto L_089B31D8;
    case 541u: goto L_089B3210;
    case 542u: goto L_089B3214;
    case 543u: goto L_089B3218;
    case 544u: goto L_089B3230;
    case 545u: goto L_089B3248;
    case 546u: goto L_089B325C;
    case 547u: goto L_089B3274;
    case 548u: goto L_089B3288;
    case 549u: goto L_089B32A0;
    case 550u: goto L_089B32B8;
    case 551u: goto L_089B32C8;
    case 552u: goto L_089B32D8;
    case 553u: goto L_089B32E4;
    case 554u: goto L_089B32F0;
    case 555u: goto L_089B3308;
    case 556u: goto L_089B331C;
    case 557u: goto L_089B3334;
    case 558u: goto L_089B338C;
    case 559u: goto L_089B33CC;
    case 560u: goto L_089B33D8;
    case 561u: goto L_089B33E0;
    case 562u: goto L_089B33F0;
    case 563u: goto L_089B33FC;
    case 564u: goto L_089B3424;
    case 565u: goto L_089B342C;
    case 566u: goto L_089B3440;
    case 567u: goto L_089B3460;
    case 568u: goto L_089B3470;
    case 569u: goto L_089B3484;
    case 570u: goto L_089B3498;
    case 571u: goto L_089B34A4;
    case 572u: goto L_089B34B8;
    case 573u: goto L_089B34BC;
    case 574u: goto L_089B351C;
    case 575u: goto L_089B3524;
    case 576u: goto L_089B3548;
    case 577u: goto L_089B357C;
    case 578u: goto L_089B3584;
    case 579u: goto L_089B358C;
    case 580u: goto L_089B3594;
    case 581u: goto L_089B35A0;
    case 582u: goto L_089B35C0;
    case 583u: goto L_089B35C8;
    case 584u: goto L_089B35D0;
    case 585u: goto L_089B35E4;
    case 586u: goto L_089B35EC;
    case 587u: goto L_089B3600;
    case 588u: goto L_089B3620;
    case 589u: goto L_089B3658;
    case 590u: goto L_089B366C;
    case 591u: goto L_089B3674;
    case 592u: goto L_089B36BC;
    case 593u: goto L_089B36D8;
    case 594u: goto L_089B36FC;
    case 595u: goto L_089B3718;
    case 596u: goto L_089B3720;
    case 597u: goto L_089B3744;
    case 598u: goto L_089B3764;
    case 599u: goto L_089B3784;
    case 600u: goto L_089B37A0;
    case 601u: goto L_089B37AC;
    case 602u: goto L_089B37BC;
    case 603u: goto L_089B37D4;
    case 604u: goto L_089B37E4;
    case 605u: goto L_089B37F4;
    case 606u: goto L_089B3808;
    case 607u: goto L_089B3814;
    case 608u: goto L_089B3828;
    case 609u: goto L_089B3838;
    case 610u: goto L_089B384C;
    case 611u: goto L_089B3858;
    case 612u: goto L_089B386C;
    case 613u: goto L_089B387C;
    case 614u: goto L_089B3890;
    case 615u: goto L_089B3894;
    case 616u: goto L_089B389C;
    case 617u: goto L_089B38AC;
    case 618u: goto L_089B38C8;
    case 619u: goto L_089B38F0;
    case 620u: goto L_089B38F8;
    case 621u: goto L_089B391C;
    case 622u: goto L_089B3938;
    case 623u: goto L_089B3954;
    case 624u: goto L_089B3970;
    case 625u: goto L_089B3984;
    case 626u: goto L_089B3994;
    case 627u: goto L_089B39C0;
    case 628u: goto L_089B39E4;
    case 629u: goto L_089B39F0;
    case 630u: goto L_089B3A0C;
    case 631u: goto L_089B3A14;
    case 632u: goto L_089B3A2C;
    case 633u: goto L_089B3A38;
    case 634u: goto L_089B3A50;
    case 635u: goto L_089B3A5C;
    case 636u: goto L_089B3A80;
    case 637u: goto L_089B3A94;
    case 638u: goto L_089B3B3C;
    case 639u: goto L_089B3BBC;
    case 640u: goto L_089B3BC8;
    case 641u: goto L_089B3BCC;
    case 642u: goto L_089B3BF0;
    case 643u: goto L_089B3BF4;
    case 644u: goto L_089B3BFC;
    case 645u: goto L_089B3C00;
    case 646u: goto L_089B3C08;
    case 647u: goto L_089B3C0C;
    case 648u: goto L_089B3C1C;
    case 649u: goto L_089B3C40;
    case 650u: goto L_089B3C48;
    case 651u: goto L_089B3C50;
    case 652u: goto L_089B3C58;
    case 653u: goto L_089B3C74;
    case 654u: goto L_089B3C88;
    case 655u: goto L_089B3C94;
    case 656u: goto L_089B3CA0;
    case 657u: goto L_089B3CD8;
    case 658u: goto L_089B3CF8;
    case 659u: goto L_089B3D1C;
    case 660u: goto L_089B3D2C;
    case 661u: goto L_089B3D50;
    case 662u: goto L_089B3D5C;
    case 663u: goto L_089B3D78;
    case 664u: goto L_089B3D9C;
    case 665u: goto L_089B3DB0;
    case 666u: goto L_089B3DE4;
    case 667u: goto L_089B3E10;
    case 668u: goto L_089B3E18;
    case 669u: goto L_089B3E34;
    case 670u: goto L_089B3E54;
    case 671u: goto L_089B3E5C;
    case 672u: goto L_089B3E88;
    case 673u: goto L_089B3EA4;
    case 674u: goto L_089B3EC0;
    case 675u: goto L_089B3EDC;
    case 676u: goto L_089B3EF8;
    case 677u: goto L_089B3F14;
    case 678u: goto L_089B3F18;
    case 679u: goto L_089B3F24;
    case 680u: goto L_089B3F48;
    case 681u: goto L_089B3F90;
    case 682u: goto L_089B3F9C;
    case 683u: goto L_089B3FB4;
    case 684u: goto L_089B3FD8;
    case 685u: goto L_089B3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B0000:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0104;
      }
      goto L_089B00FC;
    }
L_089B00FC:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_089B0104;
L_089B0104:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B010C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0128;
      }
      goto L_089B011C;
    }
L_089B011C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B013C;
      }
      goto L_089B0128;
    }
L_089B0128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_089B013C;
L_089B013C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0144:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B01C4;
      }
      goto L_089B0184;
    }
L_089B0184:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089B0194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B0194u) goto L_089B0194;
    return;
L_089B0194:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(31, 0x089B01A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B01A8u) goto L_089B01A8;
    return;
L_089B01A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B01C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B01C4u) goto L_089B01C4;
    return;
L_089B01C4:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[21] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B04B0;
      }
      goto L_089B01E8;
    }
L_089B01E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0298;
      }
      goto L_089B0210;
    }
L_089B0210:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B026C;
      }
      goto L_089B023C;
    }
L_089B023C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089B0248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089B0248u) goto L_089B0248;
    return;
L_089B0248:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0264u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0264u) goto L_089B0264;
    return;
L_089B0264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0298;
      }
      goto L_089B026C;
    }
L_089B026C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089B027Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089B027Cu) goto L_089B027C;
    return;
L_089B027C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0298u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0298u) goto L_089B0298;
    return;
L_089B0298:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B03E0;
      }
      goto L_089B02AC;
    }
L_089B02AC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B031C;
      }
      goto L_089B02E8;
    }
L_089B02E8:
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B02F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B02F4u) goto L_089B02F4;
    return;
L_089B02F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B0310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B0310u) goto L_089B0310;
    return;
L_089B0310:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B031C;
L_089B031C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0370;
      }
      goto L_089B0338;
    }
L_089B0338:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x089B0348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B0348u) goto L_089B0348;
    return;
L_089B0348:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x089B0364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B0364u) goto L_089B0364;
    return;
L_089B0364:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B0370;
L_089B0370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B03C0;
      }
      goto L_089B037C;
    }
L_089B037C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0398u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0398u) goto L_089B0398;
    return;
L_089B0398:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B03B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B03B8u) goto L_089B03B8;
    return;
L_089B03B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B03E0;
      }
      goto L_089B03C0;
    }
L_089B03C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B03E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B03E0u) goto L_089B03E0;
    return;
L_089B03E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B04AC;
      }
      goto L_089B03F0;
    }
L_089B03F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0444;
      }
      goto L_089B0400;
    }
L_089B0400:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B0444;
      }
      goto L_089B0410;
    }
L_089B0410:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B043Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B043Cu) goto L_089B043C;
    return;
L_089B043C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B047C;
      }
      goto L_089B0444;
    }
L_089B0444:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B047C;
      }
      goto L_089B0454;
    }
L_089B0454:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B047C;
      }
      goto L_089B0460;
    }
L_089B0460:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B047Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B047Cu) goto L_089B047C;
    return;
L_089B047C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B04AC;
      }
      goto L_089B0490;
    }
L_089B0490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B04ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B04ACu) goto L_089B04AC;
    return;
L_089B04AC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B04B0;
L_089B04B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B01E8;
      }
      goto L_089B04C8;
    }
L_089B04C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B04F8;
      }
      goto L_089B04D4;
    }
L_089B04D4:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B04E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B04E4u) goto L_089B04E4;
    return;
L_089B04E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B04F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B04F8u) goto L_089B04F8;
    return;
L_089B04F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0564;
      }
      goto L_089B0544;
    }
L_089B0544:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B056C;
      }
      goto L_089B0564;
    }
L_089B0564:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B056C;
L_089B056C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B05B4;
      }
      goto L_089B057C;
    }
L_089B057C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B05A8;
      }
      goto L_089B0594;
    }
L_089B0594:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B05B4;
      }
      goto L_089B05A8;
    }
L_089B05A8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B05DC;
      }
      goto L_089B05B4;
    }
L_089B05B4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B05D8;
      }
      goto L_089B05C0;
    }
L_089B05C0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B05D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B05D4u) goto L_089B05D4;
    return;
L_089B05D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B05D8;
L_089B05D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089B05DC;
L_089B05DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B05F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-416));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CB4;
      }
      goto L_089B0654;
    }
L_089B0654:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089B0664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B0664u) goto L_089B0664;
    return;
L_089B0664:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(31, 0x089B0678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B0678u) goto L_089B0678;
    return;
L_089B0678:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0694u) goto L_089B0694;
    return;
L_089B0694:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[21] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C6C;
      }
      goto L_089B06B8;
    }
L_089B06B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B06F4;
      }
      goto L_089B06D4;
    }
L_089B06D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.set_gpr(31, 0x089B06E8u);
    // nop
    goto L_089B0520;
L_089B06E8:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_089B06F4;
L_089B06F4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C68;
      }
      goto L_089B06FC;
    }
L_089B06FC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x089B0720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B0720u) goto L_089B0720;
    return;
L_089B0720:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(31, 0x089B0748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B0748u) goto L_089B0748;
    return;
L_089B0748:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x089B0778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B0778u) goto L_089B0778;
    return;
L_089B0778:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.set_gpr(31, 0x089B07A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B07A8u) goto L_089B07A8;
    return;
L_089B07A8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B07DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B07DCu) goto L_089B07DC;
    return;
L_089B07DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0914;
      }
      goto L_089B07F0;
    }
L_089B07F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089B081Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B081Cu) goto L_089B081C;
    return;
L_089B081C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089B084Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B084Cu) goto L_089B084C;
    return;
L_089B084C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x089B0888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0888u) goto L_089B0888;
    return;
L_089B0888:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(31, 0x089B08C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B08C4u) goto L_089B08C4;
    return;
L_089B08C4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089B08F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089B08F8u) goto L_089B08F8;
    return;
L_089B08F8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0914u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0914u) goto L_089B0914;
    return;
L_089B0914:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0974;
      }
      goto L_089B0924;
    }
L_089B0924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A1C;
      }
      goto L_089B0934;
    }
L_089B0934:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B096Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B096Cu) goto L_089B096C;
    return;
L_089B096C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A1C;
      }
      goto L_089B0974;
    }
L_089B0974:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A1C;
      }
      goto L_089B0980;
    }
L_089B0980:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089B099Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B099Cu) goto L_089B099C;
    return;
L_089B099C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x089B09BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B09BCu) goto L_089B09BC;
    return;
L_089B09BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(31, 0x089B09E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B09E0u) goto L_089B09E0;
    return;
L_089B09E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0A1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0A1Cu) goto L_089B0A1C;
    return;
L_089B0A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A68;
      }
      goto L_089B0A30;
    }
L_089B0A30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0A68u) goto L_089B0A68;
    return;
L_089B0A68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C64;
      }
      goto L_089B0A7C;
    }
L_089B0A7C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x089B0A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B0A98u) goto L_089B0A98;
    return;
L_089B0A98:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x089B0AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B0AB8u) goto L_089B0AB8;
    return;
L_089B0AB8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x089B0ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B0ADCu) goto L_089B0ADC;
    return;
L_089B0ADC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x089B0B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B0B18u) goto L_089B0B18;
    return;
L_089B0B18:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089B0B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B0B38u) goto L_089B0B38;
    return;
L_089B0B38:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x089B0B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B0B5Cu) goto L_089B0B5C;
    return;
L_089B0B5C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0BD0;
      }
      goto L_089B0B98;
    }
L_089B0B98:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B0BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B0BA8u) goto L_089B0BA8;
    return;
L_089B0BA8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B0BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B0BC4u) goto L_089B0BC4;
    return;
L_089B0BC4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B0BD0;
L_089B0BD0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0C24;
      }
      goto L_089B0BEC;
    }
L_089B0BEC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x089B0BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B0BFCu) goto L_089B0BFC;
    return;
L_089B0BFC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x089B0C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B0C18u) goto L_089B0C18;
    return;
L_089B0C18:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B0C24;
L_089B0C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(380));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0C44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0C44u) goto L_089B0C44;
    return;
L_089B0C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0C64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0C64u) goto L_089B0C64;
    return;
L_089B0C64:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B0C68;
L_089B0C68:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B0C6C;
L_089B0C6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B06B8;
      }
      goto L_089B0C84;
    }
L_089B0C84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B0C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B0C98u) goto L_089B0C98;
    return;
L_089B0C98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B0CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B0CACu) goto L_089B0CAC;
    return;
L_089B0CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F3C;
      }
      goto L_089B0CB4;
    }
L_089B0CB4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F24;
      }
      goto L_089B0CC0;
    }
L_089B0CC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CFC;
      }
      goto L_089B0CDC;
    }
L_089B0CDC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.set_gpr(31, 0x089B0CF0u);
    // nop
    goto L_089B0520;
L_089B0CF0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_089B0CFC;
L_089B0CFC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F20;
      }
      goto L_089B0D04;
    }
L_089B0D04:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089B0D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B0D28u) goto L_089B0D28;
    return;
L_089B0D28:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x089B0D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B0D50u) goto L_089B0D50;
    return;
L_089B0D50:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089B0D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B0D80u) goto L_089B0D80;
    return;
L_089B0D80:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x089B0DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B0DB0u) goto L_089B0DB0;
    return;
L_089B0DB0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0DE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0DE4u) goto L_089B0DE4;
    return;
L_089B0DE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F1C;
      }
      goto L_089B0DF8;
    }
L_089B0DF8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089B0E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0E24u) goto L_089B0E24;
    return;
L_089B0E24:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089B0E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0E54u) goto L_089B0E54;
    return;
L_089B0E54:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x089B0E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0E90u) goto L_089B0E90;
    return;
L_089B0E90:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089B0ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0ECCu) goto L_089B0ECC;
    return;
L_089B0ECC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089B0F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089B0F00u) goto L_089B0F00;
    return;
L_089B0F00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B0F1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0F1Cu) goto L_089B0F1C;
    return;
L_089B0F1C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B0F20;
L_089B0F20:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B0F24;
L_089B0F24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CC0;
      }
      goto L_089B0F3C;
    }
L_089B0F3C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0FE4;
      }
      goto L_089B0FD4;
    }
L_089B0FD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B0FE4;
    }
L_089B0FE4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B100C;
      }
      goto L_089B0FF8;
    }
L_089B0FF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B100C;
    }
L_089B100C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B102C;
      }
      goto L_089B1018;
    }
L_089B1018:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x089B1028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B1028u) goto L_089B1028;
    return;
L_089B1028:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_089B102C;
L_089B102C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30796)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30800), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30796), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1140;
      }
      goto L_089B1074;
    }
L_089B1074:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B10E8;
      }
      goto L_089B107C;
    }
L_089B107C:
    ctx.set_gpr(31, 0x089B1084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 384u, 0x089BE350u>(ctx, &aot_mem) && ctx.pc == 0x089B1084u) goto L_089B1084;
    return;
L_089B1084:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1094u) goto L_089B1094;
    return;
L_089B1094:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10E8;
      }
      goto L_089B10A0;
    }
L_089B10A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10E8;
      }
      goto L_089B10B0;
    }
L_089B10B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B10E8;
      }
      goto L_089B10BC;
    }
L_089B10BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31960));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B10D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B10D8u) goto L_089B10D8;
    return;
L_089B10D8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B10E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B10E8u) goto L_089B10E8;
    return;
L_089B10E8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B112C;
      }
      goto L_089B10F4;
    }
L_089B10F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1140;
      }
      goto L_089B1100;
    }
L_089B1100:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1124u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1124u) goto L_089B1124;
    return;
L_089B1124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1140;
      }
      goto L_089B112C;
    }
L_089B112C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1140;
    }
L_089B1140:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089B1158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1158u) goto L_089B1158;
    return;
L_089B1158:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B117Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B117Cu) goto L_089B117C;
    return;
L_089B117C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1198u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1198u) goto L_089B1198;
    return;
L_089B1198:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B11C8;
      }
      goto L_089B11BC;
    }
L_089B11BC:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B11CC;
      }
      goto L_089B11C8;
    }
L_089B11C8:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(125));
    goto L_089B11CC;
L_089B11CC:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B11F8;
      }
      goto L_089B11DC;
    }
L_089B11DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B11F8;
      }
      goto L_089B11E4;
    }
L_089B11E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089B11F0u);
    // nop
    goto L_089B0154;
L_089B11F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089B11F8;
L_089B11F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1258;
      }
      goto L_089B1204;
    }
L_089B1204:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1228;
      }
      goto L_089B1210;
    }
L_089B1210:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1228u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1228u) goto L_089B1228;
    return;
L_089B1228:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089B1250u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1250u) goto L_089B1250;
    return;
L_089B1250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1290;
      }
      goto L_089B1258;
    }
L_089B1258:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B127C;
      }
      goto L_089B1260;
    }
L_089B1260:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089B1274u);
    // nop
    goto L_089B05F0;
L_089B1274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1290;
      }
      goto L_089B127C;
    }
L_089B127C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089B1290u);
    // nop
    goto L_089B05F0;
L_089B1290:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089B1298;
L_089B1298:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B12C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1310;
      }
      goto L_089B12FC;
    }
L_089B12FC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1318;
      }
      goto L_089B1310;
    }
L_089B1310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B159C;
      }
      goto L_089B1318;
    }
L_089B1318:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1330u) goto L_089B1330;
    return;
L_089B1330:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1348u) goto L_089B1348;
    return;
L_089B1348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30808)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30804)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30808), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30804), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B13D4;
      }
      goto L_089B138C;
    }
L_089B138C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B139Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B139Cu) goto L_089B139C;
    return;
L_089B139C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B13B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B13B8u) goto L_089B13B8;
    return;
L_089B13B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B13CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B13CCu) goto L_089B13CC;
    return;
L_089B13CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B156C;
      }
      goto L_089B13D4;
    }
L_089B13D4:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B13F4;
    }
L_089B13F4:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30960));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B1410:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B141C;
    }
L_089B141C:
    ctx.set_gpr(6, ctx.gpr[2] >> 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B1428;
    }
L_089B1428:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(6, ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B143C;
    }
L_089B143C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1458;
      }
      goto L_089B144C;
    }
L_089B144C:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B1458;
    }
L_089B1458:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B146Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B146Cu) goto L_089B146C;
    return;
L_089B146C:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B1478;
    }
L_089B1478:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1498;
      }
      goto L_089B148C;
    }
L_089B148C:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B1498;
    }
L_089B1498:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B14ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B14ACu) goto L_089B14AC;
    return;
L_089B14AC:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B14B8;
    }
L_089B14B8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B14D8;
      }
      goto L_089B14CC;
    }
L_089B14CC:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B14F0;
      }
      goto L_089B14D8;
    }
L_089B14D8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B14ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B14ECu) goto L_089B14EC;
    return;
L_089B14EC:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    goto L_089B14F0;
L_089B14F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B154C;
      }
      goto L_089B14F8;
    }
L_089B14F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B154C;
      }
      goto L_089B1508;
    }
L_089B1508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1520u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1520u) goto L_089B1520;
    return;
L_089B1520:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1544u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1544u) goto L_089B1544;
    return;
L_089B1544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B156C;
      }
      goto L_089B154C;
    }
L_089B154C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B156Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B156Cu) goto L_089B156C;
    return;
L_089B156C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1584u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1584u) goto L_089B1584;
    return;
L_089B1584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B159Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B159Cu) goto L_089B159C;
    return;
L_089B159C:
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
L_089B15B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089B15E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B15E4u) goto L_089B15E4;
    return;
L_089B15E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
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
L_089B1608:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B1614:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1638;
      }
      goto L_089B1630;
    }
L_089B1630:
    ctx.set_gpr(31, 0x089B1638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B1638u) goto L_089B1638;
    return;
L_089B1638:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16B0;
      }
      goto L_089B1648;
    }
L_089B1648:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B1670;
      }
      goto L_089B1658;
    }
L_089B1658:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B1668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1668u) goto L_089B1668;
    return;
L_089B1668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B168C;
      }
      goto L_089B1670;
    }
L_089B1670:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B168C;
      }
      goto L_089B167C;
    }
L_089B167C:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B168Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B168Cu) goto L_089B168C;
    return;
L_089B168C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B16B0;
      }
      goto L_089B16A0;
    }
L_089B16A0:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B16B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B16B0u) goto L_089B16B0;
    return;
L_089B16B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B16C4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B16D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B16E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 384u, 0x089BE350u>(ctx, &aot_mem) && ctx.pc == 0x089B16E8u) goto L_089B16E8;
    return;
L_089B16E8:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1718;
      }
      goto L_089B16F4;
    }
L_089B16F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1718u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1718u) goto L_089B1718;
    return;
L_089B1718:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B172C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(12, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(11, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, 48u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[3] >> 20u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(14, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(13, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[14]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B1780;
      }
      goto L_089B177C;
    }
L_089B177C:
    ctx.set_gpr(14, 0u + 0u);
    goto L_089B1780;
L_089B1780:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B178C;
      }
      goto L_089B1788;
    }
L_089B1788:
    ctx.set_gpr(13, 0u + 0u);
    goto L_089B178C;
L_089B178C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B1798;
      }
      goto L_089B1794;
    }
L_089B1794:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089B1798;
L_089B1798:
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-14212));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    goto L_089B17A8;
L_089B17A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_089B17A8;
      }
      goto L_089B17CC;
    }
L_089B17CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B17D4;
    }
L_089B17D4:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B17DC;
    }
L_089B17DC:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B17E4;
    }
L_089B17E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B17F0;
    }
L_089B17F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B180C;
    }
L_089B180C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B1820;
    }
L_089B1820:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B182C;
    }
L_089B182C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(93)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1870;
      }
      goto L_089B1838;
    }
L_089B1838:
    ctx.set_gpr(5, ctx.gpr[10] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(5, ctx.gpr[14] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[14]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[13] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    goto L_089B1870;
L_089B1870:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B187C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B189Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B189Cu) goto L_089B189C;
    return;
L_089B189C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B18FC;
      }
      goto L_089B18A8;
    }
L_089B18A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B18C8;
      }
      goto L_089B18B8;
    }
L_089B18B8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B18C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B18C8u) goto L_089B18C8;
    return;
L_089B18C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B18EC;
      }
      goto L_089B18DC;
    }
L_089B18DC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B18ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B18ECu) goto L_089B18EC;
    return;
L_089B18EC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B18FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B18FCu) goto L_089B18FC;
    return;
L_089B18FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1918;
      }
      goto L_089B1908;
    }
L_089B1908:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1918u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1918u) goto L_089B1918;
    return;
L_089B1918:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1934;
      }
      goto L_089B1924;
    }
L_089B1924:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1934u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1934u) goto L_089B1934;
    return;
L_089B1934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1950;
      }
      goto L_089B1940;
    }
L_089B1940:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B1950u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1950u) goto L_089B1950;
    return;
L_089B1950:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B1978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B19E0;
      }
      goto L_089B19BC;
    }
L_089B19BC:
    ctx.set_gpr(31, 0x089B19C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B19C4u) goto L_089B19C4;
    return;
L_089B19C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B19D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 242u, 0x08991420u>(ctx, &aot_mem) && ctx.pc == 0x089B19D0u) goto L_089B19D0;
    return;
L_089B19D0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B19E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B19E0u) goto L_089B19E0;
    return;
L_089B19E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089B19F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 841u, 0x08947E44u>(ctx, &aot_mem) && ctx.pc == 0x089B19F4u) goto L_089B19F4;
    return;
L_089B19F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1A08;
      }
      goto L_089B1A00;
    }
L_089B1A00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(180));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_089B1A08;
L_089B1A08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1A30;
      }
      goto L_089B1A14;
    }
L_089B1A14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B1A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x089B1A2Cu) goto L_089B1A2C;
    return;
L_089B1A2C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089B1A30;
L_089B1A30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
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
L_089B1A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089B1A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1A84u) goto L_089B1A84;
    return;
L_089B1A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 331u, 0x0898DD10u>(ctx, &aot_mem) && ctx.pc == 0x089B1A90u) goto L_089B1A90;
    return;
L_089B1A90:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1AA0u) goto L_089B1AA0;
    return;
L_089B1AA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1AACu) goto L_089B1AAC;
    return;
L_089B1AAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1AC4u) goto L_089B1AC4;
    return;
L_089B1AC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem) && ctx.pc == 0x089B1AD0u) goto L_089B1AD0;
    return;
L_089B1AD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1B0C;
      }
      goto L_089B1ADC;
    }
L_089B1ADC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1AF8;
      }
      goto L_089B1AEC;
    }
L_089B1AEC:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1B0C;
      }
      goto L_089B1AF8;
    }
L_089B1AF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089B1B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1B0Cu) goto L_089B1B0C;
    return;
L_089B1B0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x089B1B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1B20u) goto L_089B1B20;
    return;
L_089B1B20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x089B1B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1B34u) goto L_089B1B34;
    return;
L_089B1B34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1C0C;
      }
      goto L_089B1B44;
    }
L_089B1B44:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1B50u) goto L_089B1B50;
    return;
L_089B1B50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1B5Cu) goto L_089B1B5C;
    return;
L_089B1B5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1B74u) goto L_089B1B74;
    return;
L_089B1B74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem) && ctx.pc == 0x089B1B80u) goto L_089B1B80;
    return;
L_089B1B80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1BBC;
      }
      goto L_089B1B8C;
    }
L_089B1B8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1BA8;
      }
      goto L_089B1B9C;
    }
L_089B1B9C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1BBC;
      }
      goto L_089B1BA8;
    }
L_089B1BA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089B1BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1BBCu) goto L_089B1BBC;
    return;
L_089B1BBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x089B1BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1BD0u) goto L_089B1BD0;
    return;
L_089B1BD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x089B1BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1BE4u) goto L_089B1BE4;
    return;
L_089B1BE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1BF8;
      }
      goto L_089B1BF0;
    }
L_089B1BF0:
    ctx.set_gpr(31, 0x089B1BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1BF8u) goto L_089B1BF8;
    return;
L_089B1BF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1C0C;
      }
      goto L_089B1C04;
    }
L_089B1C04:
    ctx.set_gpr(31, 0x089B1C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1C0Cu) goto L_089B1C0C;
    return;
L_089B1C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1DB8;
      }
      goto L_089B1C1C;
    }
L_089B1C1C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1C28u) goto L_089B1C28;
    return;
L_089B1C28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C34u) goto L_089B1C34;
    return;
L_089B1C34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1C44u) goto L_089B1C44;
    return;
L_089B1C44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1C50u) goto L_089B1C50;
    return;
L_089B1C50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1C7Cu) goto L_089B1C7C;
    return;
L_089B1C7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 176u, 0x089F4E70u>(ctx, &aot_mem) && ctx.pc == 0x089B1C88u) goto L_089B1C88;
    return;
L_089B1C88:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1C98u) goto L_089B1C98;
    return;
L_089B1C98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 176u, 0x089F4E70u>(ctx, &aot_mem) && ctx.pc == 0x089B1CA4u) goto L_089B1CA4;
    return;
L_089B1CA4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1CE0;
      }
      goto L_089B1CB4;
    }
L_089B1CB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1CD0;
      }
      goto L_089B1CC4;
    }
L_089B1CC4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1CE0;
      }
      goto L_089B1CD0;
    }
L_089B1CD0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B1CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1CE0u) goto L_089B1CE0;
    return;
L_089B1CE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1D18;
      }
      goto L_089B1CEC;
    }
L_089B1CEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1D08;
      }
      goto L_089B1CFC;
    }
L_089B1CFC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1D18;
      }
      goto L_089B1D08;
    }
L_089B1D08:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B1D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1D18u) goto L_089B1D18;
    return;
L_089B1D18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x089B1D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1D2Cu) goto L_089B1D2C;
    return;
L_089B1D2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089B1D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1D40u) goto L_089B1D40;
    return;
L_089B1D40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089B1D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1D54u) goto L_089B1D54;
    return;
L_089B1D54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x089B1D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1D68u) goto L_089B1D68;
    return;
L_089B1D68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1D7C;
      }
      goto L_089B1D74;
    }
L_089B1D74:
    ctx.set_gpr(31, 0x089B1D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1D7Cu) goto L_089B1D7C;
    return;
L_089B1D7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1D90;
      }
      goto L_089B1D88;
    }
L_089B1D88:
    ctx.set_gpr(31, 0x089B1D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1D90u) goto L_089B1D90;
    return;
L_089B1D90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1DA4;
      }
      goto L_089B1D9C;
    }
L_089B1D9C:
    ctx.set_gpr(31, 0x089B1DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1DA4u) goto L_089B1DA4;
    return;
L_089B1DA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1DB8;
      }
      goto L_089B1DB0;
    }
L_089B1DB0:
    ctx.set_gpr(31, 0x089B1DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1DB8u) goto L_089B1DB8;
    return;
L_089B1DB8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1DD8;
      }
      goto L_089B1DCC;
    }
L_089B1DCC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1DE8;
      }
      goto L_089B1DD8;
    }
L_089B1DD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1DE8;
      }
      goto L_089B1DE4;
    }
L_089B1DE4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B1DE8;
L_089B1DE8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F48;
      }
      goto L_089B1DF0;
    }
L_089B1DF0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1DFCu) goto L_089B1DFC;
    return;
L_089B1DFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1E08u) goto L_089B1E08;
    return;
L_089B1E08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B1EA4;
      }
      goto L_089B1E20;
    }
L_089B1E20:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1E2Cu) goto L_089B1E2C;
    return;
L_089B1E2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 38u, 0x088F8384u>(ctx, &aot_mem) && ctx.pc == 0x089B1E38u) goto L_089B1E38;
    return;
L_089B1E38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1E50u) goto L_089B1E50;
    return;
L_089B1E50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1E88;
      }
      goto L_089B1E5C;
    }
L_089B1E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1E78;
      }
      goto L_089B1E6C;
    }
L_089B1E6C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1E88;
      }
      goto L_089B1E78;
    }
L_089B1E78:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089B1E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1E88u) goto L_089B1E88;
    return;
L_089B1E88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F20;
      }
      goto L_089B1E94;
    }
L_089B1E94:
    ctx.set_gpr(31, 0x089B1E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1E9Cu) goto L_089B1E9C;
    return;
L_089B1E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F20;
      }
      goto L_089B1EA4;
    }
L_089B1EA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1EB0u) goto L_089B1EB0;
    return;
L_089B1EB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 176u, 0x089F4E70u>(ctx, &aot_mem) && ctx.pc == 0x089B1EBCu) goto L_089B1EBC;
    return;
L_089B1EBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1ED4u) goto L_089B1ED4;
    return;
L_089B1ED4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1F0C;
      }
      goto L_089B1EE0;
    }
L_089B1EE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1EFC;
      }
      goto L_089B1EF0;
    }
L_089B1EF0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F0C;
      }
      goto L_089B1EFC;
    }
L_089B1EFC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B1F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1F0Cu) goto L_089B1F0C;
    return;
L_089B1F0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F20;
      }
      goto L_089B1F18;
    }
L_089B1F18:
    ctx.set_gpr(31, 0x089B1F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1F20u) goto L_089B1F20;
    return;
L_089B1F20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089B1F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1F34u) goto L_089B1F34;
    return;
L_089B1F34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F48;
      }
      goto L_089B1F40;
    }
L_089B1F40:
    ctx.set_gpr(31, 0x089B1F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B1F48u) goto L_089B1F48;
    return;
L_089B1F48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2020;
      }
      goto L_089B1F58;
    }
L_089B1F58:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1F64u) goto L_089B1F64;
    return;
L_089B1F64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1F70u) goto L_089B1F70;
    return;
L_089B1F70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B1F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1F88u) goto L_089B1F88;
    return;
L_089B1F88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B1F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 38u, 0x088F8384u>(ctx, &aot_mem) && ctx.pc == 0x089B1F94u) goto L_089B1F94;
    return;
L_089B1F94:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B1FD0;
      }
      goto L_089B1FA0;
    }
L_089B1FA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1FBC;
      }
      goto L_089B1FB0;
    }
L_089B1FB0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1FD0;
      }
      goto L_089B1FBC;
    }
L_089B1FBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089B1FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1FD0u) goto L_089B1FD0;
    return;
L_089B1FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089B1FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B1FE4u) goto L_089B1FE4;
    return;
L_089B1FE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089B1FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1FF8u) goto L_089B1FF8;
    return;
L_089B1FF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B200C;
      }
      goto L_089B2004;
    }
L_089B2004:
    ctx.set_gpr(31, 0x089B200Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B200Cu) goto L_089B200C;
    return;
L_089B200C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2020;
      }
      goto L_089B2018;
    }
L_089B2018:
    ctx.set_gpr(31, 0x089B2020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B2020u) goto L_089B2020;
    return;
L_089B2020:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089B2034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B2034u) goto L_089B2034;
    return;
L_089B2034:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B20C0;
      }
      goto L_089B2050;
    }
L_089B2050:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B2068;
    }
L_089B2068:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(31, 0x089B207Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B207Cu) goto L_089B207C;
    return;
L_089B207C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B2084;
    }
L_089B2084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2090;
      }
      goto L_089B208C;
    }
L_089B208C:
    ctx.set_gpr(20, 0u + 0u);
    goto L_089B2090;
L_089B2090:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B20BC;
      }
      goto L_089B2098;
    }
L_089B2098:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B20B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B20B0u) goto L_089B20B0;
    return;
L_089B20B0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    goto L_089B20BC;
L_089B20BC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089B20C0;
L_089B20C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2050;
      }
      goto L_089B20CC;
    }
L_089B20CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B20E0;
      }
      goto L_089B20D8;
    }
L_089B20D8:
    ctx.set_gpr(31, 0x089B20E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B20E0u) goto L_089B20E0;
    return;
L_089B20E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B20F4;
      }
      goto L_089B20EC;
    }
L_089B20EC:
    ctx.set_gpr(31, 0x089B20F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B20F4u) goto L_089B20F4;
    return;
L_089B20F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2108;
      }
      goto L_089B2100;
    }
L_089B2100:
    ctx.set_gpr(31, 0x089B2108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B2108u) goto L_089B2108;
    return;
L_089B2108:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B2130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B215Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B215Cu) goto L_089B215C;
    return;
L_089B215C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2240;
      }
      goto L_089B216C;
    }
L_089B216C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2240;
      }
      goto L_089B2174;
    }
L_089B2174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B21C0;
      }
      goto L_089B2180;
    }
L_089B2180:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B218Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B218Cu) goto L_089B218C;
    return;
L_089B218C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B2198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 588u, 0x0898F458u>(ctx, &aot_mem) && ctx.pc == 0x089B2198u) goto L_089B2198;
    return;
L_089B2198:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B21ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B21ACu) goto L_089B21AC;
    return;
L_089B21AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B21C0;
      }
      goto L_089B21B8;
    }
L_089B21B8:
    ctx.set_gpr(31, 0x089B21C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B21C0u) goto L_089B21C0;
    return;
L_089B21C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B21E8;
      }
      goto L_089B21D0;
    }
L_089B21D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B21E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B21E4u) goto L_089B21E4;
    return;
L_089B21E4:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    goto L_089B21E8;
L_089B21E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2214u) goto L_089B2214;
    return;
L_089B2214:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2240;
      }
      goto L_089B2220;
    }
L_089B2220:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2240;
      }
      goto L_089B222C;
    }
L_089B222C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B2240u);
    // nop
    goto L_089B3A94;
L_089B2240:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B2250;
      }
      goto L_089B2248;
    }
L_089B2248:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089B2250;
L_089B2250:
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
L_089B2270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2294u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2294u) goto L_089B2294;
    return;
L_089B2294:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B22B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2448;
      }
      goto L_089B2440;
    }
L_089B2440:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_089B2448;
L_089B2448:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B2450:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B246C;
      }
      goto L_089B2460;
    }
L_089B2460:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2480;
      }
      goto L_089B246C;
    }
L_089B246C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_089B2480;
L_089B2480:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B2488:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B2494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[21] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2578;
      }
      goto L_089B2558;
    }
L_089B2558:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2578u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2578u) goto L_089B2578;
    return;
L_089B2578:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B25D8;
      }
      goto L_089B258C;
    }
L_089B258C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B25B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B25B0u) goto L_089B25B0;
    return;
L_089B25B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B25D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B25D8u) goto L_089B25D8;
    return;
L_089B25D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2614;
      }
      goto L_089B25E8;
    }
L_089B25E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2614;
      }
      goto L_089B25F4;
    }
L_089B25F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2614u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2614u) goto L_089B2614;
    return;
L_089B2614:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B2648;
      }
      goto L_089B2628;
    }
L_089B2628:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2648u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2648u) goto L_089B2648;
    return;
L_089B2648:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2868;
      }
      goto L_089B2654;
    }
L_089B2654:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B26A0;
      }
      goto L_089B267C;
    }
L_089B267C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089B269Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089B269Cu) goto L_089B269C;
    return;
L_089B269C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089B26A0;
L_089B26A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B2784;
      }
      goto L_089B26B4;
    }
L_089B26B4:
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2708;
      }
      goto L_089B26E0;
    }
L_089B26E0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B26F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B26F0u) goto L_089B26F0;
    return;
L_089B26F0:
    ctx.fpr[25] = ctx.fpr[25] - ctx.fpr[0];
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B2704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B2704u) goto L_089B2704;
    return;
L_089B2704:
    ctx.fpr[23] = ctx.fpr[23] - ctx.fpr[0];
    goto L_089B2708;
L_089B2708:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B274C;
      }
      goto L_089B2724;
    }
L_089B2724:
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x089B2734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B2734u) goto L_089B2734;
    return;
L_089B2734:
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[0];
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x089B2748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B2748u) goto L_089B2748;
    return;
L_089B2748:
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[0];
    goto L_089B274C;
L_089B274C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089B2784;
L_089B2784:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2864;
      }
      goto L_089B2794;
    }
L_089B2794:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27F0;
      }
      goto L_089B27A4;
    }
L_089B27A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B27F0;
      }
      goto L_089B27B4;
    }
L_089B27B4:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-14068)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2834;
      }
      goto L_089B27F0;
    }
L_089B27F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B2834;
      }
      goto L_089B2800;
    }
L_089B2800:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2834;
      }
      goto L_089B280C;
    }
L_089B280C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B2834;
L_089B2834:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B2864;
      }
      goto L_089B2848;
    }
L_089B2848:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B2864;
L_089B2864:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B2868;
L_089B2868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2654;
      }
      goto L_089B2880;
    }
L_089B2880:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B28AC;
      }
      goto L_089B2894;
    }
L_089B2894:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B28ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B28ACu) goto L_089B28AC;
    return;
L_089B28AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B28F0;
      }
      goto L_089B28C0;
    }
L_089B28C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B28D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B28D8u) goto L_089B28D8;
    return;
L_089B28D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B28F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B28F0u) goto L_089B28F0;
    return;
L_089B28F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2924;
      }
      goto L_089B2900;
    }
L_089B2900:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2924;
      }
      goto L_089B290C;
    }
L_089B290C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2924u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2924u) goto L_089B2924;
    return;
L_089B2924:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B2950;
      }
      goto L_089B2938;
    }
L_089B2938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2950u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2950u) goto L_089B2950;
    return;
L_089B2950:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B2988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B29CC;
      }
      goto L_089B29AC;
    }
L_089B29AC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B29D4;
      }
      goto L_089B29CC;
    }
L_089B29CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B29D4;
L_089B29D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A1C;
      }
      goto L_089B29E4;
    }
L_089B29E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2A10;
      }
      goto L_089B29FC;
    }
L_089B29FC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2A1C;
      }
      goto L_089B2A10;
    }
L_089B2A10:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A44;
      }
      goto L_089B2A1C;
    }
L_089B2A1C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A40;
      }
      goto L_089B2A28;
    }
L_089B2A28:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B2A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B2A3Cu) goto L_089B2A3C;
    return;
L_089B2A3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B2A40;
L_089B2A40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089B2A44;
L_089B2A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B2A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[23] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(628));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2B68u) goto L_089B2B68;
    return;
L_089B2B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2B9C;
      }
      goto L_089B2B7C;
    }
L_089B2B7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(556));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2B9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2B9Cu) goto L_089B2B9C;
    return;
L_089B2B9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2BFC;
      }
      goto L_089B2BB0;
    }
L_089B2BB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2BD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2BD4u) goto L_089B2BD4;
    return;
L_089B2BD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2BFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2BFCu) goto L_089B2BFC;
    return;
L_089B2BFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C1C;
      }
      goto L_089B2C0C;
    }
L_089B2C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C34;
      }
      goto L_089B2C1C;
    }
L_089B2C1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C54;
      }
      goto L_089B2C28;
    }
L_089B2C28:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C54;
      }
      goto L_089B2C34;
    }
L_089B2C34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2C54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2C54u) goto L_089B2C54;
    return;
L_089B2C54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C88;
      }
      goto L_089B2C68;
    }
L_089B2C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B2C88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2C88u) goto L_089B2C88;
    return;
L_089B2C88:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3218;
      }
      goto L_089B2C98;
    }
L_089B2C98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2CD4;
      }
      goto L_089B2CB4;
    }
L_089B2CB4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.set_gpr(31, 0x089B2CC8u);
    // nop
    goto L_089B2988;
L_089B2CC8:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_089B2CD4;
L_089B2CD4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3214;
      }
      goto L_089B2CDC;
    }
L_089B2CDC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x089B2D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B2D00u) goto L_089B2D00;
    return;
L_089B2D00:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089B2D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B2D28u) goto L_089B2D28;
    return;
L_089B2D28:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089B2D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B2D58u) goto L_089B2D58;
    return;
L_089B2D58:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089B2D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089B2D88u) goto L_089B2D88;
    return;
L_089B2D88:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2EE4;
      }
      goto L_089B2DC8;
    }
L_089B2DC8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x089B2DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2DF4u) goto L_089B2DF4;
    return;
L_089B2DF4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089B2E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2E24u) goto L_089B2E24;
    return;
L_089B2E24:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x089B2E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2E60u) goto L_089B2E60;
    return;
L_089B2E60:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x089B2E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2E9Cu) goto L_089B2E9C;
    return;
L_089B2E9C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089B2EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089B2EE0u) goto L_089B2EE0;
    return;
L_089B2EE0:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089B2EE4;
L_089B2EE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2F50;
      }
      goto L_089B2EF4;
    }
L_089B2EF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3000;
      }
      goto L_089B2F04;
    }
L_089B2F04:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3000;
      }
      goto L_089B2F50;
    }
L_089B2F50:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3000;
      }
      goto L_089B2F5C;
    }
L_089B2F5C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089B2F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B2F78u) goto L_089B2F78;
    return;
L_089B2F78:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x089B2F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B2F98u) goto L_089B2F98;
    return;
L_089B2F98:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089B2FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B2FBCu) goto L_089B2FBC;
    return;
L_089B2FBC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14064)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089B3000;
L_089B3000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B304C;
      }
      goto L_089B3014;
    }
L_089B3014:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B304C;
L_089B304C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3210;
      }
      goto L_089B3060;
    }
L_089B3060:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x089B307Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B307Cu) goto L_089B307C;
    return;
L_089B307C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089B309Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B309Cu) goto L_089B309C;
    return;
L_089B309C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089B30C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B30C0u) goto L_089B30C0;
    return;
L_089B30C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[21] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089B30F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B30F4u) goto L_089B30F4;
    return;
L_089B30F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089B3114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B3114u) goto L_089B3114;
    return;
L_089B3114:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089B3138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 597u, 0x0883EA18u>(ctx, &aot_mem) && ctx.pc == 0x089B3138u) goto L_089B3138;
    return;
L_089B3138:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3194;
      }
      goto L_089B316C;
    }
L_089B316C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x089B317Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B317Cu) goto L_089B317C;
    return;
L_089B317C:
    ctx.fpr[21] = ctx.fpr[21] - ctx.fpr[0];
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x089B3190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B3190u) goto L_089B3190;
    return;
L_089B3190:
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[0];
    goto L_089B3194;
L_089B3194:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B31D8;
      }
      goto L_089B31B0;
    }
L_089B31B0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089B31C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B31C0u) goto L_089B31C0;
    return;
L_089B31C0:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089B31D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B31D4u) goto L_089B31D4;
    return;
L_089B31D4:
    ctx.fpr[25] = ctx.fpr[25] - ctx.fpr[0];
    goto L_089B31D8;
L_089B31D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    goto L_089B3210;
L_089B3210:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B3214;
L_089B3214:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B3218;
L_089B3218:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C98;
      }
      goto L_089B3230;
    }
L_089B3230:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(628));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3248u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3248u) goto L_089B3248;
    return;
L_089B3248:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3274;
      }
      goto L_089B325C;
    }
L_089B325C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(556));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3274u) goto L_089B3274;
    return;
L_089B3274:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B32B8;
      }
      goto L_089B3288;
    }
L_089B3288:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B32A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B32A0u) goto L_089B32A0;
    return;
L_089B32A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B32B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B32B8u) goto L_089B32B8;
    return;
L_089B32B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B32D8;
      }
      goto L_089B32C8;
    }
L_089B32C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B32F0;
      }
      goto L_089B32D8;
    }
L_089B32D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3308;
      }
      goto L_089B32E4;
    }
L_089B32E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3308;
      }
      goto L_089B32F0;
    }
L_089B32F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3308u) goto L_089B3308;
    return;
L_089B3308:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3334;
      }
      goto L_089B331C;
    }
L_089B331C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3334u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3334u) goto L_089B3334;
    return;
L_089B3334:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(720));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B338C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B33D8;
      }
      goto L_089B33CC;
    }
L_089B33CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3440;
      }
      goto L_089B33D8;
    }
L_089B33D8:
    ctx.set_gpr(31, 0x089B33E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 384u, 0x089BE350u>(ctx, &aot_mem) && ctx.pc == 0x089B33E0u) goto L_089B33E0;
    return;
L_089B33E0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30792), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B342C;
      }
      goto L_089B33F0;
    }
L_089B33F0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3440;
      }
      goto L_089B33FC;
    }
L_089B33FC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3424u) goto L_089B3424;
    return;
L_089B3424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3440;
      }
      goto L_089B342C;
    }
L_089B342C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3524;
      }
      goto L_089B3440;
    }
L_089B3440:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3470;
      }
      goto L_089B3460;
    }
L_089B3460:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3524;
      }
      goto L_089B3470;
    }
L_089B3470:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3498;
      }
      goto L_089B3484;
    }
L_089B3484:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3524;
      }
      goto L_089B3498;
    }
L_089B3498:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B34BC;
      }
      goto L_089B34A4;
    }
L_089B34A4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x089B34B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x089B34B8u) goto L_089B34B8;
    return;
L_089B34B8:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_089B34BC;
L_089B34BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30796)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30800), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30796), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B351Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B351Cu) goto L_089B351C;
    return;
L_089B351C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089B3524;
L_089B3524:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3594;
      }
      goto L_089B357C;
    }
L_089B357C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3594;
      }
      goto L_089B3584;
    }
L_089B3584:
    ctx.set_gpr(31, 0x089B358Cu);
    // nop
    goto L_089B2494;
L_089B358C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089B3594;
L_089B3594:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35C8;
      }
      goto L_089B35A0;
    }
L_089B35A0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089B35C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B35C0u) goto L_089B35C0;
    return;
L_089B35C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3600;
      }
      goto L_089B35C8;
    }
L_089B35C8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B35EC;
      }
      goto L_089B35D0;
    }
L_089B35D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089B35E4u);
    // nop
    goto L_089B2A58;
L_089B35E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3600;
      }
      goto L_089B35EC;
    }
L_089B35EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089B3600u);
    // nop
    goto L_089B2A58;
L_089B3600:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B366C;
      }
      goto L_089B3658;
    }
L_089B3658:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3674;
      }
      goto L_089B366C;
    }
L_089B366C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3954;
      }
      goto L_089B3674;
    }
L_089B3674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30808)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30804)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30808), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30804), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3720;
      }
      goto L_089B36BC;
    }
L_089B36BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B36D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B36D8u) goto L_089B36D8;
    return;
L_089B36D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4102));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B36FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B36FCu) goto L_089B36FC;
    return;
L_089B36FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3718u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3718u) goto L_089B3718;
    return;
L_089B3718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3954;
      }
      goto L_089B3720;
    }
L_089B3720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3744u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3744u) goto L_089B3744;
    return;
L_089B3744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3764u) goto L_089B3764;
    return;
L_089B3764:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B3784;
    }
L_089B3784:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-30936));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B37A0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B37AC;
    }
L_089B37AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] >> 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B37BC;
    }
L_089B37BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(6, ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B37D4;
    }
L_089B37D4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B37F4;
      }
      goto L_089B37E4;
    }
L_089B37E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B37F4;
    }
L_089B37F4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3808u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3808u) goto L_089B3808;
    return;
L_089B3808:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B3814;
    }
L_089B3814:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3838;
      }
      goto L_089B3828;
    }
L_089B3828:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B3838;
    }
L_089B3838:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B384Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B384Cu) goto L_089B384C;
    return;
L_089B384C:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B3858;
    }
L_089B3858:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B387C;
      }
      goto L_089B386C;
    }
L_089B386C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3894;
      }
      goto L_089B387C;
    }
L_089B387C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3890u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3890u) goto L_089B3890;
    return;
L_089B3890:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    goto L_089B3894;
L_089B3894:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B38F8;
      }
      goto L_089B389C;
    }
L_089B389C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B38F8;
      }
      goto L_089B38AC;
    }
L_089B38AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B38C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B38C8u) goto L_089B38C8;
    return;
L_089B38C8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B38F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B38F0u) goto L_089B38F0;
    return;
L_089B38F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B391C;
      }
      goto L_089B38F8;
    }
L_089B38F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B391Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B391Cu) goto L_089B391C;
    return;
L_089B391C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3938u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3938u) goto L_089B3938;
    return;
L_089B3938:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30792)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3954u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3954u) goto L_089B3954;
    return;
L_089B3954:
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
L_089B3970:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x089B3984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B3984u) goto L_089B3984;
    return;
L_089B3984:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3994:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089B39C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B39C0u) goto L_089B39C0;
    return;
L_089B39C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
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
L_089B39E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B39F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3A14;
      }
      goto L_089B3A0C;
    }
L_089B3A0C:
    ctx.set_gpr(31, 0x089B3A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B3A14u) goto L_089B3A14;
    return;
L_089B3A14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3A2C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B3A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 384u, 0x089BE350u>(ctx, &aot_mem) && ctx.pc == 0x089B3A50u) goto L_089B3A50;
    return;
L_089B3A50:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3A80;
      }
      goto L_089B3A5C;
    }
L_089B3A5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3A80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3A80u) goto L_089B3A80;
    return;
L_089B3A80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(61)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089B3B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B3B3Cu) goto L_089B3B3C;
    return;
L_089B3B3C:
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(235), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089B3BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B3BBCu) goto L_089B3BBC;
    return;
L_089B3BBC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3BCC;
      }
      goto L_089B3BC8;
    }
L_089B3BC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089B3BCC;
L_089B3BCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(11, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B3BF4;
      }
      goto L_089B3BF0;
    }
L_089B3BF0:
    ctx.set_gpr(11, 0u + 0u);
    goto L_089B3BF4;
L_089B3BF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B3C00;
      }
      goto L_089B3BFC;
    }
L_089B3BFC:
    ctx.set_gpr(10, 0u + 0u);
    goto L_089B3C00;
L_089B3C00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B3C0C;
      }
      goto L_089B3C08;
    }
L_089B3C08:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089B3C0C;
L_089B3C0C:
    ctx.set_gpr(8, 2229u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14060));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    goto L_089B3C1C;
L_089B3C1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_089B3C1C;
      }
      goto L_089B3C40;
    }
L_089B3C40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B3CD8;
      }
      goto L_089B3C48;
    }
L_089B3C48:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CD8;
      }
      goto L_089B3C50;
    }
L_089B3C50:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CD8;
      }
      goto L_089B3C58;
    }
L_089B3C58:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3CD8;
      }
      goto L_089B3C74;
    }
L_089B3C74:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3CD8;
      }
      goto L_089B3C88;
    }
L_089B3C88:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CD8;
      }
      goto L_089B3C94;
    }
L_089B3C94:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(93)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CD8;
      }
      goto L_089B3CA0;
    }
L_089B3CA0:
    ctx.set_gpr(4, ctx.gpr[9] << 3u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[11] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[10] << 3u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    goto L_089B3CD8;
L_089B3CD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3CF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30792), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D2C;
      }
      goto L_089B3D1C;
    }
L_089B3D1C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3D2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3D2Cu) goto L_089B3D2C;
    return;
L_089B3D2C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3D50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3D5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(31, 0x089B3D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089B3D78u) goto L_089B3D78;
    return;
L_089B3D78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13916));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(396));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089B3D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089B3D9Cu) goto L_089B3D9C;
    return;
L_089B3D9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3DB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3E18;
      }
      goto L_089B3DE4;
    }
L_089B3DE4:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3E10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3E10u) goto L_089B3E10;
    return;
L_089B3E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3E54;
      }
      goto L_089B3E18;
    }
L_089B3E18:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3E54;
      }
      goto L_089B3E34;
    }
L_089B3E34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3E54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3E54u) goto L_089B3E54;
    return;
L_089B3E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3F18;
      }
      goto L_089B3E5C;
    }
L_089B3E5C:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[2] << 1u);
    ctx.set_gpr(19, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3E88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3E88u) goto L_089B3E88;
    return;
L_089B3E88:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3EA4u) goto L_089B3EA4;
    return;
L_089B3EA4:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3EC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3EC0u) goto L_089B3EC0;
    return;
L_089B3EC0:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3EDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3EDCu) goto L_089B3EDC;
    return;
L_089B3EDC:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3EF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3EF8u) goto L_089B3EF8;
    return;
L_089B3EF8:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3F14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3F14u) goto L_089B3F14;
    return;
L_089B3F14:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B3F18;
L_089B3F18:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3E5C;
      }
      goto L_089B3F24;
    }
L_089B3F24:
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
L_089B3F48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x089B3F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3F90u) goto L_089B3F90;
    return;
L_089B3F90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B3F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B3F9Cu) goto L_089B3F9C;
    return;
L_089B3F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B3FB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3FB4u) goto L_089B3FB4;
    return;
L_089B3FB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 4u, 0x089B4058u>(ctx, &aot_mem); return;
      }
      goto L_089B3FD8;
    }
L_089B3FD8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(18, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 2u, 0x089B4014u>(ctx, &aot_mem); return;
      }
      goto L_089B3FFC;
    }
L_089B3FFC:
    ctx.set_gpr(31, 0x089B4004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0107(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0107_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_107(Runtime &runtime) {
    runtime.register_generated_unit(107u, 0x089B0000u, 16384u, &recomp_unit_0107, &recomp_unit_0107_entry);
    runtime.register_function(0x089B0000u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0104u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B010Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B011Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0128u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B013Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0144u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0154u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0184u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0194u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0210u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B023Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0248u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0264u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B026Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B027Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0298u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0310u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B031Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0338u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0348u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0370u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B037Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0398u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0400u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0410u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B043Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0444u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0454u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B047Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0490u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0520u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0544u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0564u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B056Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B057Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0654u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0664u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0678u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0694u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0720u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0748u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0778u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B081Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B084Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0888u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0914u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0924u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0934u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B096Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0974u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0980u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B099Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ADCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ECCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B100Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1018u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1028u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B102Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1074u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B107Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1084u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1094u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1100u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1124u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B112Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1140u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1158u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B117Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1198u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1204u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1210u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1228u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1250u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1258u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1260u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1274u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B127Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1290u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1298u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1310u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1318u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1330u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1348u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B138Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B139Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1410u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B141Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1428u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B143Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B144Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1458u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B146Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1478u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B148Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1498u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1508u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1520u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1544u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B154Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B156Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1584u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B159Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1608u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1614u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1630u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1638u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1648u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1668u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1670u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B167Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B168Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1718u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B172Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B177Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1780u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1788u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B178Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1794u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1798u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B180Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1820u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B182Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1838u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1870u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B187Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B189Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1908u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1918u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1924u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1934u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1940u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1950u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1978u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ADCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ED4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2004u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B200Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2018u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2020u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2034u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2050u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2068u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B207Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2084u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B208Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2090u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2098u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2100u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2108u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2130u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B215Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B216Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2174u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2180u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B218Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2198u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2214u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2220u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B222Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2240u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2248u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2250u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2270u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2294u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2440u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2448u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2450u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B246Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2480u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2488u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2494u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2558u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2578u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B258Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2614u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2628u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2648u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2654u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B267Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B269Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2704u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2708u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2724u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2734u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2748u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B274Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2784u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2794u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2800u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B280Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2834u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2848u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2864u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2868u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2880u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2894u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2900u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B290Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2924u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2938u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2950u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2988u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3000u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3014u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B304Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3060u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B307Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B309Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3114u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3138u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B316Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B317Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3190u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3194u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3210u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3214u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3218u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3230u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3248u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B325Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3274u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3288u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3308u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B331Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3334u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B338Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3424u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B342Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3440u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3470u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3484u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3498u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B351Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3524u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3548u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B357Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3584u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B358Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3600u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3620u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B366Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3674u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3718u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3720u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3744u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3764u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3784u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3808u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3814u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3828u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3838u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B384Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3858u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B386Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B387Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3890u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3894u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B389Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B391Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3938u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3954u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3970u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3984u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3994u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FFCu, &recomp_unit_0107, "recomp_unit_0107");
}
} // namespace psprecomp
