#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0101[4094] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0,
    245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0,
    0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 332, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0,
    0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0,
    0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0,
    0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0,
    0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0,
    0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0,
    0, 449, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464,
    0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0,
    0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0,
    0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0,
    0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0,
    0, 0, 495, 0, 0, 0, 0, 0, 496, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0,
    0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 512,
    0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 519, 0, 520, 0, 0, 0,
    0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0,
    529, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0,
    546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0,
    0, 555, 0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 563, 0,
    564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 571, 0,
    0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0,
    581, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0,
    589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0,
    0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0,
    0, 606, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0,
    614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0,
    0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0,
    626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0,
    0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0,
    635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0,
    640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0,
    0, 0, 0, 646, 0, 647, 0, 0, 648, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0,
    654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0,
    0, 0, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0, 668, 0, 669,
    0, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0,
    0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 685, 0, 686, 0, 0, 687, 0, 0, 688, 0,
    689, 0, 0, 690, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 699,
    0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711,
    0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 722, 0, 723,
    0, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 734,
    0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752,
    0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0,
    0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766,
    0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0,
    0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779,
    0, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785,
};
void recomp_unit_0101_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08998000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0101[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08998000;
    case 2u: goto L_0899800C;
    case 3u: goto L_08998014;
    case 4u: goto L_0899802C;
    case 5u: goto L_08998040;
    case 6u: goto L_08998054;
    case 7u: goto L_08998070;
    case 8u: goto L_08998088;
    case 9u: goto L_08998098;
    case 10u: goto L_089980A8;
    case 11u: goto L_089980FC;
    case 12u: goto L_0899810C;
    case 13u: goto L_0899811C;
    case 14u: goto L_0899812C;
    case 15u: goto L_0899815C;
    case 16u: goto L_08998170;
    case 17u: goto L_0899818C;
    case 18u: goto L_08998198;
    case 19u: goto L_089981C0;
    case 20u: goto L_089981DC;
    case 21u: goto L_089981E8;
    case 22u: goto L_08998204;
    case 23u: goto L_0899821C;
    case 24u: goto L_08998230;
    case 25u: goto L_08998244;
    case 26u: goto L_0899825C;
    case 27u: goto L_08998270;
    case 28u: goto L_08998278;
    case 29u: goto L_08998290;
    case 30u: goto L_089982A4;
    case 31u: goto L_089982B8;
    case 32u: goto L_089982D4;
    case 33u: goto L_089982EC;
    case 34u: goto L_089982FC;
    case 35u: goto L_0899830C;
    case 36u: goto L_08998358;
    case 37u: goto L_08998368;
    case 38u: goto L_08998378;
    case 39u: goto L_08998388;
    case 40u: goto L_089983A0;
    case 41u: goto L_089983B4;
    case 42u: goto L_089983BC;
    case 43u: goto L_089983D4;
    case 44u: goto L_089983E8;
    case 45u: goto L_089983FC;
    case 46u: goto L_08998418;
    case 47u: goto L_08998430;
    case 48u: goto L_08998440;
    case 49u: goto L_08998450;
    case 50u: goto L_089984A4;
    case 51u: goto L_089984B4;
    case 52u: goto L_089984C4;
    case 53u: goto L_089984D4;
    case 54u: goto L_089984E4;
    case 55u: goto L_089984F4;
    case 56u: goto L_0899850C;
    case 57u: goto L_08998520;
    case 58u: goto L_08998528;
    case 59u: goto L_08998540;
    case 60u: goto L_08998554;
    case 61u: goto L_08998568;
    case 62u: goto L_08998584;
    case 63u: goto L_0899859C;
    case 64u: goto L_089985AC;
    case 65u: goto L_089985BC;
    case 66u: goto L_08998608;
    case 67u: goto L_08998618;
    case 68u: goto L_08998628;
    case 69u: goto L_08998638;
    case 70u: goto L_08998650;
    case 71u: goto L_08998664;
    case 72u: goto L_0899866C;
    case 73u: goto L_08998684;
    case 74u: goto L_0899869C;
    case 75u: goto L_089986BC;
    case 76u: goto L_089986E0;
    case 77u: goto L_089986EC;
    case 78u: goto L_089986F8;
    case 79u: goto L_08998714;
    case 80u: goto L_0899872C;
    case 81u: goto L_08998744;
    case 82u: goto L_0899876C;
    case 83u: goto L_08998784;
    case 84u: goto L_08998794;
    case 85u: goto L_089987A4;
    case 86u: goto L_089987F0;
    case 87u: goto L_08998800;
    case 88u: goto L_08998810;
    case 89u: goto L_08998820;
    case 90u: goto L_08998830;
    case 91u: goto L_08998848;
    case 92u: goto L_0899885C;
    case 93u: goto L_08998864;
    case 94u: goto L_0899887C;
    case 95u: goto L_08998894;
    case 96u: goto L_089988A4;
    case 97u: goto L_089988B4;
    case 98u: goto L_08998904;
    case 99u: goto L_08998914;
    case 100u: goto L_08998924;
    case 101u: goto L_08998934;
    case 102u: goto L_08998950;
    case 103u: goto L_08998960;
    case 104u: goto L_08998970;
    case 105u: goto L_08998988;
    case 106u: goto L_0899899C;
    case 107u: goto L_089989A4;
    case 108u: goto L_089989BC;
    case 109u: goto L_089989D4;
    case 110u: goto L_089989E4;
    case 111u: goto L_089989F4;
    case 112u: goto L_08998A44;
    case 113u: goto L_08998A54;
    case 114u: goto L_08998A64;
    case 115u: goto L_08998A74;
    case 116u: goto L_08998A98;
    case 117u: goto L_08998AB4;
    case 118u: goto L_08998ADC;
    case 119u: goto L_08998B08;
    case 120u: goto L_08998B18;
    case 121u: goto L_08998B28;
    case 122u: goto L_08998B40;
    case 123u: goto L_08998B54;
    case 124u: goto L_08998B68;
    case 125u: goto L_08998B80;
    case 126u: goto L_08998B94;
    case 127u: goto L_08998B9C;
    case 128u: goto L_08998BB4;
    case 129u: goto L_08998BCC;
    case 130u: goto L_08998BE4;
    case 131u: goto L_08998C0C;
    case 132u: goto L_08998C24;
    case 133u: goto L_08998C3C;
    case 134u: goto L_08998C4C;
    case 135u: goto L_08998C5C;
    case 136u: goto L_08998CB0;
    case 137u: goto L_08998CC0;
    case 138u: goto L_08998CD0;
    case 139u: goto L_08998CE0;
    case 140u: goto L_08998CF0;
    case 141u: goto L_08998D14;
    case 142u: goto L_08998D30;
    case 143u: goto L_08998D40;
    case 144u: goto L_08998D60;
    case 145u: goto L_08998D88;
    case 146u: goto L_08998DA0;
    case 147u: goto L_08998DB8;
    case 148u: goto L_08998DCC;
    case 149u: goto L_08998DE0;
    case 150u: goto L_08998DF8;
    case 151u: goto L_08998E0C;
    case 152u: goto L_08998E14;
    case 153u: goto L_08998E2C;
    case 154u: goto L_08998E40;
    case 155u: goto L_08998E54;
    case 156u: goto L_08998E70;
    case 157u: goto L_08998E88;
    case 158u: goto L_08998E98;
    case 159u: goto L_08998EA8;
    case 160u: goto L_08998EFC;
    case 161u: goto L_08998F0C;
    case 162u: goto L_08998F1C;
    case 163u: goto L_08998F2C;
    case 164u: goto L_08998F44;
    case 165u: goto L_08998F58;
    case 166u: goto L_08998F6C;
    case 167u: goto L_08998F84;
    case 168u: goto L_08998F98;
    case 169u: goto L_08998FA0;
    case 170u: goto L_08998FB8;
    case 171u: goto L_08998FD0;
    case 172u: goto L_08998FEC;
    case 173u: goto L_08998FF4;
    case 174u: goto L_0899901C;
    case 175u: goto L_08999034;
    case 176u: goto L_0899904C;
    case 177u: goto L_0899905C;
    case 178u: goto L_0899906C;
    case 179u: goto L_089990C0;
    case 180u: goto L_089990D0;
    case 181u: goto L_089990E0;
    case 182u: goto L_089990F0;
    case 183u: goto L_08999114;
    case 184u: goto L_08999130;
    case 185u: goto L_08999158;
    case 186u: goto L_08999170;
    case 187u: goto L_08999188;
    case 188u: goto L_0899919C;
    case 189u: goto L_089991B0;
    case 190u: goto L_089991C8;
    case 191u: goto L_089991DC;
    case 192u: goto L_089991E4;
    case 193u: goto L_089991FC;
    case 194u: goto L_08999210;
    case 195u: goto L_08999224;
    case 196u: goto L_08999240;
    case 197u: goto L_08999258;
    case 198u: goto L_08999268;
    case 199u: goto L_08999278;
    case 200u: goto L_089992CC;
    case 201u: goto L_089992DC;
    case 202u: goto L_089992EC;
    case 203u: goto L_089992FC;
    case 204u: goto L_08999314;
    case 205u: goto L_08999328;
    case 206u: goto L_0899933C;
    case 207u: goto L_08999354;
    case 208u: goto L_0899935C;
    case 209u: goto L_08999368;
    case 210u: goto L_08999374;
    case 211u: goto L_0899937C;
    case 212u: goto L_08999394;
    case 213u: goto L_089993AC;
    case 214u: goto L_089993C0;
    case 215u: goto L_089993C8;
    case 216u: goto L_089993E0;
    case 217u: goto L_089993F4;
    case 218u: goto L_08999408;
    case 219u: goto L_08999424;
    case 220u: goto L_0899943C;
    case 221u: goto L_0899944C;
    case 222u: goto L_0899945C;
    case 223u: goto L_089994B8;
    case 224u: goto L_089994C8;
    case 225u: goto L_089994D8;
    case 226u: goto L_089994E8;
    case 227u: goto L_08999510;
    case 228u: goto L_0899952C;
    case 229u: goto L_0899953C;
    case 230u: goto L_08999554;
    case 231u: goto L_08999570;
    case 232u: goto L_08999580;
    case 233u: goto L_08999590;
    case 234u: goto L_0899959C;
    case 235u: goto L_089995B0;
    case 236u: goto L_089995C0;
    case 237u: goto L_089995D0;
    case 238u: goto L_089995E4;
    case 239u: goto L_089995F8;
    case 240u: goto L_08999624;
    case 241u: goto L_08999640;
    case 242u: goto L_08999650;
    case 243u: goto L_08999660;
    case 244u: goto L_08999678;
    case 245u: goto L_08999680;
    case 246u: goto L_0899968C;
    case 247u: goto L_08999698;
    case 248u: goto L_089996A0;
    case 249u: goto L_089996B8;
    case 250u: goto L_089996D0;
    case 251u: goto L_089996E4;
    case 252u: goto L_089996EC;
    case 253u: goto L_08999704;
    case 254u: goto L_0899971C;
    case 255u: goto L_0899972C;
    case 256u: goto L_0899973C;
    case 257u: goto L_08999784;
    case 258u: goto L_08999794;
    case 259u: goto L_089997A4;
    case 260u: goto L_089997B4;
    case 261u: goto L_089997CC;
    case 262u: goto L_089997D4;
    case 263u: goto L_089997E0;
    case 264u: goto L_089997EC;
    case 265u: goto L_089997F4;
    case 266u: goto L_0899980C;
    case 267u: goto L_08999824;
    case 268u: goto L_08999838;
    case 269u: goto L_08999840;
    case 270u: goto L_08999858;
    case 271u: goto L_08999870;
    case 272u: goto L_08999880;
    case 273u: goto L_08999890;
    case 274u: goto L_089998E0;
    case 275u: goto L_089998F0;
    case 276u: goto L_08999900;
    case 277u: goto L_08999910;
    case 278u: goto L_08999938;
    case 279u: goto L_08999954;
    case 280u: goto L_08999964;
    case 281u: goto L_0899997C;
    case 282u: goto L_089999B0;
    case 283u: goto L_089999E0;
    case 284u: goto L_089999F0;
    case 285u: goto L_08999A00;
    case 286u: goto L_08999A18;
    case 287u: goto L_08999A2C;
    case 288u: goto L_08999A34;
    case 289u: goto L_08999A4C;
    case 290u: goto L_08999A64;
    case 291u: goto L_08999A74;
    case 292u: goto L_08999A84;
    case 293u: goto L_08999AD4;
    case 294u: goto L_08999AE4;
    case 295u: goto L_08999AF4;
    case 296u: goto L_08999B04;
    case 297u: goto L_08999B14;
    case 298u: goto L_08999B3C;
    case 299u: goto L_08999B58;
    case 300u: goto L_08999B68;
    case 301u: goto L_08999B80;
    case 302u: goto L_08999B9C;
    case 303u: goto L_08999BB4;
    case 304u: goto L_08999BD0;
    case 305u: goto L_08999BE8;
    case 306u: goto L_08999C04;
    case 307u: goto L_08999C1C;
    case 308u: goto L_08999C38;
    case 309u: goto L_08999C50;
    case 310u: goto L_08999C6C;
    case 311u: goto L_08999C84;
    case 312u: goto L_08999CA0;
    case 313u: goto L_08999CB8;
    case 314u: goto L_08999CD4;
    case 315u: goto L_08999CEC;
    case 316u: goto L_08999D20;
    case 317u: goto L_08999D3C;
    case 318u: goto L_08999D54;
    case 319u: goto L_08999D68;
    case 320u: goto L_08999D7C;
    case 321u: goto L_08999D94;
    case 322u: goto L_08999DA8;
    case 323u: goto L_08999DB0;
    case 324u: goto L_08999DC8;
    case 325u: goto L_08999DE0;
    case 326u: goto L_08999DF8;
    case 327u: goto L_08999E1C;
    case 328u: goto L_08999E24;
    case 329u: goto L_08999E3C;
    case 330u: goto L_08999E5C;
    case 331u: goto L_08999E68;
    case 332u: goto L_08999E84;
    case 333u: goto L_08999E8C;
    case 334u: goto L_08999E98;
    case 335u: goto L_08999EA4;
    case 336u: goto L_08999EC0;
    case 337u: goto L_08999ED8;
    case 338u: goto L_08999EE8;
    case 339u: goto L_08999EF8;
    case 340u: goto L_08999F54;
    case 341u: goto L_08999F64;
    case 342u: goto L_08999F74;
    case 343u: goto L_08999F84;
    case 344u: goto L_08999F94;
    case 345u: goto L_08999FBC;
    case 346u: goto L_08999FD8;
    case 347u: goto L_08999FE8;
    case 348u: goto L_08999FF4;
    case 349u: goto L_0899A028;
    case 350u: goto L_0899A044;
    case 351u: goto L_0899A05C;
    case 352u: goto L_0899A070;
    case 353u: goto L_0899A084;
    case 354u: goto L_0899A09C;
    case 355u: goto L_0899A0B0;
    case 356u: goto L_0899A0B8;
    case 357u: goto L_0899A0D0;
    case 358u: goto L_0899A0E8;
    case 359u: goto L_0899A100;
    case 360u: goto L_0899A124;
    case 361u: goto L_0899A12C;
    case 362u: goto L_0899A144;
    case 363u: goto L_0899A15C;
    case 364u: goto L_0899A16C;
    case 365u: goto L_0899A17C;
    case 366u: goto L_0899A1D8;
    case 367u: goto L_0899A1E8;
    case 368u: goto L_0899A1F8;
    case 369u: goto L_0899A208;
    case 370u: goto L_0899A218;
    case 371u: goto L_0899A240;
    case 372u: goto L_0899A25C;
    case 373u: goto L_0899A26C;
    case 374u: goto L_0899A278;
    case 375u: goto L_0899A28C;
    case 376u: goto L_0899A298;
    case 377u: goto L_0899A2AC;
    case 378u: goto L_0899A2B8;
    case 379u: goto L_0899A2CC;
    case 380u: goto L_0899A2D8;
    case 381u: goto L_0899A304;
    case 382u: goto L_0899A320;
    case 383u: goto L_0899A338;
    case 384u: goto L_0899A34C;
    case 385u: goto L_0899A360;
    case 386u: goto L_0899A378;
    case 387u: goto L_0899A38C;
    case 388u: goto L_0899A394;
    case 389u: goto L_0899A3AC;
    case 390u: goto L_0899A3C4;
    case 391u: goto L_0899A3DC;
    case 392u: goto L_0899A400;
    case 393u: goto L_0899A408;
    case 394u: goto L_0899A420;
    case 395u: goto L_0899A438;
    case 396u: goto L_0899A448;
    case 397u: goto L_0899A458;
    case 398u: goto L_0899A4B4;
    case 399u: goto L_0899A4C4;
    case 400u: goto L_0899A4D4;
    case 401u: goto L_0899A4E4;
    case 402u: goto L_0899A50C;
    case 403u: goto L_0899A528;
    case 404u: goto L_0899A538;
    case 405u: goto L_0899A544;
    case 406u: goto L_0899A578;
    case 407u: goto L_0899A594;
    case 408u: goto L_0899A5AC;
    case 409u: goto L_0899A5C0;
    case 410u: goto L_0899A5D4;
    case 411u: goto L_0899A5EC;
    case 412u: goto L_0899A600;
    case 413u: goto L_0899A608;
    case 414u: goto L_0899A620;
    case 415u: goto L_0899A634;
    case 416u: goto L_0899A648;
    case 417u: goto L_0899A664;
    case 418u: goto L_0899A67C;
    case 419u: goto L_0899A68C;
    case 420u: goto L_0899A69C;
    case 421u: goto L_0899A6E8;
    case 422u: goto L_0899A6F8;
    case 423u: goto L_0899A710;
    case 424u: goto L_0899A724;
    case 425u: goto L_0899A72C;
    case 426u: goto L_0899A744;
    case 427u: goto L_0899A75C;
    case 428u: goto L_0899A778;
    case 429u: goto L_0899A79C;
    case 430u: goto L_0899A7A4;
    case 431u: goto L_0899A7B0;
    case 432u: goto L_0899A7B8;
    case 433u: goto L_0899A7D0;
    case 434u: goto L_0899A7E8;
    case 435u: goto L_0899A7F8;
    case 436u: goto L_0899A808;
    case 437u: goto L_0899A864;
    case 438u: goto L_0899A874;
    case 439u: goto L_0899A884;
    case 440u: goto L_0899A894;
    case 441u: goto L_0899A8BC;
    case 442u: goto L_0899A8D8;
    case 443u: goto L_0899A8E8;
    case 444u: goto L_0899A8F4;
    case 445u: goto L_0899A910;
    case 446u: goto L_0899A91C;
    case 447u: goto L_0899A950;
    case 448u: goto L_0899A96C;
    case 449u: goto L_0899A984;
    case 450u: goto L_0899A998;
    case 451u: goto L_0899A9A0;
    case 452u: goto L_0899A9B8;
    case 453u: goto L_0899A9D0;
    case 454u: goto L_0899A9E8;
    case 455u: goto L_0899AA0C;
    case 456u: goto L_0899AA28;
    case 457u: goto L_0899AA40;
    case 458u: goto L_0899AA58;
    case 459u: goto L_0899AA68;
    case 460u: goto L_0899AA78;
    case 461u: goto L_0899AACC;
    case 462u: goto L_0899AADC;
    case 463u: goto L_0899AAEC;
    case 464u: goto L_0899AAFC;
    case 465u: goto L_0899AB18;
    case 466u: goto L_0899AB20;
    case 467u: goto L_0899AB2C;
    case 468u: goto L_0899AB40;
    case 469u: goto L_0899AB54;
    case 470u: goto L_0899AB5C;
    case 471u: goto L_0899AB6C;
    case 472u: goto L_0899AB90;
    case 473u: goto L_0899AB98;
    case 474u: goto L_0899ABA0;
    case 475u: goto L_0899ABC4;
    case 476u: goto L_0899ABD8;
    case 477u: goto L_0899ABF0;
    case 478u: goto L_0899ABF8;
    case 479u: goto L_0899AC10;
    case 480u: goto L_0899AC1C;
    case 481u: goto L_0899AC30;
    case 482u: goto L_0899AC40;
    case 483u: goto L_0899AC5C;
    case 484u: goto L_0899AC68;
    case 485u: goto L_0899AC74;
    case 486u: goto L_0899AC88;
    case 487u: goto L_0899AC94;
    case 488u: goto L_0899ACA4;
    case 489u: goto L_0899ACB0;
    case 490u: goto L_0899ACB8;
    case 491u: goto L_0899ACC4;
    case 492u: goto L_0899ACCC;
    case 493u: goto L_0899ACE4;
    case 494u: goto L_0899ACF8;
    case 495u: goto L_0899AD08;
    case 496u: goto L_0899AD20;
    case 497u: goto L_0899AD24;
    case 498u: goto L_0899AD2C;
    case 499u: goto L_0899AD44;
    case 500u: goto L_0899AD50;
    case 501u: goto L_0899AD60;
    case 502u: goto L_0899AD70;
    case 503u: goto L_0899AD8C;
    case 504u: goto L_0899AD98;
    case 505u: goto L_0899ADA0;
    case 506u: goto L_0899ADAC;
    case 507u: goto L_0899ADB8;
    case 508u: goto L_0899ADCC;
    case 509u: goto L_0899ADD8;
    case 510u: goto L_0899ADE8;
    case 511u: goto L_0899ADF4;
    case 512u: goto L_0899ADFC;
    case 513u: goto L_0899AE08;
    case 514u: goto L_0899AE10;
    case 515u: goto L_0899AE28;
    case 516u: goto L_0899AE3C;
    case 517u: goto L_0899AE4C;
    case 518u: goto L_0899AE64;
    case 519u: goto L_0899AE68;
    case 520u: goto L_0899AE70;
    case 521u: goto L_0899AE88;
    case 522u: goto L_0899AE94;
    case 523u: goto L_0899AEA8;
    case 524u: goto L_0899AEB8;
    case 525u: goto L_0899AED4;
    case 526u: goto L_0899AEE0;
    case 527u: goto L_0899AEE8;
    case 528u: goto L_0899AEF4;
    case 529u: goto L_0899AF00;
    case 530u: goto L_0899AF14;
    case 531u: goto L_0899AF20;
    case 532u: goto L_0899AF30;
    case 533u: goto L_0899AF3C;
    case 534u: goto L_0899AF44;
    case 535u: goto L_0899AF50;
    case 536u: goto L_0899AF58;
    case 537u: goto L_0899AF70;
    case 538u: goto L_0899AF84;
    case 539u: goto L_0899AF94;
    case 540u: goto L_0899AFAC;
    case 541u: goto L_0899AFB0;
    case 542u: goto L_0899AFB8;
    case 543u: goto L_0899AFD0;
    case 544u: goto L_0899AFDC;
    case 545u: goto L_0899AFF0;
    case 546u: goto L_0899B000;
    case 547u: goto L_0899B01C;
    case 548u: goto L_0899B028;
    case 549u: goto L_0899B030;
    case 550u: goto L_0899B03C;
    case 551u: goto L_0899B048;
    case 552u: goto L_0899B05C;
    case 553u: goto L_0899B068;
    case 554u: goto L_0899B078;
    case 555u: goto L_0899B084;
    case 556u: goto L_0899B08C;
    case 557u: goto L_0899B098;
    case 558u: goto L_0899B0A0;
    case 559u: goto L_0899B0B8;
    case 560u: goto L_0899B0CC;
    case 561u: goto L_0899B0DC;
    case 562u: goto L_0899B0F4;
    case 563u: goto L_0899B0F8;
    case 564u: goto L_0899B100;
    case 565u: goto L_0899B118;
    case 566u: goto L_0899B124;
    case 567u: goto L_0899B138;
    case 568u: goto L_0899B148;
    case 569u: goto L_0899B164;
    case 570u: goto L_0899B170;
    case 571u: goto L_0899B178;
    case 572u: goto L_0899B184;
    case 573u: goto L_0899B190;
    case 574u: goto L_0899B1A4;
    case 575u: goto L_0899B1B0;
    case 576u: goto L_0899B1C0;
    case 577u: goto L_0899B1CC;
    case 578u: goto L_0899B1D4;
    case 579u: goto L_0899B1E0;
    case 580u: goto L_0899B1E8;
    case 581u: goto L_0899B200;
    case 582u: goto L_0899B214;
    case 583u: goto L_0899B224;
    case 584u: goto L_0899B23C;
    case 585u: goto L_0899B240;
    case 586u: goto L_0899B248;
    case 587u: goto L_0899B260;
    case 588u: goto L_0899B26C;
    case 589u: goto L_0899B280;
    case 590u: goto L_0899B290;
    case 591u: goto L_0899B2AC;
    case 592u: goto L_0899B2B8;
    case 593u: goto L_0899B2C0;
    case 594u: goto L_0899B2CC;
    case 595u: goto L_0899B2D8;
    case 596u: goto L_0899B2EC;
    case 597u: goto L_0899B2F8;
    case 598u: goto L_0899B308;
    case 599u: goto L_0899B314;
    case 600u: goto L_0899B31C;
    case 601u: goto L_0899B328;
    case 602u: goto L_0899B330;
    case 603u: goto L_0899B348;
    case 604u: goto L_0899B35C;
    case 605u: goto L_0899B36C;
    case 606u: goto L_0899B384;
    case 607u: goto L_0899B388;
    case 608u: goto L_0899B390;
    case 609u: goto L_0899B3A8;
    case 610u: goto L_0899B3B4;
    case 611u: goto L_0899B3C8;
    case 612u: goto L_0899B3D8;
    case 613u: goto L_0899B3F4;
    case 614u: goto L_0899B400;
    case 615u: goto L_0899B418;
    case 616u: goto L_0899B430;
    case 617u: goto L_0899B444;
    case 618u: goto L_0899B458;
    case 619u: goto L_0899B470;
    case 620u: goto L_0899B484;
    case 621u: goto L_0899B48C;
    case 622u: goto L_0899B4A4;
    case 623u: goto L_0899B4B8;
    case 624u: goto L_0899B4CC;
    case 625u: goto L_0899B4E8;
    case 626u: goto L_0899B500;
    case 627u: goto L_0899B510;
    case 628u: goto L_0899B520;
    case 629u: goto L_0899B574;
    case 630u: goto L_0899B584;
    case 631u: goto L_0899B594;
    case 632u: goto L_0899B5A4;
    case 633u: goto L_0899B5D0;
    case 634u: goto L_0899B5EC;
    case 635u: goto L_0899B600;
    case 636u: goto L_0899B614;
    case 637u: goto L_0899B630;
    case 638u: goto L_0899B63C;
    case 639u: goto L_0899B664;
    case 640u: goto L_0899B680;
    case 641u: goto L_0899B68C;
    case 642u: goto L_0899B69C;
    case 643u: goto L_0899B6AC;
    case 644u: goto L_0899B6D4;
    case 645u: goto L_0899B6F4;
    case 646u: goto L_0899B70C;
    case 647u: goto L_0899B714;
    case 648u: goto L_0899B720;
    case 649u: goto L_0899B72C;
    case 650u: goto L_0899B734;
    case 651u: goto L_0899B74C;
    case 652u: goto L_0899B764;
    case 653u: goto L_0899B778;
    case 654u: goto L_0899B780;
    case 655u: goto L_0899B798;
    case 656u: goto L_0899B7B0;
    case 657u: goto L_0899B7EC;
    case 658u: goto L_0899B810;
    case 659u: goto L_0899B818;
    case 660u: goto L_0899B824;
    case 661u: goto L_0899B82C;
    case 662u: goto L_0899B838;
    case 663u: goto L_0899B840;
    case 664u: goto L_0899B84C;
    case 665u: goto L_0899B854;
    case 666u: goto L_0899B860;
    case 667u: goto L_0899B868;
    case 668u: goto L_0899B874;
    case 669u: goto L_0899B87C;
    case 670u: goto L_0899B888;
    case 671u: goto L_0899B890;
    case 672u: goto L_0899B89C;
    case 673u: goto L_0899B8A4;
    case 674u: goto L_0899B8B0;
    case 675u: goto L_0899B8B8;
    case 676u: goto L_0899B8C4;
    case 677u: goto L_0899B8CC;
    case 678u: goto L_0899B8DC;
    case 679u: goto L_0899B8F4;
    case 680u: goto L_0899B914;
    case 681u: goto L_0899B92C;
    case 682u: goto L_0899B938;
    case 683u: goto L_0899B940;
    case 684u: goto L_0899B94C;
    case 685u: goto L_0899B958;
    case 686u: goto L_0899B960;
    case 687u: goto L_0899B96C;
    case 688u: goto L_0899B978;
    case 689u: goto L_0899B980;
    case 690u: goto L_0899B98C;
    case 691u: goto L_0899B998;
    case 692u: goto L_0899B9A0;
    case 693u: goto L_0899B9AC;
    case 694u: goto L_0899B9B8;
    case 695u: goto L_0899B9C0;
    case 696u: goto L_0899B9DC;
    case 697u: goto L_0899B9E8;
    case 698u: goto L_0899B9F4;
    case 699u: goto L_0899B9FC;
    case 700u: goto L_0899BA08;
    case 701u: goto L_0899BA14;
    case 702u: goto L_0899BA1C;
    case 703u: goto L_0899BA28;
    case 704u: goto L_0899BA34;
    case 705u: goto L_0899BA3C;
    case 706u: goto L_0899BA48;
    case 707u: goto L_0899BA54;
    case 708u: goto L_0899BA5C;
    case 709u: goto L_0899BA68;
    case 710u: goto L_0899BA74;
    case 711u: goto L_0899BA7C;
    case 712u: goto L_0899BA88;
    case 713u: goto L_0899BA94;
    case 714u: goto L_0899BA9C;
    case 715u: goto L_0899BAA8;
    case 716u: goto L_0899BAB4;
    case 717u: goto L_0899BABC;
    case 718u: goto L_0899BAC8;
    case 719u: goto L_0899BAD4;
    case 720u: goto L_0899BADC;
    case 721u: goto L_0899BAE8;
    case 722u: goto L_0899BAF4;
    case 723u: goto L_0899BAFC;
    case 724u: goto L_0899BB08;
    case 725u: goto L_0899BB14;
    case 726u: goto L_0899BB1C;
    case 727u: goto L_0899BB28;
    case 728u: goto L_0899BB34;
    case 729u: goto L_0899BB3C;
    case 730u: goto L_0899BB44;
    case 731u: goto L_0899BB5C;
    case 732u: goto L_0899BB68;
    case 733u: goto L_0899BB70;
    case 734u: goto L_0899BB7C;
    case 735u: goto L_0899BB88;
    case 736u: goto L_0899BB90;
    case 737u: goto L_0899BB9C;
    case 738u: goto L_0899BBA8;
    case 739u: goto L_0899BBC4;
    case 740u: goto L_0899BBDC;
    case 741u: goto L_0899BC34;
    case 742u: goto L_0899BC40;
    case 743u: goto L_0899BC64;
    case 744u: goto L_0899BC90;
    case 745u: goto L_0899BCA0;
    case 746u: goto L_0899BCB8;
    case 747u: goto L_0899BCC8;
    case 748u: goto L_0899BCD8;
    case 749u: goto L_0899BD34;
    case 750u: goto L_0899BD44;
    case 751u: goto L_0899BD54;
    case 752u: goto L_0899BD7C;
    case 753u: goto L_0899BD98;
    case 754u: goto L_0899BDA8;
    case 755u: goto L_0899BDB8;
    case 756u: goto L_0899BDC8;
    case 757u: goto L_0899BDD4;
    case 758u: goto L_0899BDE8;
    case 759u: goto L_0899BDF4;
    case 760u: goto L_0899BE08;
    case 761u: goto L_0899BE14;
    case 762u: goto L_0899BE28;
    case 763u: goto L_0899BE40;
    case 764u: goto L_0899BE5C;
    case 765u: goto L_0899BE6C;
    case 766u: goto L_0899BE7C;
    case 767u: goto L_0899BE94;
    case 768u: goto L_0899BEA4;
    case 769u: goto L_0899BEB4;
    case 770u: goto L_0899BEC8;
    case 771u: goto L_0899BEDC;
    case 772u: goto L_0899BEF0;
    case 773u: goto L_0899BF04;
    case 774u: goto L_0899BF18;
    case 775u: goto L_0899BF2C;
    case 776u: goto L_0899BF40;
    case 777u: goto L_0899BF54;
    case 778u: goto L_0899BF68;
    case 779u: goto L_0899BF7C;
    case 780u: goto L_0899BF90;
    case 781u: goto L_0899BFA4;
    case 782u: goto L_0899BFB8;
    case 783u: goto L_0899BFCC;
    case 784u: goto L_0899BFE0;
    case 785u: goto L_0899BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08998000:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998014;
      }
      goto L_0899800C;
    }
L_0899800C:
    ctx.set_gpr(31, 0x08998014u);
    // nop
    goto L_08998070;
L_08998014:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31880)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899802C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08998040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08998040u) goto L_08998040;
    return;
L_08998040:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08998054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08998054u) goto L_08998054;
    return;
L_08998054:
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
L_08998070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32616));
    ctx.set_gpr(31, 0x08998088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08998088u) goto L_08998088;
    return;
L_08998088:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089980A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x089980A8u) goto L_089980A8;
    return;
L_089980A8:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32468));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31880));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32500));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26688));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32724));
    ctx.set_gpr(31, 0x089980FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089980FCu) goto L_089980FC;
    return;
L_089980FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899810C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899811Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 745u, 0x08997FE0u>(ctx, &aot_mem) && ctx.pc == 0x0899811Cu) goto L_0899811C;
    return;
L_0899811C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899812C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31880)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27476));
    ctx.set_gpr(31, 0x0899815Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x0899815Cu) goto L_0899815C;
    return;
L_0899815C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08998170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08998170u) goto L_08998170;
    return;
L_08998170:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899818Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899818Cu) goto L_0899818C;
    return;
L_0899818C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08998198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 662u, 0x08997AB8u>(ctx, &aot_mem) && ctx.pc == 0x08998198u) goto L_08998198;
    return;
L_08998198:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31876));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089981C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x089981C0u) goto L_089981C0;
    return;
L_089981C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089981E8;
      }
      goto L_089981DC;
    }
L_089981DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089981E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089981E8u) goto L_089981E8;
    return;
L_089981E8:
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
L_08998204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899821Cu);
    // nop
    goto L_089982D4;
L_0899821C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31872)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08998230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08998230u) goto L_08998230;
    return;
L_08998230:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31872)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08998270;
      }
      goto L_0899825C;
    }
L_0899825C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998278;
      }
      goto L_08998270;
    }
L_08998270:
    ctx.set_gpr(31, 0x08998278u);
    // nop
    goto L_089982D4;
L_08998278:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31872)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089982A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089982A4u) goto L_089982A4;
    return;
L_089982A4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31908));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089982B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089982B8u) goto L_089982B8;
    return;
L_089982B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089982D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32004));
    ctx.set_gpr(31, 0x089982ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089982ECu) goto L_089982EC;
    return;
L_089982EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089982FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899830Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899830Cu) goto L_0899830C;
    return;
L_0899830C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31872));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-17120));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31896));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26664));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32112));
    ctx.set_gpr(31, 0x08998358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08998358u) goto L_08998358;
    return;
L_08998358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998378u);
    // nop
    goto L_08998244;
L_08998378:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998388:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31868)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089983B4;
      }
      goto L_089983A0;
    }
L_089983A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089983BC;
      }
      goto L_089983B4;
    }
L_089983B4:
    ctx.set_gpr(31, 0x089983BCu);
    // nop
    goto L_08998418;
L_089983BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31868)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089983D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089983E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089983E8u) goto L_089983E8;
    return;
L_089983E8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089983FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089983FCu) goto L_089983FC;
    return;
L_089983FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31680));
    ctx.set_gpr(31, 0x08998430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08998430u) goto L_08998430;
    return;
L_08998430:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x08998450u) goto L_08998450;
    return;
L_08998450:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31532));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31868));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31564));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26636));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-31788));
    ctx.set_gpr(31, 0x089984A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089984A4u) goto L_089984A4;
    return;
L_089984A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089984B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089984C4u);
    // nop
    goto L_08998388;
L_089984C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089984D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089984E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 680u, 0x0899F814u>(ctx, &aot_mem) && ctx.pc == 0x089984E4u) goto L_089984E4;
    return;
L_089984E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089984F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31864)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08998520;
      }
      goto L_0899850C;
    }
L_0899850C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998528;
      }
      goto L_08998520;
    }
L_08998520:
    ctx.set_gpr(31, 0x08998528u);
    // nop
    goto L_08998584;
L_08998528:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31864)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08998554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08998554u) goto L_08998554;
    return;
L_08998554:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08998568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08998568u) goto L_08998568;
    return;
L_08998568:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998584:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31316));
    ctx.set_gpr(31, 0x0899859Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899859Cu) goto L_0899859C;
    return;
L_0899859C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089985AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089985BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x089985BCu) goto L_089985BC;
    return;
L_089985BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31864));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-17120));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31208));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26608));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-31424));
    ctx.set_gpr(31, 0x08998608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08998608u) goto L_08998608;
    return;
L_08998608:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998618:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998628u);
    // nop
    goto L_089984F4;
L_08998628:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998638:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31860)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08998664;
      }
      goto L_08998650;
    }
L_08998650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899866C;
      }
      goto L_08998664;
    }
L_08998664:
    ctx.set_gpr(31, 0x0899866Cu);
    // nop
    goto L_0899876C;
L_0899866C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31860)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0899869Cu);
    // nop
    goto L_0899872C;
L_0899869C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089986BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089986BCu) goto L_089986BC;
    return;
L_089986BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089986E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089986E0u) goto L_089986E0;
    return;
L_089986E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089986ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089986ECu) goto L_089986EC;
    return;
L_089986EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089986F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089986F8u) goto L_089986F8;
    return;
L_089986F8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(904));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08998714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 680u, 0x088AE5ACu>(ctx, &aot_mem) && ctx.pc == 0x08998714u) goto L_08998714;
    return;
L_08998714:
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
L_0899872C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08998744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08998744u) goto L_08998744;
    return;
L_08998744:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
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
L_0899876C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30828));
    ctx.set_gpr(31, 0x08998784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08998784u) goto L_08998784;
    return;
L_08998784:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089987A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x089987A4u) goto L_089987A4;
    return;
L_089987A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31860));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9416));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30688));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30720));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26584));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-31100));
    ctx.set_gpr(31, 0x089987F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089987F0u) goto L_089987F0;
    return;
L_089987F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998810u);
    // nop
    goto L_08998638;
L_08998810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998820:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31856)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899885C;
      }
      goto L_08998848;
    }
L_08998848:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998864;
      }
      goto L_0899885C;
    }
L_0899885C:
    ctx.set_gpr(31, 0x08998864u);
    // nop
    goto L_0899887C;
L_08998864:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31856)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899887C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30556));
    ctx.set_gpr(31, 0x08998894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08998894u) goto L_08998894;
    return;
L_08998894:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089988A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089988B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x089988B4u) goto L_089988B4;
    return;
L_089988B4:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31856));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26160));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5656));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30444));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26560));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08998904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08998904u) goto L_08998904;
    return;
L_08998904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998924u);
    // nop
    goto L_08998830;
L_08998924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998934:
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30384));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31856)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 404u, 0x0899E2ACu>(ctx, &aot_mem) && ctx.pc == 0x08998960u) goto L_08998960;
    return;
L_08998960:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998970:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31852)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899899C;
      }
      goto L_08998988;
    }
L_08998988:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089989A4;
      }
      goto L_0899899C;
    }
L_0899899C:
    ctx.set_gpr(31, 0x089989A4u);
    // nop
    goto L_089989BC;
L_089989A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089989BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30236));
    ctx.set_gpr(31, 0x089989D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089989D4u) goto L_089989D4;
    return;
L_089989D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089989E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089989F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x089989F4u) goto L_089989F4;
    return;
L_089989F4:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30092));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31852));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26160));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5656));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30124));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26544));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08998A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08998A44u) goto L_08998A44;
    return;
L_08998A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998A54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998A64u);
    // nop
    goto L_08998970;
L_08998A64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31852)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08998A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08998A98u) goto L_08998A98;
    return;
L_08998A98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26532));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08998AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08998AB4u) goto L_08998AB4;
    return;
L_08998AB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26512));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26508));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26504));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08998ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08998ADCu) goto L_08998ADC;
    return;
L_08998ADC:
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29944));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31852)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_08998B08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 424u, 0x0899E4C4u>(ctx, &aot_mem) && ctx.pc == 0x08998B18u) goto L_08998B18;
    return;
L_08998B18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998B28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08998B40u);
    // nop
    goto L_08998C24;
L_08998B40:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31844)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08998B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08998B54u) goto L_08998B54;
    return;
L_08998B54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998B68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31844)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08998B94;
      }
      goto L_08998B80;
    }
L_08998B80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998B9C;
      }
      goto L_08998B94;
    }
L_08998B94:
    ctx.set_gpr(31, 0x08998B9Cu);
    // nop
    goto L_08998C24;
L_08998B9C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31844)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998BB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08998BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08998BCCu) goto L_08998BCC;
    return;
L_08998BCC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08998BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08998BE4u) goto L_08998BE4;
    return;
L_08998BE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08998C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08998C0Cu) goto L_08998C0C;
    return;
L_08998C0C:
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
L_08998C24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29620));
    ctx.set_gpr(31, 0x08998C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08998C3Cu) goto L_08998C3C;
    return;
L_08998C3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998C4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x08998C5Cu) goto L_08998C5C;
    return;
L_08998C5C:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29456));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31844));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28392));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29472));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29504));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26500));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29772));
    ctx.set_gpr(31, 0x08998CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08998CB0u) goto L_08998CB0;
    return;
L_08998CB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998CD0u);
    // nop
    goto L_08998B68;
L_08998CD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998CE0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31928)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31844)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08998D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08998D14u) goto L_08998D14;
    return;
L_08998D14:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26480));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08998D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08998D30u) goto L_08998D30;
    return;
L_08998D30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08998D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08998D40u) goto L_08998D40;
    return;
L_08998D40:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08998D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x08998D60u) goto L_08998D60;
    return;
L_08998D60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26476));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26472));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26468));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08998D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08998D88u) goto L_08998D88;
    return;
L_08998D88:
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
L_08998DA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08998DB8u);
    // nop
    goto L_08998E70;
L_08998DB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31836)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08998DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08998DCCu) goto L_08998DCC;
    return;
L_08998DCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998DE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31836)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08998E0C;
      }
      goto L_08998DF8;
    }
L_08998DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998E14;
      }
      goto L_08998E0C;
    }
L_08998E0C:
    ctx.set_gpr(31, 0x08998E14u);
    // nop
    goto L_08998E70;
L_08998E14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998E2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08998E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08998E40u) goto L_08998E40;
    return;
L_08998E40:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31856));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08998E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08998E54u) goto L_08998E54;
    return;
L_08998E54:
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
L_08998E70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29032));
    ctx.set_gpr(31, 0x08998E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08998E88u) goto L_08998E88;
    return;
L_08998E88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x08998EA8u) goto L_08998EA8;
    return;
L_08998EA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31836));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-28916));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26456));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29140));
    ctx.set_gpr(31, 0x08998EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08998EFCu) goto L_08998EFC;
    return;
L_08998EFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998F0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08998F1Cu);
    // nop
    goto L_08998DE0;
L_08998F1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998F2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08998F44u);
    // nop
    goto L_08999034;
L_08998F44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31832)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08998F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08998F58u) goto L_08998F58;
    return;
L_08998F58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998F6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31832)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08998F98;
      }
      goto L_08998F84;
    }
L_08998F84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998FA0;
      }
      goto L_08998F98;
    }
L_08998F98:
    ctx.set_gpr(31, 0x08998FA0u);
    // nop
    goto L_08999034;
L_08998FA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31832)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08998FB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08998FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08998FD0u) goto L_08998FD0;
    return;
L_08998FD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31952));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08998FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08998FECu) goto L_08998FEC;
    return;
L_08998FEC:
    ctx.set_gpr(31, 0x08998FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08998FF4u) goto L_08998FF4;
    return;
L_08998FF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899901Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x0899901Cu) goto L_0899901C;
    return;
L_0899901C:
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
L_08999034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    ctx.set_gpr(31, 0x0899904Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899904Cu) goto L_0899904C;
    return;
L_0899904C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899905C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899906Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899906Cu) goto L_0899906C;
    return;
L_0899906C:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31832));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28392));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29472));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-28464));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26432));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28744));
    ctx.set_gpr(31, 0x089990C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089990C0u) goto L_089990C0;
    return;
L_089990C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089990D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089990E0u);
    // nop
    goto L_08998F6C;
L_089990E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089990F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31832)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08999114u) goto L_08999114;
    return;
L_08999114:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26412));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08999130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08999130u) goto L_08999130;
    return;
L_08999130:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26408));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26404));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26400));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08999158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08999158u) goto L_08999158;
    return;
L_08999158:
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
L_08999170:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08999188u);
    // nop
    goto L_08999240;
L_08999188:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31824)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899919Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0899919Cu) goto L_0899919C;
    return;
L_0899919C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089991B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31824)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089991DC;
      }
      goto L_089991C8;
    }
L_089991C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089991E4;
      }
      goto L_089991DC;
    }
L_089991DC:
    ctx.set_gpr(31, 0x089991E4u);
    // nop
    goto L_08999240;
L_089991E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31824)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089991FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08999210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08999210u) goto L_08999210;
    return;
L_08999210:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08999224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08999224u) goto L_08999224;
    return;
L_08999224:
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
L_08999240:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28056));
    ctx.set_gpr(31, 0x08999258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08999258u) goto L_08999258;
    return;
L_08999258:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x08999278u) goto L_08999278;
    return;
L_08999278:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26396));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31824));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27940));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26388));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28164));
    ctx.set_gpr(31, 0x089992CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089992CCu) goto L_089992CC;
    return;
L_089992CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089992DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089992ECu);
    // nop
    goto L_089991B0;
L_089992EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089992FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08999314u);
    // nop
    goto L_08999424;
L_08999314:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31820)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08999328u) goto L_08999328;
    return;
L_08999328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899933C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31820)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899937C;
      }
      goto L_08999354;
    }
L_08999354:
    ctx.set_gpr(31, 0x0899935Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899935Cu) goto L_0899935C;
    return;
L_0899935C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08999368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08999368u) goto L_08999368;
    return;
L_08999368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08999374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08999374u) goto L_08999374;
    return;
L_08999374:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31820), ctx.gpr[2]);
    goto L_0899937C;
L_0899937C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31820)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31820)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089993C0;
      }
      goto L_089993AC;
    }
L_089993AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089993C8;
      }
      goto L_089993C0;
    }
L_089993C0:
    ctx.set_gpr(31, 0x089993C8u);
    // nop
    goto L_08999424;
L_089993C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31820)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089993E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089993F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089993F4u) goto L_089993F4;
    return;
L_089993F4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32404));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08999408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08999408u) goto L_08999408;
    return;
L_08999408:
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
L_08999424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27572));
    ctx.set_gpr(31, 0x0899943Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899943Cu) goto L_0899943C;
    return;
L_0899943C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899944C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899945Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899945Cu) goto L_0899945C;
    return;
L_0899945C:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27416));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31820));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26364));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-27680));
    ctx.set_gpr(31, 0x089994B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089994B8u) goto L_089994B8;
    return;
L_089994B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089994C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089994D8u);
    // nop
    goto L_08999394;
L_089994D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089994E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31820)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08999510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08999510u) goto L_08999510;
    return;
L_08999510:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26356));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x0899952Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899952Cu) goto L_0899952C;
    return;
L_0899952C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899953Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899953Cu) goto L_0899953C;
    return;
L_0899953C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26168));
    ctx.set_gpr(31, 0x08999554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999554u) goto L_08999554;
    return;
L_08999554:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08999570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999570u) goto L_08999570;
    return;
L_08999570:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08999580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08999580u) goto L_08999580;
    return;
L_08999580:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08999590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999590u) goto L_08999590;
    return;
L_08999590:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899959Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0899959Cu) goto L_0899959C;
    return;
L_0899959C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089995B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089995B0u) goto L_089995B0;
    return;
L_089995B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089995C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x089995C0u) goto L_089995C0;
    return;
L_089995C0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089995D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089995D0u) goto L_089995D0;
    return;
L_089995D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089995E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089995E4u) goto L_089995E4;
    return;
L_089995E4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089995F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089995F8u) goto L_089995F8;
    return;
L_089995F8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26252));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26224));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26196));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08999624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08999624u) goto L_08999624;
    return;
L_08999624:
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
L_08999640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 510u, 0x0899EC84u>(ctx, &aot_mem) && ctx.pc == 0x08999650u) goto L_08999650;
    return;
L_08999650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31788)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089996A0;
      }
      goto L_08999678;
    }
L_08999678:
    ctx.set_gpr(31, 0x08999680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08999680u) goto L_08999680;
    return;
L_08999680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899968Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899968Cu) goto L_0899968C;
    return;
L_0899968C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08999698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08999698u) goto L_08999698;
    return;
L_08999698:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31788), ctx.gpr[2]);
    goto L_089996A0;
L_089996A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31788)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089996B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31788)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089996E4;
      }
      goto L_089996D0;
    }
L_089996D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089996EC;
      }
      goto L_089996E4;
    }
L_089996E4:
    ctx.set_gpr(31, 0x089996ECu);
    // nop
    goto L_08999704;
L_089996EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31788)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999704:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(31, 0x0899971Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899971Cu) goto L_0899971C;
    return;
L_0899971C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899972C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899973Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899973Cu) goto L_0899973C;
    return;
L_0899973C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31788));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26732));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26164));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08999784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08999784u) goto L_08999784;
    return;
L_08999784:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089997A4u);
    // nop
    goto L_089996B8;
L_089997A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089997B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31784)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089997F4;
      }
      goto L_089997CC;
    }
L_089997CC:
    ctx.set_gpr(31, 0x089997D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089997D4u) goto L_089997D4;
    return;
L_089997D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089997E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089997E0u) goto L_089997E0;
    return;
L_089997E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089997ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089997ECu) goto L_089997EC;
    return;
L_089997EC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31784), ctx.gpr[2]);
    goto L_089997F4;
L_089997F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31784)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899980C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31784)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999838;
      }
      goto L_08999824;
    }
L_08999824:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999840;
      }
      goto L_08999838;
    }
L_08999838:
    ctx.set_gpr(31, 0x08999840u);
    // nop
    goto L_08999858;
L_08999840:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31784)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26496));
    ctx.set_gpr(31, 0x08999870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08999870u) goto L_08999870;
    return;
L_08999870:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x08999890u) goto L_08999890;
    return;
L_08999890:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31784));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26160));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5656));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26384));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26144));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089998E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089998E0u) goto L_089998E0;
    return;
L_089998E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089998F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999900u);
    // nop
    goto L_0899980C;
L_08999900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31784)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08999938u) goto L_08999938;
    return;
L_08999938:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26124));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08999954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08999954u) goto L_08999954;
    return;
L_08999954:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08999964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999964u) goto L_08999964;
    return;
L_08999964:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(31, 0x0899997Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899997Cu) goto L_0899997C;
    return;
L_0899997C:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26108));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26104));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26100));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089999B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089999B0u) goto L_089999B0;
    return;
L_089999B0:
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26144));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31784)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_089999E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089999F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 446u, 0x0899E6FCu>(ctx, &aot_mem) && ctx.pc == 0x089999F0u) goto L_089999F0;
    return;
L_089999F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999A00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31776)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999A2C;
      }
      goto L_08999A18;
    }
L_08999A18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999A34;
      }
      goto L_08999A2C;
    }
L_08999A2C:
    ctx.set_gpr(31, 0x08999A34u);
    // nop
    goto L_08999A4C;
L_08999A34:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31776)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999A4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-25996));
    ctx.set_gpr(31, 0x08999A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08999A64u) goto L_08999A64;
    return;
L_08999A64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x08999A84u) goto L_08999A84;
    return;
L_08999A84:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25836));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31776));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19248));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25852));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25884));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-26092));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08999AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08999AD4u) goto L_08999AD4;
    return;
L_08999AD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999AE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999AF4u);
    // nop
    goto L_08999A00;
L_08999AF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999B04:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999B14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31776)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08999B3Cu) goto L_08999B3C;
    return;
L_08999B3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26076));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08999B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08999B58u) goto L_08999B58;
    return;
L_08999B58:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999B68u) goto L_08999B68;
    return;
L_08999B68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25712));
    ctx.set_gpr(31, 0x08999B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999B80u) goto L_08999B80;
    return;
L_08999B80:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19752));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999B9Cu) goto L_08999B9C;
    return;
L_08999B9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25708));
    ctx.set_gpr(31, 0x08999BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999BB4u) goto L_08999BB4;
    return;
L_08999BB4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17544));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999BD0u) goto L_08999BD0;
    return;
L_08999BD0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25704));
    ctx.set_gpr(31, 0x08999BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999BE8u) goto L_08999BE8;
    return;
L_08999BE8:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19476));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999C04u) goto L_08999C04;
    return;
L_08999C04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25700));
    ctx.set_gpr(31, 0x08999C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999C1Cu) goto L_08999C1C;
    return;
L_08999C1C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19384));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999C38u) goto L_08999C38;
    return;
L_08999C38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25696));
    ctx.set_gpr(31, 0x08999C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999C50u) goto L_08999C50;
    return;
L_08999C50:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19660));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999C6Cu) goto L_08999C6C;
    return;
L_08999C6C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25692));
    ctx.set_gpr(31, 0x08999C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999C84u) goto L_08999C84;
    return;
L_08999C84:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19660));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999CA0u) goto L_08999CA0;
    return;
L_08999CA0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25688));
    ctx.set_gpr(31, 0x08999CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999CB8u) goto L_08999CB8;
    return;
L_08999CB8:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999CD4u) goto L_08999CD4;
    return;
L_08999CD4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25684));
    ctx.set_gpr(31, 0x08999CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08999CECu) goto L_08999CEC;
    return;
L_08999CEC:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25880));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25824));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25768));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08999D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08999D20u) goto L_08999D20;
    return;
L_08999D20:
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
L_08999D3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08999D54u);
    // nop
    goto L_08999EC0;
L_08999D54:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31716)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08999D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08999D68u) goto L_08999D68;
    return;
L_08999D68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31716)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999DA8;
      }
      goto L_08999D94;
    }
L_08999D94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999DB0;
      }
      goto L_08999DA8;
    }
L_08999DA8:
    ctx.set_gpr(31, 0x08999DB0u);
    // nop
    goto L_08999EC0;
L_08999DB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999DC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08999DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08999DE0u) goto L_08999DE0;
    return;
L_08999DE0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24592));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08999DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08999DF8u) goto L_08999DF8;
    return;
L_08999DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24592));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999E24;
      }
      goto L_08999E1C;
    }
L_08999E1C:
    ctx.set_gpr(31, 0x08999E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08999E24u) goto L_08999E24;
    return;
L_08999E24:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999EA4;
      }
      goto L_08999E5C;
    }
L_08999E5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999E8C;
      }
      goto L_08999E68;
    }
L_08999E68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999E8C;
      }
      goto L_08999E84;
    }
L_08999E84:
    ctx.set_gpr(31, 0x08999E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08999E8Cu) goto L_08999E8C;
    return;
L_08999E8C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08999EA4;
      }
      goto L_08999E98;
    }
L_08999E98:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08999EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08999EA4u) goto L_08999EA4;
    return;
L_08999EA4:
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
L_08999EC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24856));
    ctx.set_gpr(31, 0x08999ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08999ED8u) goto L_08999ED8;
    return;
L_08999ED8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x08999EF8u) goto L_08999EF8;
    return;
L_08999EF8:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25680));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31716));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10068));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24700));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-24732));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25672));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-25144));
    ctx.set_gpr(31, 0x08999F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08999F54u) goto L_08999F54;
    return;
L_08999F54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999F64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08999F74u);
    // nop
    goto L_08999D7C;
L_08999F74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999F84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32256)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08999F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31716)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08999FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08999FBCu) goto L_08999FBC;
    return;
L_08999FBC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25660));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08999FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08999FD8u) goto L_08999FD8;
    return;
L_08999FD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08999FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08999FE8u) goto L_08999FE8;
    return;
L_08999FE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08999FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 555u, 0x08993098u>(ctx, &aot_mem) && ctx.pc == 0x08999FF4u) goto L_08999FF4;
    return;
L_08999FF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25632));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25628));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25624));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899A028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A028u) goto L_0899A028;
    return;
L_0899A028:
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
L_0899A044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899A05Cu);
    // nop
    goto L_0899A144;
L_0899A05C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31708)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899A070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0899A070u) goto L_0899A070;
    return;
L_0899A070:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31708)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A0B0;
      }
      goto L_0899A09C;
    }
L_0899A09C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A0B8;
      }
      goto L_0899A0B0;
    }
L_0899A0B0:
    ctx.set_gpr(31, 0x0899A0B8u);
    // nop
    goto L_0899A144;
L_0899A0B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31708)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A0D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899A0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899A0E8u) goto L_0899A0E8;
    return;
L_0899A0E8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(31, 0x0899A100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899A100u) goto L_0899A100;
    return;
L_0899A100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A12C;
      }
      goto L_0899A124;
    }
L_0899A124:
    ctx.set_gpr(31, 0x0899A12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899A12Cu) goto L_0899A12C;
    return;
L_0899A12C:
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
L_0899A144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24212));
    ctx.set_gpr(31, 0x0899A15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899A15Cu) goto L_0899A15C;
    return;
L_0899A15C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A16C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899A17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899A17Cu) goto L_0899A17C;
    return;
L_0899A17C:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25620));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31708));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9816));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24056));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-24088));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25612));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-24368));
    ctx.set_gpr(31, 0x0899A1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899A1D8u) goto L_0899A1D8;
    return;
L_0899A1D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A1E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899A1F8u);
    // nop
    goto L_0899A084;
L_0899A1F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A208:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32260)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A218:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31708)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899A240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899A240u) goto L_0899A240;
    return;
L_0899A240:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25600));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x0899A25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899A25Cu) goto L_0899A25C;
    return;
L_0899A25C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899A26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A26Cu) goto L_0899A26C;
    return;
L_0899A26C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899A278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 298u, 0x088F1964u>(ctx, &aot_mem) && ctx.pc == 0x0899A278u) goto L_0899A278;
    return;
L_0899A278:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899A28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A28Cu) goto L_0899A28C;
    return;
L_0899A28C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899A298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0899A298u) goto L_0899A298;
    return;
L_0899A298:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899A2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A2ACu) goto L_0899A2AC;
    return;
L_0899A2AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899A2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0899A2B8u) goto L_0899A2B8;
    return;
L_0899A2B8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899A2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A2CCu) goto L_0899A2CC;
    return;
L_0899A2CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899A2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0899A2D8u) goto L_0899A2D8;
    return;
L_0899A2D8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25460));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25420));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25380));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899A304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A304u) goto L_0899A304;
    return;
L_0899A304:
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
L_0899A320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899A338u);
    // nop
    goto L_0899A420;
L_0899A338:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31664)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899A34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0899A34Cu) goto L_0899A34C;
    return;
L_0899A34C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31664)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A38C;
      }
      goto L_0899A378;
    }
L_0899A378:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A394;
      }
      goto L_0899A38C;
    }
L_0899A38C:
    ctx.set_gpr(31, 0x0899A394u);
    // nop
    goto L_0899A420;
L_0899A394:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31664)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A3AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0899A3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899A3C4u) goto L_0899A3C4;
    return;
L_0899A3C4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x0899A3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899A3DCu) goto L_0899A3DC;
    return;
L_0899A3DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A408;
      }
      goto L_0899A400;
    }
L_0899A400:
    ctx.set_gpr(31, 0x0899A408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899A408u) goto L_0899A408;
    return;
L_0899A408:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23480));
    ctx.set_gpr(31, 0x0899A438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899A438u) goto L_0899A438;
    return;
L_0899A438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899A458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899A458u) goto L_0899A458;
    return;
L_0899A458:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31664));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10068));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24700));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-23356));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25332));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23636));
    ctx.set_gpr(31, 0x0899A4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899A4B4u) goto L_0899A4B4;
    return;
L_0899A4B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A4C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899A4D4u);
    // nop
    goto L_0899A360;
L_0899A4D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A4E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31664)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899A50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899A50Cu) goto L_0899A50C;
    return;
L_0899A50C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25320));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899A528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899A528u) goto L_0899A528;
    return;
L_0899A528:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899A538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A538u) goto L_0899A538;
    return;
L_0899A538:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899A544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 555u, 0x08993098u>(ctx, &aot_mem) && ctx.pc == 0x0899A544u) goto L_0899A544;
    return;
L_0899A544:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25316));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25312));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25308));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899A578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A578u) goto L_0899A578;
    return;
L_0899A578:
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
L_0899A594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899A5ACu);
    // nop
    goto L_0899A664;
L_0899A5AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31656)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899A5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0899A5C0u) goto L_0899A5C0;
    return;
L_0899A5C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A5D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31656)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A600;
      }
      goto L_0899A5EC;
    }
L_0899A5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A608;
      }
      goto L_0899A600;
    }
L_0899A600:
    ctx.set_gpr(31, 0x0899A608u);
    // nop
    goto L_0899A664;
L_0899A608:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31656)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899A634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899A634u) goto L_0899A634;
    return;
L_0899A634:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899A648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899A648u) goto L_0899A648;
    return;
L_0899A648:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22900));
    ctx.set_gpr(31, 0x0899A67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899A67Cu) goto L_0899A67C;
    return;
L_0899A67C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A68C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899A69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899A69Cu) goto L_0899A69C;
    return;
L_0899A69C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31656));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9816));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24056));
    ctx.set_gpr(8, 2181u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32348));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25304));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23008));
    ctx.set_gpr(31, 0x0899A6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899A6E8u) goto L_0899A6E8;
    return;
L_0899A6E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A6F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31652)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A724;
      }
      goto L_0899A710;
    }
L_0899A710:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A72C;
      }
      goto L_0899A724;
    }
L_0899A724:
    ctx.set_gpr(31, 0x0899A72Cu);
    // nop
    goto L_0899A7D0;
L_0899A72C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31652)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899A75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899A75Cu) goto L_0899A75C;
    return;
L_0899A75C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x0899A778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899A778u) goto L_0899A778;
    return;
L_0899A778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A7A4;
      }
      goto L_0899A79C;
    }
L_0899A79C:
    ctx.set_gpr(31, 0x0899A7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899A7A4u) goto L_0899A7A4;
    return;
L_0899A7A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A7B8;
      }
      goto L_0899A7B0;
    }
L_0899A7B0:
    ctx.set_gpr(31, 0x0899A7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899A7B8u) goto L_0899A7B8;
    return;
L_0899A7B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A7D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22536));
    ctx.set_gpr(31, 0x0899A7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899A7E8u) goto L_0899A7E8;
    return;
L_0899A7E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A7F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899A808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899A808u) goto L_0899A808;
    return;
L_0899A808:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31652));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9816));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24056));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-22412));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25280));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-22716));
    ctx.set_gpr(31, 0x0899A864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899A864u) goto L_0899A864;
    return;
L_0899A864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899A884u);
    // nop
    goto L_0899A6F8;
L_0899A884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31652)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899A8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899A8BCu) goto L_0899A8BC;
    return;
L_0899A8BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25268));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0899A8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899A8D8u) goto L_0899A8D8;
    return;
L_0899A8D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899A8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A8E8u) goto L_0899A8E8;
    return;
L_0899A8E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899A8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 298u, 0x088F1964u>(ctx, &aot_mem) && ctx.pc == 0x0899A8F4u) goto L_0899A8F4;
    return;
L_0899A8F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899A910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A910u) goto L_0899A910;
    return;
L_0899A910:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899A91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 555u, 0x08993098u>(ctx, &aot_mem) && ctx.pc == 0x0899A91Cu) goto L_0899A91C;
    return;
L_0899A91C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25260));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25252));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25244));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899A950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899A950u) goto L_0899A950;
    return;
L_0899A950:
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
L_0899A96C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31640)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A998;
      }
      goto L_0899A984;
    }
L_0899A984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A9A0;
      }
      goto L_0899A998;
    }
L_0899A998:
    ctx.set_gpr(31, 0x0899A9A0u);
    // nop
    goto L_0899AA40;
L_0899A9A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31640)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899A9B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0899A9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x0899A9D0u) goto L_0899A9D0;
    return;
L_0899A9D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32312));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899A9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899A9E8u) goto L_0899A9E8;
    return;
L_0899A9E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x0899AA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899AA0Cu) goto L_0899AA0C;
    return;
L_0899AA0C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899AA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x0899AA28u) goto L_0899AA28;
    return;
L_0899AA28:
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
L_0899AA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21912));
    ctx.set_gpr(31, 0x0899AA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899AA58u) goto L_0899AA58;
    return;
L_0899AA58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899AA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899AA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899AA78u) goto L_0899AA78;
    return;
L_0899AA78:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31640));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31504));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2684));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-21796));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25228));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-22088));
    ctx.set_gpr(31, 0x0899AACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899AACCu) goto L_0899AACC;
    return;
L_0899AACC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899AADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899AAECu);
    // nop
    goto L_0899A96C;
L_0899AAEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899AAFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31636)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899ABC4;
      }
      goto L_0899AB18;
    }
L_0899AB18:
    ctx.set_gpr(31, 0x0899AB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899AB20u) goto L_0899AB20;
    return;
L_0899AB20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899AB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899AB2Cu) goto L_0899AB2C;
    return;
L_0899AB2C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31640)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899AB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0899AB40u) goto L_0899AB40;
    return;
L_0899AB40:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31636), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ABC4;
      }
      goto L_0899AB54;
    }
L_0899AB54:
    ctx.set_gpr(31, 0x0899AB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0899AB5Cu) goto L_0899AB5C;
    return;
L_0899AB5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899AB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x0899AB6Cu) goto L_0899AB6C;
    return;
L_0899AB6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31636)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AB98;
      }
      goto L_0899AB90;
    }
L_0899AB90:
    ctx.set_gpr(31, 0x0899AB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899AB98u) goto L_0899AB98;
    return;
L_0899AB98:
    ctx.set_gpr(31, 0x0899ABA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0899ABA0u) goto L_0899ABA0;
    return;
L_0899ABA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31636)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31636)));
    ctx.set_gpr(31, 0x0899ABC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x0899ABC4u) goto L_0899ABC4;
    return;
L_0899ABC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899ABD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31636)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899ABF8;
      }
      goto L_0899ABF0;
    }
L_0899ABF0:
    ctx.set_gpr(31, 0x0899ABF8u);
    // nop
    goto L_0899AA40;
L_0899ABF8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31636)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899AC10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899AC1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0899AC30u);
    // nop
    goto L_0899AC40;
L_0899AC30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899AC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899AC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899AC5Cu) goto L_0899AC5C;
    return;
L_0899AC5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899AC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899AC68u) goto L_0899AC68;
    return;
L_0899AC68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899AC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 38u, 0x088DC344u>(ctx, &aot_mem) && ctx.pc == 0x0899AC74u) goto L_0899AC74;
    return;
L_0899AC74:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25200));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AC94;
      }
      goto L_0899AC88;
    }
L_0899AC88:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ACE4;
      }
      goto L_0899AC94;
    }
L_0899AC94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899ACCC;
      }
      goto L_0899ACA4;
    }
L_0899ACA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899ACB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899ACB0u) goto L_0899ACB0;
    return;
L_0899ACB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ACC4;
      }
      goto L_0899ACB8;
    }
L_0899ACB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899ACC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899ACC4u) goto L_0899ACC4;
    return;
L_0899ACC4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899ACCC;
L_0899ACCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25200));
    ctx.set_gpr(31, 0x0899ACE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899ACE4u) goto L_0899ACE4;
    return;
L_0899ACE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0899ACF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x0899ACF8u) goto L_0899ACF8;
    return;
L_0899ACF8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AD24;
      }
      goto L_0899AD08;
    }
L_0899AD08:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AD24;
      }
      goto L_0899AD20;
    }
L_0899AD20:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899AD24;
L_0899AD24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AD50;
      }
      goto L_0899AD2C;
    }
L_0899AD2C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AD50;
      }
      goto L_0899AD44;
    }
L_0899AD44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899AD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899AD50u) goto L_0899AD50;
    return;
L_0899AD50:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899AD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x0899AD60u) goto L_0899AD60;
    return;
L_0899AD60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899AD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899AD70u) goto L_0899AD70;
    return;
L_0899AD70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AD98;
      }
      goto L_0899AD8C;
    }
L_0899AD8C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899AD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899AD98u) goto L_0899AD98;
    return;
L_0899AD98:
    ctx.set_gpr(31, 0x0899ADA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899ADA0u) goto L_0899ADA0;
    return;
L_0899ADA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899ADACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899ADACu) goto L_0899ADAC;
    return;
L_0899ADAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899ADB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 368u, 0x088D9E94u>(ctx, &aot_mem) && ctx.pc == 0x0899ADB8u) goto L_0899ADB8;
    return;
L_0899ADB8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25192));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899ADD8;
      }
      goto L_0899ADCC;
    }
L_0899ADCC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE28;
      }
      goto L_0899ADD8;
    }
L_0899ADD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE10;
      }
      goto L_0899ADE8;
    }
L_0899ADE8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899ADF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899ADF4u) goto L_0899ADF4;
    return;
L_0899ADF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE08;
      }
      goto L_0899ADFC;
    }
L_0899ADFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899AE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899AE08u) goto L_0899AE08;
    return;
L_0899AE08:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899AE10;
L_0899AE10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25192));
    ctx.set_gpr(31, 0x0899AE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899AE28u) goto L_0899AE28;
    return;
L_0899AE28:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0899AE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x0899AE3Cu) goto L_0899AE3C;
    return;
L_0899AE3C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE68;
      }
      goto L_0899AE4C;
    }
L_0899AE4C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE68;
      }
      goto L_0899AE64;
    }
L_0899AE64:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899AE68;
L_0899AE68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE94;
      }
      goto L_0899AE70;
    }
L_0899AE70:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE94;
      }
      goto L_0899AE88;
    }
L_0899AE88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899AE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899AE94u) goto L_0899AE94;
    return;
L_0899AE94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899AEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x0899AEA8u) goto L_0899AEA8;
    return;
L_0899AEA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899AEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899AEB8u) goto L_0899AEB8;
    return;
L_0899AEB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AEE0;
      }
      goto L_0899AED4;
    }
L_0899AED4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899AEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899AEE0u) goto L_0899AEE0;
    return;
L_0899AEE0:
    ctx.set_gpr(31, 0x0899AEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899AEE8u) goto L_0899AEE8;
    return;
L_0899AEE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899AEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899AEF4u) goto L_0899AEF4;
    return;
L_0899AEF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899AF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 11u, 0x088D80BCu>(ctx, &aot_mem) && ctx.pc == 0x0899AF00u) goto L_0899AF00;
    return;
L_0899AF00:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25184));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF20;
      }
      goto L_0899AF14;
    }
L_0899AF14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF70;
      }
      goto L_0899AF20;
    }
L_0899AF20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF58;
      }
      goto L_0899AF30;
    }
L_0899AF30:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899AF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899AF3Cu) goto L_0899AF3C;
    return;
L_0899AF3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF50;
      }
      goto L_0899AF44;
    }
L_0899AF44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899AF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899AF50u) goto L_0899AF50;
    return;
L_0899AF50:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899AF58;
L_0899AF58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25184));
    ctx.set_gpr(31, 0x0899AF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899AF70u) goto L_0899AF70;
    return;
L_0899AF70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0899AF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x0899AF84u) goto L_0899AF84;
    return;
L_0899AF84:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AFB0;
      }
      goto L_0899AF94;
    }
L_0899AF94:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AFB0;
      }
      goto L_0899AFAC;
    }
L_0899AFAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899AFB0;
L_0899AFB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AFDC;
      }
      goto L_0899AFB8;
    }
L_0899AFB8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AFDC;
      }
      goto L_0899AFD0;
    }
L_0899AFD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899AFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899AFDCu) goto L_0899AFDC;
    return;
L_0899AFDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899AFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x0899AFF0u) goto L_0899AFF0;
    return;
L_0899AFF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899B000u) goto L_0899B000;
    return;
L_0899B000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B028;
      }
      goto L_0899B01C;
    }
L_0899B01C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899B028u) goto L_0899B028;
    return;
L_0899B028:
    ctx.set_gpr(31, 0x0899B030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899B030u) goto L_0899B030;
    return;
L_0899B030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899B03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899B03Cu) goto L_0899B03C;
    return;
L_0899B03C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 853u, 0x088D79A4u>(ctx, &aot_mem) && ctx.pc == 0x0899B048u) goto L_0899B048;
    return;
L_0899B048:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25176));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B068;
      }
      goto L_0899B05C;
    }
L_0899B05C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B0B8;
      }
      goto L_0899B068;
    }
L_0899B068:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B0A0;
      }
      goto L_0899B078;
    }
L_0899B078:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899B084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899B084u) goto L_0899B084;
    return;
L_0899B084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B098;
      }
      goto L_0899B08C;
    }
L_0899B08C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899B098u) goto L_0899B098;
    return;
L_0899B098:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899B0A0;
L_0899B0A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.set_gpr(31, 0x0899B0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899B0B8u) goto L_0899B0B8;
    return;
L_0899B0B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0899B0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x0899B0CCu) goto L_0899B0CC;
    return;
L_0899B0CC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B0F8;
      }
      goto L_0899B0DC;
    }
L_0899B0DC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B0F8;
      }
      goto L_0899B0F4;
    }
L_0899B0F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899B0F8;
L_0899B0F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B124;
      }
      goto L_0899B100;
    }
L_0899B100:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B124;
      }
      goto L_0899B118;
    }
L_0899B118:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899B124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899B124u) goto L_0899B124;
    return;
L_0899B124:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x0899B138u) goto L_0899B138;
    return;
L_0899B138:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899B148u) goto L_0899B148;
    return;
L_0899B148:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B170;
      }
      goto L_0899B164;
    }
L_0899B164:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899B170u) goto L_0899B170;
    return;
L_0899B170:
    ctx.set_gpr(31, 0x0899B178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899B178u) goto L_0899B178;
    return;
L_0899B178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899B184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899B184u) goto L_0899B184;
    return;
L_0899B184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 853u, 0x088D79A4u>(ctx, &aot_mem) && ctx.pc == 0x0899B190u) goto L_0899B190;
    return;
L_0899B190:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25164));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B1B0;
      }
      goto L_0899B1A4;
    }
L_0899B1A4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B200;
      }
      goto L_0899B1B0;
    }
L_0899B1B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B1E8;
      }
      goto L_0899B1C0;
    }
L_0899B1C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899B1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899B1CCu) goto L_0899B1CC;
    return;
L_0899B1CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B1E0;
      }
      goto L_0899B1D4;
    }
L_0899B1D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899B1E0u) goto L_0899B1E0;
    return;
L_0899B1E0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899B1E8;
L_0899B1E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25164));
    ctx.set_gpr(31, 0x0899B200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899B200u) goto L_0899B200;
    return;
L_0899B200:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0899B214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x0899B214u) goto L_0899B214;
    return;
L_0899B214:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B240;
      }
      goto L_0899B224;
    }
L_0899B224:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B240;
      }
      goto L_0899B23C;
    }
L_0899B23C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899B240;
L_0899B240:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B26C;
      }
      goto L_0899B248;
    }
L_0899B248:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B26C;
      }
      goto L_0899B260;
    }
L_0899B260:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899B26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899B26Cu) goto L_0899B26C;
    return;
L_0899B26C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x0899B280u) goto L_0899B280;
    return;
L_0899B280:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899B290u) goto L_0899B290;
    return;
L_0899B290:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B2B8;
      }
      goto L_0899B2AC;
    }
L_0899B2AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899B2B8u) goto L_0899B2B8;
    return;
L_0899B2B8:
    ctx.set_gpr(31, 0x0899B2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899B2C0u) goto L_0899B2C0;
    return;
L_0899B2C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899B2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899B2CCu) goto L_0899B2CC;
    return;
L_0899B2CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 368u, 0x088D9E94u>(ctx, &aot_mem) && ctx.pc == 0x0899B2D8u) goto L_0899B2D8;
    return;
L_0899B2D8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27804));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B2F8;
      }
      goto L_0899B2EC;
    }
L_0899B2EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B348;
      }
      goto L_0899B2F8;
    }
L_0899B2F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B330;
      }
      goto L_0899B308;
    }
L_0899B308:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899B314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899B314u) goto L_0899B314;
    return;
L_0899B314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B328;
      }
      goto L_0899B31C;
    }
L_0899B31C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899B328u) goto L_0899B328;
    return;
L_0899B328:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899B330;
L_0899B330:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27804));
    ctx.set_gpr(31, 0x0899B348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899B348u) goto L_0899B348;
    return;
L_0899B348:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899B35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x0899B35Cu) goto L_0899B35C;
    return;
L_0899B35C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B388;
      }
      goto L_0899B36C;
    }
L_0899B36C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B388;
      }
      goto L_0899B384;
    }
L_0899B384:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899B388;
L_0899B388:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B3B4;
      }
      goto L_0899B390;
    }
L_0899B390:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B3B4;
      }
      goto L_0899B3A8;
    }
L_0899B3A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899B3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899B3B4u) goto L_0899B3B4;
    return;
L_0899B3B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x0899B3C8u) goto L_0899B3C8;
    return;
L_0899B3C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899B3D8u) goto L_0899B3D8;
    return;
L_0899B3D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B400;
      }
      goto L_0899B3F4;
    }
L_0899B3F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899B400u) goto L_0899B400;
    return;
L_0899B400:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899B430u);
    // nop
    goto L_0899B4E8;
L_0899B430:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31632)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899B444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0899B444u) goto L_0899B444;
    return;
L_0899B444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31632)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B484;
      }
      goto L_0899B470;
    }
L_0899B470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B48C;
      }
      goto L_0899B484;
    }
L_0899B484:
    ctx.set_gpr(31, 0x0899B48Cu);
    // nop
    goto L_0899B4E8;
L_0899B48C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31632)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899B4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899B4B8u) goto L_0899B4B8;
    return;
L_0899B4B8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899B4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899B4CCu) goto L_0899B4CC;
    return;
L_0899B4CC:
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
L_0899B4E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19184));
    ctx.set_gpr(31, 0x0899B500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899B500u) goto L_0899B500;
    return;
L_0899B500:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B510:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899B520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899B520u) goto L_0899B520;
    return;
L_0899B520:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31632));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19068));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-25144));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-19292));
    ctx.set_gpr(31, 0x0899B574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899B574u) goto L_0899B574;
    return;
L_0899B574:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B584:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899B594u);
    // nop
    goto L_0899B458;
L_0899B594:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B5A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31632)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899B5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899B5D0u) goto L_0899B5D0;
    return;
L_0899B5D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25124));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0899B5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899B5ECu) goto L_0899B5EC;
    return;
L_0899B5EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27476));
    ctx.set_gpr(31, 0x0899B600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x0899B600u) goto L_0899B600;
    return;
L_0899B600:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x0899B614u) goto L_0899B614;
    return;
L_0899B614:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899B630u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899B630u) goto L_0899B630;
    return;
L_0899B630:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B63Cu);
    // nop
    goto L_0899ABD8;
L_0899B63C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31628));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899B664u) goto L_0899B664;
    return;
L_0899B664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B68C;
      }
      goto L_0899B680;
    }
L_0899B680:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899B68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899B68Cu) goto L_0899B68C;
    return;
L_0899B68C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899B69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899B69Cu) goto L_0899B69C;
    return;
L_0899B69C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899B6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x0899B6ACu) goto L_0899B6AC;
    return;
L_0899B6AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25032));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25020));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25008));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899B6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899B6D4u) goto L_0899B6D4;
    return;
L_0899B6D4:
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
L_0899B6F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31612)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B734;
      }
      goto L_0899B70C;
    }
L_0899B70C:
    ctx.set_gpr(31, 0x0899B714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899B714u) goto L_0899B714;
    return;
L_0899B714:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899B720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899B720u) goto L_0899B720;
    return;
L_0899B720:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899B72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0899B72Cu) goto L_0899B72C;
    return;
L_0899B72C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31612), ctx.gpr[2]);
    goto L_0899B734;
L_0899B734:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31612)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B778;
      }
      goto L_0899B764;
    }
L_0899B764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B780;
      }
      goto L_0899B778;
    }
L_0899B778:
    ctx.set_gpr(31, 0x0899B780u);
    // nop
    goto L_0899BCA0;
L_0899B780:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899B7B0u);
    // nop
    goto L_0899BBC4;
L_0899B7B0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(828), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(844), 0u);
    ctx.set_gpr(31, 0x0899B7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899B7ECu) goto L_0899B7EC;
    return;
L_0899B7EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B818;
      }
      goto L_0899B810;
    }
L_0899B810:
    ctx.set_gpr(31, 0x0899B818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B818u) goto L_0899B818;
    return;
L_0899B818:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B82C;
      }
      goto L_0899B824;
    }
L_0899B824:
    ctx.set_gpr(31, 0x0899B82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B82Cu) goto L_0899B82C;
    return;
L_0899B82C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B840;
      }
      goto L_0899B838;
    }
L_0899B838:
    ctx.set_gpr(31, 0x0899B840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B840u) goto L_0899B840;
    return;
L_0899B840:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B854;
      }
      goto L_0899B84C;
    }
L_0899B84C:
    ctx.set_gpr(31, 0x0899B854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B854u) goto L_0899B854;
    return;
L_0899B854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B868;
      }
      goto L_0899B860;
    }
L_0899B860:
    ctx.set_gpr(31, 0x0899B868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B868u) goto L_0899B868;
    return;
L_0899B868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(824)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B87C;
      }
      goto L_0899B874;
    }
L_0899B874:
    ctx.set_gpr(31, 0x0899B87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B87Cu) goto L_0899B87C;
    return;
L_0899B87C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B890;
      }
      goto L_0899B888;
    }
L_0899B888:
    ctx.set_gpr(31, 0x0899B890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B890u) goto L_0899B890;
    return;
L_0899B890:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8A4;
      }
      goto L_0899B89C;
    }
L_0899B89C:
    ctx.set_gpr(31, 0x0899B8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B8A4u) goto L_0899B8A4;
    return;
L_0899B8A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8B8;
      }
      goto L_0899B8B0;
    }
L_0899B8B0:
    ctx.set_gpr(31, 0x0899B8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B8B8u) goto L_0899B8B8;
    return;
L_0899B8B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B8CC;
      }
      goto L_0899B8C4;
    }
L_0899B8C4:
    ctx.set_gpr(31, 0x0899B8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B8CCu) goto L_0899B8CC;
    return;
L_0899B8CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899B8DCu);
    // nop
    goto L_0899B8F4;
L_0899B8DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(944));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899B8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BBA8;
      }
      goto L_0899B914;
    }
L_0899B914:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25464));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(360));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B940;
      }
      goto L_0899B92C;
    }
L_0899B92C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B940;
      }
      goto L_0899B938;
    }
L_0899B938:
    ctx.set_gpr(31, 0x0899B940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B940u) goto L_0899B940;
    return;
L_0899B940:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(352));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B960;
      }
      goto L_0899B94C;
    }
L_0899B94C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B960;
      }
      goto L_0899B958;
    }
L_0899B958:
    ctx.set_gpr(31, 0x0899B960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B960u) goto L_0899B960;
    return;
L_0899B960:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(348));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B980;
      }
      goto L_0899B96C;
    }
L_0899B96C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B980;
      }
      goto L_0899B978;
    }
L_0899B978:
    ctx.set_gpr(31, 0x0899B980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B980u) goto L_0899B980;
    return;
L_0899B980:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(340));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B9A0;
      }
      goto L_0899B98C;
    }
L_0899B98C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B9A0;
      }
      goto L_0899B998;
    }
L_0899B998:
    ctx.set_gpr(31, 0x0899B9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B9A0u) goto L_0899B9A0;
    return;
L_0899B9A0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(336));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B9C0;
      }
      goto L_0899B9AC;
    }
L_0899B9AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B9C0;
      }
      goto L_0899B9B8;
    }
L_0899B9B8:
    ctx.set_gpr(31, 0x0899B9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B9C0u) goto L_0899B9C0;
    return;
L_0899B9C0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6108));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899B9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0899B9DCu) goto L_0899B9DC;
    return;
L_0899B9DC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B9FC;
      }
      goto L_0899B9E8;
    }
L_0899B9E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B9FC;
      }
      goto L_0899B9F4;
    }
L_0899B9F4:
    ctx.set_gpr(31, 0x0899B9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899B9FCu) goto L_0899B9FC;
    return;
L_0899B9FC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA1C;
      }
      goto L_0899BA08;
    }
L_0899BA08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA1C;
      }
      goto L_0899BA14;
    }
L_0899BA14:
    ctx.set_gpr(31, 0x0899BA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BA1Cu) goto L_0899BA1C;
    return;
L_0899BA1C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA3C;
      }
      goto L_0899BA28;
    }
L_0899BA28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA3C;
      }
      goto L_0899BA34;
    }
L_0899BA34:
    ctx.set_gpr(31, 0x0899BA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BA3Cu) goto L_0899BA3C;
    return;
L_0899BA3C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA5C;
      }
      goto L_0899BA48;
    }
L_0899BA48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA5C;
      }
      goto L_0899BA54;
    }
L_0899BA54:
    ctx.set_gpr(31, 0x0899BA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BA5Cu) goto L_0899BA5C;
    return;
L_0899BA5C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA7C;
      }
      goto L_0899BA68;
    }
L_0899BA68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA7C;
      }
      goto L_0899BA74;
    }
L_0899BA74:
    ctx.set_gpr(31, 0x0899BA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BA7Cu) goto L_0899BA7C;
    return;
L_0899BA7C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA9C;
      }
      goto L_0899BA88;
    }
L_0899BA88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BA9C;
      }
      goto L_0899BA94;
    }
L_0899BA94:
    ctx.set_gpr(31, 0x0899BA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BA9Cu) goto L_0899BA9C;
    return;
L_0899BA9C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BABC;
      }
      goto L_0899BAA8;
    }
L_0899BAA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BABC;
      }
      goto L_0899BAB4;
    }
L_0899BAB4:
    ctx.set_gpr(31, 0x0899BABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BABCu) goto L_0899BABC;
    return;
L_0899BABC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BADC;
      }
      goto L_0899BAC8;
    }
L_0899BAC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BADC;
      }
      goto L_0899BAD4;
    }
L_0899BAD4:
    ctx.set_gpr(31, 0x0899BADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BADCu) goto L_0899BADC;
    return;
L_0899BADC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BAFC;
      }
      goto L_0899BAE8;
    }
L_0899BAE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BAFC;
      }
      goto L_0899BAF4;
    }
L_0899BAF4:
    ctx.set_gpr(31, 0x0899BAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BAFCu) goto L_0899BAFC;
    return;
L_0899BAFC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB1C;
      }
      goto L_0899BB08;
    }
L_0899BB08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB1C;
      }
      goto L_0899BB14;
    }
L_0899BB14:
    ctx.set_gpr(31, 0x0899BB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BB1Cu) goto L_0899BB1C;
    return;
L_0899BB1C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB3C;
      }
      goto L_0899BB28;
    }
L_0899BB28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB3C;
      }
      goto L_0899BB34;
    }
L_0899BB34:
    ctx.set_gpr(31, 0x0899BB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BB3Cu) goto L_0899BB3C;
    return;
L_0899BB3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB90;
      }
      goto L_0899BB44;
    }
L_0899BB44:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1196));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB70;
      }
      goto L_0899BB5C;
    }
L_0899BB5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB70;
      }
      goto L_0899BB68;
    }
L_0899BB68:
    ctx.set_gpr(31, 0x0899BB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BB70u) goto L_0899BB70;
    return;
L_0899BB70:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB90;
      }
      goto L_0899BB7C;
    }
L_0899BB7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BB90;
      }
      goto L_0899BB88;
    }
L_0899BB88:
    ctx.set_gpr(31, 0x0899BB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899BB90u) goto L_0899BB90;
    return;
L_0899BB90:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899BBA8;
      }
      goto L_0899BB9C;
    }
L_0899BB9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899BBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x0899BBA8u) goto L_0899BBA8;
    return;
L_0899BBA8:
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
L_0899BBC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899BBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899BBDCu) goto L_0899BBDC;
    return;
L_0899BBDC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1196));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25464));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x0899BC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0899BC34u) goto L_0899BC34;
    return;
L_0899BC34:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x0899BC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0899BC40u) goto L_0899BC40;
    return;
L_0899BC40:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 2202u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17264));
    ctx.set_gpr(6, 2180u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6108));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899BC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0899BC64u) goto L_0899BC64;
    return;
L_0899BC64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(348), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
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
L_0899BC90:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BCA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17208));
    ctx.set_gpr(31, 0x0899BCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899BCB8u) goto L_0899BCB8;
    return;
L_0899BCB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BCC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899BCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899BCD8u) goto L_0899BCD8;
    return;
L_0899BCD8:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17068));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31612));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14904));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-17084));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-13412));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24964));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(920));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-18536));
    ctx.set_gpr(31, 0x0899BD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899BD34u) goto L_0899BD34;
    return;
L_0899BD34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BD44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899BD54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31612)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899BD7Cu) goto L_0899BD7C;
    return;
L_0899BD7C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24944));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x0899BD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899BD98u) goto L_0899BD98;
    return;
L_0899BD98:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BDA8u) goto L_0899BDA8;
    return;
L_0899BDA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899BDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899BDB8u) goto L_0899BDB8;
    return;
L_0899BDB8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BDC8u) goto L_0899BDC8;
    return;
L_0899BDC8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899BDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 179u, 0x0899CF74u>(ctx, &aot_mem) && ctx.pc == 0x0899BDD4u) goto L_0899BDD4;
    return;
L_0899BDD4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BDE8u) goto L_0899BDE8;
    return;
L_0899BDE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899BDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 371u, 0x08992004u>(ctx, &aot_mem) && ctx.pc == 0x0899BDF4u) goto L_0899BDF4;
    return;
L_0899BDF4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BE08u) goto L_0899BE08;
    return;
L_0899BE08:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899BE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 708u, 0x0898FEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899BE14u) goto L_0899BE14;
    return;
L_0899BE14:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BE28u) goto L_0899BE28;
    return;
L_0899BE28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20792));
    ctx.set_gpr(31, 0x0899BE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899BE40u) goto L_0899BE40;
    return;
L_0899BE40:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18372));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BE5Cu) goto L_0899BE5C;
    return;
L_0899BE5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899BE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899BE6Cu) goto L_0899BE6C;
    return;
L_0899BE6C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BE7Cu) goto L_0899BE7C;
    return;
L_0899BE7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BE94u) goto L_0899BE94;
    return;
L_0899BE94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899BEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899BEA4u) goto L_0899BEA4;
    return;
L_0899BEA4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BEB4u) goto L_0899BEB4;
    return;
L_0899BEB4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BEC8u) goto L_0899BEC8;
    return;
L_0899BEC8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BEDCu) goto L_0899BEDC;
    return;
L_0899BEDC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BEF0u) goto L_0899BEF0;
    return;
L_0899BEF0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(31, 0x0899BF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899BF04u) goto L_0899BF04;
    return;
L_0899BF04:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BF18u) goto L_0899BF18;
    return;
L_0899BF18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0899BF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899BF2Cu) goto L_0899BF2C;
    return;
L_0899BF2C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(27));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BF40u) goto L_0899BF40;
    return;
L_0899BF40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x0899BF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899BF54u) goto L_0899BF54;
    return;
L_0899BF54:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BF68u) goto L_0899BF68;
    return;
L_0899BF68:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BF7Cu) goto L_0899BF7C;
    return;
L_0899BF7C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899BF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899BF90u) goto L_0899BF90;
    return;
L_0899BF90:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BFA4u) goto L_0899BFA4;
    return;
L_0899BFA4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BFB8u) goto L_0899BFB8;
    return;
L_0899BFB8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BFCCu) goto L_0899BFCC;
    return;
L_0899BFCC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BFE0u) goto L_0899BFE0;
    return;
L_0899BFE0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899BFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899BFF4u) goto L_0899BFF4;
    return;
L_0899BFF4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = 0x0899C000u; return;
}

void recomp_unit_0101(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0101_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_101(Runtime &runtime) {
    runtime.register_generated_unit(101u, 0x08998000u, 16384u, &recomp_unit_0101, &recomp_unit_0101_entry);
    runtime.register_function(0x08998000u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899800Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998014u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899802Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998040u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998054u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998070u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998088u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998098u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089980A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089980FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899810Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899811Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899812Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899815Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998170u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899818Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998198u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998204u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899821Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998230u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998244u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899825Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998270u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998278u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998290u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899830Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998358u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998368u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998378u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998388u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998418u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998430u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998440u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998450u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899850Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998520u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998528u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998540u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998554u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998568u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998584u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899859Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089985ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089985BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998608u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998618u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998628u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998638u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998650u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998664u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899866Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998684u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899869Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089986BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089986E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089986ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089986F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998714u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899872Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998744u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899876Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998784u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998794u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998800u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998810u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998820u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998830u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998848u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899885Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998864u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899887Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998894u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089988A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089988B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998904u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998914u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998924u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998934u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998950u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998960u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998970u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998988u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899899Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089989A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089989BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089989D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089989E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089989F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998AB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998ADCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998BB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998BCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998BE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899901Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999034u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899904Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899905Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899906Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999114u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999130u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999158u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999170u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999188u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899919Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999210u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999224u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999240u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999258u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999268u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999278u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999314u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999328u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899933Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999354u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899935Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999368u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999374u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899937Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999394u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999408u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999424u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899943Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899944Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899945Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089994B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089994C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089994D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089994E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999510u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899952Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899953Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999554u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999570u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999580u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999590u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899959Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999624u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999640u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999650u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999660u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999678u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999680u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899968Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999698u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999704u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899971Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899972Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899973Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999784u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999794u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899980Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999824u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999838u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999840u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999858u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999870u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999880u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999890u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089998E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089998F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999900u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999910u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999938u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999954u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999964u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899997Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999BB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999BD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999BE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999ED8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A028u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A044u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A05Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A070u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A084u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A09Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A0B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A0B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A0D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A0E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A100u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A124u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A12Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A144u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A15Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A16Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A17Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A208u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A218u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A240u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A25Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A26Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A278u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A28Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A298u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A304u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A320u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A338u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A34Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A360u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A378u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A38Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A394u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A400u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A408u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A420u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A438u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A448u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A458u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A4B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A4C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A4D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A4E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A50Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A528u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A538u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A544u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A578u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A594u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A5ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A5C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A5D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A5ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A600u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A608u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A620u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A634u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A648u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A664u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A67Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A68Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A69Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A6E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A6F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A710u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A724u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A72Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A744u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A75Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A778u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A79Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A808u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A864u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A874u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A884u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A894u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A910u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A91Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A950u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A96Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A984u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A998u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA78u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AACCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AADCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AAECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AAFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AED4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFDCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B000u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B01Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B028u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B030u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B03Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B048u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B05Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B068u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B078u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B084u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B08Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B098u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B100u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B118u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B124u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B138u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B148u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B164u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B170u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B178u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B184u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B190u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B200u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B214u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B224u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B23Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B240u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B248u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B260u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B26Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B280u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B290u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B308u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B314u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B31Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B328u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B330u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B348u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B35Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B36Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B384u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B388u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B390u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B400u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B418u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B430u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B444u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B458u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B470u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B484u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B48Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B500u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B510u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B520u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B574u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B584u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B594u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B5A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B5D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B5ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B600u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B614u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B630u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B63Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B664u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B680u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B68Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B69Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B70Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B714u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B720u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B72Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B734u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B74Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B764u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B778u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B780u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B798u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B7ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B810u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B818u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B824u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B82Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B838u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B840u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B84Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B854u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B860u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B868u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B874u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B87Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B888u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B890u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B89Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B914u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B92Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B938u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B940u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B94Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B958u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B960u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B96Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B978u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B980u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B98Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B998u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BABCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BADCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBDCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEDCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFF4u, &recomp_unit_0101, "recomp_unit_0101");
}
} // namespace psprecomp
