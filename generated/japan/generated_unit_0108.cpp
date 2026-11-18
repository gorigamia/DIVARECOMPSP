#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0108[4093] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 80,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 86, 0, 0, 87, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 128, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0,
    0, 161, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0,
    168, 0, 0, 169, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0,
    0, 0, 0, 0, 247, 248, 0, 0, 249, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    262, 0, 263, 0, 264, 265, 0, 266, 0, 267, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0,
    0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284,
    0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 0, 311, 0, 0, 312,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 329, 0,
    0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0,
    0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0,
    0, 348, 0, 349, 0, 0, 350, 0, 351, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0,
    371, 0, 372, 0, 0, 373, 374, 0, 375, 0, 0, 376, 377, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 382, 383, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 397,
    0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 408, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0,
    0, 0, 416, 417, 0, 0, 418, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 444, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0,
    0, 478, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 486, 0,
    0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 496, 0, 0, 497, 0, 498, 0,
    0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0,
    0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 510,
    0, 0, 511, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0,
    0, 515, 0, 0, 0, 0, 0, 0, 516, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0,
    0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0,
    0, 0, 0, 534, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 539, 0, 0, 540, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0,
    0, 0, 0, 548, 549, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555,
    556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0,
    0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0,
    0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0,
    580, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0,
    0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0,
    0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0,
    608, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616,
    0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0,
    0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625,
    0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630,
    0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0,
    0, 0, 0, 0, 0, 0, 0, 636, 637, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 641, 0, 0, 0, 0, 0, 0, 642, 0,
    0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654,
    0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658,
    0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0,
    0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 0,
    669, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675,
    0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 682, 0,
    0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 687, 688, 689, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 692, 0, 0, 693, 0, 694, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 701,
};
void recomp_unit_0108_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B4004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0108[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B4004;
    case 2u: goto L_089B4014;
    case 3u: goto L_089B4048;
    case 4u: goto L_089B4058;
    case 5u: goto L_089B4084;
    case 6u: goto L_089B40CC;
    case 7u: goto L_089B40D0;
    case 8u: goto L_089B40E0;
    case 9u: goto L_089B40F0;
    case 10u: goto L_089B4110;
    case 11u: goto L_089B4128;
    case 12u: goto L_089B4130;
    case 13u: goto L_089B413C;
    case 14u: goto L_089B4148;
    case 15u: goto L_089B416C;
    case 16u: goto L_089B4178;
    case 17u: goto L_089B418C;
    case 18u: goto L_089B41A0;
    case 19u: goto L_089B41B8;
    case 20u: goto L_089B41C0;
    case 21u: goto L_089B41D0;
    case 22u: goto L_089B41EC;
    case 23u: goto L_089B41FC;
    case 24u: goto L_089B4218;
    case 25u: goto L_089B4228;
    case 26u: goto L_089B4250;
    case 27u: goto L_089B4254;
    case 28u: goto L_089B4260;
    case 29u: goto L_089B4278;
    case 30u: goto L_089B4284;
    case 31u: goto L_089B42AC;
    case 32u: goto L_089B42D8;
    case 33u: goto L_089B42DC;
    case 34u: goto L_089B42E8;
    case 35u: goto L_089B4318;
    case 36u: goto L_089B4344;
    case 37u: goto L_089B4354;
    case 38u: goto L_089B4368;
    case 39u: goto L_089B4378;
    case 40u: goto L_089B4394;
    case 41u: goto L_089B43B4;
    case 42u: goto L_089B43C4;
    case 43u: goto L_089B43E0;
    case 44u: goto L_089B43EC;
    case 45u: goto L_089B4408;
    case 46u: goto L_089B4410;
    case 47u: goto L_089B4420;
    case 48u: goto L_089B4434;
    case 49u: goto L_089B4440;
    case 50u: goto L_089B4470;
    case 51u: goto L_089B4480;
    case 52u: goto L_089B449C;
    case 53u: goto L_089B44AC;
    case 54u: goto L_089B44BC;
    case 55u: goto L_089B44D0;
    case 56u: goto L_089B44F0;
    case 57u: goto L_089B4518;
    case 58u: goto L_089B4544;
    case 59u: goto L_089B4580;
    case 60u: goto L_089B4598;
    case 61u: goto L_089B45AC;
    case 62u: goto L_089B45B4;
    case 63u: goto L_089B45C0;
    case 64u: goto L_089B45D4;
    case 65u: goto L_089B45DC;
    case 66u: goto L_089B45E8;
    case 67u: goto L_089B45FC;
    case 68u: goto L_089B460C;
    case 69u: goto L_089B4628;
    case 70u: goto L_089B463C;
    case 71u: goto L_089B4678;
    case 72u: goto L_089B4694;
    case 73u: goto L_089B46A8;
    case 74u: goto L_089B46C8;
    case 75u: goto L_089B4714;
    case 76u: goto L_089B4738;
    case 77u: goto L_089B474C;
    case 78u: goto L_089B4770;
    case 79u: goto L_089B477C;
    case 80u: goto L_089B4780;
    case 81u: goto L_089B478C;
    case 82u: goto L_089B47A8;
    case 83u: goto L_089B47BC;
    case 84u: goto L_089B47D4;
    case 85u: goto L_089B47E0;
    case 86u: goto L_089B47E4;
    case 87u: goto L_089B47F0;
    case 88u: goto L_089B4800;
    case 89u: goto L_089B489C;
    case 90u: goto L_089B48C0;
    case 91u: goto L_089B4900;
    case 92u: goto L_089B4924;
    case 93u: goto L_089B4960;
    case 94u: goto L_089B496C;
    case 95u: goto L_089B4988;
    case 96u: goto L_089B49AC;
    case 97u: goto L_089B49E8;
    case 98u: goto L_089B4A14;
    case 99u: goto L_089B4A34;
    case 100u: goto L_089B4A44;
    case 101u: goto L_089B4A54;
    case 102u: goto L_089B4AA4;
    case 103u: goto L_089B4AC8;
    case 104u: goto L_089B4BB0;
    case 105u: goto L_089B4BC4;
    case 106u: goto L_089B4BE0;
    case 107u: goto L_089B4C0C;
    case 108u: goto L_089B4C14;
    case 109u: goto L_089B4C30;
    case 110u: goto L_089B4C34;
    case 111u: goto L_089B4C64;
    case 112u: goto L_089B4C70;
    case 113u: goto L_089B4C9C;
    case 114u: goto L_089B4CA4;
    case 115u: goto L_089B4CC0;
    case 116u: goto L_089B4CC4;
    case 117u: goto L_089B4CF4;
    case 118u: goto L_089B4D28;
    case 119u: goto L_089B4D34;
    case 120u: goto L_089B4D38;
    case 121u: goto L_089B4D44;
    case 122u: goto L_089B4D68;
    case 123u: goto L_089B4D6C;
    case 124u: goto L_089B4D78;
    case 125u: goto L_089B4D9C;
    case 126u: goto L_089B4DD0;
    case 127u: goto L_089B4DDC;
    case 128u: goto L_089B4DE0;
    case 129u: goto L_089B4DEC;
    case 130u: goto L_089B4E10;
    case 131u: goto L_089B4E14;
    case 132u: goto L_089B4E20;
    case 133u: goto L_089B4E44;
    case 134u: goto L_089B4E58;
    case 135u: goto L_089B4E64;
    case 136u: goto L_089B4E68;
    case 137u: goto L_089B4E84;
    case 138u: goto L_089B4E94;
    case 139u: goto L_089B4EA8;
    case 140u: goto L_089B4EB4;
    case 141u: goto L_089B4EB8;
    case 142u: goto L_089B4ED4;
    case 143u: goto L_089B4EE4;
    case 144u: goto L_089B4F30;
    case 145u: goto L_089B4F3C;
    case 146u: goto L_089B4F40;
    case 147u: goto L_089B4F48;
    case 148u: goto L_089B4F6C;
    case 149u: goto L_089B4F74;
    case 150u: goto L_089B4F9C;
    case 151u: goto L_089B4FC8;
    case 152u: goto L_089B5008;
    case 153u: goto L_089B5010;
    case 154u: goto L_089B5030;
    case 155u: goto L_089B505C;
    case 156u: goto L_089B5090;
    case 157u: goto L_089B5098;
    case 158u: goto L_089B50B8;
    case 159u: goto L_089B50E8;
    case 160u: goto L_089B50FC;
    case 161u: goto L_089B5108;
    case 162u: goto L_089B510C;
    case 163u: goto L_089B5114;
    case 164u: goto L_089B5134;
    case 165u: goto L_089B513C;
    case 166u: goto L_089B5160;
    case 167u: goto L_089B5170;
    case 168u: goto L_089B5184;
    case 169u: goto L_089B5190;
    case 170u: goto L_089B5194;
    case 171u: goto L_089B519C;
    case 172u: goto L_089B51BC;
    case 173u: goto L_089B51C4;
    case 174u: goto L_089B51E8;
    case 175u: goto L_089B51F8;
    case 176u: goto L_089B5214;
    case 177u: goto L_089B5224;
    case 178u: goto L_089B5240;
    case 179u: goto L_089B5250;
    case 180u: goto L_089B5280;
    case 181u: goto L_089B5290;
    case 182u: goto L_089B52AC;
    case 183u: goto L_089B52BC;
    case 184u: goto L_089B52D8;
    case 185u: goto L_089B52E8;
    case 186u: goto L_089B5304;
    case 187u: goto L_089B5314;
    case 188u: goto L_089B531C;
    case 189u: goto L_089B5338;
    case 190u: goto L_089B5348;
    case 191u: goto L_089B5368;
    case 192u: goto L_089B5378;
    case 193u: goto L_089B53AC;
    case 194u: goto L_089B53B8;
    case 195u: goto L_089B53C8;
    case 196u: goto L_089B53D8;
    case 197u: goto L_089B53E8;
    case 198u: goto L_089B53EC;
    case 199u: goto L_089B53FC;
    case 200u: goto L_089B541C;
    case 201u: goto L_089B5428;
    case 202u: goto L_089B549C;
    case 203u: goto L_089B54A8;
    case 204u: goto L_089B54B8;
    case 205u: goto L_089B54C4;
    case 206u: goto L_089B54D0;
    case 207u: goto L_089B54E0;
    case 208u: goto L_089B54EC;
    case 209u: goto L_089B54FC;
    case 210u: goto L_089B557C;
    case 211u: goto L_089B5584;
    case 212u: goto L_089B558C;
    case 213u: goto L_089B5598;
    case 214u: goto L_089B55A4;
    case 215u: goto L_089B55BC;
    case 216u: goto L_089B55CC;
    case 217u: goto L_089B55D8;
    case 218u: goto L_089B55E8;
    case 219u: goto L_089B55F4;
    case 220u: goto L_089B5604;
    case 221u: goto L_089B5610;
    case 222u: goto L_089B5620;
    case 223u: goto L_089B5628;
    case 224u: goto L_089B5634;
    case 225u: goto L_089B5648;
    case 226u: goto L_089B564C;
    case 227u: goto L_089B5658;
    case 228u: goto L_089B5660;
    case 229u: goto L_089B566C;
    case 230u: goto L_089B5678;
    case 231u: goto L_089B56A0;
    case 232u: goto L_089B56C0;
    case 233u: goto L_089B56C8;
    case 234u: goto L_089B56D4;
    case 235u: goto L_089B56E0;
    case 236u: goto L_089B56F0;
    case 237u: goto L_089B5704;
    case 238u: goto L_089B5714;
    case 239u: goto L_089B5720;
    case 240u: goto L_089B5730;
    case 241u: goto L_089B573C;
    case 242u: goto L_089B574C;
    case 243u: goto L_089B5758;
    case 244u: goto L_089B5768;
    case 245u: goto L_089B5770;
    case 246u: goto L_089B577C;
    case 247u: goto L_089B5794;
    case 248u: goto L_089B5798;
    case 249u: goto L_089B57A4;
    case 250u: goto L_089B57AC;
    case 251u: goto L_089B57B8;
    case 252u: goto L_089B57C4;
    case 253u: goto L_089B57D4;
    case 254u: goto L_089B5800;
    case 255u: goto L_089B5820;
    case 256u: goto L_089B582C;
    case 257u: goto L_089B5834;
    case 258u: goto L_089B5840;
    case 259u: goto L_089B5848;
    case 260u: goto L_089B5854;
    case 261u: goto L_089B5870;
    case 262u: goto L_089B5884;
    case 263u: goto L_089B588C;
    case 264u: goto L_089B5894;
    case 265u: goto L_089B5898;
    case 266u: goto L_089B58A0;
    case 267u: goto L_089B58A8;
    case 268u: goto L_089B58AC;
    case 269u: goto L_089B58C4;
    case 270u: goto L_089B5940;
    case 271u: goto L_089B594C;
    case 272u: goto L_089B5964;
    case 273u: goto L_089B5968;
    case 274u: goto L_089B59E4;
    case 275u: goto L_089B59F8;
    case 276u: goto L_089B5A08;
    case 277u: goto L_089B5A14;
    case 278u: goto L_089B5A20;
    case 279u: goto L_089B5A38;
    case 280u: goto L_089B5A48;
    case 281u: goto L_089B5A54;
    case 282u: goto L_089B5A64;
    case 283u: goto L_089B5A70;
    case 284u: goto L_089B5A80;
    case 285u: goto L_089B5A88;
    case 286u: goto L_089B5A94;
    case 287u: goto L_089B5AA0;
    case 288u: goto L_089B5AC0;
    case 289u: goto L_089B5AD4;
    case 290u: goto L_089B5ADC;
    case 291u: goto L_089B5AE4;
    case 292u: goto L_089B5AF0;
    case 293u: goto L_089B5AFC;
    case 294u: goto L_089B5B14;
    case 295u: goto L_089B5B24;
    case 296u: goto L_089B5B30;
    case 297u: goto L_089B5B40;
    case 298u: goto L_089B5B4C;
    case 299u: goto L_089B5B5C;
    case 300u: goto L_089B5B64;
    case 301u: goto L_089B5B70;
    case 302u: goto L_089B5B7C;
    case 303u: goto L_089B5B9C;
    case 304u: goto L_089B5BB0;
    case 305u: goto L_089B5BBC;
    case 306u: goto L_089B5BC4;
    case 307u: goto L_089B5BD0;
    case 308u: goto L_089B5BD8;
    case 309u: goto L_089B5BE0;
    case 310u: goto L_089B5BE8;
    case 311u: goto L_089B5BF4;
    case 312u: goto L_089B5C00;
    case 313u: goto L_089B5C18;
    case 314u: goto L_089B5C28;
    case 315u: goto L_089B5C34;
    case 316u: goto L_089B5C44;
    case 317u: goto L_089B5C50;
    case 318u: goto L_089B5C60;
    case 319u: goto L_089B5C68;
    case 320u: goto L_089B5C74;
    case 321u: goto L_089B5C80;
    case 322u: goto L_089B5CA0;
    case 323u: goto L_089B5CB4;
    case 324u: goto L_089B5CC0;
    case 325u: goto L_089B5CC8;
    case 326u: goto L_089B5CD4;
    case 327u: goto L_089B5CDC;
    case 328u: goto L_089B5CF0;
    case 329u: goto L_089B5CFC;
    case 330u: goto L_089B5D08;
    case 331u: goto L_089B5D14;
    case 332u: goto L_089B5D20;
    case 333u: goto L_089B5D30;
    case 334u: goto L_089B5D50;
    case 335u: goto L_089B5D74;
    case 336u: goto L_089B5D7C;
    case 337u: goto L_089B5D90;
    case 338u: goto L_089B5D98;
    case 339u: goto L_089B5DC8;
    case 340u: goto L_089B5DE0;
    case 341u: goto L_089B5E00;
    case 342u: goto L_089B5E18;
    case 343u: goto L_089B5E20;
    case 344u: goto L_089B5E50;
    case 345u: goto L_089B5E68;
    case 346u: goto L_089B5E74;
    case 347u: goto L_089B5E7C;
    case 348u: goto L_089B5E88;
    case 349u: goto L_089B5E90;
    case 350u: goto L_089B5E9C;
    case 351u: goto L_089B5EA4;
    case 352u: goto L_089B5EA8;
    case 353u: goto L_089B5ED0;
    case 354u: goto L_089B5F04;
    case 355u: goto L_089B5F30;
    case 356u: goto L_089B5F38;
    case 357u: goto L_089B5F54;
    case 358u: goto L_089B5F74;
    case 359u: goto L_089B5F7C;
    case 360u: goto L_089B5FA8;
    case 361u: goto L_089B5FC4;
    case 362u: goto L_089B5FE0;
    case 363u: goto L_089B5FFC;
    case 364u: goto L_089B6018;
    case 365u: goto L_089B6034;
    case 366u: goto L_089B6038;
    case 367u: goto L_089B6044;
    case 368u: goto L_089B6068;
    case 369u: goto L_089B6070;
    case 370u: goto L_089B607C;
    case 371u: goto L_089B6084;
    case 372u: goto L_089B608C;
    case 373u: goto L_089B6098;
    case 374u: goto L_089B609C;
    case 375u: goto L_089B60A4;
    case 376u: goto L_089B60B0;
    case 377u: goto L_089B60B4;
    case 378u: goto L_089B60BC;
    case 379u: goto L_089B60D0;
    case 380u: goto L_089B6148;
    case 381u: goto L_089B6150;
    case 382u: goto L_089B6160;
    case 383u: goto L_089B6164;
    case 384u: goto L_089B6174;
    case 385u: goto L_089B619C;
    case 386u: goto L_089B61B4;
    case 387u: goto L_089B61BC;
    case 388u: goto L_089B623C;
    case 389u: goto L_089B6248;
    case 390u: goto L_089B6260;
    case 391u: goto L_089B6290;
    case 392u: goto L_089B62AC;
    case 393u: goto L_089B62C4;
    case 394u: goto L_089B62DC;
    case 395u: goto L_089B62E4;
    case 396u: goto L_089B62F4;
    case 397u: goto L_089B6300;
    case 398u: goto L_089B6308;
    case 399u: goto L_089B6318;
    case 400u: goto L_089B6320;
    case 401u: goto L_089B6330;
    case 402u: goto L_089B6340;
    case 403u: goto L_089B63F0;
    case 404u: goto L_089B63F8;
    case 405u: goto L_089B643C;
    case 406u: goto L_089B6450;
    case 407u: goto L_089B6468;
    case 408u: goto L_089B646C;
    case 409u: goto L_089B6478;
    case 410u: goto L_089B6498;
    case 411u: goto L_089B64C4;
    case 412u: goto L_089B64D0;
    case 413u: goto L_089B64E4;
    case 414u: goto L_089B64F4;
    case 415u: goto L_089B64FC;
    case 416u: goto L_089B650C;
    case 417u: goto L_089B6510;
    case 418u: goto L_089B651C;
    case 419u: goto L_089B6520;
    case 420u: goto L_089B6530;
    case 421u: goto L_089B654C;
    case 422u: goto L_089B6578;
    case 423u: goto L_089B6614;
    case 424u: goto L_089B661C;
    case 425u: goto L_089B6650;
    case 426u: goto L_089B6668;
    case 427u: goto L_089B6680;
    case 428u: goto L_089B66A4;
    case 429u: goto L_089B66D0;
    case 430u: goto L_089B66F8;
    case 431u: goto L_089B6718;
    case 432u: goto L_089B6728;
    case 433u: goto L_089B6730;
    case 434u: goto L_089B6750;
    case 435u: goto L_089B6760;
    case 436u: goto L_089B6768;
    case 437u: goto L_089B6770;
    case 438u: goto L_089B6790;
    case 439u: goto L_089B67A0;
    case 440u: goto L_089B67A8;
    case 441u: goto L_089B67C8;
    case 442u: goto L_089B67D8;
    case 443u: goto L_089B67E0;
    case 444u: goto L_089B67E4;
    case 445u: goto L_089B67F4;
    case 446u: goto L_089B6810;
    case 447u: goto L_089B682C;
    case 448u: goto L_089B684C;
    case 449u: goto L_089B685C;
    case 450u: goto L_089B6870;
    case 451u: goto L_089B6890;
    case 452u: goto L_089B68C8;
    case 453u: goto L_089B68EC;
    case 454u: goto L_089B6948;
    case 455u: goto L_089B6950;
    case 456u: goto L_089B6980;
    case 457u: goto L_089B6990;
    case 458u: goto L_089B69A8;
    case 459u: goto L_089B69C0;
    case 460u: goto L_089B69DC;
    case 461u: goto L_089B69E4;
    case 462u: goto L_089B69FC;
    case 463u: goto L_089B6A14;
    case 464u: goto L_089B6A34;
    case 465u: goto L_089B6AB8;
    case 466u: goto L_089B6AC4;
    case 467u: goto L_089B6AD4;
    case 468u: goto L_089B6AF4;
    case 469u: goto L_089B6B80;
    case 470u: goto L_089B6B90;
    case 471u: goto L_089B6BA8;
    case 472u: goto L_089B6BB0;
    case 473u: goto L_089B6BC0;
    case 474u: goto L_089B6BD0;
    case 475u: goto L_089B6BE0;
    case 476u: goto L_089B6BF4;
    case 477u: goto L_089B6BFC;
    case 478u: goto L_089B6C08;
    case 479u: goto L_089B6C10;
    case 480u: goto L_089B6C28;
    case 481u: goto L_089B6CA4;
    case 482u: goto L_089B6CC0;
    case 483u: goto L_089B6CD0;
    case 484u: goto L_089B6CE0;
    case 485u: goto L_089B6CEC;
    case 486u: goto L_089B6CFC;
    case 487u: goto L_089B6D08;
    case 488u: goto L_089B6D18;
    case 489u: goto L_089B6D28;
    case 490u: goto L_089B6D34;
    case 491u: goto L_089B6D74;
    case 492u: goto L_089B6DB4;
    case 493u: goto L_089B6DBC;
    case 494u: goto L_089B6DC8;
    case 495u: goto L_089B6DE4;
    case 496u: goto L_089B6DE8;
    case 497u: goto L_089B6DF4;
    case 498u: goto L_089B6DFC;
    case 499u: goto L_089B6E18;
    case 500u: goto L_089B6E28;
    case 501u: goto L_089B6E34;
    case 502u: goto L_089B6E68;
    case 503u: goto L_089B6E7C;
    case 504u: goto L_089B6E98;
    case 505u: goto L_089B6EB8;
    case 506u: goto L_089B6EC8;
    case 507u: goto L_089B6EE0;
    case 508u: goto L_089B6FB4;
    case 509u: goto L_089B6FFC;
    case 510u: goto L_089B7000;
    case 511u: goto L_089B700C;
    case 512u: goto L_089B7014;
    case 513u: goto L_089B7020;
    case 514u: goto L_089B707C;
    case 515u: goto L_089B7088;
    case 516u: goto L_089B70A4;
    case 517u: goto L_089B70A8;
    case 518u: goto L_089B70EC;
    case 519u: goto L_089B710C;
    case 520u: goto L_089B7118;
    case 521u: goto L_089B7130;
    case 522u: goto L_089B7148;
    case 523u: goto L_089B715C;
    case 524u: goto L_089B71A0;
    case 525u: goto L_089B71BC;
    case 526u: goto L_089B71D0;
    case 527u: goto L_089B71F0;
    case 528u: goto L_089B7234;
    case 529u: goto L_089B7258;
    case 530u: goto L_089B7328;
    case 531u: goto L_089B733C;
    case 532u: goto L_089B7360;
    case 533u: goto L_089B737C;
    case 534u: goto L_089B7390;
    case 535u: goto L_089B7394;
    case 536u: goto L_089B73A0;
    case 537u: goto L_089B73AC;
    case 538u: goto L_089B73B4;
    case 539u: goto L_089B73C0;
    case 540u: goto L_089B73CC;
    case 541u: goto L_089B73D0;
    case 542u: goto L_089B73E4;
    case 543u: goto L_089B7420;
    case 544u: goto L_089B7440;
    case 545u: goto L_089B744C;
    case 546u: goto L_089B746C;
    case 547u: goto L_089B7478;
    case 548u: goto L_089B7490;
    case 549u: goto L_089B7494;
    case 550u: goto L_089B749C;
    case 551u: goto L_089B74B0;
    case 552u: goto L_089B74D0;
    case 553u: goto L_089B74E4;
    case 554u: goto L_089B74F4;
    case 555u: goto L_089B7500;
    case 556u: goto L_089B7504;
    case 557u: goto L_089B7510;
    case 558u: goto L_089B7518;
    case 559u: goto L_089B7544;
    case 560u: goto L_089B756C;
    case 561u: goto L_089B757C;
    case 562u: goto L_089B7588;
    case 563u: goto L_089B7594;
    case 564u: goto L_089B75A0;
    case 565u: goto L_089B75B0;
    case 566u: goto L_089B75B8;
    case 567u: goto L_089B75C8;
    case 568u: goto L_089B75D8;
    case 569u: goto L_089B75E4;
    case 570u: goto L_089B75F0;
    case 571u: goto L_089B75FC;
    case 572u: goto L_089B760C;
    case 573u: goto L_089B7618;
    case 574u: goto L_089B7620;
    case 575u: goto L_089B762C;
    case 576u: goto L_089B7634;
    case 577u: goto L_089B7654;
    case 578u: goto L_089B766C;
    case 579u: goto L_089B7678;
    case 580u: goto L_089B7684;
    case 581u: goto L_089B7694;
    case 582u: goto L_089B76A8;
    case 583u: goto L_089B76C0;
    case 584u: goto L_089B76D0;
    case 585u: goto L_089B76E8;
    case 586u: goto L_089B76F0;
    case 587u: goto L_089B76FC;
    case 588u: goto L_089B7708;
    case 589u: goto L_089B771C;
    case 590u: goto L_089B7724;
    case 591u: goto L_089B7730;
    case 592u: goto L_089B773C;
    case 593u: goto L_089B7750;
    case 594u: goto L_089B7768;
    case 595u: goto L_089B7778;
    case 596u: goto L_089B7790;
    case 597u: goto L_089B77A0;
    case 598u: goto L_089B77BC;
    case 599u: goto L_089B77D0;
    case 600u: goto L_089B77E0;
    case 601u: goto L_089B7800;
    case 602u: goto L_089B7818;
    case 603u: goto L_089B7830;
    case 604u: goto L_089B7844;
    case 605u: goto L_089B7854;
    case 606u: goto L_089B7860;
    case 607u: goto L_089B786C;
    case 608u: goto L_089B7884;
    case 609u: goto L_089B7890;
    case 610u: goto L_089B789C;
    case 611u: goto L_089B78AC;
    case 612u: goto L_089B78C0;
    case 613u: goto L_089B78D8;
    case 614u: goto L_089B78E4;
    case 615u: goto L_089B78F0;
    case 616u: goto L_089B7900;
    case 617u: goto L_089B7914;
    case 618u: goto L_089B791C;
    case 619u: goto L_089B7934;
    case 620u: goto L_089B793C;
    case 621u: goto L_089B7958;
    case 622u: goto L_089B7970;
    case 623u: goto L_089B798C;
    case 624u: goto L_089B79B4;
    case 625u: goto L_089B7A00;
    case 626u: goto L_089B7A1C;
    case 627u: goto L_089B7A38;
    case 628u: goto L_089B7A48;
    case 629u: goto L_089B7A64;
    case 630u: goto L_089B7A80;
    case 631u: goto L_089B7A90;
    case 632u: goto L_089B7AA8;
    case 633u: goto L_089B7AC4;
    case 634u: goto L_089B7AE0;
    case 635u: goto L_089B7AFC;
    case 636u: goto L_089B7B20;
    case 637u: goto L_089B7B24;
    case 638u: goto L_089B7B34;
    case 639u: goto L_089B7B3C;
    case 640u: goto L_089B7B5C;
    case 641u: goto L_089B7B60;
    case 642u: goto L_089B7B7C;
    case 643u: goto L_089B7B94;
    case 644u: goto L_089B7BB0;
    case 645u: goto L_089B7BD0;
    case 646u: goto L_089B7BD4;
    case 647u: goto L_089B7BE0;
    case 648u: goto L_089B7BFC;
    case 649u: goto L_089B7C1C;
    case 650u: goto L_089B7C3C;
    case 651u: goto L_089B7C40;
    case 652u: goto L_089B7C4C;
    case 653u: goto L_089B7C68;
    case 654u: goto L_089B7C80;
    case 655u: goto L_089B7C9C;
    case 656u: goto L_089B7CB8;
    case 657u: goto L_089B7CD4;
    case 658u: goto L_089B7D00;
    case 659u: goto L_089B7D14;
    case 660u: goto L_089B7D30;
    case 661u: goto L_089B7D4C;
    case 662u: goto L_089B7D60;
    case 663u: goto L_089B7D7C;
    case 664u: goto L_089B7D98;
    case 665u: goto L_089B7DC8;
    case 666u: goto L_089B7DE0;
    case 667u: goto L_089B7DE8;
    case 668u: goto L_089B7DF4;
    case 669u: goto L_089B7E04;
    case 670u: goto L_089B7E18;
    case 671u: goto L_089B7E28;
    case 672u: goto L_089B7E40;
    case 673u: goto L_089B7E58;
    case 674u: goto L_089B7E70;
    case 675u: goto L_089B7E80;
    case 676u: goto L_089B7EA4;
    case 677u: goto L_089B7EAC;
    case 678u: goto L_089B7EC0;
    case 679u: goto L_089B7ED0;
    case 680u: goto L_089B7EE8;
    case 681u: goto L_089B7EF4;
    case 682u: goto L_089B7EFC;
    case 683u: goto L_089B7F08;
    case 684u: goto L_089B7F18;
    case 685u: goto L_089B7F34;
    case 686u: goto L_089B7F40;
    case 687u: goto L_089B7F4C;
    case 688u: goto L_089B7F50;
    case 689u: goto L_089B7F54;
    case 690u: goto L_089B7F5C;
    case 691u: goto L_089B7F64;
    case 692u: goto L_089B7F90;
    case 693u: goto L_089B7F9C;
    case 694u: goto L_089B7FA4;
    case 695u: goto L_089B7FB0;
    case 696u: goto L_089B7FBC;
    case 697u: goto L_089B7FC4;
    case 698u: goto L_089B7FD0;
    case 699u: goto L_089B7FDC;
    case 700u: goto L_089B7FE4;
    case 701u: goto L_089B7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B4004:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[18]);
    goto L_089B4014;
L_089B4014:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4048u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4048u) goto L_089B4048;
    return;
L_089B4048:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
    goto L_089B4058;
L_089B4058:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_089B4084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B40D0;
      }
      goto L_089B40CC;
    }
L_089B40CC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_089B40D0;
L_089B40D0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089B40E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B40E0u) goto L_089B40E0;
    return;
L_089B40E0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089B40F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B40F0u) goto L_089B40F0;
    return;
L_089B40F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4128;
      }
      goto L_089B4110;
    }
L_089B4110:
    ctx.set_gpr(2, 65520u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_089B4128;
L_089B4128:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B413C;
      }
      goto L_089B4130;
    }
L_089B4130:
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4148;
      }
      goto L_089B413C;
    }
L_089B413C:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[2] << 1u);
    goto L_089B4148;
L_089B4148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B416Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B416Cu) goto L_089B416C;
    return;
L_089B416C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B418C;
      }
      goto L_089B4178;
    }
L_089B4178:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B418Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 665u, 0x089B3DB0u>(ctx, &aot_mem) && ctx.pc == 0x089B418Cu) goto L_089B418C;
    return;
L_089B418C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B41FC;
      }
      goto L_089B41A0;
    }
L_089B41A0:
    ctx.set_gpr(22, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B41D0;
      }
      goto L_089B41B8;
    }
L_089B41B8:
    ctx.set_gpr(31, 0x089B41C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B41C0u) goto L_089B41C0;
    return;
L_089B41C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[22]);
    goto L_089B41D0;
L_089B41D0:
    ctx.set_gpr(22, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B41ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B41ECu) goto L_089B41EC;
    return;
L_089B41EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[22]);
    goto L_089B41FC;
L_089B41FC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089B4218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 680u, 0x089B3F48u>(ctx, &aot_mem) && ctx.pc == 0x089B4218u) goto L_089B4218;
    return;
L_089B4218:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4254;
      }
      goto L_089B4228;
    }
L_089B4228:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4250u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4250u) goto L_089B4250;
    return;
L_089B4250:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089B4254;
L_089B4254:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4228;
      }
      goto L_089B4260;
    }
L_089B4260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B42E8;
      }
      goto L_089B4278;
    }
L_089B4278:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B42DC;
      }
      goto L_089B4284;
    }
L_089B4284:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B42ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B42ACu) goto L_089B42AC;
    return;
L_089B42AC:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B42D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B42D8u) goto L_089B42D8;
    return;
L_089B42D8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089B42DC;
L_089B42DC:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4284;
      }
      goto L_089B42E8;
    }
L_089B42E8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4344u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4344u) goto L_089B4344;
    return;
L_089B4344:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B4354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B4354u) goto L_089B4354;
    return;
L_089B4354:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4368u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4368u) goto L_089B4368;
    return;
L_089B4368:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B4378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B4378u) goto L_089B4378;
    return;
L_089B4378:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4394u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4394u) goto L_089B4394;
    return;
L_089B4394:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B43B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B43B4u) goto L_089B43B4;
    return;
L_089B43B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B4410;
      }
      goto L_089B43C4;
    }
L_089B43C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B43E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B43E0u) goto L_089B43E0;
    return;
L_089B43E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089B43ECu);
    // nop
    goto L_089B49E8;
L_089B43EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4408u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4408u) goto L_089B4408;
    return;
L_089B4408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4420;
      }
      goto L_089B4410;
    }
L_089B4410:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089B4420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4420u) goto L_089B4420;
    return;
L_089B4420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4434:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4470u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4470u) goto L_089B4470;
    return;
L_089B4470:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B449C;
      }
      goto L_089B4480;
    }
L_089B4480:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B449Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B449Cu) goto L_089B449C;
    return;
L_089B449C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B44ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B44ACu) goto L_089B44AC;
    return;
L_089B44AC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B44BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B44BCu) goto L_089B44BC;
    return;
L_089B44BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B44D0:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B44F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4518:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4580u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4580u) goto L_089B4580;
    return;
L_089B4580:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B45B4;
      }
      goto L_089B4598;
    }
L_089B4598:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B45ACu);
    // nop
    goto L_089B44D0;
L_089B45AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B45FC;
      }
      goto L_089B45B4;
    }
L_089B45B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B45DC;
      }
      goto L_089B45C0;
    }
L_089B45C0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B45D4u);
    // nop
    goto L_089B44F0;
L_089B45D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B45FC;
      }
      goto L_089B45DC;
    }
L_089B45DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B45FC;
      }
      goto L_089B45E8;
    }
L_089B45E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B45FCu);
    // nop
    goto L_089B4518;
L_089B45FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B4678;
      }
      goto L_089B460C;
    }
L_089B460C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4628u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4628u) goto L_089B4628;
    return;
L_089B4628:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089B463Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 384u, 0x08A03F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B463Cu) goto L_089B463C;
    return;
L_089B463C:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B46A8;
      }
      goto L_089B4678;
    }
L_089B4678:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4694u) goto L_089B4694;
    return;
L_089B4694:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089B46A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089B46A8u) goto L_089B46A8;
    return;
L_089B46A8:
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
L_089B46C8:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089B4714u);
    // nop
    goto L_089B798C;
L_089B4714:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4738u) goto L_089B4738;
    return;
L_089B4738:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B474Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B474Cu) goto L_089B474C;
    return;
L_089B474C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(30, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B477C;
      }
      goto L_089B4770;
    }
L_089B4770:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4780;
      }
      goto L_089B477C;
    }
L_089B477C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(6));
    goto L_089B4780;
L_089B4780:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4960;
      }
      goto L_089B478C;
    }
L_089B478C:
    ctx.set_gpr(23, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x089B47A8u);
    // nop
    goto L_089B4544;
L_089B47A8:
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47E0;
      }
      goto L_089B47BC;
    }
L_089B47BC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B47D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B47D4u) goto L_089B47D4;
    return;
L_089B47D4:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B47E4;
      }
      goto L_089B47E0;
    }
L_089B47E0:
    ctx.fpr[21] = std::bit_cast<float>(0u);
    goto L_089B47E4;
L_089B47E4:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B47F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem) && ctx.pc == 0x089B47F0u) goto L_089B47F0;
    return;
L_089B47F0:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089B4800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 414u, 0x0880E13Cu>(ctx, &aot_mem) && ctx.pc == 0x089B4800u) goto L_089B4800;
    return;
L_089B4800:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[6] + ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[8];
    ctx.fpr[7] = ctx.fpr[5] - ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = ctx.fpr[7] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[6] = ctx.fpr[6] - ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[6];
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B48C0;
      }
      goto L_089B489C;
    }
L_089B489C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B48C0;
L_089B48C0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[2] = ctx.fpr[6] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = ctx.fpr[3] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4924;
      }
      goto L_089B4900;
    }
L_089B4900:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B4924;
L_089B4924:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[2] = ctx.fpr[8] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[7];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B4960;
L_089B4960:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B478C;
      }
      goto L_089B496C;
    }
L_089B496C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4988u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4988u) goto L_089B4988;
    return;
L_089B4988:
    ctx.set_gpr(6, ctx.gpr[22] << 1u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B49ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B49ACu) goto L_089B49AC;
    return;
L_089B49AC:
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
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B49E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4A14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4A14u) goto L_089B4A14;
    return;
L_089B4A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4A34u) goto L_089B4A34;
    return;
L_089B4A34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B4A54;
      }
      goto L_089B4A44;
    }
L_089B4A44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B4BB0;
      }
      goto L_089B4A54;
    }
L_089B4A54:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(364), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(368));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(380));
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(10, ctx.gpr[16] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(31, 0x089B4AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 155u, 0x08A02190u>(ctx, &aot_mem) && ctx.pc == 0x089B4AA4u) goto L_089B4AA4;
    return;
L_089B4AA4:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21) ^ 0x80000000u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20) ^ 0x80000000u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    ctx.fpr[17] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(31, 0x089B4AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 69u, 0x08A00CCCu>(ctx, &aot_mem) && ctx.pc == 0x089B4AC8u) goto L_089B4AC8;
    return;
L_089B4AC8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = ctx.fpr[4] / ctx.fpr[0];
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(312), 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(344), 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(376)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[2] = ctx.fpr[4] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(376)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(348), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(320), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(308), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(324), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(340), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089B4BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 756u, 0x089FFFCCu>(ctx, &aot_mem) && ctx.pc == 0x089B4BB0u) goto L_089B4BB0;
    return;
L_089B4BB0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(31, 0x089B4BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x089B4BC4u) goto L_089B4BC4;
    return;
L_089B4BC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4BE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C30;
      }
      goto L_089B4C0C;
    }
L_089B4C0C:
    ctx.set_gpr(31, 0x089B4C14u);
    // nop
    goto L_089B4C64;
L_089B4C14:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4C34;
      }
      goto L_089B4C30;
    }
L_089B4C30:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089B4C34;
L_089B4C34:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_089B4C64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4CC0;
      }
      goto L_089B4C9C;
    }
L_089B4C9C:
    ctx.set_gpr(31, 0x089B4CA4u);
    // nop
    goto L_089B4C64;
L_089B4CA4:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4CC4;
      }
      goto L_089B4CC0;
    }
L_089B4CC0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089B4CC4;
L_089B4CC4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_089B4CF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D34;
      }
      goto L_089B4D28;
    }
L_089B4D28:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D38;
      }
      goto L_089B4D34;
    }
L_089B4D34:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(6));
    goto L_089B4D38;
L_089B4D38:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D6C;
      }
      goto L_089B4D44;
    }
L_089B4D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4D68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4D68u) goto L_089B4D68;
    return;
L_089B4D68:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089B4D6C;
L_089B4D6C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4D44;
      }
      goto L_089B4D78;
    }
L_089B4D78:
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
L_089B4D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4DDC;
      }
      goto L_089B4DD0;
    }
L_089B4DD0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4DE0;
      }
      goto L_089B4DDC;
    }
L_089B4DDC:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(6));
    goto L_089B4DE0;
L_089B4DE0:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E14;
      }
      goto L_089B4DEC;
    }
L_089B4DEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4E10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4E10u) goto L_089B4E10;
    return;
L_089B4E10:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089B4E14;
L_089B4E14:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4DEC;
      }
      goto L_089B4E20;
    }
L_089B4E20:
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
L_089B4E44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E64;
      }
      goto L_089B4E58;
    }
L_089B4E58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4E68;
      }
      goto L_089B4E64;
    }
L_089B4E64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_089B4E68;
L_089B4E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4E84u) goto L_089B4E84;
    return;
L_089B4E84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4E94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB4;
      }
      goto L_089B4EA8;
    }
L_089B4EA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4EB8;
      }
      goto L_089B4EB4;
    }
L_089B4EB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_089B4EB8;
L_089B4EB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4ED4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4ED4u) goto L_089B4ED4;
    return;
L_089B4ED4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B4EE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4F3C;
      }
      goto L_089B4F30;
    }
L_089B4F30:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4F40;
      }
      goto L_089B4F3C;
    }
L_089B4F3C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(6));
    goto L_089B4F40;
L_089B4F40:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B4F74;
      }
      goto L_089B4F48;
    }
L_089B4F48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4F6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4F6Cu) goto L_089B4F6C;
    return;
L_089B4F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B4F9C;
      }
      goto L_089B4F74;
    }
L_089B4F74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4F9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4F9Cu) goto L_089B4F9C;
    return;
L_089B4F9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(22, ctx.lo);
    ctx.set_gpr(23, ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B4FC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B4FC8u) goto L_089B4FC8;
    return;
L_089B4FC8:
    ctx.set_gpr(2, 0u < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5008u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5008u) goto L_089B5008;
    return;
L_089B5008:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5030;
      }
      goto L_089B5010;
    }
L_089B5010:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5030u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5030u) goto L_089B5030;
    return;
L_089B5030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B505Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B505Cu) goto L_089B505C;
    return;
L_089B505C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5090u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5090u) goto L_089B5090;
    return;
L_089B5090:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B50B8;
      }
      goto L_089B5098;
    }
L_089B5098:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[22] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B50B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B50B8u) goto L_089B50B8;
    return;
L_089B50B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B50E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5108;
      }
      goto L_089B50FC;
    }
L_089B50FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B510C;
      }
      goto L_089B5108;
    }
L_089B5108:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_089B510C;
L_089B510C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B513C;
      }
      goto L_089B5114;
    }
L_089B5114:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5134u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5134u) goto L_089B5134;
    return;
L_089B5134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5160;
      }
      goto L_089B513C;
    }
L_089B513C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5160u) goto L_089B5160;
    return;
L_089B5160:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5170:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5190;
      }
      goto L_089B5184;
    }
L_089B5184:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5194;
      }
      goto L_089B5190;
    }
L_089B5190:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_089B5194;
L_089B5194:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B51C4;
      }
      goto L_089B519C;
    }
L_089B519C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B51BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B51BCu) goto L_089B51BC;
    return;
L_089B51BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B51E8;
      }
      goto L_089B51C4;
    }
L_089B51C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B51E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B51E8u) goto L_089B51E8;
    return;
L_089B51E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B51F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5214u) goto L_089B5214;
    return;
L_089B5214:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5240u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5240u) goto L_089B5240;
    return;
L_089B5240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5280u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5280u) goto L_089B5280;
    return;
L_089B5280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B52ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B52ACu) goto L_089B52AC;
    return;
L_089B52AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B52BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B52D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B52D8u) goto L_089B52D8;
    return;
L_089B52D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B52E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5304u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5304u) goto L_089B5304;
    return;
L_089B5304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5314:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B531C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30912));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089B5338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 499u, 0x0899EC00u>(ctx, &aot_mem) && ctx.pc == 0x089B5338u) goto L_089B5338;
    return;
L_089B5338:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30912));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089B5368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 506u, 0x0899EC50u>(ctx, &aot_mem) && ctx.pc == 0x089B5368u) goto L_089B5368;
    return;
L_089B5368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089B53ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B53ACu) goto L_089B53AC;
    return;
L_089B53AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B53D8;
      }
      goto L_089B53B8;
    }
L_089B53B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B53D8;
      }
      goto L_089B53C8;
    }
L_089B53C8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B53D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B53D8u) goto L_089B53D8;
    return;
L_089B53D8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B53EC;
      }
      goto L_089B53E8;
    }
L_089B53E8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089B53EC;
L_089B53EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B5428;
      }
      goto L_089B53FC;
    }
L_089B53FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B541Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B541Cu) goto L_089B541C;
    return;
L_089B541C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5EA8;
      }
      goto L_089B5428;
    }
L_089B5428:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(129)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(130)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(131)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(444), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.set_gpr(31, 0x089B549Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B549Cu) goto L_089B549C;
    return;
L_089B549C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B54C4;
      }
      goto L_089B54A8;
    }
L_089B54A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x089B54B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 33u, 0x089BC64Cu>(ctx, &aot_mem) && ctx.pc == 0x089B54B8u) goto L_089B54B8;
    return;
L_089B54B8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B54D0;
      }
      goto L_089B54C4;
    }
L_089B54C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5EA8;
      }
      goto L_089B54D0;
    }
L_089B54D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B54EC;
      }
      goto L_089B54E0;
    }
L_089B54E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5EA8;
      }
      goto L_089B54EC;
    }
L_089B54EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B5848;
      }
      goto L_089B54FC;
    }
L_089B54FC:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(101)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(102)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(103)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(31, 0x089B557Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B557Cu) goto L_089B557C;
    return;
L_089B557C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5848;
      }
      goto L_089B5584;
    }
L_089B5584:
    ctx.set_gpr(31, 0x089B558Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B558Cu) goto L_089B558C;
    return;
L_089B558C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B5598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B5598u) goto L_089B5598;
    return;
L_089B5598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B55A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 176u, 0x089F4E70u>(ctx, &aot_mem) && ctx.pc == 0x089B55A4u) goto L_089B55A4;
    return;
L_089B55A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B55CC;
      }
      goto L_089B55BC;
    }
L_089B55BC:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B55CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B55CCu) goto L_089B55CC;
    return;
L_089B55CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5604;
      }
      goto L_089B55D8;
    }
L_089B55D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B55F4;
      }
      goto L_089B55E8;
    }
L_089B55E8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5604;
      }
      goto L_089B55F4;
    }
L_089B55F4:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B5604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5604u) goto L_089B5604;
    return;
L_089B5604:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B564C;
      }
      goto L_089B5610;
    }
L_089B5610:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5648;
      }
      goto L_089B5620;
    }
L_089B5620:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5648;
      }
      goto L_089B5628;
    }
L_089B5628:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5648;
      }
      goto L_089B5634;
    }
L_089B5634:
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    goto L_089B5648;
L_089B5648:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089B564C;
L_089B564C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5610;
      }
      goto L_089B5658;
    }
L_089B5658:
    ctx.set_gpr(31, 0x089B5660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5660u) goto L_089B5660;
    return;
L_089B5660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B566Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B566Cu) goto L_089B566C;
    return;
L_089B566C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B5678u) goto L_089B5678;
    return;
L_089B5678:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(31, 0x089B56A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B56A0u) goto L_089B56A0;
    return;
L_089B56A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(31, 0x089B56C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B56C0u) goto L_089B56C0;
    return;
L_089B56C0:
    ctx.set_gpr(31, 0x089B56C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B56C8u) goto L_089B56C8;
    return;
L_089B56C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B56D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B56D4u) goto L_089B56D4;
    return;
L_089B56D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B56E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 176u, 0x089F4E70u>(ctx, &aot_mem) && ctx.pc == 0x089B56E0u) goto L_089B56E0;
    return;
L_089B56E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B56F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B56F0u) goto L_089B56F0;
    return;
L_089B56F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5714;
      }
      goto L_089B5704;
    }
L_089B5704:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B5714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5714u) goto L_089B5714;
    return;
L_089B5714:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B574C;
      }
      goto L_089B5720;
    }
L_089B5720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B573C;
      }
      goto L_089B5730;
    }
L_089B5730:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B574C;
      }
      goto L_089B573C;
    }
L_089B573C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B574Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B574Cu) goto L_089B574C;
    return;
L_089B574C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5798;
      }
      goto L_089B5758;
    }
L_089B5758:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5794;
      }
      goto L_089B5768;
    }
L_089B5768:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5794;
      }
      goto L_089B5770;
    }
L_089B5770:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5794;
      }
      goto L_089B577C;
    }
L_089B577C:
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089B5794;
L_089B5794:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089B5798;
L_089B5798:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5758;
      }
      goto L_089B57A4;
    }
L_089B57A4:
    ctx.set_gpr(31, 0x089B57ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B57ACu) goto L_089B57AC;
    return;
L_089B57AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B57B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B57B8u) goto L_089B57B8;
    return;
L_089B57B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B57C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B57C4u) goto L_089B57C4;
    return;
L_089B57C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B57D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B57D4u) goto L_089B57D4;
    return;
L_089B57D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(31, 0x089B5800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B5800u) goto L_089B5800;
    return;
L_089B5800:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(31, 0x089B5820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B5820u) goto L_089B5820;
    return;
L_089B5820:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5834;
      }
      goto L_089B582C;
    }
L_089B582C:
    ctx.set_gpr(31, 0x089B5834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5834u) goto L_089B5834;
    return;
L_089B5834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5848;
      }
      goto L_089B5840;
    }
L_089B5840:
    ctx.set_gpr(31, 0x089B5848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5848u) goto L_089B5848;
    return;
L_089B5848:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B58AC;
      }
      goto L_089B5854;
    }
L_089B5854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5894;
      }
      goto L_089B5870;
    }
L_089B5870:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(31, 0x089B5884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5884u) goto L_089B5884;
    return;
L_089B5884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5894;
      }
      goto L_089B588C;
    }
L_089B588C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5898;
      }
      goto L_089B5894;
    }
L_089B5894:
    ctx.set_gpr(19, 0u + 0u);
    goto L_089B5898;
L_089B5898:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B58A8;
      }
      goto L_089B58A0;
    }
L_089B58A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089B58A8;
L_089B58A8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089B58AC;
L_089B58AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5854;
      }
      goto L_089B58C4;
    }
L_089B58C4:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(357), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(358), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(359), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.set_gpr(31, 0x089B5940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B5940u) goto L_089B5940;
    return;
L_089B5940:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5968;
      }
      goto L_089B594C;
    }
L_089B594C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.set_gpr(31, 0x089B5964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B5964u) goto L_089B5964;
    return;
L_089B5964:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_089B5968;
L_089B5968:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(328), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(329), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(330), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(47)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(331), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(352), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(31, 0x089B59E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B59E4u) goto L_089B59E4;
    return;
L_089B59E4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089B59F8u);
    // nop
    goto L_089B6068;
L_089B59F8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, ctx.lo);
    ctx.set_gpr(31, 0x089B5A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5A08u) goto L_089B5A08;
    return;
L_089B5A08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B5A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B5A14u) goto L_089B5A14;
    return;
L_089B5A14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem) && ctx.pc == 0x089B5A20u) goto L_089B5A20;
    return;
L_089B5A20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A48;
      }
      goto L_089B5A38;
    }
L_089B5A38:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089B5A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5A48u) goto L_089B5A48;
    return;
L_089B5A48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5A80;
      }
      goto L_089B5A54;
    }
L_089B5A54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A70;
      }
      goto L_089B5A64;
    }
L_089B5A64:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5A80;
      }
      goto L_089B5A70;
    }
L_089B5A70:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089B5A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5A80u) goto L_089B5A80;
    return;
L_089B5A80:
    ctx.set_gpr(31, 0x089B5A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5A88u) goto L_089B5A88;
    return;
L_089B5A88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B5A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B5A94u) goto L_089B5A94;
    return;
L_089B5A94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B5AA0u) goto L_089B5AA0;
    return;
L_089B5AA0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.set_gpr(31, 0x089B5AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B5AC0u) goto L_089B5AC0;
    return;
L_089B5AC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(31, 0x089B5AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B5AD4u) goto L_089B5AD4;
    return;
L_089B5AD4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BD8;
      }
      goto L_089B5ADC;
    }
L_089B5ADC:
    ctx.set_gpr(31, 0x089B5AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5AE4u) goto L_089B5AE4;
    return;
L_089B5AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B5AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B5AF0u) goto L_089B5AF0;
    return;
L_089B5AF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 176u, 0x089F4E70u>(ctx, &aot_mem) && ctx.pc == 0x089B5AFCu) goto L_089B5AFC;
    return;
L_089B5AFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B24;
      }
      goto L_089B5B14;
    }
L_089B5B14:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B5B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5B24u) goto L_089B5B24;
    return;
L_089B5B24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5B5C;
      }
      goto L_089B5B30;
    }
L_089B5B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B4C;
      }
      goto L_089B5B40;
    }
L_089B5B40:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5B5C;
      }
      goto L_089B5B4C;
    }
L_089B5B4C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B5B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5B5Cu) goto L_089B5B5C;
    return;
L_089B5B5C:
    ctx.set_gpr(31, 0x089B5B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5B64u) goto L_089B5B64;
    return;
L_089B5B64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B5B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B5B70u) goto L_089B5B70;
    return;
L_089B5B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B5B7Cu) goto L_089B5B7C;
    return;
L_089B5B7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(31, 0x089B5B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B5B9Cu) goto L_089B5B9C;
    return;
L_089B5B9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(31, 0x089B5BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B5BB0u) goto L_089B5BB0;
    return;
L_089B5BB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BC4;
      }
      goto L_089B5BBC;
    }
L_089B5BBC:
    ctx.set_gpr(31, 0x089B5BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5BC4u) goto L_089B5BC4;
    return;
L_089B5BC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5BD8;
      }
      goto L_089B5BD0;
    }
L_089B5BD0:
    ctx.set_gpr(31, 0x089B5BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5BD8u) goto L_089B5BD8;
    return;
L_089B5BD8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CDC;
      }
      goto L_089B5BE0;
    }
L_089B5BE0:
    ctx.set_gpr(31, 0x089B5BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5BE8u) goto L_089B5BE8;
    return;
L_089B5BE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B5BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B5BF4u) goto L_089B5BF4;
    return;
L_089B5BF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem) && ctx.pc == 0x089B5C00u) goto L_089B5C00;
    return;
L_089B5C00:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C28;
      }
      goto L_089B5C18;
    }
L_089B5C18:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089B5C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5C28u) goto L_089B5C28;
    return;
L_089B5C28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B5C60;
      }
      goto L_089B5C34;
    }
L_089B5C34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C50;
      }
      goto L_089B5C44;
    }
L_089B5C44:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5C60;
      }
      goto L_089B5C50;
    }
L_089B5C50:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089B5C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5C60u) goto L_089B5C60;
    return;
L_089B5C60:
    ctx.set_gpr(31, 0x089B5C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5C68u) goto L_089B5C68;
    return;
L_089B5C68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B5C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B5C74u) goto L_089B5C74;
    return;
L_089B5C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 216u, 0x0898D2B8u>(ctx, &aot_mem) && ctx.pc == 0x089B5C80u) goto L_089B5C80;
    return;
L_089B5C80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(31, 0x089B5CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B5CA0u) goto L_089B5CA0;
    return;
L_089B5CA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(31, 0x089B5CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B5CB4u) goto L_089B5CB4;
    return;
L_089B5CB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CC8;
      }
      goto L_089B5CC0;
    }
L_089B5CC0:
    ctx.set_gpr(31, 0x089B5CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5CC8u) goto L_089B5CC8;
    return;
L_089B5CC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CDC;
      }
      goto L_089B5CD4;
    }
L_089B5CD4:
    ctx.set_gpr(31, 0x089B5CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5CDCu) goto L_089B5CDC;
    return;
L_089B5CDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5CFC;
      }
      goto L_089B5CF0;
    }
L_089B5CF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089B5CFC;
L_089B5CFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5D50;
      }
      goto L_089B5D08;
    }
L_089B5D08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089B5D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5D14u) goto L_089B5D14;
    return;
L_089B5D14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 281u, 0x0898D880u>(ctx, &aot_mem) && ctx.pc == 0x089B5D20u) goto L_089B5D20;
    return;
L_089B5D20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B5D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5D30u) goto L_089B5D30;
    return;
L_089B5D30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089B5D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B5D50u) goto L_089B5D50;
    return;
L_089B5D50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5D74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5D74u) goto L_089B5D74;
    return;
L_089B5D74:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5D90;
      }
      goto L_089B5D7C;
    }
L_089B5D7C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089B5D90u);
    // nop
    goto L_089B5ED0;
L_089B5D90:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5E18;
      }
      goto L_089B5D98;
    }
L_089B5D98:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5DC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5DC8u) goto L_089B5DC8;
    return;
L_089B5DC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5DE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5DE0u) goto L_089B5DE0;
    return;
L_089B5DE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5E00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5E00u) goto L_089B5E00;
    return;
L_089B5E00:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5E18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5E18u) goto L_089B5E18;
    return;
L_089B5E18:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5E68;
      }
      goto L_089B5E20;
    }
L_089B5E20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5E50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5E50u) goto L_089B5E50;
    return;
L_089B5E50:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5E68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5E68u) goto L_089B5E68;
    return;
L_089B5E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5E7C;
      }
      goto L_089B5E74;
    }
L_089B5E74:
    ctx.set_gpr(31, 0x089B5E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5E7Cu) goto L_089B5E7C;
    return;
L_089B5E7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5E90;
      }
      goto L_089B5E88;
    }
L_089B5E88:
    ctx.set_gpr(31, 0x089B5E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5E90u) goto L_089B5E90;
    return;
L_089B5E90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5EA4;
      }
      goto L_089B5E9C;
    }
L_089B5E9C:
    ctx.set_gpr(31, 0x089B5EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B5EA4u) goto L_089B5EA4;
    return;
L_089B5EA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089B5EA8;
L_089B5EA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5ED0:
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
          goto L_089B5F38;
      }
      goto L_089B5F04;
    }
L_089B5F04:
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
    ctx.set_gpr(31, 0x089B5F30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5F30u) goto L_089B5F30;
    return;
L_089B5F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5F74;
      }
      goto L_089B5F38;
    }
L_089B5F38:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B5F74;
      }
      goto L_089B5F54;
    }
L_089B5F54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5F74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5F74u) goto L_089B5F74;
    return;
L_089B5F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6038;
      }
      goto L_089B5F7C;
    }
L_089B5F7C:
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
    ctx.set_gpr(31, 0x089B5FA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5FA8u) goto L_089B5FA8;
    return;
L_089B5FA8:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5FC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5FC4u) goto L_089B5FC4;
    return;
L_089B5FC4:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5FE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5FE0u) goto L_089B5FE0;
    return;
L_089B5FE0:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B5FFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5FFCu) goto L_089B5FFC;
    return;
L_089B5FFC:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6018u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6018u) goto L_089B6018;
    return;
L_089B6018:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6034u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6034u) goto L_089B6034;
    return;
L_089B6034:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B6038;
L_089B6038:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B5F7C;
      }
      goto L_089B6044;
    }
L_089B6044:
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
L_089B6068:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B60A4;
      }
      goto L_089B6070;
    }
L_089B6070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B6084;
      }
      goto L_089B607C;
    }
L_089B607C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B60B0;
      }
      goto L_089B6084;
    }
L_089B6084:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6098;
      }
      goto L_089B608C;
    }
L_089B608C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B609C;
      }
      goto L_089B6098;
    }
L_089B6098:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_089B609C;
L_089B609C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B60B4;
      }
      goto L_089B60A4;
    }
L_089B60A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B60B4;
      }
      goto L_089B60B0;
    }
L_089B60B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089B60B4;
L_089B60B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B60BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6160;
      }
      goto L_089B60D0;
    }
L_089B60D0:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089B6148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B6148u) goto L_089B6148;
    return;
L_089B6148:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6160;
      }
      goto L_089B6150;
    }
L_089B6150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6164;
      }
      goto L_089B6160;
    }
L_089B6160:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089B6164;
L_089B6164:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B61BC;
      }
      goto L_089B619C;
    }
L_089B619C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B61B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B61B4u) goto L_089B61B4;
    return;
L_089B61B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6290;
      }
      goto L_089B61BC;
    }
L_089B61BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089B623Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B623Cu) goto L_089B623C;
    return;
L_089B623C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6290;
      }
      goto L_089B6248;
    }
L_089B6248:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6260u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6260u) goto L_089B6260;
    return;
L_089B6260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_089B6290;
L_089B6290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B62AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B62E4;
      }
      goto L_089B62C4;
    }
L_089B62C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B62DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B62DCu) goto L_089B62DC;
    return;
L_089B62DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6330;
      }
      goto L_089B62E4;
    }
L_089B62E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B6320;
      }
      goto L_089B62F4;
    }
L_089B62F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B6308;
      }
      goto L_089B6300;
    }
L_089B6300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6330;
      }
      goto L_089B6308;
    }
L_089B6308:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6318u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6318u) goto L_089B6318;
    return;
L_089B6318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6330;
      }
      goto L_089B6320;
    }
L_089B6320:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6330u) goto L_089B6330;
    return;
L_089B6330:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6340:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089B63F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B63F0u) goto L_089B63F0;
    return;
L_089B63F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B654C;
      }
      goto L_089B63F8;
    }
L_089B63F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B643Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B643Cu) goto L_089B643C;
    return;
L_089B643C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089B6450u);
    // nop
    goto L_089B6068;
L_089B6450:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B646C;
      }
      goto L_089B6468;
    }
L_089B6468:
    ctx.set_gpr(19, 0u + 0u);
    goto L_089B646C;
L_089B646C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6520;
      }
      goto L_089B6478;
    }
L_089B6478:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6510;
      }
      goto L_089B6498;
    }
L_089B6498:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B64FC;
      }
      goto L_089B64C4;
    }
L_089B64C4:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B64E4;
      }
      goto L_089B64D0;
    }
L_089B64D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_089B64E4;
L_089B64E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B64D0;
      }
      goto L_089B64F4;
    }
L_089B64F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B650C;
      }
      goto L_089B64FC;
    }
L_089B64FC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089B650Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089B650Cu) goto L_089B650C;
    return;
L_089B650C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B6510;
L_089B6510:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6498;
      }
      goto L_089B651C;
    }
L_089B651C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089B6520;
L_089B6520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6478;
      }
      goto L_089B6530;
    }
L_089B6530:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B654Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B654Cu) goto L_089B654C;
    return;
L_089B654C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089B6614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B6614u) goto L_089B6614;
    return;
L_089B6614:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6810;
      }
      goto L_089B661C;
    }
L_089B661C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6650u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6650u) goto L_089B6650;
    return;
L_089B6650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B6668u);
    // nop
    goto L_089B6068;
L_089B6668:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[3] ^ 0u);
    ctx.set_gpr(5, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67E4;
      }
      goto L_089B6680;
    }
L_089B6680:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B66D0;
      }
      goto L_089B66A4;
    }
L_089B66A4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B66F8;
      }
      goto L_089B66D0;
    }
L_089B66D0:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B66F8;
L_089B66F8:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6728;
      }
      goto L_089B6718;
    }
L_089B6718:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6730;
      }
      goto L_089B6728;
    }
L_089B6728:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B6730;
L_089B6730:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6760;
      }
      goto L_089B6750;
    }
L_089B6750:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6768;
      }
      goto L_089B6760;
    }
L_089B6760:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B6768;
L_089B6768:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B67E0;
      }
      goto L_089B6770;
    }
L_089B6770:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67A0;
      }
      goto L_089B6790;
    }
L_089B6790:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67A8;
      }
      goto L_089B67A0;
    }
L_089B67A0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B67A8;
L_089B67A8:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67D8;
      }
      goto L_089B67C8;
    }
L_089B67C8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B67E0;
      }
      goto L_089B67D8;
    }
L_089B67D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B67E0;
L_089B67E0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089B67E4;
L_089B67E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6680;
      }
      goto L_089B67F4;
    }
L_089B67F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6810u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6810u) goto L_089B6810;
    return;
L_089B6810:
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
L_089B682C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B684Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B684Cu) goto L_089B684C;
    return;
L_089B684C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B685Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B685Cu) goto L_089B685C;
    return;
L_089B685C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6870:
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B6890:
    ctx.set_gpr(7, ctx.gpr[6] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B68C8:
    ctx.set_gpr(6, ctx.gpr[6] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B68EC:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B6950;
      }
      goto L_089B6948;
    }
L_089B6948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B70A8;
      }
      goto L_089B6950;
    }
L_089B6950:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6980u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6980u) goto L_089B6980;
    return;
L_089B6980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B69E4;
      }
      goto L_089B6990;
    }
L_089B6990:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089B69A8u);
    // nop
    goto L_089B715C;
L_089B69A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(820)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B69C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B69C0u) goto L_089B69C0;
    return;
L_089B69C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B69DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B69DCu) goto L_089B69DC;
    return;
L_089B69DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B69FC;
      }
      goto L_089B69E4;
    }
L_089B69E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B69FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B69FCu) goto L_089B69FC;
    return;
L_089B69FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(820)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6A14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6A14u) goto L_089B6A14;
    return;
L_089B6A14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B6A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6A34u) goto L_089B6A34;
    return;
L_089B6A34:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(149)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(150)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(270), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(151)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(271), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(292), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(31, 0x089B6AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B6AB8u) goto L_089B6AB8;
    return;
L_089B6AB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6AD4;
      }
      goto L_089B6AC4;
    }
L_089B6AC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_089B6AD4;
L_089B6AD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B6AF4u);
    // nop
    goto L_089B6068;
L_089B6AF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(121)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(241), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(122)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(123)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(243), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x089B6B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B6B80u) goto L_089B6B80;
    return;
L_089B6B80:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C08;
      }
      goto L_089B6B90;
    }
L_089B6B90:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(31, 0x089B6BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6BA8u) goto L_089B6BA8;
    return;
L_089B6BA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6BE0;
      }
      goto L_089B6BB0;
    }
L_089B6BB0:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B6BD0;
      }
      goto L_089B6BC0;
    }
L_089B6BC0:
    ctx.set_gpr(19, 2203u << 16u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(26736));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C08;
      }
      goto L_089B6BD0;
    }
L_089B6BD0:
    ctx.set_gpr(19, 2203u << 16u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(26768));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C08;
      }
      goto L_089B6BE0;
    }
L_089B6BE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(31, 0x089B6BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6BF4u) goto L_089B6BF4;
    return;
L_089B6BF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C08;
      }
      goto L_089B6BFC;
    }
L_089B6BFC:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(19, 2203u << 16u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(26824));
    goto L_089B6C08;
L_089B6C08:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6C28;
      }
      goto L_089B6C10;
    }
L_089B6C10:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B6C28;
L_089B6C28:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x089B6CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 262u, 0x089B97E0u>(ctx, &aot_mem) && ctx.pc == 0x089B6CA4u) goto L_089B6CA4;
    return;
L_089B6CA4:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D18;
      }
      goto L_089B6CC0;
    }
L_089B6CC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6CE0;
      }
      goto L_089B6CD0;
    }
L_089B6CD0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089B6CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6CE0u) goto L_089B6CE0;
    return;
L_089B6CE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B6D18;
      }
      goto L_089B6CEC;
    }
L_089B6CEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D08;
      }
      goto L_089B6CFC;
    }
L_089B6CFC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D18;
      }
      goto L_089B6D08;
    }
L_089B6D08:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089B6D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6D18u) goto L_089B6D18;
    return;
L_089B6D18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B6DFC;
      }
      goto L_089B6D28;
    }
L_089B6D28:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6DE8;
      }
      goto L_089B6D34;
    }
L_089B6D34:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(23, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(31, 0x089B6D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 384u, 0x08A03F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6D74u) goto L_089B6D74;
    return;
L_089B6D74:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = ctx.fpr[0] / ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpr_bits(3) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6DE4;
      }
      goto L_089B6DB4;
    }
L_089B6DB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B6DE4;
      }
      goto L_089B6DBC;
    }
L_089B6DBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6DE4;
      }
      goto L_089B6DC8;
    }
L_089B6DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B6DE4;
L_089B6DE4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B6DE8;
L_089B6DE8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6D34;
      }
      goto L_089B6DF4;
    }
L_089B6DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E18;
      }
      goto L_089B6DFC;
    }
L_089B6DFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089B6E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 147u, 0x08A02034u>(ctx, &aot_mem) && ctx.pc == 0x089B6E18u) goto L_089B6E18;
    return;
L_089B6E18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B7014;
      }
      goto L_089B6E28;
    }
L_089B6E28:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7000;
      }
      goto L_089B6E34;
    }
L_089B6E34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E7C;
      }
      goto L_089B6E68;
    }
L_089B6E68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x089B6E7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B6E7Cu) goto L_089B6E7C;
    return;
L_089B6E7C:
    ctx.fpr[3] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(2, ctx.fpr_bits(3));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B6EE0;
      }
      goto L_089B6E98;
    }
L_089B6E98:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x089B6EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem) && ctx.pc == 0x089B6EB8u) goto L_089B6EB8;
    return;
L_089B6EB8:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x089B6EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 414u, 0x0880E13Cu>(ctx, &aot_mem) && ctx.pc == 0x089B6EC8u) goto L_089B6EC8;
    return;
L_089B6EC8:
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_089B6EE0;
L_089B6EE0:
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[10] = ctx.fpr[20] - ctx.fpr[3];
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[11];
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[21] - ctx.fpr[2];
    ctx.fpr[6] = ctx.fpr[7] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[20];
    ctx.fpr[5] = ctx.fpr[11] - ctx.fpr[0];
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[7];
    ctx.fpr[3] = ctx.fpr[0] + ctx.fpr[11];
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[2];
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[7];
    ctx.fpr[1] = ctx.fpr[11] - ctx.fpr[10];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[7] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6FFC;
      }
      goto L_089B6FB4;
    }
L_089B6FB4:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    goto L_089B6FFC;
L_089B6FFC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B7000;
L_089B7000:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B6E34;
      }
      goto L_089B700C;
    }
L_089B700C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7088;
      }
      goto L_089B7014;
    }
L_089B7014:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B707C;
      }
      goto L_089B7020;
    }
L_089B7020:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089B707C;
L_089B707C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7020;
      }
      goto L_089B7088;
    }
L_089B7088:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B70A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B70A4u) goto L_089B70A4;
    return;
L_089B70A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089B70A8;
L_089B70A8:
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
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B70EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B7148;
      }
      goto L_089B710C;
    }
L_089B710C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B7130;
      }
      goto L_089B7118;
    }
L_089B7118:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(824)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7130u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7130u) goto L_089B7130;
    return;
L_089B7130:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(824)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7148u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7148u) goto L_089B7148;
    return;
L_089B7148:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B715C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B71A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B71A0u) goto L_089B71A0;
    return;
L_089B71A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B71BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B71BCu) goto L_089B71BC;
    return;
L_089B71BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B71D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B71D0u) goto L_089B71D0;
    return;
L_089B71D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B71F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B71F0u) goto L_089B71F0;
    return;
L_089B71F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089B7234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 155u, 0x08A02190u>(ctx, &aot_mem) && ctx.pc == 0x089B7234u) goto L_089B7234;
    return;
L_089B7234:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21) ^ 0x80000000u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20) ^ 0x80000000u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x089B7258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 69u, 0x08A00CCCu>(ctx, &aot_mem) && ctx.pc == 0x089B7258u) goto L_089B7258;
    return;
L_089B7258:
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = ctx.fpr[3] - ctx.fpr[6];
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = ctx.fpr[5] / ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[6];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[3];
    ctx.fpr[1] = ctx.fpr[5] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[3];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089B7328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 756u, 0x089FFFCCu>(ctx, &aot_mem) && ctx.pc == 0x089B7328u) goto L_089B7328;
    return;
L_089B7328:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089B733Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x089B733Cu) goto L_089B733C;
    return;
L_089B733C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B7394;
      }
      goto L_089B737C;
    }
L_089B737C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7390u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7390u) goto L_089B7390;
    return;
L_089B7390:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_089B7394;
L_089B7394:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B73C0;
      }
      goto L_089B73A0;
    }
L_089B73A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B73B4;
      }
      goto L_089B73AC;
    }
L_089B73AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B73CC;
      }
      goto L_089B73B4;
    }
L_089B73B4:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B73D0;
      }
      goto L_089B73C0;
    }
L_089B73C0:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B73D0;
      }
      goto L_089B73CC;
    }
L_089B73CC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089B73D0;
L_089B73D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B73E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, 0x089B7420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x089B7420u) goto L_089B7420;
    return;
L_089B7420:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089B7440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x089B7440u) goto L_089B7440;
    return;
L_089B7440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7504;
      }
      goto L_089B744C;
    }
L_089B744C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B746Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B746Cu) goto L_089B746C;
    return;
L_089B746C:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7494;
      }
      goto L_089B7478;
    }
L_089B7478:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7490u) goto L_089B7490;
    return;
L_089B7490:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_089B7494;
L_089B7494:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7500;
      }
      goto L_089B749C;
    }
L_089B749C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089B74B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 423u, 0x0891DE18u>(ctx, &aot_mem) && ctx.pc == 0x089B74B0u) goto L_089B74B0;
    return;
L_089B74B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089B74D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 433u, 0x0891DF10u>(ctx, &aot_mem) && ctx.pc == 0x089B74D0u) goto L_089B74D0;
    return;
L_089B74D0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B74E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B74E4u) goto L_089B74E4;
    return;
L_089B74E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089B74F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B74F4u) goto L_089B74F4;
    return;
L_089B74F4:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7504;
      }
      goto L_089B7500;
    }
L_089B7500:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(7));
    goto L_089B7504;
L_089B7504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7518;
      }
      goto L_089B7510;
    }
L_089B7510:
    ctx.set_gpr(31, 0x089B7518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B7518u) goto L_089B7518;
    return;
L_089B7518:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x089B756Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x089B756Cu) goto L_089B756C;
    return;
L_089B756C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7588;
      }
      goto L_089B757C;
    }
L_089B757C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089B7588;
L_089B7588:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B75B0;
      }
      goto L_089B7594;
    }
L_089B7594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B75A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 418u, 0x0891DDBCu>(ctx, &aot_mem) && ctx.pc == 0x089B75A0u) goto L_089B75A0;
    return;
L_089B75A0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B75B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B75B0u) goto L_089B75B0;
    return;
L_089B75B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7620;
      }
      goto L_089B75B8;
    }
L_089B75B8:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7620;
      }
      goto L_089B75C8;
    }
L_089B75C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B75E4;
      }
      goto L_089B75D8;
    }
L_089B75D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089B75E4;
L_089B75E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B760C;
      }
      goto L_089B75F0;
    }
L_089B75F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B760C;
      }
      goto L_089B75FC;
    }
L_089B75FC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B760Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B760Cu) goto L_089B760C;
    return;
L_089B760C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7620;
      }
      goto L_089B7618;
    }
L_089B7618:
    ctx.set_gpr(31, 0x089B7620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B7620u) goto L_089B7620;
    return;
L_089B7620:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7634;
      }
      goto L_089B762C;
    }
L_089B762C:
    ctx.set_gpr(31, 0x089B7634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B7634u) goto L_089B7634;
    return;
L_089B7634:
    ctx.set_gpr(2, 0u + 0u);
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
L_089B7654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B766Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089B766Cu) goto L_089B766C;
    return;
L_089B766C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B7678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B7678u) goto L_089B7678;
    return;
L_089B7678:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B7684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 429u, 0x0899254Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7684u) goto L_089B7684;
    return;
L_089B7684:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B7694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7694u) goto L_089B7694;
    return;
L_089B7694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B76A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B76C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B76C0u) goto L_089B76C0;
    return;
L_089B76C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B76D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30776)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7790;
      }
      goto L_089B76E8;
    }
L_089B76E8:
    ctx.set_gpr(31, 0x089B76F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089B76F0u) goto L_089B76F0;
    return;
L_089B76F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B76FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B76FCu) goto L_089B76FC;
    return;
L_089B76FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B7708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089B7708u) goto L_089B7708;
    return;
L_089B7708:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30776));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B771Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B771Cu) goto L_089B771C;
    return;
L_089B771C:
    ctx.set_gpr(31, 0x089B7724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089B7724u) goto L_089B7724;
    return;
L_089B7724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B7730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B7730u) goto L_089B7730;
    return;
L_089B7730:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B773Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 323u, 0x08995D28u>(ctx, &aot_mem) && ctx.pc == 0x089B773Cu) goto L_089B773C;
    return;
L_089B773C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30760));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B7750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7750u) goto L_089B7750;
    return;
L_089B7750:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30760)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7778;
      }
      goto L_089B7768;
    }
L_089B7768:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089B7778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7778u) goto L_089B7778;
    return;
L_089B7778:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30776)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30760)));
    ctx.set_gpr(31, 0x089B7790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B7790u) goto L_089B7790;
    return;
L_089B7790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B77A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30776));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B77BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B77BCu) goto L_089B77BC;
    return;
L_089B77BC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B77D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B77D0u) goto L_089B77D0;
    return;
L_089B77D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B77E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089B7800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7800u) goto L_089B7800;
    return;
L_089B7800:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089B7818u);
    // nop
    goto L_089B73E4;
L_089B7818:
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
L_089B7830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089B7844u);
    // nop
    goto L_089B7544;
L_089B7844:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7854:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7860:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B786C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B7884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089B7884u) goto L_089B7884;
    return;
L_089B7884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B7890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B7890u) goto L_089B7890;
    return;
L_089B7890:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B789Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 407u, 0x0899A594u>(ctx, &aot_mem) && ctx.pc == 0x089B789Cu) goto L_089B789C;
    return;
L_089B789C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B78ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B78ACu) goto L_089B78AC;
    return;
L_089B78AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B78C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B78D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089B78D8u) goto L_089B78D8;
    return;
L_089B78D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B78E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B78E4u) goto L_089B78E4;
    return;
L_089B78E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B78F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 350u, 0x0899A044u>(ctx, &aot_mem) && ctx.pc == 0x089B78F0u) goto L_089B78F0;
    return;
L_089B78F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B7900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7900u) goto L_089B7900;
    return;
L_089B7900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7914:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B791C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B7934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 507u, 0x0890A410u>(ctx, &aot_mem) && ctx.pc == 0x089B7934u) goto L_089B7934;
    return;
L_089B7934:
    ctx.set_gpr(31, 0x089B793Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 384u, 0x089BE350u>(ctx, &aot_mem) && ctx.pc == 0x089B793Cu) goto L_089B793C;
    return;
L_089B793C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B7970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 569u, 0x0890A81Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7970u) goto L_089B7970;
    return;
L_089B7970:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B798C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B79B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7A38;
      }
      goto L_089B7A00;
    }
L_089B7A00:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7A1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7A1Cu) goto L_089B7A1C;
    return;
L_089B7A1C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7A38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7A38u) goto L_089B7A38;
    return;
L_089B7A38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7A80;
      }
      goto L_089B7A48;
    }
L_089B7A48:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7A64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7A64u) goto L_089B7A64;
    return;
L_089B7A64:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7A80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7A80u) goto L_089B7A80;
    return;
L_089B7A80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7AC4;
      }
      goto L_089B7A90;
    }
L_089B7A90:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7AA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7AA8u) goto L_089B7AA8;
    return;
L_089B7AA8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7AC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7AC4u) goto L_089B7AC4;
    return;
L_089B7AC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(22, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B24;
      }
      goto L_089B7AE0;
    }
L_089B7AE0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7AFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7AFCu) goto L_089B7AFC;
    return;
L_089B7AFC:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7B20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7B20u) goto L_089B7B20;
    return;
L_089B7B20:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B7B24;
L_089B7B24:
    ctx.set_gpr(3, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7AE0;
      }
      goto L_089B7B34;
    }
L_089B7B34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B7B7C;
      }
      goto L_089B7B3C;
    }
L_089B7B3C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[20];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B7B60;
      }
      goto L_089B7B5C;
    }
L_089B7B5C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_089B7B60;
L_089B7B60:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7B7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7B7Cu) goto L_089B7B7C;
    return;
L_089B7B7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 3840u);
    ctx.set_gpr(22, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7BD4;
      }
      goto L_089B7B94;
    }
L_089B7B94:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7BB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7BB0u) goto L_089B7BB0;
    return;
L_089B7BB0:
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7BD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7BD0u) goto L_089B7BD0;
    return;
L_089B7BD0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B7BD4;
L_089B7BD4:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7B94;
      }
      goto L_089B7BE0;
    }
L_089B7BE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(22, (ctx.gpr[3] >> 16u) & 0x000000FFu);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7C40;
      }
      goto L_089B7BFC;
    }
L_089B7BFC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7C1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7C1Cu) goto L_089B7C1C;
    return;
L_089B7C1C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7C3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7C3Cu) goto L_089B7C3C;
    return;
L_089B7C3C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B7C40;
L_089B7C40:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7BFC;
      }
      goto L_089B7C4C;
    }
L_089B7C4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 48u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[3] >> 20u) & 0x000000FFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B7C9C;
      }
      goto L_089B7C68;
    }
L_089B7C68:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7C80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7C80u) goto L_089B7C80;
    return;
L_089B7C80:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7C9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7C9Cu) goto L_089B7C9C;
    return;
L_089B7C9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 48u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[3] >> 20u) & 0x000000FFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089B7D00;
      }
      goto L_089B7CB8;
    }
L_089B7CB8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7CD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7CD4u) goto L_089B7CD4;
    return;
L_089B7CD4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7D00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7D00u) goto L_089B7D00;
    return;
L_089B7D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D4C;
      }
      goto L_089B7D14;
    }
L_089B7D14:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7D30u) goto L_089B7D30;
    return;
L_089B7D30:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7D4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7D4Cu) goto L_089B7D4C;
    return;
L_089B7D4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7D98;
      }
      goto L_089B7D60;
    }
L_089B7D60:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7D7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7D7Cu) goto L_089B7D7C;
    return;
L_089B7D7C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B7D98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B7D98u) goto L_089B7D98;
    return;
L_089B7D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7DC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089B7DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x089B7DE0u) goto L_089B7DE0;
    return;
L_089B7DE0:
    ctx.set_gpr(31, 0x089B7DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7DE8u) goto L_089B7DE8;
    return;
L_089B7DE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B7DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B7DF4u) goto L_089B7DF4;
    return;
L_089B7DF4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B7E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B7E04u) goto L_089B7E04;
    return;
L_089B7E04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7E18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089B7E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089B7E28u) goto L_089B7E28;
    return;
L_089B7E28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13888));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089B7E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 590u, 0x0895680Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7E40u) goto L_089B7E40;
    return;
L_089B7E40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32752)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13888));
    ctx.set_gpr(31, 0x089B7E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 246u, 0x089411E8u>(ctx, &aot_mem) && ctx.pc == 0x089B7E58u) goto L_089B7E58;
    return;
L_089B7E58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32756)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13888));
    ctx.set_gpr(31, 0x089B7E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 246u, 0x089411E8u>(ctx, &aot_mem) && ctx.pc == 0x089B7E70u) goto L_089B7E70;
    return;
L_089B7E70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7E80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7EE8;
      }
      goto L_089B7EA4;
    }
L_089B7EA4:
    ctx.set_gpr(31, 0x089B7EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x089B7EACu) goto L_089B7EAC;
    return;
L_089B7EAC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(17, ctx.gpr[6] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B7EE8;
      }
      goto L_089B7EC0;
    }
L_089B7EC0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089B7ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 12u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x089B7ED0u) goto L_089B7ED0;
    return;
L_089B7ED0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B7EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089B7EE8u) goto L_089B7EE8;
    return;
L_089B7EE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F18;
      }
      goto L_089B7EF4;
    }
L_089B7EF4:
    ctx.set_gpr(31, 0x089B7EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B7EFCu) goto L_089B7EFC;
    return;
L_089B7EFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B7F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B7F08u) goto L_089B7F08;
    return;
L_089B7F08:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B7F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B7F18u) goto L_089B7F18;
    return;
L_089B7F18:
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
L_089B7F34:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F54;
      }
      goto L_089B7F40;
    }
L_089B7F40:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F50;
      }
      goto L_089B7F4C;
    }
L_089B7F4C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089B7F50;
L_089B7F50:
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    goto L_089B7F54;
L_089B7F54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F40;
      }
      goto L_089B7F5C;
    }
L_089B7F5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B7F64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[17] & 3u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7F9C;
      }
      goto L_089B7F90;
    }
L_089B7F90:
    ctx.set_gpr(16, ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7FA4;
      }
      goto L_089B7F9C;
    }
L_089B7F9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[16] & ctx.gpr[2]);
    goto L_089B7FA4;
L_089B7FA4:
    ctx.set_gpr(2, ctx.gpr[17] & 12u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7FBC;
      }
      goto L_089B7FB0;
    }
L_089B7FB0:
    ctx.set_gpr(16, ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7FC4;
      }
      goto L_089B7FBC;
    }
L_089B7FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(16, ctx.gpr[16] & ctx.gpr[2]);
    goto L_089B7FC4;
L_089B7FC4:
    ctx.set_gpr(2, ctx.gpr[17] & 240u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7FDC;
      }
      goto L_089B7FD0;
    }
L_089B7FD0:
    ctx.set_gpr(16, ctx.gpr[16] | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B7FE4;
      }
      goto L_089B7FDC;
    }
L_089B7FDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(16, ctx.gpr[16] & ctx.gpr[2]);
    goto L_089B7FE4;
L_089B7FE4:
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089B7FF4u);
    // nop
    goto L_089B7F34;
L_089B7FF4:
    ctx.set_gpr(3, 65520u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, ctx.gpr[16] & ctx.gpr[3]);
    ctx.pc = 0x089B8000u; return;
}

void recomp_unit_0108(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0108_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_108(Runtime &runtime) {
    runtime.register_generated_unit(108u, 0x089B4000u, 16384u, &recomp_unit_0108, &recomp_unit_0108_entry);
    runtime.register_function(0x089B4004u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4014u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4048u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4058u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4084u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B40F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4110u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4128u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4130u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B413Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B416Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4178u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B418Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B41FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4218u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4228u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4250u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4254u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4260u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4278u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4284u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B42E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4318u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4344u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4354u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4368u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4378u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4394u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B43ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4408u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4410u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4420u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4434u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4440u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4470u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4480u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B449Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B44F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4518u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4544u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4580u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4598u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B45FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B460Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4628u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B463Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4678u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4694u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B46C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4714u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4738u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B474Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4770u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B477Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4780u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B478Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B47F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4800u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B489Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B48C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4900u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4924u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4960u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B496Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4988u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B49E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4A54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4AC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4BE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4C9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4CF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4D9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E84u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4E94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4ED4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4EE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4F9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B4FC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5008u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5010u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5030u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B505Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5090u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5098u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B50FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5108u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B510Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5114u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5134u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B513Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5160u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5170u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5184u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5190u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5194u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B519Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B51F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5214u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5224u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5240u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5250u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5280u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5290u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B52E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5304u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5314u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B531Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5338u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5348u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5368u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5378u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B53FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B541Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5428u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B549Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B54FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B557Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5584u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B558Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5598u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B55F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5604u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5610u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5620u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5628u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5634u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5648u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B564Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5658u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5660u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B566Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5678u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B56F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5704u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5714u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5720u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5730u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B573Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B574Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5758u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5768u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5770u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B577Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5794u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5798u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B57D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5800u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5820u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B582Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5834u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5840u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5848u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5854u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5870u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5884u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B588Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5894u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5898u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B58C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5940u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B594Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5964u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5968u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B59F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5A94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5ADCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5AFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5B9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5BF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5C80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CA0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CF0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5CFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5D98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5DE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5E9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5EA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5ED0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5F7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B5FFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6018u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6034u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6038u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6044u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6068u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6070u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B607Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6084u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B608Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6098u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B609Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B60D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6150u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6160u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6164u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6174u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B619Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B61BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B623Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6248u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6260u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6290u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B62F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6300u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6308u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6318u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6320u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6330u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6340u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B63F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B63F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B643Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6450u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6468u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B646Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6478u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6498u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B64FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B650Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6510u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B651Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6520u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6530u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B654Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6578u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6614u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B661Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6650u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6668u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6680u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B66F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6718u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6728u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6730u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6750u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6760u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6768u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6770u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6790u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B67F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6810u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B682Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B684Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B685Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6870u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6890u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B68ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6948u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6950u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6980u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6990u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B69FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6A34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6AF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6B90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6BFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C10u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6C28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6CFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6D74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6DFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6E98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6EE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B6FFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7000u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B700Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7014u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7020u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B707Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7088u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B70ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B710Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7118u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7130u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B715Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B71F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7234u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7258u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7328u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B733Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7360u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B737Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7390u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7394u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B73E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7420u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7440u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B744Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B746Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7478u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7490u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7494u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B749Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B74F4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7500u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7504u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7510u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7518u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7544u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B756Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B757Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7588u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7594u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B75FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B760Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7618u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7620u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B762Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7634u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7654u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B766Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7678u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7684u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7694u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B76FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7708u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B771Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7724u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7730u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B773Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7750u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7768u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7778u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7790u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B77E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7800u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7818u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7830u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7844u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7854u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7860u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B786Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7884u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7890u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B789Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B78F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7900u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7914u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B791Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7934u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B793Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7958u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7970u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B798Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B79B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7A90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7AFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B24u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7B94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7BFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7C9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CB8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7CD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7D98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7DF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E70u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7E80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7ED0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7EFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7F9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FC4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FDCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x089B7FF4u, &recomp_unit_0108, "recomp_unit_0108");
}
} // namespace psprecomp
