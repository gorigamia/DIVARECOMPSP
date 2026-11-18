#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0115[4075] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23,
    0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0,
    34, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0,
    0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 68, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 71, 0, 72, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 77, 78, 0, 79, 0, 0, 0, 0, 0, 80, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0,
    89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 93, 0, 94, 0, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0,
    0, 0, 98, 99, 0, 100, 0, 0, 0, 0, 0, 101, 102, 0, 103, 0, 0, 0, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 0, 107, 108, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0,
    133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0,
    0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208,
    0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 245, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0,
    0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266,
    0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274,
    0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0,
    0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 323, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 339, 340, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0,
    351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0,
    0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 372, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379,
    0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 384, 0, 0, 0, 0, 385, 0, 386, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 396,
    0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 405, 0, 406, 0, 0, 0, 407,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0,
    431, 0, 432, 0, 0, 433, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 437, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442,
    0, 443, 0, 0, 0, 444, 0, 0, 445, 446, 0, 0, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452,
    0, 0, 0, 453, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 456, 457, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0,
    0, 468, 0, 0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 486, 487, 0, 0, 0, 0, 488, 0, 0,
    0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 495, 0, 0, 496, 497, 0,
    498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501,
    0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506,
    0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 513, 514, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 517, 518, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522,
    0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    0, 0, 528, 529, 0, 530, 0, 0, 531, 0, 0, 0, 0, 532, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 538, 539, 0, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 557, 0, 558,
    0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 563, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566,
    0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0,
    0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 587,
    0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 591, 0, 0, 0, 592, 0, 593, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0,
    0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598,
    0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0,
    0, 0, 0, 0, 608, 609, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0,
    617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 623, 0, 0, 0, 0, 0, 0, 624, 0, 625, 626, 0,
    0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0,
    637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0,
    0, 641, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 649,
    0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 664, 0, 665, 666, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672,
};
void recomp_unit_0115_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D0000u;
        entry_id = (entry_delta < 16300u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0115[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D0000;
    case 2u: goto L_089D0024;
    case 3u: goto L_089D0044;
    case 4u: goto L_089D00D0;
    case 5u: goto L_089D00E4;
    case 6u: goto L_089D00FC;
    case 7u: goto L_089D0114;
    case 8u: goto L_089D0120;
    case 9u: goto L_089D0138;
    case 10u: goto L_089D013C;
    case 11u: goto L_089D015C;
    case 12u: goto L_089D0168;
    case 13u: goto L_089D0184;
    case 14u: goto L_089D0190;
    case 15u: goto L_089D019C;
    case 16u: goto L_089D01A8;
    case 17u: goto L_089D01B4;
    case 18u: goto L_089D01C0;
    case 19u: goto L_089D01CC;
    case 20u: goto L_089D01D8;
    case 21u: goto L_089D01E4;
    case 22u: goto L_089D01F0;
    case 23u: goto L_089D01FC;
    case 24u: goto L_089D0208;
    case 25u: goto L_089D0214;
    case 26u: goto L_089D0220;
    case 27u: goto L_089D022C;
    case 28u: goto L_089D0238;
    case 29u: goto L_089D0244;
    case 30u: goto L_089D0250;
    case 31u: goto L_089D025C;
    case 32u: goto L_089D0268;
    case 33u: goto L_089D0274;
    case 34u: goto L_089D0280;
    case 35u: goto L_089D0284;
    case 36u: goto L_089D028C;
    case 37u: goto L_089D02B4;
    case 38u: goto L_089D02CC;
    case 39u: goto L_089D02E4;
    case 40u: goto L_089D02FC;
    case 41u: goto L_089D0314;
    case 42u: goto L_089D0328;
    case 43u: goto L_089D0334;
    case 44u: goto L_089D0344;
    case 45u: goto L_089D0360;
    case 46u: goto L_089D036C;
    case 47u: goto L_089D0378;
    case 48u: goto L_089D0384;
    case 49u: goto L_089D0390;
    case 50u: goto L_089D039C;
    case 51u: goto L_089D03A8;
    case 52u: goto L_089D03B4;
    case 53u: goto L_089D03C0;
    case 54u: goto L_089D03CC;
    case 55u: goto L_089D03D0;
    case 56u: goto L_089D03D8;
    case 57u: goto L_089D03E4;
    case 58u: goto L_089D0400;
    case 59u: goto L_089D040C;
    case 60u: goto L_089D0418;
    case 61u: goto L_089D0424;
    case 62u: goto L_089D0430;
    case 63u: goto L_089D043C;
    case 64u: goto L_089D0448;
    case 65u: goto L_089D0454;
    case 66u: goto L_089D0460;
    case 67u: goto L_089D046C;
    case 68u: goto L_089D0470;
    case 69u: goto L_089D0478;
    case 70u: goto L_089D04AC;
    case 71u: goto L_089D04B0;
    case 72u: goto L_089D04B8;
    case 73u: goto L_089D04D0;
    case 74u: goto L_089D04D4;
    case 75u: goto L_089D04DC;
    case 76u: goto L_089D04F0;
    case 77u: goto L_089D0508;
    case 78u: goto L_089D050C;
    case 79u: goto L_089D0514;
    case 80u: goto L_089D052C;
    case 81u: goto L_089D0530;
    case 82u: goto L_089D0538;
    case 83u: goto L_089D054C;
    case 84u: goto L_089D0564;
    case 85u: goto L_089D0598;
    case 86u: goto L_089D05A8;
    case 87u: goto L_089D05E8;
    case 88u: goto L_089D05F8;
    case 89u: goto L_089D0600;
    case 90u: goto L_089D0618;
    case 91u: goto L_089D0628;
    case 92u: goto L_089D0640;
    case 93u: goto L_089D0644;
    case 94u: goto L_089D064C;
    case 95u: goto L_089D0664;
    case 96u: goto L_089D0668;
    case 97u: goto L_089D0670;
    case 98u: goto L_089D0688;
    case 99u: goto L_089D068C;
    case 100u: goto L_089D0694;
    case 101u: goto L_089D06AC;
    case 102u: goto L_089D06B0;
    case 103u: goto L_089D06B8;
    case 104u: goto L_089D06D0;
    case 105u: goto L_089D06D4;
    case 106u: goto L_089D06DC;
    case 107u: goto L_089D06F4;
    case 108u: goto L_089D06F8;
    case 109u: goto L_089D0700;
    case 110u: goto L_089D07A4;
    case 111u: goto L_089D07A8;
    case 112u: goto L_089D07C8;
    case 113u: goto L_089D07DC;
    case 114u: goto L_089D0820;
    case 115u: goto L_089D0828;
    case 116u: goto L_089D0834;
    case 117u: goto L_089D0858;
    case 118u: goto L_089D0868;
    case 119u: goto L_089D088C;
    case 120u: goto L_089D0894;
    case 121u: goto L_089D08A4;
    case 122u: goto L_089D08B0;
    case 123u: goto L_089D08CC;
    case 124u: goto L_089D08DC;
    case 125u: goto L_089D08E8;
    case 126u: goto L_089D08F4;
    case 127u: goto L_089D090C;
    case 128u: goto L_089D0938;
    case 129u: goto L_089D0940;
    case 130u: goto L_089D0958;
    case 131u: goto L_089D0968;
    case 132u: goto L_089D0974;
    case 133u: goto L_089D0980;
    case 134u: goto L_089D098C;
    case 135u: goto L_089D0998;
    case 136u: goto L_089D09A4;
    case 137u: goto L_089D09BC;
    case 138u: goto L_089D09D0;
    case 139u: goto L_089D09E0;
    case 140u: goto L_089D09EC;
    case 141u: goto L_089D09F8;
    case 142u: goto L_089D0A0C;
    case 143u: goto L_089D0A1C;
    case 144u: goto L_089D0A28;
    case 145u: goto L_089D0A4C;
    case 146u: goto L_089D0A84;
    case 147u: goto L_089D0A90;
    case 148u: goto L_089D0A98;
    case 149u: goto L_089D0AA8;
    case 150u: goto L_089D0AB4;
    case 151u: goto L_089D0AC4;
    case 152u: goto L_089D0AFC;
    case 153u: goto L_089D0B0C;
    case 154u: goto L_089D0B18;
    case 155u: goto L_089D0B28;
    case 156u: goto L_089D0B34;
    case 157u: goto L_089D0B44;
    case 158u: goto L_089D0B50;
    case 159u: goto L_089D0B60;
    case 160u: goto L_089D0B6C;
    case 161u: goto L_089D0B7C;
    case 162u: goto L_089D0B88;
    case 163u: goto L_089D0B98;
    case 164u: goto L_089D0BA4;
    case 165u: goto L_089D0BB4;
    case 166u: goto L_089D0BC0;
    case 167u: goto L_089D0BCC;
    case 168u: goto L_089D0BD8;
    case 169u: goto L_089D0BEC;
    case 170u: goto L_089D0CB4;
    case 171u: goto L_089D0CBC;
    case 172u: goto L_089D0CEC;
    case 173u: goto L_089D0CF8;
    case 174u: goto L_089D0D28;
    case 175u: goto L_089D0D34;
    case 176u: goto L_089D0D60;
    case 177u: goto L_089D0D6C;
    case 178u: goto L_089D0D98;
    case 179u: goto L_089D0DB8;
    case 180u: goto L_089D0DF4;
    case 181u: goto L_089D0E00;
    case 182u: goto L_089D0E0C;
    case 183u: goto L_089D0E44;
    case 184u: goto L_089D0E60;
    case 185u: goto L_089D0E8C;
    case 186u: goto L_089D0E98;
    case 187u: goto L_089D0F74;
    case 188u: goto L_089D0FB0;
    case 189u: goto L_089D0FD8;
    case 190u: goto L_089D0FE4;
    case 191u: goto L_089D0FFC;
    case 192u: goto L_089D1008;
    case 193u: goto L_089D1020;
    case 194u: goto L_089D1030;
    case 195u: goto L_089D103C;
    case 196u: goto L_089D1040;
    case 197u: goto L_089D1084;
    case 198u: goto L_089D1094;
    case 199u: goto L_089D10BC;
    case 200u: goto L_089D10F4;
    case 201u: goto L_089D1100;
    case 202u: goto L_089D1110;
    case 203u: goto L_089D1134;
    case 204u: goto L_089D1148;
    case 205u: goto L_089D1154;
    case 206u: goto L_089D1160;
    case 207u: goto L_089D1174;
    case 208u: goto L_089D117C;
    case 209u: goto L_089D118C;
    case 210u: goto L_089D11A0;
    case 211u: goto L_089D11E0;
    case 212u: goto L_089D11E8;
    case 213u: goto L_089D11F4;
    case 214u: goto L_089D1200;
    case 215u: goto L_089D1240;
    case 216u: goto L_089D12B4;
    case 217u: goto L_089D12C0;
    case 218u: goto L_089D12D0;
    case 219u: goto L_089D131C;
    case 220u: goto L_089D1338;
    case 221u: goto L_089D1344;
    case 222u: goto L_089D134C;
    case 223u: goto L_089D1358;
    case 224u: goto L_089D136C;
    case 225u: goto L_089D1380;
    case 226u: goto L_089D138C;
    case 227u: goto L_089D13B4;
    case 228u: goto L_089D13F8;
    case 229u: goto L_089D1404;
    case 230u: goto L_089D140C;
    case 231u: goto L_089D1428;
    case 232u: goto L_089D143C;
    case 233u: goto L_089D1444;
    case 234u: goto L_089D1454;
    case 235u: goto L_089D1468;
    case 236u: goto L_089D14AC;
    case 237u: goto L_089D14B4;
    case 238u: goto L_089D14C0;
    case 239u: goto L_089D14CC;
    case 240u: goto L_089D150C;
    case 241u: goto L_089D1580;
    case 242u: goto L_089D158C;
    case 243u: goto L_089D159C;
    case 244u: goto L_089D15A4;
    case 245u: goto L_089D15B0;
    case 246u: goto L_089D15B4;
    case 247u: goto L_089D15C0;
    case 248u: goto L_089D15D4;
    case 249u: goto L_089D1600;
    case 250u: goto L_089D1610;
    case 251u: goto L_089D161C;
    case 252u: goto L_089D1628;
    case 253u: goto L_089D1630;
    case 254u: goto L_089D163C;
    case 255u: goto L_089D1650;
    case 256u: goto L_089D1664;
    case 257u: goto L_089D1670;
    case 258u: goto L_089D16A0;
    case 259u: goto L_089D16E8;
    case 260u: goto L_089D16F4;
    case 261u: goto L_089D1708;
    case 262u: goto L_089D1710;
    case 263u: goto L_089D1720;
    case 264u: goto L_089D1734;
    case 265u: goto L_089D1774;
    case 266u: goto L_089D177C;
    case 267u: goto L_089D1788;
    case 268u: goto L_089D1794;
    case 269u: goto L_089D17D4;
    case 270u: goto L_089D1848;
    case 271u: goto L_089D1854;
    case 272u: goto L_089D1864;
    case 273u: goto L_089D1870;
    case 274u: goto L_089D187C;
    case 275u: goto L_089D1888;
    case 276u: goto L_089D1894;
    case 277u: goto L_089D18A0;
    case 278u: goto L_089D18AC;
    case 279u: goto L_089D18B8;
    case 280u: goto L_089D18C4;
    case 281u: goto L_089D18D0;
    case 282u: goto L_089D18D8;
    case 283u: goto L_089D18E0;
    case 284u: goto L_089D18F4;
    case 285u: goto L_089D1900;
    case 286u: goto L_089D1924;
    case 287u: goto L_089D1938;
    case 288u: goto L_089D1950;
    case 289u: goto L_089D1958;
    case 290u: goto L_089D1968;
    case 291u: goto L_089D1984;
    case 292u: goto L_089D1998;
    case 293u: goto L_089D19A0;
    case 294u: goto L_089D19AC;
    case 295u: goto L_089D19B0;
    case 296u: goto L_089D19CC;
    case 297u: goto L_089D19D8;
    case 298u: goto L_089D19EC;
    case 299u: goto L_089D1A08;
    case 300u: goto L_089D1A18;
    case 301u: goto L_089D1A24;
    case 302u: goto L_089D1A30;
    case 303u: goto L_089D1A38;
    case 304u: goto L_089D1A44;
    case 305u: goto L_089D1A74;
    case 306u: goto L_089D1A94;
    case 307u: goto L_089D1AB0;
    case 308u: goto L_089D1AEC;
    case 309u: goto L_089D1AF8;
    case 310u: goto L_089D1B0C;
    case 311u: goto L_089D1B1C;
    case 312u: goto L_089D1B34;
    case 313u: goto L_089D1B40;
    case 314u: goto L_089D1B4C;
    case 315u: goto L_089D1B68;
    case 316u: goto L_089D1B70;
    case 317u: goto L_089D1B7C;
    case 318u: goto L_089D1B8C;
    case 319u: goto L_089D1BA8;
    case 320u: goto L_089D1BB0;
    case 321u: goto L_089D1BD4;
    case 322u: goto L_089D1BF8;
    case 323u: goto L_089D1C14;
    case 324u: goto L_089D1C18;
    case 325u: goto L_089D1C88;
    case 326u: goto L_089D1C94;
    case 327u: goto L_089D1CB0;
    case 328u: goto L_089D1CB4;
    case 329u: goto L_089D1CE4;
    case 330u: goto L_089D1CF4;
    case 331u: goto L_089D1D14;
    case 332u: goto L_089D1D2C;
    case 333u: goto L_089D1D30;
    case 334u: goto L_089D1D68;
    case 335u: goto L_089D1E08;
    case 336u: goto L_089D1E28;
    case 337u: goto L_089D1E5C;
    case 338u: goto L_089D1E78;
    case 339u: goto L_089D1E84;
    case 340u: goto L_089D1E88;
    case 341u: goto L_089D1E90;
    case 342u: goto L_089D1EA4;
    case 343u: goto L_089D1EAC;
    case 344u: goto L_089D1EB8;
    case 345u: goto L_089D1EC0;
    case 346u: goto L_089D1ECC;
    case 347u: goto L_089D1ED8;
    case 348u: goto L_089D1F44;
    case 349u: goto L_089D1F5C;
    case 350u: goto L_089D1F74;
    case 351u: goto L_089D1F80;
    case 352u: goto L_089D1F94;
    case 353u: goto L_089D1FB0;
    case 354u: goto L_089D1FC0;
    case 355u: goto L_089D1FDC;
    case 356u: goto L_089D1FEC;
    case 357u: goto L_089D2014;
    case 358u: goto L_089D2024;
    case 359u: goto L_089D204C;
    case 360u: goto L_089D205C;
    case 361u: goto L_089D2068;
    case 362u: goto L_089D2070;
    case 363u: goto L_089D2084;
    case 364u: goto L_089D208C;
    case 365u: goto L_089D2094;
    case 366u: goto L_089D20A8;
    case 367u: goto L_089D20C8;
    case 368u: goto L_089D20D0;
    case 369u: goto L_089D20E0;
    case 370u: goto L_089D20F0;
    case 371u: goto L_089D2108;
    case 372u: goto L_089D211C;
    case 373u: goto L_089D2120;
    case 374u: goto L_089D2128;
    case 375u: goto L_089D214C;
    case 376u: goto L_089D215C;
    case 377u: goto L_089D216C;
    case 378u: goto L_089D2174;
    case 379u: goto L_089D217C;
    case 380u: goto L_089D2198;
    case 381u: goto L_089D21C0;
    case 382u: goto L_089D21D4;
    case 383u: goto L_089D21FC;
    case 384u: goto L_089D2208;
    case 385u: goto L_089D221C;
    case 386u: goto L_089D2224;
    case 387u: goto L_089D2228;
    case 388u: goto L_089D2230;
    case 389u: goto L_089D227C;
    case 390u: goto L_089D2284;
    case 391u: goto L_089D2294;
    case 392u: goto L_089D22A4;
    case 393u: goto L_089D22C0;
    case 394u: goto L_089D22E8;
    case 395u: goto L_089D22F0;
    case 396u: goto L_089D22FC;
    case 397u: goto L_089D2304;
    case 398u: goto L_089D230C;
    case 399u: goto L_089D231C;
    case 400u: goto L_089D2328;
    case 401u: goto L_089D2330;
    case 402u: goto L_089D2338;
    case 403u: goto L_089D234C;
    case 404u: goto L_089D2360;
    case 405u: goto L_089D2364;
    case 406u: goto L_089D236C;
    case 407u: goto L_089D237C;
    case 408u: goto L_089D23D4;
    case 409u: goto L_089D23DC;
    case 410u: goto L_089D23E4;
    case 411u: goto L_089D23F0;
    case 412u: goto L_089D240C;
    case 413u: goto L_089D243C;
    case 414u: goto L_089D2450;
    case 415u: goto L_089D245C;
    case 416u: goto L_089D2464;
    case 417u: goto L_089D2474;
    case 418u: goto L_089D24D0;
    case 419u: goto L_089D24EC;
    case 420u: goto L_089D2528;
    case 421u: goto L_089D2554;
    case 422u: goto L_089D2560;
    case 423u: goto L_089D2568;
    case 424u: goto L_089D25A0;
    case 425u: goto L_089D25AC;
    case 426u: goto L_089D25BC;
    case 427u: goto L_089D25C4;
    case 428u: goto L_089D25D0;
    case 429u: goto L_089D25E4;
    case 430u: goto L_089D25EC;
    case 431u: goto L_089D2600;
    case 432u: goto L_089D2608;
    case 433u: goto L_089D2614;
    case 434u: goto L_089D261C;
    case 435u: goto L_089D2628;
    case 436u: goto L_089D2634;
    case 437u: goto L_089D2684;
    case 438u: goto L_089D2688;
    case 439u: goto L_089D26AC;
    case 440u: goto L_089D26E0;
    case 441u: goto L_089D26EC;
    case 442u: goto L_089D26FC;
    case 443u: goto L_089D2704;
    case 444u: goto L_089D2714;
    case 445u: goto L_089D2720;
    case 446u: goto L_089D2724;
    case 447u: goto L_089D2734;
    case 448u: goto L_089D2738;
    case 449u: goto L_089D2760;
    case 450u: goto L_089D2784;
    case 451u: goto L_089D27B4;
    case 452u: goto L_089D27FC;
    case 453u: goto L_089D280C;
    case 454u: goto L_089D2814;
    case 455u: goto L_089D2820;
    case 456u: goto L_089D2838;
    case 457u: goto L_089D283C;
    case 458u: goto L_089D2844;
    case 459u: goto L_089D2850;
    case 460u: goto L_089D286C;
    case 461u: goto L_089D2878;
    case 462u: goto L_089D2938;
    case 463u: goto L_089D2948;
    case 464u: goto L_089D2954;
    case 465u: goto L_089D2980;
    case 466u: goto L_089D29C0;
    case 467u: goto L_089D29E0;
    case 468u: goto L_089D2A04;
    case 469u: goto L_089D2A10;
    case 470u: goto L_089D2A1C;
    case 471u: goto L_089D2A24;
    case 472u: goto L_089D2A44;
    case 473u: goto L_089D2A50;
    case 474u: goto L_089D2A64;
    case 475u: goto L_089D2A78;
    case 476u: goto L_089D2A8C;
    case 477u: goto L_089D2AA0;
    case 478u: goto L_089D2ACC;
    case 479u: goto L_089D2AD8;
    case 480u: goto L_089D2AEC;
    case 481u: goto L_089D2B00;
    case 482u: goto L_089D2B14;
    case 483u: goto L_089D2B28;
    case 484u: goto L_089D2B38;
    case 485u: goto L_089D2B44;
    case 486u: goto L_089D2B5C;
    case 487u: goto L_089D2B60;
    case 488u: goto L_089D2B74;
    case 489u: goto L_089D2B88;
    case 490u: goto L_089D2B90;
    case 491u: goto L_089D2BB0;
    case 492u: goto L_089D2BBC;
    case 493u: goto L_089D2BD8;
    case 494u: goto L_089D2BE4;
    case 495u: goto L_089D2BE8;
    case 496u: goto L_089D2BF4;
    case 497u: goto L_089D2BF8;
    case 498u: goto L_089D2C00;
    case 499u: goto L_089D2C18;
    case 500u: goto L_089D2C38;
    case 501u: goto L_089D2C7C;
    case 502u: goto L_089D2C98;
    case 503u: goto L_089D2CA8;
    case 504u: goto L_089D2CD0;
    case 505u: goto L_089D2CF0;
    case 506u: goto L_089D2CFC;
    case 507u: goto L_089D2D0C;
    case 508u: goto L_089D2D2C;
    case 509u: goto L_089D2D38;
    case 510u: goto L_089D2D4C;
    case 511u: goto L_089D2D60;
    case 512u: goto L_089D2D74;
    case 513u: goto L_089D2D88;
    case 514u: goto L_089D2D8C;
    case 515u: goto L_089D2D94;
    case 516u: goto L_089D2DA0;
    case 517u: goto L_089D2DB8;
    case 518u: goto L_089D2DBC;
    case 519u: goto L_089D2DD0;
    case 520u: goto L_089D2DD8;
    case 521u: goto L_089D2DE0;
    case 522u: goto L_089D2DFC;
    case 523u: goto L_089D2E1C;
    case 524u: goto L_089D2E2C;
    case 525u: goto L_089D2E38;
    case 526u: goto L_089D2E50;
    case 527u: goto L_089D2E70;
    case 528u: goto L_089D2E88;
    case 529u: goto L_089D2E8C;
    case 530u: goto L_089D2E94;
    case 531u: goto L_089D2EA0;
    case 532u: goto L_089D2EB4;
    case 533u: goto L_089D2EB8;
    case 534u: goto L_089D2EC4;
    case 535u: goto L_089D2ED4;
    case 536u: goto L_089D2EE0;
    case 537u: goto L_089D2EE8;
    case 538u: goto L_089D2EF0;
    case 539u: goto L_089D2EF4;
    case 540u: goto L_089D2F0C;
    case 541u: goto L_089D2F24;
    case 542u: goto L_089D2F30;
    case 543u: goto L_089D2F3C;
    case 544u: goto L_089D2F48;
    case 545u: goto L_089D2F54;
    case 546u: goto L_089D2F60;
    case 547u: goto L_089D2F6C;
    case 548u: goto L_089D2F74;
    case 549u: goto L_089D2FC4;
    case 550u: goto L_089D2FEC;
    case 551u: goto L_089D2FFC;
    case 552u: goto L_089D3024;
    case 553u: goto L_089D3030;
    case 554u: goto L_089D3040;
    case 555u: goto L_089D305C;
    case 556u: goto L_089D3070;
    case 557u: goto L_089D3074;
    case 558u: goto L_089D307C;
    case 559u: goto L_089D308C;
    case 560u: goto L_089D3094;
    case 561u: goto L_089D30AC;
    case 562u: goto L_089D30B8;
    case 563u: goto L_089D30C4;
    case 564u: goto L_089D30C8;
    case 565u: goto L_089D30DC;
    case 566u: goto L_089D30FC;
    case 567u: goto L_089D3108;
    case 568u: goto L_089D3124;
    case 569u: goto L_089D3130;
    case 570u: goto L_089D32F8;
    case 571u: goto L_089D3314;
    case 572u: goto L_089D3320;
    case 573u: goto L_089D3330;
    case 574u: goto L_089D338C;
    case 575u: goto L_089D3394;
    case 576u: goto L_089D33A0;
    case 577u: goto L_089D33BC;
    case 578u: goto L_089D33DC;
    case 579u: goto L_089D340C;
    case 580u: goto L_089D341C;
    case 581u: goto L_089D3458;
    case 582u: goto L_089D346C;
    case 583u: goto L_089D3480;
    case 584u: goto L_089D34C0;
    case 585u: goto L_089D34DC;
    case 586u: goto L_089D34F0;
    case 587u: goto L_089D34FC;
    case 588u: goto L_089D3504;
    case 589u: goto L_089D3510;
    case 590u: goto L_089D352C;
    case 591u: goto L_089D3530;
    case 592u: goto L_089D3540;
    case 593u: goto L_089D3548;
    case 594u: goto L_089D354C;
    case 595u: goto L_089D3574;
    case 596u: goto L_089D3590;
    case 597u: goto L_089D35BC;
    case 598u: goto L_089D35FC;
    case 599u: goto L_089D360C;
    case 600u: goto L_089D364C;
    case 601u: goto L_089D3660;
    case 602u: goto L_089D3674;
    case 603u: goto L_089D36B4;
    case 604u: goto L_089D36CC;
    case 605u: goto L_089D36E0;
    case 606u: goto L_089D36E8;
    case 607u: goto L_089D36F4;
    case 608u: goto L_089D3710;
    case 609u: goto L_089D3714;
    case 610u: goto L_089D3720;
    case 611u: goto L_089D373C;
    case 612u: goto L_089D375C;
    case 613u: goto L_089D378C;
    case 614u: goto L_089D379C;
    case 615u: goto L_089D37D8;
    case 616u: goto L_089D37EC;
    case 617u: goto L_089D3800;
    case 618u: goto L_089D3844;
    case 619u: goto L_089D385C;
    case 620u: goto L_089D3890;
    case 621u: goto L_089D38BC;
    case 622u: goto L_089D38CC;
    case 623u: goto L_089D38D0;
    case 624u: goto L_089D38EC;
    case 625u: goto L_089D38F4;
    case 626u: goto L_089D38F8;
    case 627u: goto L_089D3908;
    case 628u: goto L_089D3914;
    case 629u: goto L_089D3930;
    case 630u: goto L_089D3938;
    case 631u: goto L_089D3944;
    case 632u: goto L_089D396C;
    case 633u: goto L_089D397C;
    case 634u: goto L_089D3A4C;
    case 635u: goto L_089D3A54;
    case 636u: goto L_089D3A5C;
    case 637u: goto L_089D3A80;
    case 638u: goto L_089D3B50;
    case 639u: goto L_089D3B58;
    case 640u: goto L_089D3B68;
    case 641u: goto L_089D3B84;
    case 642u: goto L_089D3B98;
    case 643u: goto L_089D3BA0;
    case 644u: goto L_089D3BB0;
    case 645u: goto L_089D3BB8;
    case 646u: goto L_089D3BBC;
    case 647u: goto L_089D3BD8;
    case 648u: goto L_089D3BE4;
    case 649u: goto L_089D3BFC;
    case 650u: goto L_089D3C04;
    case 651u: goto L_089D3C10;
    case 652u: goto L_089D3C1C;
    case 653u: goto L_089D3C28;
    case 654u: goto L_089D3C58;
    case 655u: goto L_089D3D1C;
    case 656u: goto L_089D3D28;
    case 657u: goto L_089D3D30;
    case 658u: goto L_089D3D40;
    case 659u: goto L_089D3E10;
    case 660u: goto L_089D3E1C;
    case 661u: goto L_089D3E24;
    case 662u: goto L_089D3E30;
    case 663u: goto L_089D3E44;
    case 664u: goto L_089D3F14;
    case 665u: goto L_089D3F1C;
    case 666u: goto L_089D3F20;
    case 667u: goto L_089D3F2C;
    case 668u: goto L_089D3F38;
    case 669u: goto L_089D3F50;
    case 670u: goto L_089D3F68;
    case 671u: goto L_089D3F74;
    case 672u: goto L_089D3FA8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D0000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.set_gpr(2, 2205u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8084));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089D0024u);
    // nop
    ctx.pc = 0x08B0DEFCu;
    return;
L_089D0024:
    ctx.set_gpr(3, 2229u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-13048), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D0044u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0044u) goto L_089D0044;
    return;
L_089D0044:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27848)));
    ctx.set_gpr(3, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27848), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27432)));
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-27844)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2048));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-27844), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27842), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, 8192u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27432), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D00D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D00D0u) goto L_089D00D0;
    return;
L_089D00D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(724)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D00E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D00E4u) goto L_089D00E4;
    return;
L_089D00E4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2205u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8172));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D00FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 724u, 0x08806DE8u>(ctx, &aot_mem) && ctx.pc == 0x089D00FCu) goto L_089D00FC;
    return;
L_089D00FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D0114u);
    // nop
    ctx.pc = 0x08B0DF24u;
    return;
L_089D0114:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 203u, 0x089E1044u>(ctx, &aot_mem) && ctx.pc == 0x089D0120u) goto L_089D0120;
    return;
L_089D0120:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(872)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D0138u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0138u) goto L_089D0138;
    return;
L_089D0138:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D013C;
L_089D013C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D015C:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0280;
      }
      goto L_089D0168;
    }
L_089D0168:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29192));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0184:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0190;
    }
L_089D0190:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(272));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D019C;
    }
L_089D019C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01A8;
    }
L_089D01A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01B4;
    }
L_089D01B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01C0;
    }
L_089D01C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01CC;
    }
L_089D01CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01D8;
    }
L_089D01D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01E4;
    }
L_089D01E4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01F0;
    }
L_089D01F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(512));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D01FC;
    }
L_089D01FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0208;
    }
L_089D0208:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0214;
    }
L_089D0214:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0220;
    }
L_089D0220:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D022C;
    }
L_089D022C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0238;
    }
L_089D0238:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0244;
    }
L_089D0244:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0250;
    }
L_089D0250:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D025C;
    }
L_089D025C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0268;
    }
L_089D0268:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0274;
    }
L_089D0274:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0284;
      }
      goto L_089D0280;
    }
L_089D0280:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D0284;
L_089D0284:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D028C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12616));
    ctx.set_gpr(31, 0x089D02B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 612u, 0x08912868u>(ctx, &aot_mem) && ctx.pc == 0x089D02B4u) goto L_089D02B4;
    return;
L_089D02B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12612));
    ctx.set_gpr(31, 0x089D02CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 612u, 0x08912868u>(ctx, &aot_mem) && ctx.pc == 0x089D02CCu) goto L_089D02CC;
    return;
L_089D02CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(31, 0x089D02E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 612u, 0x08912868u>(ctx, &aot_mem) && ctx.pc == 0x089D02E4u) goto L_089D02E4;
    return;
L_089D02E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12616));
    ctx.set_gpr(31, 0x089D02FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 612u, 0x08912868u>(ctx, &aot_mem) && ctx.pc == 0x089D02FCu) goto L_089D02FC;
    return;
L_089D02FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12600));
    ctx.set_gpr(31, 0x089D0314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 612u, 0x08912868u>(ctx, &aot_mem) && ctx.pc == 0x089D0314u) goto L_089D0314;
    return;
L_089D0314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0328:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0334:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D0344;
    }
L_089D0344:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29072));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0360:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32159)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D036C;
    }
L_089D036C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32168)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D0378;
    }
L_089D0378:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32167)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D0384;
    }
L_089D0384:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32162)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D0390;
    }
L_089D0390:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32163)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D039C;
    }
L_089D039C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32158)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D03A8;
    }
L_089D03A8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32166)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D03B4;
    }
L_089D03B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32165)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D03C0;
    }
L_089D03C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32164)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D03CC;
    }
L_089D03CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32161)));
    goto L_089D03D0;
L_089D03D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D03D8:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D03E4;
    }
L_089D03E4:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29016));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0400:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32159), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D040C;
    }
L_089D040C:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32168), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D0418;
    }
L_089D0418:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32167), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D0424;
    }
L_089D0424:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32162), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D0430;
    }
L_089D0430:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32163), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D043C;
    }
L_089D043C:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32158), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D0448;
    }
L_089D0448:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32166), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D0454;
    }
L_089D0454:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32165), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D0460;
    }
L_089D0460:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32164), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0470;
      }
      goto L_089D046C;
    }
L_089D046C:
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32161), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_089D0470;
L_089D0470:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D04B0;
      }
      goto L_089D04AC;
    }
L_089D04AC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D04B0;
L_089D04B0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D04D4;
      }
      goto L_089D04B8;
    }
L_089D04B8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(756)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D04D4;
      }
      goto L_089D04D0;
    }
L_089D04D0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D04D4;
L_089D04D4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D04F0;
      }
      goto L_089D04DC;
    }
L_089D04DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x089D04F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 542u, 0x089E340Cu>(ctx, &aot_mem) && ctx.pc == 0x089D04F0u) goto L_089D04F0;
    return;
L_089D04F0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(744)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D050C;
      }
      goto L_089D0508;
    }
L_089D0508:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D050C;
L_089D050C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0530;
      }
      goto L_089D0514;
    }
L_089D0514:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(748)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D0530;
      }
      goto L_089D052C;
    }
L_089D052C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D0530;
L_089D0530:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D054C;
      }
      goto L_089D0538;
    }
L_089D0538:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D054Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 541u, 0x089E336Cu>(ctx, &aot_mem) && ctx.pc == 0x089D054Cu) goto L_089D054C;
    return;
L_089D054C:
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
L_089D0564:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0600;
      }
      goto L_089D0598;
    }
L_089D0598:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D05E8;
      }
      goto L_089D05A8;
    }
L_089D05A8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(788), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0618;
      }
      goto L_089D05E8;
    }
L_089D05E8:
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x089D05F8u);
    // nop
    goto L_089D0478;
L_089D05F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0618;
      }
      goto L_089D0600;
    }
L_089D0600:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27920));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27928));
    ctx.set_gpr(31, 0x089D0618u);
    // nop
    goto L_089D0478;
L_089D0618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D07A4;
      }
      goto L_089D0628;
    }
L_089D0628:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(772)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D0644;
      }
      goto L_089D0640;
    }
L_089D0640:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D0644;
L_089D0644:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0668;
      }
      goto L_089D064C;
    }
L_089D064C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(776)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D0668;
      }
      goto L_089D0664;
    }
L_089D0664:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D0668;
L_089D0668:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D068C;
      }
      goto L_089D0670;
    }
L_089D0670:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(780)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D068C;
      }
      goto L_089D0688;
    }
L_089D0688:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D068C;
L_089D068C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0700;
      }
      goto L_089D0694;
    }
L_089D0694:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(760)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D06B0;
      }
      goto L_089D06AC;
    }
L_089D06AC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D06B0;
L_089D06B0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D06D4;
      }
      goto L_089D06B8;
    }
L_089D06B8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(764)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D06D4;
      }
      goto L_089D06D0;
    }
L_089D06D0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D06D4;
L_089D06D4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D06F8;
      }
      goto L_089D06DC;
    }
L_089D06DC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(768)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D06F8;
      }
      goto L_089D06F4;
    }
L_089D06F4:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D06F8;
L_089D06F8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D07A8;
      }
      goto L_089D0700;
    }
L_089D0700:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28304)));
    ctx.set_gpr(4, 0u & 127u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[6] | 1024u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(784), ctx.gpr[18]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(780), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D07A8;
      }
      goto L_089D07A4;
    }
L_089D07A4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(784), 0u);
    goto L_089D07A8;
L_089D07A8:
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
L_089D07C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0828;
      }
      goto L_089D07DC;
    }
L_089D07DC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27776));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27928));
    ctx.set_gpr(31, 0x089D0820u);
    // nop
    goto L_089D0564;
L_089D0820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0858;
      }
      goto L_089D0828;
    }
L_089D0828:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0858;
      }
      goto L_089D0834;
    }
L_089D0834:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089D0858u);
    // nop
    goto L_089D0564;
L_089D0858:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x089D088Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D088Cu) goto L_089D088C;
    return;
L_089D088C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D08F4;
      }
      goto L_089D0894;
    }
L_089D0894:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D08B0;
      }
      goto L_089D08A4;
    }
L_089D08A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 2048u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    goto L_089D08B0;
L_089D08B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D08CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D08CCu) goto L_089D08CC;
    return;
L_089D08CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D08E8;
      }
      goto L_089D08DC;
    }
L_089D08DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D08F4;
      }
      goto L_089D08E8;
    }
L_089D08E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 8192u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089D08F4;
L_089D08F4:
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
L_089D090C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089D0938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D0938u) goto L_089D0938;
    return;
L_089D0938:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D09A4;
      }
      goto L_089D0940;
    }
L_089D0940:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D0958u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0958u) goto L_089D0958;
    return;
L_089D0958:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0974;
      }
      goto L_089D0968;
    }
L_089D0968:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(856)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0980;
      }
      goto L_089D0974;
    }
L_089D0974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 8192u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089D0980;
L_089D0980:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D09A4;
      }
      goto L_089D098C;
    }
L_089D098C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D09A4;
      }
      goto L_089D0998;
    }
L_089D0998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089D09A4;
L_089D09A4:
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
L_089D09BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x089D09D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D09D0u) goto L_089D09D0;
    return;
L_089D09D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D09E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D09EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D09F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(31, 0x089D0A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D0A0Cu) goto L_089D0A0C;
    return;
L_089D0A0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0A28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4097));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0BD8;
      }
      goto L_089D0A4C;
    }
L_089D0A4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28600)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28596)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28600), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28596), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[7] & 10495u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0BC0;
      }
      goto L_089D0A84;
    }
L_089D0A84:
    ctx.set_gpr(2, ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0A98;
      }
      goto L_089D0A90;
    }
L_089D0A90:
    ctx.set_gpr(31, 0x089D0A98u);
    // nop
    goto L_089D07C8;
L_089D0A98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0AB4;
      }
      goto L_089D0AA8;
    }
L_089D0AA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D91B8u>(ctx, &aot_mem) && ctx.pc == 0x089D0AB4u) goto L_089D0AB4;
    return;
L_089D0AB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0AFC;
      }
      goto L_089D0AC4;
    }
L_089D0AC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28592)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28588)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28592), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28588), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 162u, 0x089D9458u>(ctx, &aot_mem) && ctx.pc == 0x089D0AFCu) goto L_089D0AFC;
    return;
L_089D0AFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0B18;
      }
      goto L_089D0B0C;
    }
L_089D0B0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 543u, 0x089E34ACu>(ctx, &aot_mem) && ctx.pc == 0x089D0B18u) goto L_089D0B18;
    return;
L_089D0B18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0B34;
      }
      goto L_089D0B28;
    }
L_089D0B28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 553u, 0x089E3698u>(ctx, &aot_mem) && ctx.pc == 0x089D0B34u) goto L_089D0B34;
    return;
L_089D0B34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0B50;
      }
      goto L_089D0B44;
    }
L_089D0B44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 67u, 0x089DC768u>(ctx, &aot_mem) && ctx.pc == 0x089D0B50u) goto L_089D0B50;
    return;
L_089D0B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0B6C;
      }
      goto L_089D0B60;
    }
L_089D0B60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 68u, 0x089DC8B8u>(ctx, &aot_mem) && ctx.pc == 0x089D0B6Cu) goto L_089D0B6C;
    return;
L_089D0B6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0B88;
      }
      goto L_089D0B7C;
    }
L_089D0B7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 71u, 0x089DC99Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0B88u) goto L_089D0B88;
    return;
L_089D0B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0BA4;
      }
      goto L_089D0B98;
    }
L_089D0B98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 72u, 0x089DCAA0u>(ctx, &aot_mem) && ctx.pc == 0x089D0BA4u) goto L_089D0BA4;
    return;
L_089D0BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0BC0;
      }
      goto L_089D0BB4;
    }
L_089D0BB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 588u, 0x089E3B74u>(ctx, &aot_mem) && ctx.pc == 0x089D0BC0u) goto L_089D0BC0;
    return;
L_089D0BC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D0BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 39u, 0x089D4464u>(ctx, &aot_mem) && ctx.pc == 0x089D0BCCu) goto L_089D0BCC;
    return;
L_089D0BCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] & 4096u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089D0BD8;
L_089D0BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28584)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28580)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28584), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28580), ctx.gpr[3]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27080)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27076)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27080), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27076), ctx.gpr[3]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27072)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27068)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27072), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27068), ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D0CB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0CB4u) goto L_089D0CB4;
    return;
L_089D0CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0CEC;
      }
      goto L_089D0CBC;
    }
L_089D0CBC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28608)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28604)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28608), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28604), ctx.gpr[4]);
    goto L_089D0CEC;
L_089D0CEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0D28;
      }
      goto L_089D0CF8;
    }
L_089D0CF8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28616)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28612)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28616), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28612), ctx.gpr[4]);
    goto L_089D0D28;
L_089D0D28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D0D60;
      }
      goto L_089D0D34;
    }
L_089D0D34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    goto L_089D0D60;
L_089D0D60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D0D98;
      }
      goto L_089D0D6C;
    }
L_089D0D6C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    goto L_089D0D98;
L_089D0D98:
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
L_089D0DB8:
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
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x089D0DF4u);
    // nop
    goto L_089D20E0;
L_089D0DF4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0FD8;
      }
      goto L_089D0E00;
    }
L_089D0E00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0E44;
      }
      goto L_089D0E0C;
    }
L_089D0E0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28400)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28400), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0E8C;
      }
      goto L_089D0E44;
    }
L_089D0E44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D0E60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D0E60u) goto L_089D0E60;
    return;
L_089D0E60:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28400)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28400), ctx.gpr[5]);
    goto L_089D0E8C;
L_089D0E8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0F74;
      }
      goto L_089D0E98;
    }
L_089D0E98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28956));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, (ctx.gpr[5] >> 24u) & 0x0000003Fu);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28406), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28464)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28464), ctx.gpr[5]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28960));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28399)));
    ctx.set_gpr(4, ctx.gpr[5] & 3u);
    ctx.set_gpr(5, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-25));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28399), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28408)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28464)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, (ctx.gpr[2] >> 24u) & 0x0000003Fu);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28406), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28468)));
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28468), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0FB0;
      }
      goto L_089D0F74;
    }
L_089D0F74:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[5] >> 24u) & 0x0000003Fu);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28406), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28468)));
    ctx.set_gpr(3, ctx.gpr[5] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28468), ctx.gpr[3]);
    goto L_089D0FB0;
L_089D0FB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28408)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28468)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_089D0FD8;
L_089D0FD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D0FFC;
      }
      goto L_089D0FE4;
    }
L_089D0FE4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28452)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1084;
      }
      goto L_089D0FFC;
    }
L_089D0FFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1020;
      }
      goto L_089D1008;
    }
L_089D1008:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28448)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1084;
      }
      goto L_089D1020;
    }
L_089D1020:
    ctx.set_gpr(1, 0u | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D103C;
      }
      goto L_089D1030;
    }
L_089D1030:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1040;
      }
      goto L_089D103C;
    }
L_089D103C:
    ctx.set_gpr(5, 0u | 65535u);
    goto L_089D1040;
L_089D1040:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-28456), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28454)));
    ctx.set_gpr(3, ctx.gpr[17] & 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28454), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28456)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_089D1020;
      }
      goto L_089D1084;
    }
L_089D1084:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D1094u);
    // nop
    goto L_089D20A8;
L_089D1094:
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
L_089D10BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D138C;
      }
      goto L_089D10F4;
    }
L_089D10F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1380;
      }
      goto L_089D1100;
    }
L_089D1100:
    ctx.set_gpr(18, ctx.gpr[17] & 15u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1134;
      }
      goto L_089D1110;
    }
L_089D1110:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29300));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1148;
      }
      goto L_089D1134;
    }
L_089D1134:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29204));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089D1148;
L_089D1148:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D1154u);
    // nop
    goto L_089D0A28;
L_089D1154:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D12B4;
      }
      goto L_089D1160;
    }
L_089D1160:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1174u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1174u) goto L_089D1174;
    return;
L_089D1174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D12B4;
      }
      goto L_089D117C;
    }
L_089D117C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D12B4;
      }
      goto L_089D118C;
    }
L_089D118C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D11A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D11A0u) goto L_089D11A0;
    return;
L_089D11A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D11E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D11E0u) goto L_089D11E0;
    return;
L_089D11E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D138C;
      }
      goto L_089D11E8;
    }
L_089D11E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D12B4;
      }
      goto L_089D11F4;
    }
L_089D11F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D1200u);
    // nop
    goto L_089D20E0;
L_089D1200:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089D1240u);
    // nop
    goto L_089D20A8;
L_089D1240:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060), ctx.gpr[4]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D138C;
      }
      goto L_089D12B4;
    }
L_089D12B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D12C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 414u, 0x089DEDE0u>(ctx, &aot_mem) && ctx.pc == 0x089D12C0u) goto L_089D12C0;
    return;
L_089D12C0:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D12D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 83u, 0x089C8820u>(ctx, &aot_mem) && ctx.pc == 0x089D12D0u) goto L_089D12D0;
    return;
L_089D12D0:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29296));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29292));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D131Cu);
    // nop
    goto L_089D0BEC;
L_089D131C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089D1338u);
    // nop
    goto L_089D0DB8;
L_089D1338:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D1344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 89u, 0x089C88B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1344u) goto L_089D1344;
    return;
L_089D1344:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1358;
      }
      goto L_089D134C;
    }
L_089D134C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D1358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 436u, 0x089DF140u>(ctx, &aot_mem) && ctx.pc == 0x089D1358u) goto L_089D1358;
    return;
L_089D1358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D138C;
      }
      goto L_089D136C;
    }
L_089D136C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D138C;
      }
      goto L_089D1380;
    }
L_089D1380:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089D138Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 832u, 0x089D7ED0u>(ctx, &aot_mem) && ctx.pc == 0x089D138Cu) goto L_089D138C;
    return;
L_089D138C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D13B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D1670;
      }
      goto L_089D13F8;
    }
L_089D13F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1664;
      }
      goto L_089D1404;
    }
L_089D1404:
    ctx.set_gpr(31, 0x089D140Cu);
    // nop
    goto L_089D0A28;
L_089D140C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1580;
      }
      goto L_089D1428;
    }
L_089D1428:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D143Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D143Cu) goto L_089D143C;
    return;
L_089D143C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1580;
      }
      goto L_089D1444;
    }
L_089D1444:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1580;
      }
      goto L_089D1454;
    }
L_089D1454:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1468u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1468u) goto L_089D1468;
    return;
L_089D1468:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] | 8192u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D14ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D14ACu) goto L_089D14AC;
    return;
L_089D14AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1670;
      }
      goto L_089D14B4;
    }
L_089D14B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1580;
      }
      goto L_089D14C0;
    }
L_089D14C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D14CCu);
    // nop
    goto L_089D20E0;
L_089D14CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089D150Cu);
    // nop
    goto L_089D20A8;
L_089D150C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060), ctx.gpr[4]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1670;
      }
      goto L_089D1580;
    }
L_089D1580:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D158Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 414u, 0x089DEDE0u>(ctx, &aot_mem) && ctx.pc == 0x089D158Cu) goto L_089D158C;
    return;
L_089D158C:
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D159Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 83u, 0x089C8820u>(ctx, &aot_mem) && ctx.pc == 0x089D159Cu) goto L_089D159C;
    return;
L_089D159C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D15B0;
      }
      goto L_089D15A4;
    }
L_089D15A4:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D15B4;
      }
      goto L_089D15B0;
    }
L_089D15B0:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    goto L_089D15B4;
L_089D15B4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1610;
      }
      goto L_089D15C0;
    }
L_089D15C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[5] - ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D15D4u);
    // nop
    goto L_089D0BEC;
L_089D15D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29216));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D1600u);
    // nop
    goto L_089D0DB8;
L_089D1600:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D1610;
L_089D1610:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D15C0;
      }
      goto L_089D161C;
    }
L_089D161C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D1628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 89u, 0x089C88B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1628u) goto L_089D1628;
    return;
L_089D1628:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D163C;
      }
      goto L_089D1630;
    }
L_089D1630:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D163Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 436u, 0x089DF140u>(ctx, &aot_mem) && ctx.pc == 0x089D163Cu) goto L_089D163C;
    return;
L_089D163C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1670;
      }
      goto L_089D1650;
    }
L_089D1650:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1670;
      }
      goto L_089D1664;
    }
L_089D1664:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x089D1670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 832u, 0x089D7ED0u>(ctx, &aot_mem) && ctx.pc == 0x089D1670u) goto L_089D1670;
    return;
L_089D1670:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D16A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x089D16E8u);
    // nop
    goto L_089D0A28;
L_089D16E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1848;
      }
      goto L_089D16F4;
    }
L_089D16F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1708u) goto L_089D1708;
    return;
L_089D1708:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1848;
      }
      goto L_089D1710;
    }
L_089D1710:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1848;
      }
      goto L_089D1720;
    }
L_089D1720:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1734u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1734u) goto L_089D1734;
    return;
L_089D1734:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1774u) goto L_089D1774;
    return;
L_089D1774:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1A44;
      }
      goto L_089D177C;
    }
L_089D177C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1848;
      }
      goto L_089D1788;
    }
L_089D1788:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D1794u);
    // nop
    goto L_089D20E0;
L_089D1794:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089D17D4u);
    // nop
    goto L_089D20A8;
L_089D17D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060), ctx.gpr[4]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1A44;
      }
      goto L_089D1848;
    }
L_089D1848:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D1854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 414u, 0x089DEDE0u>(ctx, &aot_mem) && ctx.pc == 0x089D1854u) goto L_089D1854;
    return;
L_089D1854:
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D1864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 83u, 0x089C8820u>(ctx, &aot_mem) && ctx.pc == 0x089D1864u) goto L_089D1864;
    return;
L_089D1864:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4102));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1A24;
      }
      goto L_089D1870;
    }
L_089D1870:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8193));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1958;
      }
      goto L_089D187C;
    }
L_089D187C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8194));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1958;
      }
      goto L_089D1888;
    }
L_089D1888:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1958;
      }
      goto L_089D1894;
    }
L_089D1894:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D18E0;
      }
      goto L_089D18A0;
    }
L_089D18A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D18E0;
      }
      goto L_089D18AC;
    }
L_089D18AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D18E0;
      }
      goto L_089D18B8;
    }
L_089D18B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D18E0;
      }
      goto L_089D18C4;
    }
L_089D18C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D18E0;
      }
      goto L_089D18D0;
    }
L_089D18D0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D18E0;
      }
      goto L_089D18D8;
    }
L_089D18D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1A24;
      }
      goto L_089D18E0;
    }
L_089D18E0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089D18F4u);
    // nop
    goto L_089D0BEC;
L_089D18F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1924;
      }
      goto L_089D1900;
    }
L_089D1900:
    ctx.set_gpr(2, ctx.gpr[21] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29300));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1938;
      }
      goto L_089D1924;
    }
L_089D1924:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29204));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089D1938;
L_089D1938:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089D1950u);
    // nop
    goto L_089D0DB8;
L_089D1950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1A24;
      }
      goto L_089D1958;
    }
L_089D1958:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(-8192));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1984;
      }
      goto L_089D1968;
    }
L_089D1968:
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29216));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1998;
      }
      goto L_089D1984;
    }
L_089D1984:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29204));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089D1998;
L_089D1998:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D19AC;
      }
      goto L_089D19A0;
    }
L_089D19A0:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D19B0;
      }
      goto L_089D19AC;
    }
L_089D19AC:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(2));
    goto L_089D19B0;
L_089D19B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1A18;
      }
      goto L_089D19CC;
    }
L_089D19CC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D19EC;
      }
      goto L_089D19D8;
    }
L_089D19D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[5] - ctx.gpr[21]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D19ECu);
    // nop
    goto L_089D0BEC;
L_089D19EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089D1A08u);
    // nop
    goto L_089D0DB8;
L_089D1A08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089D1A18;
L_089D1A18:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D19CC;
      }
      goto L_089D1A24;
    }
L_089D1A24:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D1A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 89u, 0x089C88B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1A30u) goto L_089D1A30;
    return;
L_089D1A30:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1A44;
      }
      goto L_089D1A38;
    }
L_089D1A38:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D1A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 436u, 0x089DF140u>(ctx, &aot_mem) && ctx.pc == 0x089D1A44u) goto L_089D1A44;
    return;
L_089D1A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28552));
    ctx.set_gpr(31, 0x089D1A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089D1A94u) goto L_089D1A94;
    return;
L_089D1A94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(589), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(589)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1E08;
      }
      goto L_089D1AEC;
    }
L_089D1AEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B34;
      }
      goto L_089D1AF8;
    }
L_089D1AF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1B0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1B0Cu) goto L_089D1B0C;
    return;
L_089D1B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x089D1B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x089D1B1Cu) goto L_089D1B1C;
    return;
L_089D1B1C:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1B34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1B34u) goto L_089D1B34;
    return;
L_089D1B34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089D1B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089D1B40u) goto L_089D1B40;
    return;
L_089D1B40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D1B4Cu);
    // nop
    goto L_089D240C;
L_089D1B4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B70;
      }
      goto L_089D1B68;
    }
L_089D1B68:
    ctx.set_gpr(31, 0x089D1B70u);
    // nop
    ctx.pc = 0x08B0DF2Cu;
    return;
L_089D1B70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B68;
      }
      goto L_089D1B7C;
    }
L_089D1B7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D1BB0;
      }
      goto L_089D1B8C;
    }
L_089D1B8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28544)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1BB0;
      }
      goto L_089D1BA8;
    }
L_089D1BA8:
    ctx.set_gpr(31, 0x089D1BB0u);
    // nop
    ctx.pc = 0x08B0DF2Cu;
    return;
L_089D1BB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28544), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D1BD4u);
    // nop
    goto L_089D2DFC;
L_089D1BD4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2205u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8432));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(31, 0x089D1BF8u);
    // nop
    goto L_089D2E70;
L_089D1BF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(556)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(564), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1C18;
      }
      goto L_089D1C14;
    }
L_089D1C14:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(564), 0u);
    goto L_089D1C18;
L_089D1C18:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(591)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(591), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(591)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27848)));
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27848), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27432)));
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27432), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 1024u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1CE4;
      }
      goto L_089D1C88;
    }
L_089D1C88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1CE4;
      }
      goto L_089D1C94;
    }
L_089D1C94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1CB4;
      }
      goto L_089D1CB0;
    }
L_089D1CB0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_089D1CB4;
L_089D1CB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_089D1CE4;
L_089D1CE4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(589), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1D30;
      }
      goto L_089D1CF4;
    }
L_089D1CF4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1048)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1D14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1D14u) goto L_089D1D14;
    return;
L_089D1D14:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1052)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D1D2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D1D2Cu) goto L_089D1D2C;
    return;
L_089D1D2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    goto L_089D1D30;
L_089D1D30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28624)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28620)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28624), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28620), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089D1D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089D1D68u) goto L_089D1D68;
    return;
L_089D1D68:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[8] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28576)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28572)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28576), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28572), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28552)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28548)));
    ctx.set_gpr(4, ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[8] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28560)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28556)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28560), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28556), ctx.gpr[4]);
    goto L_089D1E08;
L_089D1E08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089D1E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089D1E5Cu) goto L_089D1E5C;
    return;
L_089D1E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1E88;
      }
      goto L_089D1E78;
    }
L_089D1E78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D1E84u);
    // nop
    goto L_089D240C;
L_089D1E84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089D1E88;
L_089D1E88:
    ctx.set_gpr(31, 0x089D1E90u);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_089D1E90:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1EAC;
      }
      goto L_089D1EA4;
    }
L_089D1EA4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_089D1EAC;
L_089D1EAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D1EB8u);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_089D1EB8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1ECC;
      }
      goto L_089D1EC0;
    }
L_089D1EC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D1ECCu);
    // nop
    goto L_089D2198;
L_089D1ECC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D1ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089D1ED8u) goto L_089D1ED8;
    return;
L_089D1ED8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28568)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28564)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28568), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28564), ctx.gpr[4]);
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
L_089D1F44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089D1F5Cu);
    // nop
    goto L_089D20E0;
L_089D1F5C:
    ctx.set_gpr(3, 52224u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D1F74u);
    // nop
    goto L_089D20A8;
L_089D1F74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D1F80u);
    // nop
    goto L_089D1E28;
L_089D1F80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089D1FB0u);
    // nop
    goto L_089D22C0;
L_089D1FB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1FC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D1FDCu);
    // nop
    goto L_089D22C0;
L_089D1FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089D2014u);
    // nop
    goto L_089D22C0;
L_089D2014:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2094;
      }
      goto L_089D204C;
    }
L_089D204C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D208C;
      }
      goto L_089D205C;
    }
L_089D205C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 10u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089D2070;
      }
      goto L_089D2068;
    }
L_089D2068:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 10u));
    goto L_089D2070;
L_089D2070:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D2084u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2084u) goto L_089D2084;
    return;
L_089D2084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2094;
      }
      goto L_089D208C;
    }
L_089D208C:
    ctx.set_gpr(31, 0x089D2094u);
    // nop
    goto L_089D240C;
L_089D2094:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D20D0;
      }
      goto L_089D20C8;
    }
L_089D20C8:
    ctx.set_gpr(31, 0x089D20D0u);
    // nop
    goto L_089D240C;
L_089D20D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20F0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2120;
      }
      goto L_089D2108;
    }
L_089D2108:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2120;
      }
      goto L_089D211C;
    }
L_089D211C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089D2120;
L_089D2120:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D217C;
      }
      goto L_089D214C;
    }
L_089D214C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D217C;
      }
      goto L_089D215C;
    }
L_089D215C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D216Cu);
    // nop
    ctx.pc = 0x08B0DDD4u;
    return;
L_089D216C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D217C;
      }
      goto L_089D2174;
    }
L_089D2174:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(376), 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089D217C;
L_089D217C:
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
L_089D2198:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 76u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 19264u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089D21C0u);
    // nop
    ctx.pc = 0x08B0DDECu;
    return;
L_089D21C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2284;
      }
      goto L_089D21FC;
    }
L_089D21FC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2228;
      }
      goto L_089D2208;
    }
L_089D2208:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089D221Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D221Cu) goto L_089D221C;
    return;
L_089D221C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D22A4;
      }
      goto L_089D2224;
    }
L_089D2224:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_089D2228;
L_089D2228:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2208;
      }
      goto L_089D2230;
    }
L_089D2230:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(496), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(516), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().memory_barrier();
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] >> 2u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13048)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089D227Cu);
    // nop
    ctx.pc = 0x08B0DF04u;
    return;
L_089D227C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089D2284;
L_089D2284:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D22A4;
      }
      goto L_089D2294;
    }
L_089D2294:
    ctx.set_gpr(3, ctx.gpr[4] << 30u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D21FC;
      }
      goto L_089D22A4;
    }
L_089D22A4:
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
L_089D22C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D23DC;
      }
      goto L_089D22E8;
    }
L_089D22E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2330;
      }
      goto L_089D22F0;
    }
L_089D22F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2304;
      }
      goto L_089D22FC;
    }
L_089D22FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D23F0;
      }
      goto L_089D2304;
    }
L_089D2304:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D23F0;
      }
      goto L_089D230C;
    }
L_089D230C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28496)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D23F0;
      }
      goto L_089D231C;
    }
L_089D231C:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x089D2328u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2328u) goto L_089D2328;
    return;
L_089D2328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D23F0;
      }
      goto L_089D2330;
    }
L_089D2330:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D23F0;
      }
      goto L_089D2338;
    }
L_089D2338:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(520), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2364;
      }
      goto L_089D234C;
    }
L_089D234C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089D2360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2360u) goto L_089D2360;
    return;
L_089D2360:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_089D2364;
L_089D2364:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D234C;
      }
      goto L_089D236C;
    }
L_089D236C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D237Cu);
    // nop
    goto L_089D2E94;
L_089D237C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(488), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D23D4u);
    // nop
    goto L_089D2128;
L_089D23D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D23F0;
      }
      goto L_089D23DC;
    }
L_089D23DC:
    ctx.set_gpr(31, 0x089D23E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 175u, 0x089E0D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D23E4u) goto L_089D23E4;
    return;
L_089D23E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D23F0u);
    // nop
    goto L_089D21D4;
L_089D23F0:
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
L_089D240C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D245C;
      }
      goto L_089D243C;
    }
L_089D243C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D2450u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2450u) goto L_089D2450;
    return;
L_089D2450:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2688;
      }
      goto L_089D245C;
    }
L_089D245C:
    ctx.set_gpr(31, 0x089D2464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 89u, 0x089C88B0u>(ctx, &aot_mem) && ctx.pc == 0x089D2464u) goto L_089D2464;
    return;
L_089D2464:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D2474u);
    // nop
    goto L_089D20E0;
L_089D2474:
    ctx.set_gpr(3, 3840u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 3072u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28536)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28532)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28536), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28532), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26980)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2528;
      }
      goto L_089D24D0;
    }
L_089D24D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] >> 2u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089D24ECu);
    // nop
    goto L_089D307C;
L_089D24EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28528)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28524)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28528), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28524), ctx.gpr[3]);
    goto L_089D2528;
L_089D2528:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26976)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2560;
      }
      goto L_089D2554;
    }
L_089D2554:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089D2560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089D2560u) goto L_089D2560;
    return;
L_089D2560:
    ctx.set_gpr(31, 0x089D2568u);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_089D2568:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(524), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D25A0u);
    // nop
    goto L_089D21D4;
L_089D25A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D25ACu);
    // nop
    goto L_089D26AC;
L_089D25AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D25BCu);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_089D25BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D25D0;
      }
      goto L_089D25C4;
    }
L_089D25C4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D25D0u);
    // nop
    goto L_089D2198;
L_089D25D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26976)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2684;
      }
      goto L_089D25E4;
    }
L_089D25E4:
    ctx.set_gpr(31, 0x089D25ECu);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_089D25EC:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2608;
      }
      goto L_089D2600;
    }
L_089D2600:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(376), ctx.gpr[19]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089D2608;
L_089D2608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D2614u);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_089D2614:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2628;
      }
      goto L_089D261C;
    }
L_089D261C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D2628u);
    // nop
    goto L_089D2198;
L_089D2628:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089D2634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089D2634u) goto L_089D2634;
    return;
L_089D2634:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28520)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28516)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28520), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28516), ctx.gpr[3]);
    goto L_089D2684;
L_089D2684:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_089D2688;
L_089D2688:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D26AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2738;
      }
      goto L_089D26E0;
    }
L_089D26E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D26FC;
      }
      goto L_089D26EC;
    }
L_089D26EC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(376), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2738;
      }
      goto L_089D26FC;
    }
L_089D26FC:
    ctx.set_gpr(31, 0x089D2704u);
    // nop
    goto L_089D2760;
L_089D2704:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(492)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D2738;
      }
      goto L_089D2714;
    }
L_089D2714:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2724;
      }
      goto L_089D2720;
    }
L_089D2720:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    goto L_089D2724;
L_089D2724:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D2720;
      }
      goto L_089D2734;
    }
L_089D2734:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    goto L_089D2738;
L_089D2738:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(492), ctx.gpr[2]);
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
L_089D2760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089D2784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089D2784u) goto L_089D2784;
    return;
L_089D2784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D27B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D27B4u) goto L_089D27B4;
    return;
L_089D27B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28512)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28508)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28512), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28508), ctx.gpr[4]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2938;
      }
      goto L_089D27FC;
    }
L_089D27FC:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(477)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D283C;
      }
      goto L_089D280C;
    }
L_089D280C:
    ctx.set_gpr(31, 0x089D2814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2814u) goto L_089D2814;
    return;
L_089D2814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D2820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089D2820u) goto L_089D2820;
    return;
L_089D2820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(480)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D2838u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2838u) goto L_089D2838;
    return;
L_089D2838:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_089D283C;
L_089D283C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2878;
      }
      goto L_089D2844;
    }
L_089D2844:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D2850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089D2850u) goto L_089D2850;
    return;
L_089D2850:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(480)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D286Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D286Cu) goto L_089D286C;
    return;
L_089D286C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D2878u);
    // nop
    ctx.pc = 0x08B0DEB4u;
    return;
L_089D2878:
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] | ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(480)));
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-140));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, 0u & 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    goto L_089D2938;
L_089D2938:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D27FC;
      }
      goto L_089D2948;
    }
L_089D2948:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(492)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2980;
      }
      goto L_089D2954;
    }
L_089D2954:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-44), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D29C0;
      }
      goto L_089D2980;
    }
L_089D2980:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-44), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(492), ctx.gpr[3]);
    goto L_089D29C0;
L_089D29C0:
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
L_089D29E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089D2A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2A04u) goto L_089D2A04;
    return;
L_089D2A04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D2A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089D2A10u) goto L_089D2A10;
    return;
L_089D2A10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D2A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x089D2A1Cu) goto L_089D2A1C;
    return;
L_089D2A1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(488)));
    goto L_089D2A24;
L_089D2A24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D2A44u);
    // nop
    goto L_089D2BB0;
L_089D2A44:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2AA0;
      }
      goto L_089D2A50;
    }
L_089D2A50:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2A78;
      }
      goto L_089D2A64;
    }
L_089D2A64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2A8C;
      }
      goto L_089D2A78;
    }
L_089D2A78:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D2A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2A8Cu) goto L_089D2A8C;
    return;
L_089D2A8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089D2AA0;
L_089D2AA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 49151u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D2ACCu);
    // nop
    goto L_089D2BB0;
L_089D2ACC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2B28;
      }
      goto L_089D2AD8;
    }
L_089D2AD8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2B00;
      }
      goto L_089D2AEC;
    }
L_089D2AEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2B14;
      }
      goto L_089D2B00;
    }
L_089D2B00:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D2B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2B14u) goto L_089D2B14;
    return;
L_089D2B14:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089D2B28;
L_089D2B28:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2A24;
      }
      goto L_089D2B38;
    }
L_089D2B38:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2B60;
      }
      goto L_089D2B44;
    }
L_089D2B44:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D2B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D2B5Cu) goto L_089D2B5C;
    return;
L_089D2B5C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089D2B60;
L_089D2B60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2B44;
      }
      goto L_089D2B74;
    }
L_089D2B74:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(488), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(492), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2B90;
      }
      goto L_089D2B88;
    }
L_089D2B88:
    ctx.set_gpr(31, 0x089D2B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D2B90u) goto L_089D2B90;
    return;
L_089D2B90:
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
L_089D2BB0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2BE8;
      }
      goto L_089D2BBC;
    }
L_089D2BBC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D2BE4;
      }
      goto L_089D2BD8;
    }
L_089D2BD8:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2BF8;
      }
      goto L_089D2BE4;
    }
L_089D2BE4:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089D2BE8;
L_089D2BE8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2BBC;
      }
      goto L_089D2BF4;
    }
L_089D2BF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089D2BF8;
L_089D2BF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2C00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089D2C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089D2C18u) goto L_089D2C18;
    return;
L_089D2C18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.set_gpr(5, ctx.gpr[3] << 4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D2C38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D2C38u) goto L_089D2C38;
    return;
L_089D2C38:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28504)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28500)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28504), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28500), ctx.gpr[4]);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C98;
      }
      goto L_089D2C7C;
    }
L_089D2C7C:
    ctx.set_gpr(5, ctx.gpr[6] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] << 4u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089D2C98;
L_089D2C98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C7C;
      }
      goto L_089D2CA8;
    }
L_089D2CA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2CD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089D2CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 143u, 0x089BCD34u>(ctx, &aot_mem) && ctx.pc == 0x089D2CF0u) goto L_089D2CF0;
    return;
L_089D2CF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D2CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x089D2CFCu) goto L_089D2CFC;
    return;
L_089D2CFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2D8C;
      }
      goto L_089D2D0C;
    }
L_089D2D0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D2D2Cu);
    // nop
    goto L_089D2BB0;
L_089D2D2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2D88;
      }
      goto L_089D2D38;
    }
L_089D2D38:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2D60;
      }
      goto L_089D2D4C;
    }
L_089D2D4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2D74;
      }
      goto L_089D2D60;
    }
L_089D2D60:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D2D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2D74u) goto L_089D2D74;
    return;
L_089D2D74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089D2D88;
L_089D2D88:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_089D2D8C;
L_089D2D8C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2D0C;
      }
      goto L_089D2D94;
    }
L_089D2D94:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2DBC;
      }
      goto L_089D2DA0;
    }
L_089D2DA0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D2DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D2DB8u) goto L_089D2DB8;
    return;
L_089D2DB8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D2DBC;
L_089D2DBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2DA0;
      }
      goto L_089D2DD0;
    }
L_089D2DD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2DE0;
      }
      goto L_089D2DD8;
    }
L_089D2DD8:
    ctx.set_gpr(31, 0x089D2DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D2DE0u) goto L_089D2DE0;
    return;
L_089D2DE0:
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
L_089D2DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089D2E1Cu);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_089D2E1C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2E38;
      }
      goto L_089D2E2C;
    }
L_089D2E2C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D2E38u);
    // nop
    goto L_089D2C00;
L_089D2E38:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(508), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D2E50u);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_089D2E50:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089D2E70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2E8C;
      }
      goto L_089D2E88;
    }
L_089D2E88:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_089D2E8C;
L_089D2E8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2E94:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EB4;
      }
      goto L_089D2EA0;
    }
L_089D2EA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EB8;
      }
      goto L_089D2EB4;
    }
L_089D2EB4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    goto L_089D2EB8;
L_089D2EB8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2ED4;
      }
      goto L_089D2EC4;
    }
L_089D2EC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EE8;
      }
      goto L_089D2ED4;
    }
L_089D2ED4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EE8;
      }
      goto L_089D2EE0;
    }
L_089D2EE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_089D2EE8;
L_089D2EE8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2EF4;
      }
      goto L_089D2EF0;
    }
L_089D2EF0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[7]);
    goto L_089D2EF4;
L_089D2EF4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2F0C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[6] >> 24u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D3070;
      }
      goto L_089D2F24;
    }
L_089D2F24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D305C;
      }
      goto L_089D2F30;
    }
L_089D2F30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D3040;
      }
      goto L_089D2F3C;
    }
L_089D2F3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D3030;
      }
      goto L_089D2F48;
    }
L_089D2F48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2FEC;
      }
      goto L_089D2F54;
    }
L_089D2F54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2FC4;
      }
      goto L_089D2F60;
    }
L_089D2F60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D2F74;
      }
      goto L_089D2F6C;
    }
L_089D2F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D2F74;
    }
L_089D2F74:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28476)));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28484));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28476), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28492)));
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28488)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D2FC4;
    }
L_089D2FC4:
    ctx.set_gpr(3, ctx.gpr[6] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28492)));
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28488)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D2FEC;
    }
L_089D2FEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28476)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3024;
      }
      goto L_089D2FFC;
    }
L_089D2FFC:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28476), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28484));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D3024;
    }
L_089D3024:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D3030;
    }
L_089D3030:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28488), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D3040;
    }
L_089D3040:
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28492), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D305C;
    }
L_089D305C:
    ctx.set_gpr(4, ctx.gpr[6] << 8u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28488), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3074;
      }
      goto L_089D3070;
    }
L_089D3070:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D3074;
L_089D3074:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D307C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_089D308C;
L_089D308C:
    ctx.set_gpr(31, 0x089D3094u);
    // nop
    goto L_089D2F0C;
L_089D3094:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D30C4;
      }
      goto L_089D30AC;
    }
L_089D30AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D308C;
      }
      goto L_089D30B8;
    }
L_089D30B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D30C8;
      }
      goto L_089D30C4;
    }
L_089D30C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089D30C8;
L_089D30C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D30DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1056));
    ctx.set_gpr(31, 0x089D30FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089D30FCu) goto L_089D30FC;
    return;
L_089D30FC:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3124;
      }
      goto L_089D3108;
    }
L_089D3108:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089D3124;
L_089D3124:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3108;
      }
      goto L_089D3130;
    }
L_089D3130:
    ctx.set_gpr(3, 1023u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-17));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-257));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-513));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(-1025));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[13]);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-2049));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4097));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-16385));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[10]);
    ctx.set_gpr(3, 65535u << 16u);
    ctx.set_gpr(9, ctx.gpr[3] | 32767u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[9]);
    ctx.set_gpr(3, 65519u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(12, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(6, 65527u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 65535u);
    ctx.set_gpr(8, ctx.gpr[7] & ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[5] & ctx.gpr[13]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(5, ctx.gpr[12] & ctx.gpr[5]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(12, ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_gpr(5, 65533u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 65535u);
    ctx.set_gpr(13, ctx.gpr[12] & ctx.gpr[5]);
    ctx.set_gpr(12, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-27448), ctx.gpr[13]);
    ctx.set_gpr(12, 2246u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(4, ctx.gpr[12] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 65503u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 65023u << 16u);
    ctx.set_gpr(12, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[12]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[3] & ctx.gpr[9]);
    ctx.set_gpr(3, 65531u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[3] & ctx.gpr[12]);
    ctx.set_gpr(3, 64511u << 16u);
    ctx.set_gpr(13, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, ctx.gpr[10] & ctx.gpr[13]);
    ctx.set_gpr(10, 2246u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-27428)));
    ctx.set_gpr(10, 65471u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] | 65535u);
    ctx.set_gpr(12, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, 65407u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] | 65535u);
    ctx.set_gpr(12, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-27428), ctx.gpr[12]);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27424), ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[9]);
    ctx.set_gpr(6, ctx.gpr[5] & ctx.gpr[13]);
    ctx.set_gpr(5, 63487u << 16u);
    ctx.set_gpr(8, ctx.gpr[5] | 65535u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    ctx.set_gpr(5, 61439u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 65535u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(5, 57343u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] | 65535u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[7]);
    ctx.set_gpr(5, 49151u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 65535u);
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] >> 1u);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27420), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] >> 1u);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-27444), ctx.gpr[5]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3314;
      }
      goto L_089D32F8;
    }
L_089D32F8:
    ctx.set_gpr(5, ctx.gpr[6] << 24u);
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089D3314;
L_089D3314:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D32F8;
      }
      goto L_089D3320;
    }
L_089D3320:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3330:
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
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(22, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(2, 1024u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D34DC;
      }
      goto L_089D338C;
    }
L_089D338C:
    ctx.set_gpr(31, 0x089D3394u);
    // nop
    goto L_089D20E0;
L_089D3394:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D33A0u);
    // nop
    goto L_089D20E0;
L_089D33A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[22] & ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D340C;
      }
      goto L_089D33BC;
    }
L_089D33BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28240)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089D33DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089D33DCu) goto L_089D33DC;
    return;
L_089D33DC:
    ctx.set_gpr(2, (ctx.gpr[20] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[20] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 2048u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089D340C;
L_089D340C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D33BC;
      }
      goto L_089D341C;
    }
L_089D341C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D346C;
      }
      goto L_089D3458;
    }
L_089D3458:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3480;
      }
      goto L_089D346C;
    }
L_089D346C:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D3480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3480u) goto L_089D3480;
    return;
L_089D3480:
    ctx.set_gpr(3, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D34C0u);
    // nop
    goto L_089D20A8;
L_089D34C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(2, 64511u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444), ctx.gpr[3]);
    goto L_089D34DC;
L_089D34DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D36CC;
      }
      goto L_089D34F0;
    }
L_089D34F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D36CC;
      }
      goto L_089D34FC;
    }
L_089D34FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3530;
      }
      goto L_089D3504;
    }
L_089D3504:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D3510u);
    // nop
    goto L_089D20E0;
L_089D3510:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D352Cu);
    // nop
    goto L_089D20A8;
L_089D352C:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089D3530;
L_089D3530:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3548;
      }
      goto L_089D3540;
    }
L_089D3540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D354C;
      }
      goto L_089D3548;
    }
L_089D3548:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8));
    goto L_089D354C;
L_089D354C:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D3574u);
    // nop
    goto L_089D20E0;
L_089D3574:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D35FC;
      }
      goto L_089D3590;
    }
L_089D3590:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28304)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(31, 0x089D35BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089D35BCu) goto L_089D35BC;
    return;
L_089D35BC:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[21] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[21] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 2048u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D35FC;
L_089D35FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3590;
      }
      goto L_089D360C;
    }
L_089D360C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3660;
      }
      goto L_089D364C;
    }
L_089D364C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3674;
      }
      goto L_089D3660;
    }
L_089D3660:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D3674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3674u) goto L_089D3674;
    return;
L_089D3674:
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089D36B4u);
    // nop
    goto L_089D20A8;
L_089D36B4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1025));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444), ctx.gpr[3]);
    goto L_089D36CC;
L_089D36CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D385C;
      }
      goto L_089D36E0;
    }
L_089D36E0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3714;
      }
      goto L_089D36E8;
    }
L_089D36E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D36F4u);
    // nop
    goto L_089D20E0;
L_089D36F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D3710u);
    // nop
    goto L_089D20A8;
L_089D3710:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_089D3714;
L_089D3714:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D3720u);
    // nop
    goto L_089D20E0;
L_089D3720:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[22] & ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D378C;
      }
      goto L_089D373C;
    }
L_089D373C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28216)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089D375Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089D375Cu) goto L_089D375C;
    return;
L_089D375C:
    ctx.set_gpr(2, (ctx.gpr[20] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[20] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 2048u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089D378C;
L_089D378C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D373C;
      }
      goto L_089D379C;
    }
L_089D379C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D37EC;
      }
      goto L_089D37D8;
    }
L_089D37D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3800;
      }
      goto L_089D37EC;
    }
L_089D37EC:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D3800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3800u) goto L_089D3800;
    return;
L_089D3800:
    ctx.set_gpr(3, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D3844u);
    // nop
    goto L_089D20A8;
L_089D3844:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    goto L_089D385C;
L_089D385C:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_089D3890:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D38D0;
      }
      goto L_089D38BC;
    }
L_089D38BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D38CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D38CCu) goto L_089D38CC;
    return;
L_089D38CC:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_089D38D0;
L_089D38D0:
    ctx.set_gpr(18, ctx.gpr[3] & 255u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D38F8;
      }
      goto L_089D38EC;
    }
L_089D38EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D38F8;
      }
      goto L_089D38F4;
    }
L_089D38F4:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_089D38F8;
L_089D38F8:
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3B84;
      }
      goto L_089D3908;
    }
L_089D3908:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D3914u);
    // nop
    goto L_089D20E0;
L_089D3914:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(784)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3A5C;
      }
      goto L_089D3930;
    }
L_089D3930:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3A5C;
      }
      goto L_089D3938;
    }
L_089D3938:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089D3944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x089D3944u) goto L_089D3944;
    return;
L_089D3944:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(784)));
    ctx.set_gpr(31, 0x089D396Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x089D396Cu) goto L_089D396C;
    return;
L_089D396C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3A4C;
      }
      goto L_089D397C;
    }
L_089D397C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, 15104u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089D3A4C;
L_089D3A4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D397C;
      }
      goto L_089D3A54;
    }
L_089D3A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3B58;
      }
      goto L_089D3A5C;
    }
L_089D3A5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3B50;
      }
      goto L_089D3A80;
    }
L_089D3A80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, 15104u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089D3B50;
L_089D3B50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D3A80;
      }
      goto L_089D3B58;
    }
L_089D3B58:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D3B68u);
    // nop
    goto L_089D20A8;
L_089D3B68:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 64511u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    goto L_089D3B84;
L_089D3B84:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F50;
      }
      goto L_089D3B98;
    }
L_089D3B98:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F50;
      }
      goto L_089D3BA0;
    }
L_089D3BA0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3BB8;
      }
      goto L_089D3BB0;
    }
L_089D3BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3BBC;
      }
      goto L_089D3BB8;
    }
L_089D3BB8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8));
    goto L_089D3BBC;
L_089D3BBC:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D3BD8u);
    // nop
    goto L_089D2024;
L_089D3BD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D3BE4u);
    // nop
    goto L_089D20E0;
L_089D3BE4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28304)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3C04;
      }
      goto L_089D3BFC;
    }
L_089D3BFC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_089D3C04;
L_089D3C04:
    ctx.set_gpr(2, ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3BFC;
      }
      goto L_089D3C10;
    }
L_089D3C10:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32158)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3E24;
      }
      goto L_089D3C1C;
    }
L_089D3C1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(784)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3D30;
      }
      goto L_089D3C28;
    }
L_089D3C28:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 4u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 5u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 6u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 7u, 4u); }
    ctx.set_gpr(2, 11008u << 16u);
    ctx.set_vfpu_scalar_bits(24u, ctx.gpr[2]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 24u, 1u, 0u);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 56u, 1u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 24u, 1u, 0u);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 88u, 1u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 24u, 1u, 0u);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 120u, 1u); }
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3D1C;
      }
      goto L_089D3C58;
    }
L_089D3C58:
    ctx.set_gpr(3, ctx.gpr[4] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 8u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 9u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 10u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 11u, 4u); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vx2i(12u, 0u, 1u, 1u);
    ctx.execute_vfpu_vx2i(13u, 32u, 1u, 1u);
    ctx.execute_vfpu_vx2i(14u, 64u, 1u, 1u);
    ctx.execute_vfpu_vx2i(15u, 1u, 1u, 1u);
    ctx.execute_vfpu_vx2i(16u, 33u, 1u, 1u);
    ctx.execute_vfpu_vx2i(17u, 65u, 1u, 1u);
    ctx.execute_vfpu_vx2i(18u, 2u, 1u, 1u);
    ctx.execute_vfpu_vx2i(19u, 34u, 1u, 1u);
    ctx.execute_vfpu_vx2i(20u, 66u, 1u, 1u);
    ctx.execute_vfpu_vx2i(21u, 3u, 1u, 1u);
    ctx.execute_vfpu_vx2i(22u, 35u, 1u, 1u);
    ctx.execute_vfpu_vx2i(23u, 67u, 1u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 45u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 44u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 49u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 48u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 53u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 52u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 46u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 45u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 50u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 49u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 54u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 53u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 46u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 50u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 55u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 54u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 24u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 47u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 24u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 51u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 24u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 55u, 4u); }
    rt.unsupported(0x089D3CD8u, 0xD03D8C9Cu, "vfpu4 not lowered yet"); return;
L_089D3D1C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3C58;
      }
      goto L_089D3D28;
    }
L_089D3D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F2C;
      }
      goto L_089D3D30;
    }
L_089D3D30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3E10;
      }
      goto L_089D3D40;
    }
L_089D3D40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, 11008u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089D3E10;
L_089D3E10:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3D40;
      }
      goto L_089D3E1C;
    }
L_089D3E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F2C;
      }
      goto L_089D3E24;
    }
L_089D3E24:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F20;
      }
      goto L_089D3E30;
    }
L_089D3E30:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3F14;
      }
      goto L_089D3E44;
    }
L_089D3E44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, 11008u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(2, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089D3F14;
L_089D3F14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D3E44;
      }
      goto L_089D3F1C;
    }
L_089D3F1C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089D3F20;
L_089D3F20:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3E30;
      }
      goto L_089D3F2C;
    }
L_089D3F2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D3F38u);
    // nop
    goto L_089D20A8;
L_089D3F38:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1025));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    goto L_089D3F50;
L_089D3F50:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 5u, 0x089D40A8u>(ctx, &aot_mem); return;
      }
      goto L_089D3F68;
    }
L_089D3F68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D3F74u);
    // nop
    goto L_089D20E0;
L_089D3F74:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28232)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(812)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 2u, 0x089D4078u>(ctx, &aot_mem); return;
      }
      goto L_089D3FA8;
    }
L_089D3FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, 15616u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x089D4000u; return;
}

void recomp_unit_0115(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0115_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_115(Runtime &runtime) {
    runtime.register_generated_unit(115u, 0x089D0000u, 16384u, &recomp_unit_0115, &recomp_unit_0115_entry);
    runtime.register_function(0x089D0000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0044u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0114u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0120u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0138u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D013Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D015Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0168u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0184u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0190u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D019Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0208u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0214u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0220u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D022Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0238u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0244u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0250u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D025Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0268u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0274u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0280u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0284u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D028Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0314u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0328u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0334u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0360u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D036Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0378u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0384u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0390u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D039Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0400u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D040Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0418u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0424u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0430u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D043Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0448u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0454u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0460u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D046Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0470u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0478u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0508u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D050Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0514u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D052Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0530u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0538u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D054Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0564u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0598u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0600u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0618u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0628u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0640u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0644u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D064Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0664u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0668u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0670u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0688u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D068Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0694u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0820u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0828u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0834u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0858u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0868u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D088Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0894u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D090Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0938u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0940u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0958u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0974u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0980u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D098Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0998u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1008u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1020u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1030u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D103Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1040u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1084u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1094u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1100u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1110u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1134u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1148u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1154u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1160u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1174u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D117Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D118Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1200u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1240u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D131Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1338u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D134Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1358u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D136Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1380u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D138Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1404u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D140Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1428u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D143Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1454u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1468u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D150Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1580u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D158Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D159Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1600u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1610u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D161Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1628u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1630u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D163Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1650u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1664u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1670u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1710u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1720u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1734u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1774u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D177Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1788u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1794u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1848u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1854u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1864u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1870u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D187Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1888u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1894u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1900u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1924u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1938u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1950u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1958u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1984u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1998u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ECCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ED8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2014u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D204Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D205Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2068u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2070u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2084u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D208Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2094u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2108u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D211Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2120u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2128u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D214Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D215Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D216Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2174u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D217Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2198u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2208u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D221Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2224u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2228u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2230u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D227Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2284u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2294u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D230Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D231Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2328u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2330u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2338u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D234Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2360u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2364u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D236Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D237Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D240Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D243Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2450u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D245Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2464u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2474u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2528u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2554u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2560u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2568u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2600u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2608u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2614u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D261Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2628u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2634u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2684u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2688u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2704u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2714u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2720u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2724u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2734u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2738u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2760u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2784u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D280Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2814u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2820u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2838u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D283Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2844u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2850u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D286Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2878u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2938u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2948u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2954u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2980u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2ACCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2ED4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3030u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3040u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D305Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3070u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3074u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D307Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D308Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3094u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3108u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3124u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3130u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3314u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3320u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3330u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D338Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3394u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D340Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D341Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3458u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D346Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3480u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3504u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3510u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D352Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3530u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3540u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3548u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D354Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3574u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3590u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D360Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D364Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3660u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3674u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3710u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3714u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3720u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D373Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D375Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D378Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D379Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3800u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3844u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D385Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3908u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3914u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3930u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3938u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3944u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D396Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D397Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FA8u, &recomp_unit_0115, "recomp_unit_0115");
}
} // namespace psprecomp
