#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0157[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0,
    0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47,
    0, 0, 0, 48, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 57, 58,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0,
    0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 80, 0, 0, 0, 81, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0,
    0, 89, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 94, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 111, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0,
    0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 189,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193,
    194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0,
    215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0,
    0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 247, 0, 248, 0, 0, 249, 0, 250,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0,
    0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 0, 340,
    0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 352, 0, 353, 0, 0, 0, 354, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364,
    0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 371,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 413, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 437, 0, 0, 438, 0, 0, 0,
    439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0,
    0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 451, 0, 0, 452, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 0,
    0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0,
    0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0,
    0, 499, 0, 0, 0, 0, 0, 500, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 512, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 0, 521,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 525, 0, 0, 526, 527, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 535, 0, 0, 536, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0, 542, 0,
    0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0,
    558, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0,
    0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0,
    0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 584, 0,
    0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0,
    0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0,
    0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0,
    0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0,
    621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0,
    629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633,
    0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640,
    0, 0, 0, 0, 0, 641, 0, 642, 643, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648,
    0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656,
    0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0,
    0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0,
    0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0,
    0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0,
    0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0,
    0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0,
    0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 703, 0, 704, 0, 705, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708,
    0, 0, 0, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 0, 0, 719, 720, 0, 0, 721, 0,
    722, 0, 723, 0, 724, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 729, 0, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 0,
    734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738, 0, 739, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743,
    0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753,
};
void recomp_unit_0157_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A78000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0157[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A78000;
    case 2u: goto L_08A78010;
    case 3u: goto L_08A78020;
    case 4u: goto L_08A78048;
    case 5u: goto L_08A78064;
    case 6u: goto L_08A78074;
    case 7u: goto L_08A78080;
    case 8u: goto L_08A7809C;
    case 9u: goto L_08A780A8;
    case 10u: goto L_08A780C4;
    case 11u: goto L_08A780D0;
    case 12u: goto L_08A780FC;
    case 13u: goto L_08A78118;
    case 14u: goto L_08A78130;
    case 15u: goto L_08A78144;
    case 16u: goto L_08A7814C;
    case 17u: goto L_08A78164;
    case 18u: goto L_08A78178;
    case 19u: goto L_08A7818C;
    case 20u: goto L_08A781A8;
    case 21u: goto L_08A781C0;
    case 22u: goto L_08A781D0;
    case 23u: goto L_08A781E0;
    case 24u: goto L_08A78234;
    case 25u: goto L_08A78244;
    case 26u: goto L_08A78254;
    case 27u: goto L_08A78264;
    case 28u: goto L_08A78288;
    case 29u: goto L_08A782A4;
    case 30u: goto L_08A782CC;
    case 31u: goto L_08A782E4;
    case 32u: goto L_08A78304;
    case 33u: goto L_08A78344;
    case 34u: goto L_08A78354;
    case 35u: goto L_08A78368;
    case 36u: goto L_08A7838C;
    case 37u: goto L_08A7839C;
    case 38u: goto L_08A783B0;
    case 39u: goto L_08A783D4;
    case 40u: goto L_08A783E4;
    case 41u: goto L_08A783F8;
    case 42u: goto L_08A78404;
    case 43u: goto L_08A78410;
    case 44u: goto L_08A78418;
    case 45u: goto L_08A7843C;
    case 46u: goto L_08A78470;
    case 47u: goto L_08A7847C;
    case 48u: goto L_08A7848C;
    case 49u: goto L_08A78490;
    case 50u: goto L_08A784A4;
    case 51u: goto L_08A784B0;
    case 52u: goto L_08A784C0;
    case 53u: goto L_08A784C4;
    case 54u: goto L_08A784D8;
    case 55u: goto L_08A784E4;
    case 56u: goto L_08A784F4;
    case 57u: goto L_08A784F8;
    case 58u: goto L_08A784FC;
    case 59u: goto L_08A78508;
    case 60u: goto L_08A78524;
    case 61u: goto L_08A78534;
    case 62u: goto L_08A78554;
    case 63u: goto L_08A78590;
    case 64u: goto L_08A785A0;
    case 65u: goto L_08A785B4;
    case 66u: goto L_08A785D8;
    case 67u: goto L_08A785E8;
    case 68u: goto L_08A785FC;
    case 69u: goto L_08A78620;
    case 70u: goto L_08A78630;
    case 71u: goto L_08A78644;
    case 72u: goto L_08A78668;
    case 73u: goto L_08A78678;
    case 74u: goto L_08A7868C;
    case 75u: goto L_08A78698;
    case 76u: goto L_08A786A4;
    case 77u: goto L_08A786AC;
    case 78u: goto L_08A786D0;
    case 79u: goto L_08A78700;
    case 80u: goto L_08A7870C;
    case 81u: goto L_08A7871C;
    case 82u: goto L_08A78720;
    case 83u: goto L_08A78734;
    case 84u: goto L_08A78740;
    case 85u: goto L_08A78750;
    case 86u: goto L_08A78754;
    case 87u: goto L_08A78768;
    case 88u: goto L_08A78774;
    case 89u: goto L_08A78784;
    case 90u: goto L_08A78788;
    case 91u: goto L_08A7879C;
    case 92u: goto L_08A787A8;
    case 93u: goto L_08A787B8;
    case 94u: goto L_08A787BC;
    case 95u: goto L_08A787C0;
    case 96u: goto L_08A787CC;
    case 97u: goto L_08A787E8;
    case 98u: goto L_08A787F8;
    case 99u: goto L_08A78828;
    case 100u: goto L_08A7883C;
    case 101u: goto L_08A7884C;
    case 102u: goto L_08A7885C;
    case 103u: goto L_08A78880;
    case 104u: goto L_08A7888C;
    case 105u: goto L_08A78894;
    case 106u: goto L_08A788A0;
    case 107u: goto L_08A788A8;
    case 108u: goto L_08A788BC;
    case 109u: goto L_08A788D0;
    case 110u: goto L_08A788E8;
    case 111u: goto L_08A788EC;
    case 112u: goto L_08A788F4;
    case 113u: goto L_08A7890C;
    case 114u: goto L_08A78918;
    case 115u: goto L_08A7893C;
    case 116u: goto L_08A78948;
    case 117u: goto L_08A78950;
    case 118u: goto L_08A7895C;
    case 119u: goto L_08A78964;
    case 120u: goto L_08A78978;
    case 121u: goto L_08A7898C;
    case 122u: goto L_08A789A4;
    case 123u: goto L_08A789A8;
    case 124u: goto L_08A789B0;
    case 125u: goto L_08A789C8;
    case 126u: goto L_08A789D4;
    case 127u: goto L_08A789F4;
    case 128u: goto L_08A78A0C;
    case 129u: goto L_08A78A1C;
    case 130u: goto L_08A78A54;
    case 131u: goto L_08A78A60;
    case 132u: goto L_08A78A6C;
    case 133u: goto L_08A78A80;
    case 134u: goto L_08A78A98;
    case 135u: goto L_08A78AA8;
    case 136u: goto L_08A78AB8;
    case 137u: goto L_08A78AC4;
    case 138u: goto L_08A78ACC;
    case 139u: goto L_08A78AD8;
    case 140u: goto L_08A78AF4;
    case 141u: goto L_08A78B1C;
    case 142u: goto L_08A78B2C;
    case 143u: goto L_08A78B44;
    case 144u: goto L_08A78B4C;
    case 145u: goto L_08A78B6C;
    case 146u: goto L_08A78B78;
    case 147u: goto L_08A78B84;
    case 148u: goto L_08A78B8C;
    case 149u: goto L_08A78B90;
    case 150u: goto L_08A78BB0;
    case 151u: goto L_08A78BD8;
    case 152u: goto L_08A78BE8;
    case 153u: goto L_08A78BF4;
    case 154u: goto L_08A78C08;
    case 155u: goto L_08A78C18;
    case 156u: goto L_08A78C24;
    case 157u: goto L_08A78C2C;
    case 158u: goto L_08A78C40;
    case 159u: goto L_08A78C48;
    case 160u: goto L_08A78C58;
    case 161u: goto L_08A78C74;
    case 162u: goto L_08A78C80;
    case 163u: goto L_08A78CA0;
    case 164u: goto L_08A78CB0;
    case 165u: goto L_08A78CC0;
    case 166u: goto L_08A78CC4;
    case 167u: goto L_08A78CD8;
    case 168u: goto L_08A78CF4;
    case 169u: goto L_08A78D04;
    case 170u: goto L_08A78D3C;
    case 171u: goto L_08A78D48;
    case 172u: goto L_08A78D68;
    case 173u: goto L_08A78D78;
    case 174u: goto L_08A78D8C;
    case 175u: goto L_08A78DA8;
    case 176u: goto L_08A78DB0;
    case 177u: goto L_08A78DBC;
    case 178u: goto L_08A78DE4;
    case 179u: goto L_08A78E00;
    case 180u: goto L_08A78E14;
    case 181u: goto L_08A78E18;
    case 182u: goto L_08A78E48;
    case 183u: goto L_08A78E64;
    case 184u: goto L_08A78E70;
    case 185u: goto L_08A78E84;
    case 186u: goto L_08A78E98;
    case 187u: goto L_08A78ED4;
    case 188u: goto L_08A78EF8;
    case 189u: goto L_08A78EFC;
    case 190u: goto L_08A78F08;
    case 191u: goto L_08A78F30;
    case 192u: goto L_08A78F60;
    case 193u: goto L_08A78F7C;
    case 194u: goto L_08A78F80;
    case 195u: goto L_08A78F8C;
    case 196u: goto L_08A78FB0;
    case 197u: goto L_08A78FCC;
    case 198u: goto L_08A78FDC;
    case 199u: goto L_08A78FF4;
    case 200u: goto L_08A7906C;
    case 201u: goto L_08A79080;
    case 202u: goto L_08A7908C;
    case 203u: goto L_08A79098;
    case 204u: goto L_08A790A0;
    case 205u: goto L_08A790B4;
    case 206u: goto L_08A790C0;
    case 207u: goto L_08A790CC;
    case 208u: goto L_08A790DC;
    case 209u: goto L_08A790EC;
    case 210u: goto L_08A790F8;
    case 211u: goto L_08A79148;
    case 212u: goto L_08A79154;
    case 213u: goto L_08A79160;
    case 214u: goto L_08A79178;
    case 215u: goto L_08A79180;
    case 216u: goto L_08A79198;
    case 217u: goto L_08A791C4;
    case 218u: goto L_08A791D8;
    case 219u: goto L_08A79220;
    case 220u: goto L_08A79250;
    case 221u: goto L_08A7925C;
    case 222u: goto L_08A792B0;
    case 223u: goto L_08A792C8;
    case 224u: goto L_08A792D4;
    case 225u: goto L_08A792E0;
    case 226u: goto L_08A79308;
    case 227u: goto L_08A79338;
    case 228u: goto L_08A79398;
    case 229u: goto L_08A793B0;
    case 230u: goto L_08A793BC;
    case 231u: goto L_08A793C8;
    case 232u: goto L_08A793F0;
    case 233u: goto L_08A79418;
    case 234u: goto L_08A79438;
    case 235u: goto L_08A79448;
    case 236u: goto L_08A79450;
    case 237u: goto L_08A79470;
    case 238u: goto L_08A79478;
    case 239u: goto L_08A79488;
    case 240u: goto L_08A79494;
    case 241u: goto L_08A794A0;
    case 242u: goto L_08A794AC;
    case 243u: goto L_08A794B8;
    case 244u: goto L_08A794C4;
    case 245u: goto L_08A794D0;
    case 246u: goto L_08A794DC;
    case 247u: goto L_08A794E0;
    case 248u: goto L_08A794E8;
    case 249u: goto L_08A794F4;
    case 250u: goto L_08A794FC;
    case 251u: goto L_08A79520;
    case 252u: goto L_08A79528;
    case 253u: goto L_08A79538;
    case 254u: goto L_08A79548;
    case 255u: goto L_08A79554;
    case 256u: goto L_08A79560;
    case 257u: goto L_08A79568;
    case 258u: goto L_08A79580;
    case 259u: goto L_08A79590;
    case 260u: goto L_08A795AC;
    case 261u: goto L_08A795C4;
    case 262u: goto L_08A795D8;
    case 263u: goto L_08A79614;
    case 264u: goto L_08A79634;
    case 265u: goto L_08A7963C;
    case 266u: goto L_08A79640;
    case 267u: goto L_08A7966C;
    case 268u: goto L_08A79678;
    case 269u: goto L_08A79698;
    case 270u: goto L_08A796A4;
    case 271u: goto L_08A796C4;
    case 272u: goto L_08A796E0;
    case 273u: goto L_08A7970C;
    case 274u: goto L_08A7972C;
    case 275u: goto L_08A79730;
    case 276u: goto L_08A7975C;
    case 277u: goto L_08A79774;
    case 278u: goto L_08A79788;
    case 279u: goto L_08A79798;
    case 280u: goto L_08A797B4;
    case 281u: goto L_08A797DC;
    case 282u: goto L_08A79810;
    case 283u: goto L_08A79820;
    case 284u: goto L_08A79868;
    case 285u: goto L_08A79874;
    case 286u: goto L_08A79894;
    case 287u: goto L_08A798A8;
    case 288u: goto L_08A798C8;
    case 289u: goto L_08A798EC;
    case 290u: goto L_08A798F4;
    case 291u: goto L_08A79908;
    case 292u: goto L_08A79930;
    case 293u: goto L_08A7994C;
    case 294u: goto L_08A79980;
    case 295u: goto L_08A79984;
    case 296u: goto L_08A799C4;
    case 297u: goto L_08A799FC;
    case 298u: goto L_08A79A0C;
    case 299u: goto L_08A79A50;
    case 300u: goto L_08A79A5C;
    case 301u: goto L_08A79A7C;
    case 302u: goto L_08A79A94;
    case 303u: goto L_08A79A9C;
    case 304u: goto L_08A79AC4;
    case 305u: goto L_08A79AE0;
    case 306u: goto L_08A79AEC;
    case 307u: goto L_08A79AF4;
    case 308u: goto L_08A79B20;
    case 309u: goto L_08A79BFC;
    case 310u: goto L_08A79C38;
    case 311u: goto L_08A79C48;
    case 312u: goto L_08A79C98;
    case 313u: goto L_08A79CA4;
    case 314u: goto L_08A79CC4;
    case 315u: goto L_08A79CD8;
    case 316u: goto L_08A79CFC;
    case 317u: goto L_08A79D24;
    case 318u: goto L_08A79D2C;
    case 319u: goto L_08A79D44;
    case 320u: goto L_08A79D6C;
    case 321u: goto L_08A79D88;
    case 322u: goto L_08A79DCC;
    case 323u: goto L_08A79DD0;
    case 324u: goto L_08A79E18;
    case 325u: goto L_08A79E50;
    case 326u: goto L_08A79E74;
    case 327u: goto L_08A79EAC;
    case 328u: goto L_08A79EBC;
    case 329u: goto L_08A79EC8;
    case 330u: goto L_08A79ED4;
    case 331u: goto L_08A79EE8;
    case 332u: goto L_08A79EF4;
    case 333u: goto L_08A79F0C;
    case 334u: goto L_08A79F18;
    case 335u: goto L_08A79F28;
    case 336u: goto L_08A79F48;
    case 337u: goto L_08A79F58;
    case 338u: goto L_08A79F60;
    case 339u: goto L_08A79F6C;
    case 340u: goto L_08A79F7C;
    case 341u: goto L_08A79F84;
    case 342u: goto L_08A79F90;
    case 343u: goto L_08A79FA0;
    case 344u: goto L_08A79FA8;
    case 345u: goto L_08A79FB0;
    case 346u: goto L_08A79FC4;
    case 347u: goto L_08A79FCC;
    case 348u: goto L_08A79FE4;
    case 349u: goto L_08A79FE8;
    case 350u: goto L_08A7A010;
    case 351u: goto L_08A7A020;
    case 352u: goto L_08A7A024;
    case 353u: goto L_08A7A02C;
    case 354u: goto L_08A7A03C;
    case 355u: goto L_08A7A040;
    case 356u: goto L_08A7A048;
    case 357u: goto L_08A7A070;
    case 358u: goto L_08A7A098;
    case 359u: goto L_08A7A0A8;
    case 360u: goto L_08A7A0BC;
    case 361u: goto L_08A7A0CC;
    case 362u: goto L_08A7A0E4;
    case 363u: goto L_08A7A0F0;
    case 364u: goto L_08A7A0FC;
    case 365u: goto L_08A7A108;
    case 366u: goto L_08A7A118;
    case 367u: goto L_08A7A128;
    case 368u: goto L_08A7A138;
    case 369u: goto L_08A7A158;
    case 370u: goto L_08A7A178;
    case 371u: goto L_08A7A17C;
    case 372u: goto L_08A7A198;
    case 373u: goto L_08A7A1C0;
    case 374u: goto L_08A7A1D0;
    case 375u: goto L_08A7A1E4;
    case 376u: goto L_08A7A1F4;
    case 377u: goto L_08A7A20C;
    case 378u: goto L_08A7A218;
    case 379u: goto L_08A7A224;
    case 380u: goto L_08A7A230;
    case 381u: goto L_08A7A240;
    case 382u: goto L_08A7A250;
    case 383u: goto L_08A7A260;
    case 384u: goto L_08A7A280;
    case 385u: goto L_08A7A2A4;
    case 386u: goto L_08A7A2A8;
    case 387u: goto L_08A7A2C4;
    case 388u: goto L_08A7A2E8;
    case 389u: goto L_08A7A2F8;
    case 390u: goto L_08A7A324;
    case 391u: goto L_08A7A334;
    case 392u: goto L_08A7A340;
    case 393u: goto L_08A7A388;
    case 394u: goto L_08A7A394;
    case 395u: goto L_08A7A3A4;
    case 396u: goto L_08A7A3BC;
    case 397u: goto L_08A7A3D4;
    case 398u: goto L_08A7A3E8;
    case 399u: goto L_08A7A3F8;
    case 400u: goto L_08A7A404;
    case 401u: goto L_08A7A458;
    case 402u: goto L_08A7A464;
    case 403u: goto L_08A7A46C;
    case 404u: goto L_08A7A4C0;
    case 405u: goto L_08A7A4CC;
    case 406u: goto L_08A7A518;
    case 407u: goto L_08A7A56C;
    case 408u: goto L_08A7A5AC;
    case 409u: goto L_08A7A5EC;
    case 410u: goto L_08A7A62C;
    case 411u: goto L_08A7A65C;
    case 412u: goto L_08A7A678;
    case 413u: goto L_08A7A684;
    case 414u: goto L_08A7A688;
    case 415u: goto L_08A7A698;
    case 416u: goto L_08A7A6A0;
    case 417u: goto L_08A7A6BC;
    case 418u: goto L_08A7A6D0;
    case 419u: goto L_08A7A6D4;
    case 420u: goto L_08A7A6E0;
    case 421u: goto L_08A7A6F4;
    case 422u: goto L_08A7A714;
    case 423u: goto L_08A7A720;
    case 424u: goto L_08A7A740;
    case 425u: goto L_08A7A74C;
    case 426u: goto L_08A7A754;
    case 427u: goto L_08A7A76C;
    case 428u: goto L_08A7A7A8;
    case 429u: goto L_08A7A7B8;
    case 430u: goto L_08A7A7D0;
    case 431u: goto L_08A7A7D8;
    case 432u: goto L_08A7A7E8;
    case 433u: goto L_08A7A818;
    case 434u: goto L_08A7A840;
    case 435u: goto L_08A7A858;
    case 436u: goto L_08A7A860;
    case 437u: goto L_08A7A864;
    case 438u: goto L_08A7A870;
    case 439u: goto L_08A7A880;
    case 440u: goto L_08A7A894;
    case 441u: goto L_08A7A8A0;
    case 442u: goto L_08A7A8C0;
    case 443u: goto L_08A7A8D8;
    case 444u: goto L_08A7A8E8;
    case 445u: goto L_08A7A928;
    case 446u: goto L_08A7A93C;
    case 447u: goto L_08A7A964;
    case 448u: goto L_08A7A96C;
    case 449u: goto L_08A7A988;
    case 450u: goto L_08A7A9AC;
    case 451u: goto L_08A7A9B0;
    case 452u: goto L_08A7A9BC;
    case 453u: goto L_08A7A9C0;
    case 454u: goto L_08A7A9CC;
    case 455u: goto L_08A7A9FC;
    case 456u: goto L_08A7AA4C;
    case 457u: goto L_08A7AA60;
    case 458u: goto L_08A7AAA0;
    case 459u: goto L_08A7AAA4;
    case 460u: goto L_08A7AAB0;
    case 461u: goto L_08A7AADC;
    case 462u: goto L_08A7AB24;
    case 463u: goto L_08A7AB3C;
    case 464u: goto L_08A7AB84;
    case 465u: goto L_08A7AB90;
    case 466u: goto L_08A7ABAC;
    case 467u: goto L_08A7ABC0;
    case 468u: goto L_08A7ABCC;
    case 469u: goto L_08A7ABFC;
    case 470u: goto L_08A7AC3C;
    case 471u: goto L_08A7AC4C;
    case 472u: goto L_08A7AC58;
    case 473u: goto L_08A7AC68;
    case 474u: goto L_08A7AC74;
    case 475u: goto L_08A7AC84;
    case 476u: goto L_08A7AC90;
    case 477u: goto L_08A7ACA0;
    case 478u: goto L_08A7ACA8;
    case 479u: goto L_08A7ACB4;
    case 480u: goto L_08A7ACC4;
    case 481u: goto L_08A7ACEC;
    case 482u: goto L_08A7ACF8;
    case 483u: goto L_08A7AD18;
    case 484u: goto L_08A7AD30;
    case 485u: goto L_08A7AD54;
    case 486u: goto L_08A7AD60;
    case 487u: goto L_08A7AD68;
    case 488u: goto L_08A7AD98;
    case 489u: goto L_08A7ADAC;
    case 490u: goto L_08A7ADB4;
    case 491u: goto L_08A7ADCC;
    case 492u: goto L_08A7ADDC;
    case 493u: goto L_08A7ADF4;
    case 494u: goto L_08A7AE0C;
    case 495u: goto L_08A7AE2C;
    case 496u: goto L_08A7AE54;
    case 497u: goto L_08A7AE70;
    case 498u: goto L_08A7AE78;
    case 499u: goto L_08A7AE84;
    case 500u: goto L_08A7AE9C;
    case 501u: goto L_08A7AEA0;
    case 502u: goto L_08A7AEC4;
    case 503u: goto L_08A7AEE8;
    case 504u: goto L_08A7AF04;
    case 505u: goto L_08A7AF18;
    case 506u: goto L_08A7AF30;
    case 507u: goto L_08A7AF38;
    case 508u: goto L_08A7AF58;
    case 509u: goto L_08A7AF98;
    case 510u: goto L_08A7AFAC;
    case 511u: goto L_08A7AFC0;
    case 512u: goto L_08A7B010;
    case 513u: goto L_08A7B014;
    case 514u: goto L_08A7B020;
    case 515u: goto L_08A7B054;
    case 516u: goto L_08A7B080;
    case 517u: goto L_08A7B098;
    case 518u: goto L_08A7B0D4;
    case 519u: goto L_08A7B0E8;
    case 520u: goto L_08A7B0F0;
    case 521u: goto L_08A7B0FC;
    case 522u: goto L_08A7B110;
    case 523u: goto L_08A7B140;
    case 524u: goto L_08A7B15C;
    case 525u: goto L_08A7B160;
    case 526u: goto L_08A7B16C;
    case 527u: goto L_08A7B170;
    case 528u: goto L_08A7B17C;
    case 529u: goto L_08A7B1AC;
    case 530u: goto L_08A7B1E8;
    case 531u: goto L_08A7B220;
    case 532u: goto L_08A7B228;
    case 533u: goto L_08A7B24C;
    case 534u: goto L_08A7B264;
    case 535u: goto L_08A7B268;
    case 536u: goto L_08A7B274;
    case 537u: goto L_08A7B29C;
    case 538u: goto L_08A7B2A8;
    case 539u: goto L_08A7B2DC;
    case 540u: goto L_08A7B2E4;
    case 541u: goto L_08A7B2EC;
    case 542u: goto L_08A7B2F8;
    case 543u: goto L_08A7B304;
    case 544u: goto L_08A7B330;
    case 545u: goto L_08A7B338;
    case 546u: goto L_08A7B344;
    case 547u: goto L_08A7B34C;
    case 548u: goto L_08A7B358;
    case 549u: goto L_08A7B360;
    case 550u: goto L_08A7B36C;
    case 551u: goto L_08A7B380;
    case 552u: goto L_08A7B398;
    case 553u: goto L_08A7B3B0;
    case 554u: goto L_08A7B3D0;
    case 555u: goto L_08A7B3E0;
    case 556u: goto L_08A7B3EC;
    case 557u: goto L_08A7B3F4;
    case 558u: goto L_08A7B400;
    case 559u: goto L_08A7B408;
    case 560u: goto L_08A7B41C;
    case 561u: goto L_08A7B430;
    case 562u: goto L_08A7B448;
    case 563u: goto L_08A7B44C;
    case 564u: goto L_08A7B454;
    case 565u: goto L_08A7B46C;
    case 566u: goto L_08A7B478;
    case 567u: goto L_08A7B48C;
    case 568u: goto L_08A7B498;
    case 569u: goto L_08A7B4A0;
    case 570u: goto L_08A7B4AC;
    case 571u: goto L_08A7B4B4;
    case 572u: goto L_08A7B4C0;
    case 573u: goto L_08A7B4CC;
    case 574u: goto L_08A7B4D4;
    case 575u: goto L_08A7B4D8;
    case 576u: goto L_08A7B4F8;
    case 577u: goto L_08A7B508;
    case 578u: goto L_08A7B518;
    case 579u: goto L_08A7B528;
    case 580u: goto L_08A7B538;
    case 581u: goto L_08A7B548;
    case 582u: goto L_08A7B558;
    case 583u: goto L_08A7B568;
    case 584u: goto L_08A7B578;
    case 585u: goto L_08A7B588;
    case 586u: goto L_08A7B598;
    case 587u: goto L_08A7B5A8;
    case 588u: goto L_08A7B5B8;
    case 589u: goto L_08A7B5C8;
    case 590u: goto L_08A7B5D8;
    case 591u: goto L_08A7B5E8;
    case 592u: goto L_08A7B5F8;
    case 593u: goto L_08A7B608;
    case 594u: goto L_08A7B618;
    case 595u: goto L_08A7B628;
    case 596u: goto L_08A7B638;
    case 597u: goto L_08A7B648;
    case 598u: goto L_08A7B658;
    case 599u: goto L_08A7B668;
    case 600u: goto L_08A7B678;
    case 601u: goto L_08A7B688;
    case 602u: goto L_08A7B698;
    case 603u: goto L_08A7B6A8;
    case 604u: goto L_08A7B6B8;
    case 605u: goto L_08A7B6C8;
    case 606u: goto L_08A7B6D8;
    case 607u: goto L_08A7B6E8;
    case 608u: goto L_08A7B6F4;
    case 609u: goto L_08A7B704;
    case 610u: goto L_08A7B714;
    case 611u: goto L_08A7B724;
    case 612u: goto L_08A7B73C;
    case 613u: goto L_08A7B768;
    case 614u: goto L_08A7B790;
    case 615u: goto L_08A7B7A0;
    case 616u: goto L_08A7B7B0;
    case 617u: goto L_08A7B7C0;
    case 618u: goto L_08A7B7D0;
    case 619u: goto L_08A7B7E0;
    case 620u: goto L_08A7B7F0;
    case 621u: goto L_08A7B800;
    case 622u: goto L_08A7B810;
    case 623u: goto L_08A7B820;
    case 624u: goto L_08A7B830;
    case 625u: goto L_08A7B840;
    case 626u: goto L_08A7B850;
    case 627u: goto L_08A7B860;
    case 628u: goto L_08A7B870;
    case 629u: goto L_08A7B880;
    case 630u: goto L_08A7B898;
    case 631u: goto L_08A7B8C4;
    case 632u: goto L_08A7B8EC;
    case 633u: goto L_08A7B8FC;
    case 634u: goto L_08A7B90C;
    case 635u: goto L_08A7B91C;
    case 636u: goto L_08A7B92C;
    case 637u: goto L_08A7B93C;
    case 638u: goto L_08A7B94C;
    case 639u: goto L_08A7B96C;
    case 640u: goto L_08A7B97C;
    case 641u: goto L_08A7B994;
    case 642u: goto L_08A7B99C;
    case 643u: goto L_08A7B9A0;
    case 644u: goto L_08A7B9AC;
    case 645u: goto L_08A7B9CC;
    case 646u: goto L_08A7B9DC;
    case 647u: goto L_08A7B9EC;
    case 648u: goto L_08A7B9FC;
    case 649u: goto L_08A7BA0C;
    case 650u: goto L_08A7BA1C;
    case 651u: goto L_08A7BA2C;
    case 652u: goto L_08A7BA3C;
    case 653u: goto L_08A7BA4C;
    case 654u: goto L_08A7BA5C;
    case 655u: goto L_08A7BA6C;
    case 656u: goto L_08A7BA7C;
    case 657u: goto L_08A7BA8C;
    case 658u: goto L_08A7BA9C;
    case 659u: goto L_08A7BAAC;
    case 660u: goto L_08A7BAC8;
    case 661u: goto L_08A7BAD8;
    case 662u: goto L_08A7BAE8;
    case 663u: goto L_08A7BAF8;
    case 664u: goto L_08A7BB14;
    case 665u: goto L_08A7BB24;
    case 666u: goto L_08A7BB34;
    case 667u: goto L_08A7BB44;
    case 668u: goto L_08A7BB54;
    case 669u: goto L_08A7BB64;
    case 670u: goto L_08A7BB74;
    case 671u: goto L_08A7BB84;
    case 672u: goto L_08A7BB94;
    case 673u: goto L_08A7BBA4;
    case 674u: goto L_08A7BBB4;
    case 675u: goto L_08A7BBC4;
    case 676u: goto L_08A7BBD4;
    case 677u: goto L_08A7BBE4;
    case 678u: goto L_08A7BBF4;
    case 679u: goto L_08A7BC04;
    case 680u: goto L_08A7BC14;
    case 681u: goto L_08A7BC24;
    case 682u: goto L_08A7BC40;
    case 683u: goto L_08A7BC4C;
    case 684u: goto L_08A7BC5C;
    case 685u: goto L_08A7BC78;
    case 686u: goto L_08A7BC84;
    case 687u: goto L_08A7BC94;
    case 688u: goto L_08A7BCB0;
    case 689u: goto L_08A7BCBC;
    case 690u: goto L_08A7BCCC;
    case 691u: goto L_08A7BCE8;
    case 692u: goto L_08A7BCF4;
    case 693u: goto L_08A7BD04;
    case 694u: goto L_08A7BD20;
    case 695u: goto L_08A7BD2C;
    case 696u: goto L_08A7BD3C;
    case 697u: goto L_08A7BD58;
    case 698u: goto L_08A7BD64;
    case 699u: goto L_08A7BD74;
    case 700u: goto L_08A7BD98;
    case 701u: goto L_08A7BDA4;
    case 702u: goto L_08A7BDB0;
    case 703u: goto L_08A7BDB8;
    case 704u: goto L_08A7BDC0;
    case 705u: goto L_08A7BDC8;
    case 706u: goto L_08A7BDD4;
    case 707u: goto L_08A7BDDC;
    case 708u: goto L_08A7BDFC;
    case 709u: goto L_08A7BE10;
    case 710u: goto L_08A7BE18;
    case 711u: goto L_08A7BE20;
    case 712u: goto L_08A7BE28;
    case 713u: goto L_08A7BE30;
    case 714u: goto L_08A7BE38;
    case 715u: goto L_08A7BE40;
    case 716u: goto L_08A7BE48;
    case 717u: goto L_08A7BE50;
    case 718u: goto L_08A7BE58;
    case 719u: goto L_08A7BE68;
    case 720u: goto L_08A7BE6C;
    case 721u: goto L_08A7BE78;
    case 722u: goto L_08A7BE80;
    case 723u: goto L_08A7BE88;
    case 724u: goto L_08A7BE90;
    case 725u: goto L_08A7BE98;
    case 726u: goto L_08A7BEA4;
    case 727u: goto L_08A7BEAC;
    case 728u: goto L_08A7BEB8;
    case 729u: goto L_08A7BEBC;
    case 730u: goto L_08A7BEC8;
    case 731u: goto L_08A7BEDC;
    case 732u: goto L_08A7BEE4;
    case 733u: goto L_08A7BEEC;
    case 734u: goto L_08A7BF00;
    case 735u: goto L_08A7BF14;
    case 736u: goto L_08A7BF1C;
    case 737u: goto L_08A7BF28;
    case 738u: goto L_08A7BF34;
    case 739u: goto L_08A7BF3C;
    case 740u: goto L_08A7BF40;
    case 741u: goto L_08A7BF48;
    case 742u: goto L_08A7BF68;
    case 743u: goto L_08A7BF7C;
    case 744u: goto L_08A7BF90;
    case 745u: goto L_08A7BF9C;
    case 746u: goto L_08A7BFA8;
    case 747u: goto L_08A7BFB4;
    case 748u: goto L_08A7BFBC;
    case 749u: goto L_08A7BFC4;
    case 750u: goto L_08A7BFCC;
    case 751u: goto L_08A7BFD4;
    case 752u: goto L_08A7BFF4;
    case 753u: goto L_08A7BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A78000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A78010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 680u, 0x08A77E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78010u) goto L_08A78010;
    return;
L_08A78010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20296)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A78048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A78048u) goto L_08A78048;
    return;
L_08A78048:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27084));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A78064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A78064u) goto L_08A78064;
    return;
L_08A78064:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A78074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78074u) goto L_08A78074;
    return;
L_08A78074:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A78080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 533u, 0x08A73274u>(ctx, &aot_mem) && ctx.pc == 0x08A78080u) goto L_08A78080;
    return;
L_08A78080:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7809Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7809Cu) goto L_08A7809C;
    return;
L_08A7809C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A780A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A780A8u) goto L_08A780A8;
    return;
L_08A780A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A780C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A780C4u) goto L_08A780C4;
    return;
L_08A780C4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A780D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 94u, 0x08A748E8u>(ctx, &aot_mem) && ctx.pc == 0x08A780D0u) goto L_08A780D0;
    return;
L_08A780D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27132));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27144));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27156));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A780FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A780FCu) goto L_08A780FC;
    return;
L_08A780FC:
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
L_08A78118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20280)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78144;
      }
      goto L_08A78130;
    }
L_08A78130:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7814C;
      }
      goto L_08A78144;
    }
L_08A78144:
    ctx.set_gpr(31, 0x08A7814Cu);
    // nop
    goto L_08A781A8;
L_08A7814C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20280)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A78178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A78178u) goto L_08A78178;
    return;
L_08A78178:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7818Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A7818Cu) goto L_08A7818C;
    return;
L_08A7818C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A781A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2216u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32304));
    ctx.set_gpr(31, 0x08A781C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A781C0u) goto L_08A781C0;
    return;
L_08A781C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A781D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A781E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 907u, 0x08A6FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A781E0u) goto L_08A781E0;
    return;
L_08A781E0:
    ctx.set_gpr(2, 2216u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20280));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2216u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32188));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27168));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2216u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32412));
    ctx.set_gpr(31, 0x08A78234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A78234u) goto L_08A78234;
    return;
L_08A78234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A78254u);
    // nop
    goto L_08A78118;
L_08A78254:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20280)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A78288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A78288u) goto L_08A78288;
    return;
L_08A78288:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27192));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A782A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A782A4u) goto L_08A782A4;
    return;
L_08A782A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27244));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27256));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27268));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A782CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A782CCu) goto L_08A782CC;
    return;
L_08A782CC:
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
L_08A782E4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u | 65535u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[4] = ctx.fpr[0] / ctx.fpr[13];
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78404;
      }
      goto L_08A78304;
    }
L_08A78304:
    ctx.set_gpr(3, ctx.gpr[8] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78354;
      }
      goto L_08A78344;
    }
L_08A78344:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78368;
      }
      goto L_08A78354;
    }
L_08A78354:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    goto L_08A78368;
L_08A78368:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.fpr[0] = ctx.fpr[3] - ctx.fpr[12];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7839C;
      }
      goto L_08A7838C;
    }
L_08A7838C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A783B0;
      }
      goto L_08A7839C;
    }
L_08A7839C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    goto L_08A783B0;
L_08A783B0:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[12];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A783E4;
      }
      goto L_08A783D4;
    }
L_08A783D4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A783F8;
      }
      goto L_08A783E4;
    }
L_08A783E4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    goto L_08A783F8;
L_08A783F8:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A78404;
L_08A78404:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78304;
      }
      goto L_08A78410;
    }
L_08A78410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A784FC;
      }
      goto L_08A7843C;
    }
L_08A7843C:
    ctx.set_gpr(2, ctx.gpr[9] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7847C;
      }
      goto L_08A78470;
    }
L_08A78470:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78490;
      }
      goto L_08A7847C;
    }
L_08A7847C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[4])) || ctx.fpr[1] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78490;
      }
      goto L_08A7848C;
    }
L_08A7848C:
    ctx.set_fpr_bits(4, ctx.fpr_bits(1));
    goto L_08A78490;
L_08A78490:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A784B0;
      }
      goto L_08A784A4;
    }
L_08A784A4:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A784C4;
      }
      goto L_08A784B0;
    }
L_08A784B0:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[3]) || std::isnan(ctx.fpr[4])) || ctx.fpr[3] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A784C4;
      }
      goto L_08A784C0;
    }
L_08A784C0:
    ctx.set_fpr_bits(4, ctx.fpr_bits(3));
    goto L_08A784C4;
L_08A784C4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A784E4;
      }
      goto L_08A784D8;
    }
L_08A784D8:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A784F8;
      }
      goto L_08A784E4;
    }
L_08A784E4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[4])) || ctx.fpr[2] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A784F8;
      }
      goto L_08A784F4;
    }
L_08A784F4:
    ctx.set_fpr_bits(4, ctx.fpr_bits(2));
    goto L_08A784F8;
L_08A784F8:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A784FC;
L_08A784FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7843C;
      }
      goto L_08A78508;
    }
L_08A78508:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A78524u);
    // nop
    goto L_08A782E4;
L_08A78524:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78534:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u | 65535u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[5] = ctx.fpr[0] / ctx.fpr[13];
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78698;
      }
      goto L_08A78554;
    }
L_08A78554:
    ctx.set_gpr(8, ctx.gpr[6] << 4u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(7, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A785A0;
      }
      goto L_08A78590;
    }
L_08A78590:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A785B4;
      }
      goto L_08A785A0;
    }
L_08A785A0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    goto L_08A785B4;
L_08A785B4:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[12];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(7, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A785E8;
      }
      goto L_08A785D8;
    }
L_08A785D8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A785FC;
      }
      goto L_08A785E8;
    }
L_08A785E8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    goto L_08A785FC;
L_08A785FC:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[0] = ctx.fpr[3] - ctx.fpr[12];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(7, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78630;
      }
      goto L_08A78620;
    }
L_08A78620:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78644;
      }
      goto L_08A78630;
    }
L_08A78630:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    goto L_08A78644;
L_08A78644:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[12];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(7, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78678;
      }
      goto L_08A78668;
    }
L_08A78668:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7868C;
      }
      goto L_08A78678;
    }
L_08A78678:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    goto L_08A7868C;
L_08A7868C:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A78698;
L_08A78698:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78554;
      }
      goto L_08A786A4;
    }
L_08A786A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A786AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A787C0;
      }
      goto L_08A786D0;
    }
L_08A786D0:
    ctx.set_gpr(3, ctx.gpr[9] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7870C;
      }
      goto L_08A78700;
    }
L_08A78700:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78720;
      }
      goto L_08A7870C;
    }
L_08A7870C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[5])) || ctx.fpr[1] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78720;
      }
      goto L_08A7871C;
    }
L_08A7871C:
    ctx.set_fpr_bits(5, ctx.fpr_bits(1));
    goto L_08A78720;
L_08A78720:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78740;
      }
      goto L_08A78734;
    }
L_08A78734:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78754;
      }
      goto L_08A78740;
    }
L_08A78740:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[4]) || std::isnan(ctx.fpr[5])) || ctx.fpr[4] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78754;
      }
      goto L_08A78750;
    }
L_08A78750:
    ctx.set_fpr_bits(5, ctx.fpr_bits(4));
    goto L_08A78754;
L_08A78754:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78774;
      }
      goto L_08A78768;
    }
L_08A78768:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78788;
      }
      goto L_08A78774;
    }
L_08A78774:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[3]) || std::isnan(ctx.fpr[5])) || ctx.fpr[3] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78788;
      }
      goto L_08A78784;
    }
L_08A78784:
    ctx.set_fpr_bits(5, ctx.fpr_bits(3));
    goto L_08A78788;
L_08A78788:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A787A8;
      }
      goto L_08A7879C;
    }
L_08A7879C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A787BC;
      }
      goto L_08A787A8;
    }
L_08A787A8:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[5])) || ctx.fpr[2] <= ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A787BC;
      }
      goto L_08A787B8;
    }
L_08A787B8:
    ctx.set_fpr_bits(5, ctx.fpr_bits(2));
    goto L_08A787BC;
L_08A787BC:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A787C0;
L_08A787C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A786D0;
      }
      goto L_08A787CC;
    }
L_08A787CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[5] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A787E8u);
    // nop
    goto L_08A78534;
L_08A787E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A787F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A78828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A78828u) goto L_08A78828;
    return;
L_08A78828:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7883Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7883Cu) goto L_08A7883C;
    return;
L_08A7883C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7884Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A7884Cu) goto L_08A7884C;
    return;
L_08A7884C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7885Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A7885Cu) goto L_08A7885C;
    return;
L_08A7885C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A788A8;
      }
      goto L_08A78880;
    }
L_08A78880:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A7888Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A7888Cu) goto L_08A7888C;
    return;
L_08A7888C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A788A0;
      }
      goto L_08A78894;
    }
L_08A78894:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A788A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A788A0u) goto L_08A788A0;
    return;
L_08A788A0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A788A8;
L_08A788A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A788BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A788BCu) goto L_08A788BC;
    return;
L_08A788BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A788EC;
      }
      goto L_08A788D0;
    }
L_08A788D0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A788EC;
      }
      goto L_08A788E8;
    }
L_08A788E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A788EC;
L_08A788EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78918;
      }
      goto L_08A788F4;
    }
L_08A788F4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78918;
      }
      goto L_08A7890C;
    }
L_08A7890C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A78918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78918u) goto L_08A78918;
    return;
L_08A78918:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78964;
      }
      goto L_08A7893C;
    }
L_08A7893C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A78948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A78948u) goto L_08A78948;
    return;
L_08A78948:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7895C;
      }
      goto L_08A78950;
    }
L_08A78950:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7895Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7895Cu) goto L_08A7895C;
    return;
L_08A7895C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A78964;
L_08A78964:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A78978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A78978u) goto L_08A78978;
    return;
L_08A78978:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A789A8;
      }
      goto L_08A7898C;
    }
L_08A7898C:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A789A8;
      }
      goto L_08A789A4;
    }
L_08A789A4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A789A8;
L_08A789A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A789D4;
      }
      goto L_08A789B0;
    }
L_08A789B0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A789D4;
      }
      goto L_08A789C8;
    }
L_08A789C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A789D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A789D4u) goto L_08A789D4;
    return;
L_08A789D4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
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
L_08A789F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A78A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A78A0Cu) goto L_08A78A0C;
    return;
L_08A78A0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A78A54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78A54u) goto L_08A78A54;
    return;
L_08A78A54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78A6C;
      }
      goto L_08A78A60;
    }
L_08A78A60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A78A6C;
L_08A78A6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A78A80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78A80u) goto L_08A78A80;
    return;
L_08A78A80:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A78A98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78A98u) goto L_08A78A98;
    return;
L_08A78A98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A78AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78AA8u) goto L_08A78AA8;
    return;
L_08A78AA8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78AD8;
      }
      goto L_08A78AB8;
    }
L_08A78AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78ACC;
      }
      goto L_08A78AC4;
    }
L_08A78AC4:
    ctx.set_gpr(31, 0x08A78ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A78ACCu) goto L_08A78ACC;
    return;
L_08A78ACC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78B90;
      }
      goto L_08A78AD8;
    }
L_08A78AD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A78AF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78AF4u) goto L_08A78AF4;
    return;
L_08A78AF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A78B1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78B1Cu) goto L_08A78B1C;
    return;
L_08A78B1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20264)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78B4C;
      }
      goto L_08A78B2C;
    }
L_08A78B2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27280));
    ctx.set_gpr(31, 0x08A78B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A78B44u) goto L_08A78B44;
    return;
L_08A78B44:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20264), ctx.gpr[2]);
    goto L_08A78B4C;
L_08A78B4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20264)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78B78;
      }
      goto L_08A78B6C;
    }
L_08A78B6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A78B78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A78B78u) goto L_08A78B78;
    return;
L_08A78B78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78B8C;
      }
      goto L_08A78B84;
    }
L_08A78B84:
    ctx.set_gpr(31, 0x08A78B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A78B8Cu) goto L_08A78B8C;
    return;
L_08A78B8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A78B90;
L_08A78B90:
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
L_08A78BB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A78BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78BD8u) goto L_08A78BD8;
    return;
L_08A78BD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A78BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A78BE8u) goto L_08A78BE8;
    return;
L_08A78BE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C18;
      }
      goto L_08A78BF4;
    }
L_08A78BF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A78C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A78C08u) goto L_08A78C08;
    return;
L_08A78C08:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A78C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A78C18u) goto L_08A78C18;
    return;
L_08A78C18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C2C;
      }
      goto L_08A78C24;
    }
L_08A78C24:
    ctx.set_gpr(31, 0x08A78C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A78C2Cu) goto L_08A78C2C;
    return;
L_08A78C2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78C40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78C48:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20348)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78C58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C80;
      }
      goto L_08A78C74;
    }
L_08A78C74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78CC4;
      }
      goto L_08A78C80;
    }
L_08A78C80:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A78CA0u);
    // nop
    goto L_08A78FF4;
L_08A78CA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A78CB0u);
    // nop
    goto L_08A78CD8;
L_08A78CB0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A78CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A78CC0u) goto L_08A78CC0;
    return;
L_08A78CC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A78CC4;
L_08A78CC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78CD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78CF4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78D04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78D48;
      }
      goto L_08A78D3C;
    }
L_08A78D3C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78E18;
      }
      goto L_08A78D48;
    }
L_08A78D48:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A78D68u);
    // nop
    goto L_08A78FF4;
L_08A78D68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A78D78u);
    // nop
    goto L_08A78E48;
L_08A78D78:
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A78D8Cu);
    // nop
    goto L_08A78E48;
L_08A78D8C:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A78DBC;
      }
      goto L_08A78DA8;
    }
L_08A78DA8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A78DBC;
      }
      goto L_08A78DB0;
    }
L_08A78DB0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78E14;
      }
      goto L_08A78DBC;
    }
L_08A78DBC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A78DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A78DE4u) goto L_08A78DE4;
    return;
L_08A78DE4:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A78E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A78E00u) goto L_08A78E00;
    return;
L_08A78E00:
    ctx.fpr[1] = ctx.fpr[20] / ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[21] - ctx.fpr[22];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A78E14;
L_08A78E14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A78E18;
L_08A78E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78E64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78E70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08A78E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A78E84u) goto L_08A78E84;
    return;
L_08A78E84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78EFC;
      }
      goto L_08A78ED4;
    }
L_08A78ED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A78EF8u);
    // nop
    goto L_08A78A1C;
L_08A78EF8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A78EFC;
L_08A78EFC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78ED4;
      }
      goto L_08A78F08;
    }
L_08A78F08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08A78F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78F80;
      }
      goto L_08A78F60;
    }
L_08A78F60:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A78F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A78F7Cu) goto L_08A78F7C;
    return;
L_08A78F7C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A78F80;
L_08A78F80:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78F60;
      }
      goto L_08A78F8C;
    }
L_08A78F8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08A78FB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A78FCCu);
    // nop
    goto L_08A78E64;
L_08A78FCC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A78FDCu);
    // nop
    goto L_08A78F30;
L_08A78FDC:
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
L_08A78FF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A790EC;
      }
      goto L_08A7906C;
    }
L_08A7906C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A790A0;
      }
      goto L_08A79080;
    }
L_08A79080:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79098;
      }
      goto L_08A7908C;
    }
L_08A7908C:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A790A0;
      }
      goto L_08A79098;
    }
L_08A79098:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A790A0;
L_08A790A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A790DC;
      }
      goto L_08A790B4;
    }
L_08A790B4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A790CC;
      }
      goto L_08A790C0;
    }
L_08A790C0:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A790DC;
      }
      goto L_08A790CC;
    }
L_08A790CC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79418;
      }
      goto L_08A790DC;
    }
L_08A790DC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79418;
      }
      goto L_08A790EC;
    }
L_08A790EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A79250;
      }
      goto L_08A790F8;
    }
L_08A790F8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79180;
      }
      goto L_08A79148;
    }
L_08A79148:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79160;
      }
      goto L_08A79154;
    }
L_08A79154:
    ctx.set_gpr(1, ctx.gpr[2] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79180;
      }
      goto L_08A79160;
    }
L_08A79160:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A79178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79178u) goto L_08A79178;
    return;
L_08A79178:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A79180;
L_08A79180:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A79198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08A79198u) goto L_08A79198;
    return;
L_08A79198:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A791C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A791C4u) goto L_08A791C4;
    return;
L_08A791C4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79220;
      }
      goto L_08A791D8;
    }
L_08A791D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79418;
      }
      goto L_08A79220;
    }
L_08A79220:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79418;
      }
      goto L_08A79250;
    }
L_08A79250:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A79338;
      }
      goto L_08A7925C;
    }
L_08A7925C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A792B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A792B0u) goto L_08A792B0;
    return;
L_08A792B0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79308;
      }
      goto L_08A792C8;
    }
L_08A792C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A792E0;
      }
      goto L_08A792D4;
    }
L_08A792D4:
    ctx.set_gpr(1, ctx.gpr[4] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79308;
      }
      goto L_08A792E0;
    }
L_08A792E0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A79308;
L_08A79308:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79418;
      }
      goto L_08A79338;
    }
L_08A79338:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A79398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A79398u) goto L_08A79398;
    return;
L_08A79398:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A793F0;
      }
      goto L_08A793B0;
    }
L_08A793B0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A793C8;
      }
      goto L_08A793BC;
    }
L_08A793BC:
    ctx.set_gpr(1, ctx.gpr[4] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A793F0;
      }
      goto L_08A793C8;
    }
L_08A793C8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A793F0;
L_08A793F0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A79418;
L_08A79418:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794E0;
      }
      goto L_08A79438;
    }
L_08A79438:
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A79450;
      }
      goto L_08A79448;
    }
L_08A79448:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08A79450;
L_08A79450:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A79488;
      }
      goto L_08A79470;
    }
L_08A79470:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A79488;
      }
      goto L_08A79478;
    }
L_08A79478:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794E0;
      }
      goto L_08A79488;
    }
L_08A79488:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A794B8;
      }
      goto L_08A79494;
    }
L_08A79494:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A794AC;
      }
      goto L_08A794A0;
    }
L_08A794A0:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794B8;
      }
      goto L_08A794AC;
    }
L_08A794AC:
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794E0;
      }
      goto L_08A794B8;
    }
L_08A794B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A794E0;
      }
      goto L_08A794C4;
    }
L_08A794C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A794DC;
      }
      goto L_08A794D0;
    }
L_08A794D0:
    ctx.set_gpr(1, ctx.gpr[21] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794E0;
      }
      goto L_08A794DC;
    }
L_08A794DC:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A794E0;
L_08A794E0:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A794E8;
    }
L_08A794E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79438;
      }
      goto L_08A794F4;
    }
L_08A794F4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79580;
      }
      goto L_08A794FC;
    }
L_08A794FC:
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[8] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A79538;
      }
      goto L_08A79520;
    }
L_08A79520:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A79538;
      }
      goto L_08A79528;
    }
L_08A79528:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79580;
      }
      goto L_08A79538;
    }
L_08A79538:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79580;
      }
      goto L_08A79548;
    }
L_08A79548:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79560;
      }
      goto L_08A79554;
    }
L_08A79554:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79580;
      }
      goto L_08A79560;
    }
L_08A79560:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A79580;
      }
      goto L_08A79568;
    }
L_08A79568:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08A79580;
L_08A79580:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A79590;
    }
L_08A79590:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27036));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A795AC:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A795D8;
      }
      goto L_08A795C4;
    }
L_08A795C4:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A795D8;
    }
L_08A795D8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A79614;
    }
L_08A79614:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7963C;
      }
      goto L_08A79634;
    }
L_08A79634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79640;
      }
      goto L_08A7963C;
    }
L_08A7963C:
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08A79640;
L_08A79640:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A7966C;
    }
L_08A7966C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79698;
      }
      goto L_08A79678;
    }
L_08A79678:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A79698;
    }
L_08A79698:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7970C;
      }
      goto L_08A796A4;
    }
L_08A796A4:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A796E0;
      }
      goto L_08A796C4;
    }
L_08A796C4:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A796E0;
    }
L_08A796E0:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A7970C;
    }
L_08A7970C:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79730;
      }
      goto L_08A7972C;
    }
L_08A7972C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A79730;
L_08A79730:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A7975C;
    }
L_08A7975C:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79788;
      }
      goto L_08A79774;
    }
L_08A79774:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A79788;
    }
L_08A79788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A797B4;
      }
      goto L_08A79798;
    }
L_08A79798:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797DC;
      }
      goto L_08A797B4;
    }
L_08A797B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A797DC;
L_08A797DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A79810:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20436)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79874;
      }
      goto L_08A79868;
    }
L_08A79868:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79984;
      }
      goto L_08A79874;
    }
L_08A79874:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08A79894u);
    // nop
    goto L_08A78FF4;
L_08A79894:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x08A798A8u);
    // nop
    goto L_08A799C4;
L_08A798A8:
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(31, 0x08A798C8u);
    // nop
    goto L_08A799C4;
L_08A798C8:
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A79908;
      }
      goto L_08A798EC;
    }
L_08A798EC:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A79908;
      }
      goto L_08A798F4;
    }
L_08A798F4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79980;
      }
      goto L_08A79908;
    }
L_08A79908:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A79930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A79930u) goto L_08A79930;
    return;
L_08A79930:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A7994Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A7994Cu) goto L_08A7994C;
    return;
L_08A7994C:
    ctx.fpr[1] = ctx.fpr[21] / ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[26] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[23] - ctx.fpr[25];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[25] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A79980;
L_08A79980:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A79984;
L_08A79984:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A799C4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A799FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20456)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79A0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79A5C;
      }
      goto L_08A79A50;
    }
L_08A79A50:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79BFC;
      }
      goto L_08A79A5C;
    }
L_08A79A5C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08A79A7Cu);
    // nop
    goto L_08A78FF4;
L_08A79A7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A79A9C;
      }
      goto L_08A79A94;
    }
L_08A79A94:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A79AEC;
      }
      goto L_08A79A9C;
    }
L_08A79A9C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A79AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A79AC4u) goto L_08A79AC4;
    return;
L_08A79AC4:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A79AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A79AE0u) goto L_08A79AE0;
    return;
L_08A79AE0:
    ctx.fpr[25] = ctx.fpr[20] / ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79AF4;
      }
      goto L_08A79AEC;
    }
L_08A79AEC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[25] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08A79AF4;
L_08A79AF4:
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[23] = ctx.fpr[0] - ctx.fpr[25];
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A79B20u);
    // nop
    goto L_08A79E50;
L_08A79B20:
    ctx.set_gpr(3, 16448u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[2] + ctx.fpr[3];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[2] + ctx.fpr[3];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[2] + ctx.fpr[3];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A79BFC;
L_08A79BFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79C38:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20468)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79C48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79CA4;
      }
      goto L_08A79C98;
    }
L_08A79C98:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79DD0;
      }
      goto L_08A79CA4;
    }
L_08A79CA4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x08A79CC4u);
    // nop
    goto L_08A78FF4;
L_08A79CC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A79CD8u);
    // nop
    goto L_08A79E18;
L_08A79CD8:
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A79CFCu);
    // nop
    goto L_08A79E18;
L_08A79CFC:
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A79D44;
      }
      goto L_08A79D24;
    }
L_08A79D24:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A79D44;
      }
      goto L_08A79D2C;
    }
L_08A79D2C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79DCC;
      }
      goto L_08A79D44;
    }
L_08A79D44:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A79D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A79D6Cu) goto L_08A79D6C;
    return;
L_08A79D6C:
    ctx.set_fpr_bits(25, ctx.fpr_bits(0));
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A79D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08A79D88u) goto L_08A79D88;
    return;
L_08A79D88:
    ctx.fpr[1] = ctx.fpr[25] / ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[27] - ctx.fpr[28];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[28] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[24] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[21] - ctx.fpr[23];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[23] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A79DCC;
L_08A79DCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A79DD0;
L_08A79DD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79E18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[6] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79E50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79E74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FE8;
      }
      goto L_08A79EAC;
    }
L_08A79EAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FE8;
      }
      goto L_08A79EBC;
    }
L_08A79EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A79EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A79EC8u) goto L_08A79EC8;
    return;
L_08A79EC8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FE8;
      }
      goto L_08A79ED4;
    }
L_08A79ED4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A79EE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A79EE8u) goto L_08A79EE8;
    return;
L_08A79EE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FE8;
      }
      goto L_08A79EF4;
    }
L_08A79EF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A79F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A79F0Cu) goto L_08A79F0C;
    return;
L_08A79F0C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FA8;
      }
      goto L_08A79F18;
    }
L_08A79F18:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08A79F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A79F28u) goto L_08A79F28;
    return;
L_08A79F28:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(95));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A79F58;
      }
      goto L_08A79F48;
    }
L_08A79F48:
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27300));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79F60;
      }
      goto L_08A79F58;
    }
L_08A79F58:
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27304));
    goto L_08A79F60;
L_08A79F60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A79F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 633u, 0x0895AA80u>(ctx, &aot_mem) && ctx.pc == 0x08A79F6Cu) goto L_08A79F6C;
    return;
L_08A79F6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79F84;
      }
      goto L_08A79F7C;
    }
L_08A79F7C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A79F84;
L_08A79F84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A79F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A79F90u) goto L_08A79F90;
    return;
L_08A79F90:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FA8;
      }
      goto L_08A79FA0;
    }
L_08A79FA0:
    ctx.set_gpr(31, 0x08A79FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A79FA8u) goto L_08A79FA8;
    return;
L_08A79FA8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FE8;
      }
      goto L_08A79FB0;
    }
L_08A79FB0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A79FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79FC4u) goto L_08A79FC4;
    return;
L_08A79FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FE8;
      }
      goto L_08A79FCC;
    }
L_08A79FCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A79FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A79FE4u) goto L_08A79FE4;
    return;
L_08A79FE4:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08A79FE8;
L_08A79FE8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08A7A010:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7A024;
      }
      goto L_08A7A020;
    }
L_08A7A020:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A7A024;
L_08A7A024:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A02C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) || ctx.fpr[12] <= ctx.fpr[13]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7A040;
      }
      goto L_08A7A03C;
    }
L_08A7A03C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A7A040;
L_08A7A040:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A048:
    ctx.set_gpr(4, 2216u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24560));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20260), ctx.gpr[4]);
    ctx.set_gpr(4, 2216u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24532));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20256), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A0F0;
      }
      goto L_08A7A098;
    }
L_08A7A098:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A0BC;
      }
      goto L_08A7A0A8;
    }
L_08A7A0A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A0CC;
      }
      goto L_08A7A0BC;
    }
L_08A7A0BC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A7A0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A0CCu) goto L_08A7A0CC;
    return;
L_08A7A0CC:
    ctx.set_gpr(3, ctx.gpr[16] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7A0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A0E4u) goto L_08A7A0E4;
    return;
L_08A7A0E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A17C;
      }
      goto L_08A7A0F0;
    }
L_08A7A0F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A108;
      }
      goto L_08A7A0FC;
    }
L_08A7A0FC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A158;
      }
      goto L_08A7A108;
    }
L_08A7A108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A128;
      }
      goto L_08A7A118;
    }
L_08A7A118:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A138;
      }
      goto L_08A7A128;
    }
L_08A7A128:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A7A138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A138u) goto L_08A7A138;
    return;
L_08A7A138:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] << 6u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7A158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A158u) goto L_08A7A158;
    return;
L_08A7A158:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7A178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08A7A178u) goto L_08A7A178;
    return;
L_08A7A178:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A7A17C;
L_08A7A17C:
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
L_08A7A198:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A218;
      }
      goto L_08A7A1C0;
    }
L_08A7A1C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A1E4;
      }
      goto L_08A7A1D0;
    }
L_08A7A1D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A1F4;
      }
      goto L_08A7A1E4;
    }
L_08A7A1E4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A7A1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A1F4u) goto L_08A7A1F4;
    return;
L_08A7A1F4:
    ctx.set_gpr(3, ctx.gpr[16] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7A20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A20Cu) goto L_08A7A20C;
    return;
L_08A7A20C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A2A8;
      }
      goto L_08A7A218;
    }
L_08A7A218:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A230;
      }
      goto L_08A7A224;
    }
L_08A7A224:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A280;
      }
      goto L_08A7A230;
    }
L_08A7A230:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A250;
      }
      goto L_08A7A240;
    }
L_08A7A240:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A260;
      }
      goto L_08A7A250;
    }
L_08A7A250:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A7A260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A260u) goto L_08A7A260;
    return;
L_08A7A260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] << 6u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7A280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A280u) goto L_08A7A280;
    return;
L_08A7A280:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7A2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A7A2A4u) goto L_08A7A2A4;
    return;
L_08A7A2A4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A7A2A8;
L_08A7A2A8:
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
L_08A7A2C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A7A2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08A7A2E8u) goto L_08A7A2E8;
    return;
L_08A7A2E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A2F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7A324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A7A324u) goto L_08A7A324;
    return;
L_08A7A324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A334:
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A388;
      }
      goto L_08A7A340;
    }
L_08A7A340:
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(8, 65535u << 16u);
    ctx.set_gpr(7, ctx.gpr[5] & ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] | 3533u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[7] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08A7A388;
L_08A7A388:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < 624 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A340;
      }
      goto L_08A7A394;
    }
L_08A7A394:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(624));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A3A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7A3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A7A3BCu) goto L_08A7A3BC;
    return;
L_08A7A3BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5150));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7A3D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A3D4u) goto L_08A7A3D4;
    return;
L_08A7A3D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A3E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 624 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A518;
      }
      goto L_08A7A3F8;
    }
L_08A7A3F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A458;
      }
      goto L_08A7A404;
    }
L_08A7A404:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] >> 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[7] >> 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1600)));
    ctx.set_gpr(6, ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[7] & 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27012));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] ^ ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A7A458;
L_08A7A458:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 227 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A404;
      }
      goto L_08A7A464;
    }
L_08A7A464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A4C0;
      }
      goto L_08A7A46C;
    }
L_08A7A46C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] >> 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[7] >> 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-896)));
    ctx.set_gpr(6, ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[7] & 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27012));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] ^ ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A7A4C0;
L_08A7A4C0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 623 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A46C;
      }
      goto L_08A7A4CC;
    }
L_08A7A4CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] >> 1u);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[6] >> 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(5, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27012));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] ^ ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2504), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A7A518;
L_08A7A518:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] >> 11u);
    ctx.set_gpr(4, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] << 7u);
    ctx.set_gpr(2, 40236u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 22144u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] << 15u);
    ctx.set_gpr(2, 61382u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[3] ^ ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A56C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A5AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A62C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A688;
      }
      goto L_08A7A65C;
    }
L_08A7A65C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7A684;
      }
      goto L_08A7A678;
    }
L_08A7A678:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A698;
      }
      goto L_08A7A684;
    }
L_08A7A684:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A7A688;
L_08A7A688:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A65C;
      }
      goto L_08A7A698;
    }
L_08A7A698:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7A6D4;
      }
      goto L_08A7A6BC;
    }
L_08A7A6BC:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7A6D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A6D0u) goto L_08A7A6D0;
    return;
L_08A7A6D0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08A7A6D4;
L_08A7A6D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A7A6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A7A6E0u) goto L_08A7A6E0;
    return;
L_08A7A6E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A6F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A7A714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A714u) goto L_08A7A714;
    return;
L_08A7A714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7A720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 711u, 0x088DBB10u>(ctx, &aot_mem) && ctx.pc == 0x08A7A720u) goto L_08A7A720;
    return;
L_08A7A720:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7A740u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A740u) goto L_08A7A740;
    return;
L_08A7A740:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A754;
      }
      goto L_08A7A74C;
    }
L_08A7A74C:
    ctx.set_gpr(31, 0x08A7A754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7A754u) goto L_08A7A754;
    return;
L_08A7A754:
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
L_08A7A76C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7A7B8;
      }
      goto L_08A7A7A8;
    }
L_08A7A7A8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7A7B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A7B8u) goto L_08A7A7B8;
    return;
L_08A7A7B8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A7D8;
      }
      goto L_08A7A7D0;
    }
L_08A7A7D0:
    ctx.set_gpr(31, 0x08A7A7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7A7D8u) goto L_08A7A7D8;
    return;
L_08A7A7D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7A7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A7A7E8u) goto L_08A7A7E8;
    return;
L_08A7A7E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
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
L_08A7A818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A864;
      }
      goto L_08A7A840;
    }
L_08A7A840:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A860;
      }
      goto L_08A7A858;
    }
L_08A7A858:
    ctx.set_gpr(31, 0x08A7A860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7A860u) goto L_08A7A860;
    return;
L_08A7A860:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A7A864;
L_08A7A864:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A840;
      }
      goto L_08A7A870;
    }
L_08A7A870:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A894;
      }
      goto L_08A7A880;
    }
L_08A7A880:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A7A894;
L_08A7A894:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A880;
      }
      goto L_08A7A8A0;
    }
L_08A7A8A0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
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
L_08A7A8C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7A8D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A8D8u) goto L_08A7A8D8;
    return;
L_08A7A8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A8E8:
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
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A9CC;
      }
      goto L_08A7A928;
    }
L_08A7A928:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A9C0;
      }
      goto L_08A7A93C;
    }
L_08A7A93C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08A7A964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A964u) goto L_08A7A964;
    return;
L_08A7A964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A9BC;
      }
      goto L_08A7A96C;
    }
L_08A7A96C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A9B0;
      }
      goto L_08A7A988;
    }
L_08A7A988:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7A9ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7A9ACu) goto L_08A7A9AC;
    return;
L_08A7A9AC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A7A9B0;
L_08A7A9B0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A988;
      }
      goto L_08A7A9BC;
    }
L_08A7A9BC:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A7A9C0;
L_08A7A9C0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A93C;
      }
      goto L_08A7A9CC;
    }
L_08A7A9CC:
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
L_08A7A9FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AA4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AA4Cu) goto L_08A7AA4C;
    return;
L_08A7AA4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AAA4;
      }
      goto L_08A7AA60;
    }
L_08A7AA60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7AAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7AAA0u) goto L_08A7AAA0;
    return;
L_08A7AAA0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A7AAA4;
L_08A7AAA4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AA60;
      }
      goto L_08A7AAB0;
    }
L_08A7AAB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
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
L_08A7AADC:
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7ABCC;
      }
      goto L_08A7AB24;
    }
L_08A7AB24:
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ABC0;
      }
      goto L_08A7AB3C;
    }
L_08A7AB3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7AB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7AB84u) goto L_08A7AB84;
    return;
L_08A7AB84:
    ctx.set_gpr(6, ctx.gpr[20] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7ABAC;
      }
      goto L_08A7AB90;
    }
L_08A7AB90:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7ABACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7ABACu) goto L_08A7ABAC;
    return;
L_08A7ABAC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A7ABC0;
L_08A7ABC0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AB3C;
      }
      goto L_08A7ABCC;
    }
L_08A7ABCC:
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
L_08A7ABFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AC4C;
      }
      goto L_08A7AC3C;
    }
L_08A7AC3C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A7AC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7AC4Cu) goto L_08A7AC4C;
    return;
L_08A7AC4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7AC84;
      }
      goto L_08A7AC58;
    }
L_08A7AC58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AC74;
      }
      goto L_08A7AC68;
    }
L_08A7AC68:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AC84;
      }
      goto L_08A7AC74;
    }
L_08A7AC74:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A7AC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7AC84u) goto L_08A7AC84;
    return;
L_08A7AC84:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ACEC;
      }
      goto L_08A7AC90;
    }
L_08A7AC90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ACC4;
      }
      goto L_08A7ACA0;
    }
L_08A7ACA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7ACC4;
      }
      goto L_08A7ACA8;
    }
L_08A7ACA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ACC4;
      }
      goto L_08A7ACB4;
    }
L_08A7ACB4:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08A7ACC4;
L_08A7ACC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A7ACEC;
L_08A7ACEC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AC90;
      }
      goto L_08A7ACF8;
    }
L_08A7ACF8:
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
L_08A7AD18:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AD54;
      }
      goto L_08A7AD30;
    }
L_08A7AD30:
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A7AD54;
L_08A7AD54:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AD30;
      }
      goto L_08A7AD60;
    }
L_08A7AD60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7AD68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7AEA0;
      }
      goto L_08A7AD98;
    }
L_08A7AD98:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7ADB4;
      }
      goto L_08A7ADAC;
    }
L_08A7ADAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A7ADB4;
L_08A7ADB4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7ADCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7ADCCu) goto L_08A7ADCC;
    return;
L_08A7ADCC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7ADDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7ADDCu) goto L_08A7ADDC;
    return;
L_08A7ADDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7ADF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7ADF4u) goto L_08A7ADF4;
    return;
L_08A7ADF4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A7AE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7AE0Cu) goto L_08A7AE0C;
    return;
L_08A7AE0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AE2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AE2Cu) goto L_08A7AE2C;
    return;
L_08A7AE2C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AE54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AE54u) goto L_08A7AE54;
    return;
L_08A7AE54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AE70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AE70u) goto L_08A7AE70;
    return;
L_08A7AE70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AE9C;
      }
      goto L_08A7AE78;
    }
L_08A7AE78:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7AE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7AE84u) goto L_08A7AE84;
    return;
L_08A7AE84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AE9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AE9Cu) goto L_08A7AE9C;
    return;
L_08A7AE9C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    goto L_08A7AEA0;
L_08A7AEA0:
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
L_08A7AEC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7AF38;
      }
      goto L_08A7AEE8;
    }
L_08A7AEE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AF04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AF04u) goto L_08A7AF04;
    return;
L_08A7AF04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7AF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7AF18u) goto L_08A7AF18;
    return;
L_08A7AF18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AF30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AF30u) goto L_08A7AF30;
    return;
L_08A7AF30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A7AF38;
L_08A7AF38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
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
L_08A7AF58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[3] - ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7B020;
      }
      goto L_08A7AF98;
    }
L_08A7AF98:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7AFACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7AFACu) goto L_08A7AFAC;
    return;
L_08A7AFAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B014;
      }
      goto L_08A7AFC0;
    }
L_08A7AFC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(31, 0x08A7B010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B010u) goto L_08A7B010;
    return;
L_08A7B010:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A7B014;
L_08A7B014:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AFC0;
      }
      goto L_08A7B020;
    }
L_08A7B020:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
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
L_08A7B054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7B080u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7B080u) goto L_08A7B080;
    return;
L_08A7B080:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B098:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0F0;
      }
      goto L_08A7B0D4;
    }
L_08A7B0D4:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7B0E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7B0E8u) goto L_08A7B0E8;
    return;
L_08A7B0E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B17C;
      }
      goto L_08A7B0F0;
    }
L_08A7B0F0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B17C;
      }
      goto L_08A7B0FC;
    }
L_08A7B0FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B170;
      }
      goto L_08A7B110;
    }
L_08A7B110:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B160;
      }
      goto L_08A7B140;
    }
L_08A7B140:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A7B15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B15Cu) goto L_08A7B15C;
    return;
L_08A7B15C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A7B160;
L_08A7B160:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B140;
      }
      goto L_08A7B16C;
    }
L_08A7B16C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A7B170;
L_08A7B170:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B110;
      }
      goto L_08A7B17C;
    }
L_08A7B17C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
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
L_08A7B1AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B268;
      }
      goto L_08A7B1E8;
    }
L_08A7B1E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08A7B220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B220u) goto L_08A7B220;
    return;
L_08A7B220:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B24C;
      }
      goto L_08A7B228;
    }
L_08A7B228:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7B24Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7B24Cu) goto L_08A7B24C;
    return;
L_08A7B24C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A7B264u);
    // nop
    goto L_08A7A56C;
L_08A7B264:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A7B268;
L_08A7B268:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B1E8;
      }
      goto L_08A7B274;
    }
L_08A7B274:
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
L_08A7B29C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B2A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4C0;
      }
      goto L_08A7B2DC;
    }
L_08A7B2DC:
    ctx.set_gpr(31, 0x08A7B2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A7B2E4u) goto L_08A7B2E4;
    return;
L_08A7B2E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4C0;
      }
      goto L_08A7B2EC;
    }
L_08A7B2EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A7B2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B2F8u) goto L_08A7B2F8;
    return;
L_08A7B2F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7B304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x08A7B304u) goto L_08A7B304;
    return;
L_08A7B304:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27308));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7B330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7B330u) goto L_08A7B330;
    return;
L_08A7B330:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B36C;
      }
      goto L_08A7B338;
    }
L_08A7B338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B34C;
      }
      goto L_08A7B344;
    }
L_08A7B344:
    ctx.set_gpr(31, 0x08A7B34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7B34Cu) goto L_08A7B34C;
    return;
L_08A7B34C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B360;
      }
      goto L_08A7B358;
    }
L_08A7B358:
    ctx.set_gpr(31, 0x08A7B360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7B360u) goto L_08A7B360;
    return;
L_08A7B360:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4D8;
      }
      goto L_08A7B36C;
    }
L_08A7B36C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7B380u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7B380u) goto L_08A7B380;
    return;
L_08A7B380:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7B398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08A7B398u) goto L_08A7B398;
    return;
L_08A7B398:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A7B3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B3B0u) goto L_08A7B3B0;
    return;
L_08A7B3B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7B3D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7B3D0u) goto L_08A7B3D0;
    return;
L_08A7B3D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B408;
      }
      goto L_08A7B3E0;
    }
L_08A7B3E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A7B3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B3ECu) goto L_08A7B3EC;
    return;
L_08A7B3EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B400;
      }
      goto L_08A7B3F4;
    }
L_08A7B3F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7B400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B400u) goto L_08A7B400;
    return;
L_08A7B400:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A7B408;
L_08A7B408:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7B41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A7B41Cu) goto L_08A7B41C;
    return;
L_08A7B41C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B44C;
      }
      goto L_08A7B430;
    }
L_08A7B430:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B44C;
      }
      goto L_08A7B448;
    }
L_08A7B448:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A7B44C;
L_08A7B44C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B478;
      }
      goto L_08A7B454;
    }
L_08A7B454:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B478;
      }
      goto L_08A7B46C;
    }
L_08A7B46C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A7B478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B478u) goto L_08A7B478;
    return;
L_08A7B478:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7B48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A7B48Cu) goto L_08A7B48C;
    return;
L_08A7B48C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4A0;
      }
      goto L_08A7B498;
    }
L_08A7B498:
    ctx.set_gpr(31, 0x08A7B4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7B4A0u) goto L_08A7B4A0;
    return;
L_08A7B4A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4B4;
      }
      goto L_08A7B4AC;
    }
L_08A7B4AC:
    ctx.set_gpr(31, 0x08A7B4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7B4B4u) goto L_08A7B4B4;
    return;
L_08A7B4B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4D8;
      }
      goto L_08A7B4C0;
    }
L_08A7B4C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4D4;
      }
      goto L_08A7B4CC;
    }
L_08A7B4CC:
    ctx.set_gpr(31, 0x08A7B4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7B4D4u) goto L_08A7B4D4;
    return;
L_08A7B4D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A7B4D8;
L_08A7B4D8:
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
L_08A7B4F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A7B508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B508u) goto L_08A7B508;
    return;
L_08A7B508:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A7B528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A7B528u) goto L_08A7B528;
    return;
L_08A7B528:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B538:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20772)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B548:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20660)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B558:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20640)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A7B578u);
    // nop
    goto L_08A7A3E8;
L_08A7B578:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B588:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20492)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B598:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20472)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20460)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20440)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20372)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20352)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20340)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20280)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B608:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20296)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B618:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20300)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B628:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20304)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B638:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20312)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B648:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20316)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B658:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20360)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B668:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20380)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B678:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20388)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B688:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20396)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B698:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20404)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20448)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20480)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20428)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20496)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B6F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20520)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B704:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20500)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B714:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20536)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7B73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 436u, 0x08945EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B73Cu) goto L_08A7B73C;
    return;
L_08A7B73C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08A7B790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 439u, 0x08945F14u>(ctx, &aot_mem) && ctx.pc == 0x08A7B790u) goto L_08A7B790;
    return;
L_08A7B790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B7A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20764)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B7B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20540)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B7C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20544)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B7D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20552)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B7E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B7F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20576)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B800:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20584)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B810:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20588)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B820:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20592)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B830:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20596)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B840:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20604)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B850:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20612)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B860:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20628)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B870:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20676)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7B898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 436u, 0x08945EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B898u) goto L_08A7B898;
    return;
L_08A7B898:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B8C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A7B8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 439u, 0x08945F14u>(ctx, &aot_mem) && ctx.pc == 0x08A7B8ECu) goto L_08A7B8EC;
    return;
L_08A7B8EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B8FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20568)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B90C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20712)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B91C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B92C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B93C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20740)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B94C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A7B96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x08A7B96Cu) goto L_08A7B96C;
    return;
L_08A7B96C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B9A0;
      }
      goto L_08A7B97C;
    }
L_08A7B97C:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B99C;
      }
      goto L_08A7B994;
    }
L_08A7B994:
    ctx.set_gpr(31, 0x08A7B99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A7B99Cu) goto L_08A7B99C;
    return;
L_08A7B99C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A7B9A0;
L_08A7B9A0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B97C;
      }
      goto L_08A7B9AC;
    }
L_08A7B9AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
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
L_08A7B9CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20756)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B9DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20780)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B9EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B9FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20796)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20804)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA2C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20816)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA3C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20820)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20828)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20832)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20844)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA8C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20848)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BA9C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BAAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BAD8;
      }
      goto L_08A7BAC8;
    }
L_08A7BAC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BAE8;
      }
      goto L_08A7BAD8;
    }
L_08A7BAD8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A7BAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BAE8u) goto L_08A7BAE8;
    return;
L_08A7BAE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BAF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BB24;
      }
      goto L_08A7BB14;
    }
L_08A7BB14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BB34;
      }
      goto L_08A7BB24;
    }
L_08A7BB24:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A7BB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BB34u) goto L_08A7BB34;
    return;
L_08A7BB34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BB44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20844)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BB54:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20828)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BB64:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20604)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BB74:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20584)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BB84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20552)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BB94:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20312)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BBA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20844)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BBB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20828)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BBC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BBD4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20604)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BBE4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20584)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BBF4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20552)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BC04:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20340)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BC14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20312)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BC24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BC4C;
      }
      goto L_08A7BC40;
    }
L_08A7BC40:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A7BC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BC4Cu) goto L_08A7BC4C;
    return;
L_08A7BC4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BC5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BC84;
      }
      goto L_08A7BC78;
    }
L_08A7BC78:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A7BC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BC84u) goto L_08A7BC84;
    return;
L_08A7BC84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BC94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BCBC;
      }
      goto L_08A7BCB0;
    }
L_08A7BCB0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A7BCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BCBCu) goto L_08A7BCBC;
    return;
L_08A7BCBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BCCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BCF4;
      }
      goto L_08A7BCE8;
    }
L_08A7BCE8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A7BCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BCF4u) goto L_08A7BCF4;
    return;
L_08A7BCF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BD04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BD2C;
      }
      goto L_08A7BD20;
    }
L_08A7BD20:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A7BD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BD2Cu) goto L_08A7BD2C;
    return;
L_08A7BD2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BD3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BD64;
      }
      goto L_08A7BD58;
    }
L_08A7BD58:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A7BD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BD64u) goto L_08A7BD64;
    return;
L_08A7BD64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A7BEDC;
      }
      goto L_08A7BD98;
    }
L_08A7BD98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7BF34;
      }
      goto L_08A7BDA4;
    }
L_08A7BDA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A7BE78;
      }
      goto L_08A7BDB0;
    }
L_08A7BDB0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BDC0;
      }
      goto L_08A7BDB8;
    }
L_08A7BDB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A7BEBC;
      }
      goto L_08A7BDC0;
    }
L_08A7BDC0:
    ctx.set_gpr(31, 0x08A7BDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BDC8u) goto L_08A7BDC8;
    return;
L_08A7BDC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7BDD4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08A7BDD4u) goto L_08A7BDD4;
    return;
L_08A7BDD4:
    ctx.set_gpr(31, 0x08A7BDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A7BDDCu) goto L_08A7BDDC;
    return;
L_08A7BDDC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7BDFCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A7BDFCu) goto L_08A7BDFC;
    return;
L_08A7BDFC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7BE10u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7BE10u) goto L_08A7BE10;
    return;
L_08A7BE10:
    ctx.set_gpr(31, 0x08A7BE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE18u) goto L_08A7BE18;
    return;
L_08A7BE18:
    ctx.set_gpr(31, 0x08A7BE20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 498u, 0x08861DC0u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE20u) goto L_08A7BE20;
    return;
L_08A7BE20:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A7BE6C;
    }
    goto L_08A7BE28;
L_08A7BE28:
    ctx.set_gpr(31, 0x08A7BE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE30u) goto L_08A7BE30;
    return;
L_08A7BE30:
    ctx.set_gpr(31, 0x08A7BE38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE38u) goto L_08A7BE38;
    return;
L_08A7BE38:
    ctx.set_gpr(31, 0x08A7BE40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 20u, 0x08A94138u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE40u) goto L_08A7BE40;
    return;
L_08A7BE40:
    ctx.set_gpr(31, 0x08A7BE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE48u) goto L_08A7BE48;
    return;
L_08A7BE48:
    ctx.set_gpr(31, 0x08A7BE50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE50u) goto L_08A7BE50;
    return;
L_08A7BE50:
    ctx.set_gpr(31, 0x08A7BE58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 125u, 0x08A7C7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE58u) goto L_08A7BE58;
    return;
L_08A7BE58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BEB8;
      }
      goto L_08A7BE68;
    }
L_08A7BE68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A7BE6C;
L_08A7BE6C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BEB8;
      }
      goto L_08A7BE78;
    }
L_08A7BE78:
    ctx.set_gpr(31, 0x08A7BE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE80u) goto L_08A7BE80;
    return;
L_08A7BE80:
    ctx.set_gpr(31, 0x08A7BE88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE88u) goto L_08A7BE88;
    return;
L_08A7BE88:
    ctx.set_gpr(31, 0x08A7BE90u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE90u) goto L_08A7BE90;
    return;
L_08A7BE90:
    ctx.set_gpr(31, 0x08A7BE98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE98u) goto L_08A7BE98;
    return;
L_08A7BE98:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A7BEA4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 126u, 0x08A7C7E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7BEA4u) goto L_08A7BEA4;
    return;
L_08A7BEA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BEB8;
      }
      goto L_08A7BEAC;
    }
L_08A7BEAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08A7BEB8;
L_08A7BEB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A7BEBC;
L_08A7BEBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 13u, 0x08A7C0C4u>(ctx, &aot_mem); return;
    }
    goto L_08A7BEC8;
L_08A7BEC8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20252), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 12u, 0x08A7C0C0u>(ctx, &aot_mem); return;
      }
      goto L_08A7BEDC;
    }
L_08A7BEDC:
    ctx.set_gpr(31, 0x08A7BEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BEE4u) goto L_08A7BEE4;
    return;
L_08A7BEE4:
    ctx.set_gpr(31, 0x08A7BEECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A7BEECu) goto L_08A7BEEC;
    return;
L_08A7BEEC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A7BF00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 889u, 0x08A7F214u>(ctx, &aot_mem) && ctx.pc == 0x08A7BF00u) goto L_08A7BF00;
    return;
L_08A7BF00:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20252), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 12u, 0x08A7C0C0u>(ctx, &aot_mem); return;
      }
      goto L_08A7BF14;
    }
L_08A7BF14:
    ctx.set_gpr(31, 0x08A7BF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BF1Cu) goto L_08A7BF1C;
    return;
L_08A7BF1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A7BF28u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A7BF28u) goto L_08A7BF28;
    return;
L_08A7BF28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 12u, 0x08A7C0C0u>(ctx, &aot_mem); return;
      }
      goto L_08A7BF34;
    }
L_08A7BF34:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7BF40;
      }
      goto L_08A7BF3C;
    }
L_08A7BF3C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08A7BF40;
L_08A7BF40:
    ctx.set_gpr(31, 0x08A7BF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A7BF48u) goto L_08A7BF48;
    return;
L_08A7BF48:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A7BF68u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A7BF68u) goto L_08A7BF68;
    return;
L_08A7BF68:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A7BF7Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A7BF7Cu) goto L_08A7BF7C;
    return;
L_08A7BF7C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20252)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 9u, 0x08A7C090u>(ctx, &aot_mem); return;
      }
      goto L_08A7BF90;
    }
L_08A7BF90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 6u, 0x08A7C05Cu>(ctx, &aot_mem); return;
      }
      goto L_08A7BF9C;
    }
L_08A7BF9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 3u, 0x08A7C028u>(ctx, &aot_mem); return;
      }
      goto L_08A7BFA8;
    }
L_08A7BFA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A7BFF4;
      }
      goto L_08A7BFB4;
    }
L_08A7BFB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BFC4;
      }
      goto L_08A7BFBC;
    }
L_08A7BFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 12u, 0x08A7C0C0u>(ctx, &aot_mem); return;
      }
      goto L_08A7BFC4;
    }
L_08A7BFC4:
    ctx.set_gpr(31, 0x08A7BFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BFCCu) goto L_08A7BFCC;
    return;
L_08A7BFCC:
    ctx.set_gpr(31, 0x08A7BFD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 517u, 0x08861E74u>(ctx, &aot_mem) && ctx.pc == 0x08A7BFD4u) goto L_08A7BFD4;
    return;
L_08A7BFD4:
    ctx.set_gpr(3, 2219u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-24204));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 12u, 0x08A7C0C0u>(ctx, &aot_mem); return;
      }
      goto L_08A7BFF4;
    }
L_08A7BFF4:
    ctx.set_gpr(31, 0x08A7BFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A7BFFCu) goto L_08A7BFFC;
    return;
L_08A7BFFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = 0x08A7C000u; return;
}

void recomp_unit_0157(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0157_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_157(Runtime &runtime) {
    runtime.register_generated_unit(157u, 0x08A78000u, 16384u, &recomp_unit_0157, &recomp_unit_0157_entry);
    runtime.register_function(0x08A78000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78010u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78020u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78048u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78064u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78074u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78080u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7809Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78118u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78130u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78144u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7814Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78164u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78178u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7818Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78234u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78244u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78254u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78264u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78288u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78304u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78344u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78368u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7838Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7839Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78404u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78410u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78418u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7843Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78470u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7847Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7848Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78490u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78508u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78524u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78534u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78554u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78590u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78620u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78630u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78644u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78668u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78678u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7868Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78698u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78700u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7870Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7871Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78720u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78734u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78740u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78750u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78754u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78768u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78774u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78784u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78788u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7879Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78828u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7883Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7884Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7885Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78880u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7888Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78894u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7890Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78918u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7893Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78948u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78950u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7895Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78964u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78978u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7898Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ACCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ED4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7906Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79080u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7908Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79098u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79148u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79154u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79160u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79178u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79180u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79198u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79220u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79250u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7925Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79308u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79338u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79398u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79418u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79438u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79448u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79450u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79470u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79478u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79488u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79494u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79520u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79528u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79538u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79548u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79554u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79560u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79568u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79580u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79590u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79614u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79634u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7963Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79640u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7966Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79678u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79698u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7970Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7972Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79730u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7975Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79774u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79788u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79798u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79810u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79820u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79868u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79874u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79894u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79908u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79930u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7994Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79980u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79984u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79ED4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A010u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A020u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A024u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A02Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A03Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A040u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A048u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A070u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A098u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A108u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A118u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A128u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A138u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A158u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A178u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A17Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A198u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A20Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A218u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A224u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A230u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A240u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A250u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A260u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A280u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A324u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A334u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A340u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A388u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A394u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A404u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A458u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A464u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A46Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A518u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A56Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A62Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A65Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A678u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A684u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A688u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A698u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A720u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A740u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A74Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A754u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A76Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A818u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A840u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A858u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A860u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A864u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A870u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A880u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A894u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A928u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A93Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A964u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A96Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A988u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AADCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B010u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B014u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B020u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B054u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B080u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B098u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B110u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B140u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B15Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B160u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B16Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B170u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B17Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B220u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B228u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B24Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B264u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B268u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B274u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B29Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B304u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B330u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B338u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B344u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B34Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B358u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B360u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B36Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B380u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B398u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B400u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B408u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B41Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B430u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B448u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B44Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B454u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B46Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B478u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B48Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B498u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B508u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B518u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B528u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B538u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B548u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B558u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B568u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B578u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B588u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B598u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B608u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B618u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B628u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B638u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B648u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B658u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B668u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B678u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B688u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B698u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B724u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B73Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B768u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B790u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B800u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B810u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B820u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B830u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B840u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B850u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B860u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B870u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B880u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B898u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B90Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B91Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B92Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B93Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B94Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B96Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B97Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B994u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B99Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFFCu, &recomp_unit_0157, "recomp_unit_0157");
}
} // namespace psprecomp
