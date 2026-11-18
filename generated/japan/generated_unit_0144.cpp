#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0144[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0,
    0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0,
    0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0,
    0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0,
    0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121,
    0, 122, 0, 0, 0, 0, 123, 124, 0, 125, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0,
    179, 0, 180, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0,
    189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0,
    0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0,
    0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 232, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251,
    0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274,
    0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 283, 0, 0, 284, 285, 0,
    0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300,
    301, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 313, 0, 0, 314, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0,
    0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0,
    0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336,
    0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 342, 343, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378,
    0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0,
    0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0,
    421, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0,
    0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 432, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 458, 459, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0,
    474, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0,
    0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 492, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0,
    501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0,
    510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518,
    0, 0, 519, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0,
    527, 528, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 542, 0, 543,
    0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0,
    558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 563,
    0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0,
    569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575, 576, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0,
    0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0,
    584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0,
    593, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 597, 598, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 0, 602, 0, 603,
};
void recomp_unit_0144_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A44000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0144[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A44000;
    case 2u: goto L_08A4400C;
    case 3u: goto L_08A44038;
    case 4u: goto L_08A4404C;
    case 5u: goto L_08A44058;
    case 6u: goto L_08A4406C;
    case 7u: goto L_08A44078;
    case 8u: goto L_08A44080;
    case 9u: goto L_08A44098;
    case 10u: goto L_08A440B0;
    case 11u: goto L_08A440BC;
    case 12u: goto L_08A440C8;
    case 13u: goto L_08A440DC;
    case 14u: goto L_08A440E8;
    case 15u: goto L_08A440F0;
    case 16u: goto L_08A44108;
    case 17u: goto L_08A44120;
    case 18u: goto L_08A4412C;
    case 19u: goto L_08A44138;
    case 20u: goto L_08A4414C;
    case 21u: goto L_08A44158;
    case 22u: goto L_08A44160;
    case 23u: goto L_08A44184;
    case 24u: goto L_08A44190;
    case 25u: goto L_08A441A4;
    case 26u: goto L_08A441B0;
    case 27u: goto L_08A441BC;
    case 28u: goto L_08A441D0;
    case 29u: goto L_08A441DC;
    case 30u: goto L_08A441E4;
    case 31u: goto L_08A441FC;
    case 32u: goto L_08A44214;
    case 33u: goto L_08A4422C;
    case 34u: goto L_08A44238;
    case 35u: goto L_08A44244;
    case 36u: goto L_08A44258;
    case 37u: goto L_08A44264;
    case 38u: goto L_08A4426C;
    case 39u: goto L_08A44290;
    case 40u: goto L_08A4429C;
    case 41u: goto L_08A442B0;
    case 42u: goto L_08A442B8;
    case 43u: goto L_08A442CC;
    case 44u: goto L_08A442D8;
    case 45u: goto L_08A442E4;
    case 46u: goto L_08A442F0;
    case 47u: goto L_08A44304;
    case 48u: goto L_08A44310;
    case 49u: goto L_08A44318;
    case 50u: goto L_08A44330;
    case 51u: goto L_08A44348;
    case 52u: goto L_08A44354;
    case 53u: goto L_08A44364;
    case 54u: goto L_08A44370;
    case 55u: goto L_08A44378;
    case 56u: goto L_08A44384;
    case 57u: goto L_08A44390;
    case 58u: goto L_08A443A4;
    case 59u: goto L_08A443B0;
    case 60u: goto L_08A443B8;
    case 61u: goto L_08A443D0;
    case 62u: goto L_08A443E8;
    case 63u: goto L_08A44400;
    case 64u: goto L_08A4440C;
    case 65u: goto L_08A44418;
    case 66u: goto L_08A4442C;
    case 67u: goto L_08A44438;
    case 68u: goto L_08A44440;
    case 69u: goto L_08A44460;
    case 70u: goto L_08A44474;
    case 71u: goto L_08A444A4;
    case 72u: goto L_08A444BC;
    case 73u: goto L_08A444C4;
    case 74u: goto L_08A444C8;
    case 75u: goto L_08A444D4;
    case 76u: goto L_08A444E4;
    case 77u: goto L_08A444F8;
    case 78u: goto L_08A44504;
    case 79u: goto L_08A4451C;
    case 80u: goto L_08A44534;
    case 81u: goto L_08A4453C;
    case 82u: goto L_08A44540;
    case 83u: goto L_08A4454C;
    case 84u: goto L_08A4455C;
    case 85u: goto L_08A44570;
    case 86u: goto L_08A4457C;
    case 87u: goto L_08A44594;
    case 88u: goto L_08A445A4;
    case 89u: goto L_08A445B4;
    case 90u: goto L_08A445C4;
    case 91u: goto L_08A445D4;
    case 92u: goto L_08A445E4;
    case 93u: goto L_08A445F4;
    case 94u: goto L_08A44604;
    case 95u: goto L_08A44614;
    case 96u: goto L_08A44634;
    case 97u: goto L_08A44678;
    case 98u: goto L_08A4468C;
    case 99u: goto L_08A446A4;
    case 100u: goto L_08A446B8;
    case 101u: goto L_08A446C8;
    case 102u: goto L_08A446D0;
    case 103u: goto L_08A446DC;
    case 104u: goto L_08A446F0;
    case 105u: goto L_08A446FC;
    case 106u: goto L_08A44728;
    case 107u: goto L_08A44768;
    case 108u: goto L_08A44778;
    case 109u: goto L_08A44780;
    case 110u: goto L_08A44790;
    case 111u: goto L_08A447A4;
    case 112u: goto L_08A447A8;
    case 113u: goto L_08A447B8;
    case 114u: goto L_08A447C8;
    case 115u: goto L_08A447E8;
    case 116u: goto L_08A44824;
    case 117u: goto L_08A4484C;
    case 118u: goto L_08A44854;
    case 119u: goto L_08A44860;
    case 120u: goto L_08A4486C;
    case 121u: goto L_08A4487C;
    case 122u: goto L_08A44884;
    case 123u: goto L_08A44898;
    case 124u: goto L_08A4489C;
    case 125u: goto L_08A448A4;
    case 126u: goto L_08A448A8;
    case 127u: goto L_08A448B8;
    case 128u: goto L_08A448C4;
    case 129u: goto L_08A448D0;
    case 130u: goto L_08A44904;
    case 131u: goto L_08A44920;
    case 132u: goto L_08A44938;
    case 133u: goto L_08A44944;
    case 134u: goto L_08A44950;
    case 135u: goto L_08A44968;
    case 136u: goto L_08A44984;
    case 137u: goto L_08A4499C;
    case 138u: goto L_08A449AC;
    case 139u: goto L_08A449C8;
    case 140u: goto L_08A449E0;
    case 141u: goto L_08A449F0;
    case 142u: goto L_08A44A00;
    case 143u: goto L_08A44A10;
    case 144u: goto L_08A44A38;
    case 145u: goto L_08A44A50;
    case 146u: goto L_08A44A68;
    case 147u: goto L_08A44A7C;
    case 148u: goto L_08A44A88;
    case 149u: goto L_08A44A94;
    case 150u: goto L_08A44AA8;
    case 151u: goto L_08A44AB8;
    case 152u: goto L_08A44AD4;
    case 153u: goto L_08A44AE0;
    case 154u: goto L_08A44AFC;
    case 155u: goto L_08A44B08;
    case 156u: goto L_08A44B14;
    case 157u: goto L_08A44B20;
    case 158u: goto L_08A44B30;
    case 159u: goto L_08A44B40;
    case 160u: goto L_08A44B54;
    case 161u: goto L_08A44B64;
    case 162u: goto L_08A44B74;
    case 163u: goto L_08A44B8C;
    case 164u: goto L_08A44B94;
    case 165u: goto L_08A44BDC;
    case 166u: goto L_08A44BFC;
    case 167u: goto L_08A44C08;
    case 168u: goto L_08A44C14;
    case 169u: goto L_08A44C1C;
    case 170u: goto L_08A44C28;
    case 171u: goto L_08A44C30;
    case 172u: goto L_08A44C3C;
    case 173u: goto L_08A44C44;
    case 174u: goto L_08A44C50;
    case 175u: goto L_08A44C58;
    case 176u: goto L_08A44C64;
    case 177u: goto L_08A44C6C;
    case 178u: goto L_08A44C78;
    case 179u: goto L_08A44C80;
    case 180u: goto L_08A44C88;
    case 181u: goto L_08A44C8C;
    case 182u: goto L_08A44C98;
    case 183u: goto L_08A44CA8;
    case 184u: goto L_08A44CB4;
    case 185u: goto L_08A44CC0;
    case 186u: goto L_08A44CCC;
    case 187u: goto L_08A44CF0;
    case 188u: goto L_08A44CF8;
    case 189u: goto L_08A44D00;
    case 190u: goto L_08A44D0C;
    case 191u: goto L_08A44D14;
    case 192u: goto L_08A44D20;
    case 193u: goto L_08A44D28;
    case 194u: goto L_08A44D34;
    case 195u: goto L_08A44D3C;
    case 196u: goto L_08A44D48;
    case 197u: goto L_08A44D50;
    case 198u: goto L_08A44D5C;
    case 199u: goto L_08A44D64;
    case 200u: goto L_08A44D70;
    case 201u: goto L_08A44D78;
    case 202u: goto L_08A44D84;
    case 203u: goto L_08A44D8C;
    case 204u: goto L_08A44D94;
    case 205u: goto L_08A44DA0;
    case 206u: goto L_08A44DA8;
    case 207u: goto L_08A44DB0;
    case 208u: goto L_08A44DC0;
    case 209u: goto L_08A44DCC;
    case 210u: goto L_08A44DD4;
    case 211u: goto L_08A44DD8;
    case 212u: goto L_08A44DE4;
    case 213u: goto L_08A44E30;
    case 214u: goto L_08A44E38;
    case 215u: goto L_08A44E50;
    case 216u: goto L_08A44E5C;
    case 217u: goto L_08A44E74;
    case 218u: goto L_08A44E8C;
    case 219u: goto L_08A44EC0;
    case 220u: goto L_08A44ECC;
    case 221u: goto L_08A44ED8;
    case 222u: goto L_08A44EEC;
    case 223u: goto L_08A44EF8;
    case 224u: goto L_08A44F08;
    case 225u: goto L_08A44F14;
    case 226u: goto L_08A44F1C;
    case 227u: goto L_08A44F28;
    case 228u: goto L_08A44F30;
    case 229u: goto L_08A44F48;
    case 230u: goto L_08A44F5C;
    case 231u: goto L_08A44F6C;
    case 232u: goto L_08A44F84;
    case 233u: goto L_08A44F88;
    case 234u: goto L_08A44F90;
    case 235u: goto L_08A44FA8;
    case 236u: goto L_08A44FB4;
    case 237u: goto L_08A44FD4;
    case 238u: goto L_08A44FDC;
    case 239u: goto L_08A44FE8;
    case 240u: goto L_08A45000;
    case 241u: goto L_08A45014;
    case 242u: goto L_08A45024;
    case 243u: goto L_08A4502C;
    case 244u: goto L_08A45038;
    case 245u: goto L_08A45040;
    case 246u: goto L_08A4504C;
    case 247u: goto L_08A45054;
    case 248u: goto L_08A45060;
    case 249u: goto L_08A45068;
    case 250u: goto L_08A45074;
    case 251u: goto L_08A4507C;
    case 252u: goto L_08A45088;
    case 253u: goto L_08A45090;
    case 254u: goto L_08A4509C;
    case 255u: goto L_08A450A4;
    case 256u: goto L_08A450CC;
    case 257u: goto L_08A45138;
    case 258u: goto L_08A45144;
    case 259u: goto L_08A4515C;
    case 260u: goto L_08A45174;
    case 261u: goto L_08A45180;
    case 262u: goto L_08A451BC;
    case 263u: goto L_08A45210;
    case 264u: goto L_08A45234;
    case 265u: goto L_08A4525C;
    case 266u: goto L_08A45268;
    case 267u: goto L_08A452A4;
    case 268u: goto L_08A452B8;
    case 269u: goto L_08A452C4;
    case 270u: goto L_08A452CC;
    case 271u: goto L_08A452D8;
    case 272u: goto L_08A452E4;
    case 273u: goto L_08A452F0;
    case 274u: goto L_08A452FC;
    case 275u: goto L_08A45308;
    case 276u: goto L_08A45314;
    case 277u: goto L_08A45320;
    case 278u: goto L_08A4532C;
    case 279u: goto L_08A45330;
    case 280u: goto L_08A45338;
    case 281u: goto L_08A45350;
    case 282u: goto L_08A45364;
    case 283u: goto L_08A45368;
    case 284u: goto L_08A45374;
    case 285u: goto L_08A45378;
    case 286u: goto L_08A45384;
    case 287u: goto L_08A45390;
    case 288u: goto L_08A4539C;
    case 289u: goto L_08A453C8;
    case 290u: goto L_08A45434;
    case 291u: goto L_08A45444;
    case 292u: goto L_08A4545C;
    case 293u: goto L_08A45470;
    case 294u: goto L_08A45488;
    case 295u: goto L_08A45498;
    case 296u: goto L_08A454B0;
    case 297u: goto L_08A454C0;
    case 298u: goto L_08A454D8;
    case 299u: goto L_08A454F0;
    case 300u: goto L_08A454FC;
    case 301u: goto L_08A45500;
    case 302u: goto L_08A4550C;
    case 303u: goto L_08A45514;
    case 304u: goto L_08A45520;
    case 305u: goto L_08A45540;
    case 306u: goto L_08A4554C;
    case 307u: goto L_08A45558;
    case 308u: goto L_08A4557C;
    case 309u: goto L_08A4558C;
    case 310u: goto L_08A455A0;
    case 311u: goto L_08A455B4;
    case 312u: goto L_08A455C0;
    case 313u: goto L_08A455C4;
    case 314u: goto L_08A455D0;
    case 315u: goto L_08A455D4;
    case 316u: goto L_08A455E0;
    case 317u: goto L_08A455E8;
    case 318u: goto L_08A455F4;
    case 319u: goto L_08A4560C;
    case 320u: goto L_08A45644;
    case 321u: goto L_08A45670;
    case 322u: goto L_08A45694;
    case 323u: goto L_08A456A4;
    case 324u: goto L_08A456A8;
    case 325u: goto L_08A456B4;
    case 326u: goto L_08A456CC;
    case 327u: goto L_08A456E0;
    case 328u: goto L_08A456F8;
    case 329u: goto L_08A45704;
    case 330u: goto L_08A45714;
    case 331u: goto L_08A45720;
    case 332u: goto L_08A45734;
    case 333u: goto L_08A45748;
    case 334u: goto L_08A45760;
    case 335u: goto L_08A4576C;
    case 336u: goto L_08A4577C;
    case 337u: goto L_08A45788;
    case 338u: goto L_08A457A0;
    case 339u: goto L_08A457B0;
    case 340u: goto L_08A457C8;
    case 341u: goto L_08A457D4;
    case 342u: goto L_08A457E4;
    case 343u: goto L_08A457E8;
    case 344u: goto L_08A457F4;
    case 345u: goto L_08A45818;
    case 346u: goto L_08A45824;
    case 347u: goto L_08A4583C;
    case 348u: goto L_08A45868;
    case 349u: goto L_08A458E4;
    case 350u: goto L_08A45908;
    case 351u: goto L_08A45920;
    case 352u: goto L_08A45940;
    case 353u: goto L_08A4594C;
    case 354u: goto L_08A45958;
    case 355u: goto L_08A45970;
    case 356u: goto L_08A459A0;
    case 357u: goto L_08A459D4;
    case 358u: goto L_08A459E0;
    case 359u: goto L_08A45A40;
    case 360u: goto L_08A45A64;
    case 361u: goto L_08A45A7C;
    case 362u: goto L_08A45A88;
    case 363u: goto L_08A45AB4;
    case 364u: goto L_08A45AD4;
    case 365u: goto L_08A45AE0;
    case 366u: goto L_08A45AEC;
    case 367u: goto L_08A45B04;
    case 368u: goto L_08A45B34;
    case 369u: goto L_08A45BB0;
    case 370u: goto L_08A45BD4;
    case 371u: goto L_08A45BEC;
    case 372u: goto L_08A45C04;
    case 373u: goto L_08A45C28;
    case 374u: goto L_08A45C3C;
    case 375u: goto L_08A45C48;
    case 376u: goto L_08A45C50;
    case 377u: goto L_08A45C6C;
    case 378u: goto L_08A45C7C;
    case 379u: goto L_08A45C8C;
    case 380u: goto L_08A45C98;
    case 381u: goto L_08A45CA4;
    case 382u: goto L_08A45CBC;
    case 383u: goto L_08A45CD4;
    case 384u: goto L_08A45CF0;
    case 385u: goto L_08A45CF8;
    case 386u: goto L_08A45D08;
    case 387u: goto L_08A45D20;
    case 388u: goto L_08A45D3C;
    case 389u: goto L_08A45D5C;
    case 390u: goto L_08A45D64;
    case 391u: goto L_08A45D88;
    case 392u: goto L_08A45DBC;
    case 393u: goto L_08A45DE0;
    case 394u: goto L_08A45E04;
    case 395u: goto L_08A45E28;
    case 396u: goto L_08A45E4C;
    case 397u: goto L_08A45E70;
    case 398u: goto L_08A45E98;
    case 399u: goto L_08A45EBC;
    case 400u: goto L_08A45EE0;
    case 401u: goto L_08A45F04;
    case 402u: goto L_08A45F28;
    case 403u: goto L_08A45F4C;
    case 404u: goto L_08A45F60;
    case 405u: goto L_08A45F78;
    case 406u: goto L_08A45F98;
    case 407u: goto L_08A45FA0;
    case 408u: goto L_08A45FB0;
    case 409u: goto L_08A45FB8;
    case 410u: goto L_08A45FD0;
    case 411u: goto L_08A45FD8;
    case 412u: goto L_08A45FE8;
    case 413u: goto L_08A45FF0;
    case 414u: goto L_08A46008;
    case 415u: goto L_08A46020;
    case 416u: goto L_08A46038;
    case 417u: goto L_08A46048;
    case 418u: goto L_08A46054;
    case 419u: goto L_08A46064;
    case 420u: goto L_08A46070;
    case 421u: goto L_08A46080;
    case 422u: goto L_08A46088;
    case 423u: goto L_08A46098;
    case 424u: goto L_08A460A4;
    case 425u: goto L_08A460C4;
    case 426u: goto L_08A460D4;
    case 427u: goto L_08A460E4;
    case 428u: goto L_08A460F4;
    case 429u: goto L_08A46108;
    case 430u: goto L_08A46110;
    case 431u: goto L_08A4611C;
    case 432u: goto L_08A46128;
    case 433u: goto L_08A4612C;
    case 434u: goto L_08A46144;
    case 435u: goto L_08A4614C;
    case 436u: goto L_08A46154;
    case 437u: goto L_08A46164;
    case 438u: goto L_08A46174;
    case 439u: goto L_08A46184;
    case 440u: goto L_08A461C8;
    case 441u: goto L_08A461D0;
    case 442u: goto L_08A461E0;
    case 443u: goto L_08A461EC;
    case 444u: goto L_08A46210;
    case 445u: goto L_08A46224;
    case 446u: goto L_08A46238;
    case 447u: goto L_08A4624C;
    case 448u: goto L_08A46274;
    case 449u: goto L_08A4628C;
    case 450u: goto L_08A462AC;
    case 451u: goto L_08A462C4;
    case 452u: goto L_08A462E4;
    case 453u: goto L_08A46324;
    case 454u: goto L_08A46344;
    case 455u: goto L_08A4636C;
    case 456u: goto L_08A464C4;
    case 457u: goto L_08A464CC;
    case 458u: goto L_08A464D8;
    case 459u: goto L_08A464DC;
    case 460u: goto L_08A464E8;
    case 461u: goto L_08A46774;
    case 462u: goto L_08A46780;
    case 463u: goto L_08A46E14;
    case 464u: goto L_08A46E20;
    case 465u: goto L_08A46E2C;
    case 466u: goto L_08A46E38;
    case 467u: goto L_08A46E78;
    case 468u: goto L_08A474F0;
    case 469u: goto L_08A474FC;
    case 470u: goto L_08A47500;
    case 471u: goto L_08A4753C;
    case 472u: goto L_08A47570;
    case 473u: goto L_08A47578;
    case 474u: goto L_08A47580;
    case 475u: goto L_08A47588;
    case 476u: goto L_08A47598;
    case 477u: goto L_08A475F0;
    case 478u: goto L_08A47608;
    case 479u: goto L_08A47614;
    case 480u: goto L_08A47630;
    case 481u: goto L_08A47634;
    case 482u: goto L_08A47668;
    case 483u: goto L_08A47678;
    case 484u: goto L_08A4768C;
    case 485u: goto L_08A47694;
    case 486u: goto L_08A476A0;
    case 487u: goto L_08A476B0;
    case 488u: goto L_08A476CC;
    case 489u: goto L_08A47744;
    case 490u: goto L_08A4775C;
    case 491u: goto L_08A47768;
    case 492u: goto L_08A47784;
    case 493u: goto L_08A47788;
    case 494u: goto L_08A47798;
    case 495u: goto L_08A477A8;
    case 496u: goto L_08A477B0;
    case 497u: goto L_08A477BC;
    case 498u: goto L_08A477C8;
    case 499u: goto L_08A477E8;
    case 500u: goto L_08A477F0;
    case 501u: goto L_08A47800;
    case 502u: goto L_08A47810;
    case 503u: goto L_08A47838;
    case 504u: goto L_08A47870;
    case 505u: goto L_08A478B8;
    case 506u: goto L_08A478C0;
    case 507u: goto L_08A478DC;
    case 508u: goto L_08A478EC;
    case 509u: goto L_08A478F4;
    case 510u: goto L_08A47900;
    case 511u: goto L_08A47910;
    case 512u: goto L_08A47918;
    case 513u: goto L_08A47944;
    case 514u: goto L_08A47954;
    case 515u: goto L_08A4795C;
    case 516u: goto L_08A47968;
    case 517u: goto L_08A47974;
    case 518u: goto L_08A4797C;
    case 519u: goto L_08A47988;
    case 520u: goto L_08A4798C;
    case 521u: goto L_08A479BC;
    case 522u: goto L_08A479CC;
    case 523u: goto L_08A479D4;
    case 524u: goto L_08A479E0;
    case 525u: goto L_08A479EC;
    case 526u: goto L_08A479F4;
    case 527u: goto L_08A47A00;
    case 528u: goto L_08A47A04;
    case 529u: goto L_08A47A1C;
    case 530u: goto L_08A47A28;
    case 531u: goto L_08A47A30;
    case 532u: goto L_08A47A44;
    case 533u: goto L_08A47A4C;
    case 534u: goto L_08A47A6C;
    case 535u: goto L_08A47A74;
    case 536u: goto L_08A47AA8;
    case 537u: goto L_08A47ABC;
    case 538u: goto L_08A47AC8;
    case 539u: goto L_08A47AD4;
    case 540u: goto L_08A47AE0;
    case 541u: goto L_08A47AEC;
    case 542u: goto L_08A47AF4;
    case 543u: goto L_08A47AFC;
    case 544u: goto L_08A47B08;
    case 545u: goto L_08A47B78;
    case 546u: goto L_08A47B98;
    case 547u: goto L_08A47BA8;
    case 548u: goto L_08A47BBC;
    case 549u: goto L_08A47BD0;
    case 550u: goto L_08A47BE8;
    case 551u: goto L_08A47BFC;
    case 552u: goto L_08A47C18;
    case 553u: goto L_08A47C2C;
    case 554u: goto L_08A47C40;
    case 555u: goto L_08A47C60;
    case 556u: goto L_08A47C6C;
    case 557u: goto L_08A47C74;
    case 558u: goto L_08A47C80;
    case 559u: goto L_08A47CC0;
    case 560u: goto L_08A47CDC;
    case 561u: goto L_08A47CE8;
    case 562u: goto L_08A47CF0;
    case 563u: goto L_08A47CFC;
    case 564u: goto L_08A47D14;
    case 565u: goto L_08A47D34;
    case 566u: goto L_08A47D44;
    case 567u: goto L_08A47D58;
    case 568u: goto L_08A47D6C;
    case 569u: goto L_08A47D80;
    case 570u: goto L_08A47D9C;
    case 571u: goto L_08A47DB4;
    case 572u: goto L_08A47DD4;
    case 573u: goto L_08A47DE0;
    case 574u: goto L_08A47DE8;
    case 575u: goto L_08A47DF4;
    case 576u: goto L_08A47DF8;
    case 577u: goto L_08A47E24;
    case 578u: goto L_08A47E30;
    case 579u: goto L_08A47E3C;
    case 580u: goto L_08A47E74;
    case 581u: goto L_08A47E90;
    case 582u: goto L_08A47E98;
    case 583u: goto L_08A47EF0;
    case 584u: goto L_08A47F00;
    case 585u: goto L_08A47F08;
    case 586u: goto L_08A47F14;
    case 587u: goto L_08A47F20;
    case 588u: goto L_08A47F28;
    case 589u: goto L_08A47F34;
    case 590u: goto L_08A47F38;
    case 591u: goto L_08A47F68;
    case 592u: goto L_08A47F78;
    case 593u: goto L_08A47F80;
    case 594u: goto L_08A47F8C;
    case 595u: goto L_08A47F98;
    case 596u: goto L_08A47FA0;
    case 597u: goto L_08A47FAC;
    case 598u: goto L_08A47FB0;
    case 599u: goto L_08A47FC8;
    case 600u: goto L_08A47FD4;
    case 601u: goto L_08A47FDC;
    case 602u: goto L_08A47FF0;
    case 603u: goto L_08A47FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A44000:
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A4400Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A4400Cu) goto L_08A4400C;
    return;
L_08A4400C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(73)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22244));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A44038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x08A44038u) goto L_08A44038;
    return;
L_08A44038:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4404Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4404Cu) goto L_08A4404C;
    return;
L_08A4404C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A44058u) goto L_08A44058;
    return;
L_08A44058:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4406Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4406Cu) goto L_08A4406C;
    return;
L_08A4406C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44080;
      }
      goto L_08A44078;
    }
L_08A44078:
    ctx.set_gpr(31, 0x08A44080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44080u) goto L_08A44080;
    return;
L_08A44080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44098u) goto L_08A44098;
    return;
L_08A44098:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A440B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A440B0u) goto L_08A440B0;
    return;
L_08A440B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A440BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A440BCu) goto L_08A440BC;
    return;
L_08A440BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A440C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A440C8u) goto L_08A440C8;
    return;
L_08A440C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A440DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A440DCu) goto L_08A440DC;
    return;
L_08A440DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A440F0;
      }
      goto L_08A440E8;
    }
L_08A440E8:
    ctx.set_gpr(31, 0x08A440F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A440F0u) goto L_08A440F0;
    return;
L_08A440F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44108u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44108u) goto L_08A44108;
    return;
L_08A44108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44120u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44120u) goto L_08A44120;
    return;
L_08A44120:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4412Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4412Cu) goto L_08A4412C;
    return;
L_08A4412C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A44138u) goto L_08A44138;
    return;
L_08A44138:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4414Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4414Cu) goto L_08A4414C;
    return;
L_08A4414C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44160;
      }
      goto L_08A44158;
    }
L_08A44158:
    ctx.set_gpr(31, 0x08A44160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44160u) goto L_08A44160;
    return;
L_08A44160:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44184u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44184u) goto L_08A44184;
    return;
L_08A44184:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A442CC;
      }
      goto L_08A44190;
    }
L_08A44190:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A441A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A441A4u) goto L_08A441A4;
    return;
L_08A441A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A441B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A441B0u) goto L_08A441B0;
    return;
L_08A441B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A441BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A441BCu) goto L_08A441BC;
    return;
L_08A441BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A441D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A441D0u) goto L_08A441D0;
    return;
L_08A441D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A441E4;
      }
      goto L_08A441DC;
    }
L_08A441DC:
    ctx.set_gpr(31, 0x08A441E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A441E4u) goto L_08A441E4;
    return;
L_08A441E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A441FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A441FCu) goto L_08A441FC;
    return;
L_08A441FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44214u) goto L_08A44214;
    return;
L_08A44214:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4422Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4422Cu) goto L_08A4422C;
    return;
L_08A4422C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A44238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44238u) goto L_08A44238;
    return;
L_08A44238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A44244u) goto L_08A44244;
    return;
L_08A44244:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44258u) goto L_08A44258;
    return;
L_08A44258:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4426C;
      }
      goto L_08A44264;
    }
L_08A44264:
    ctx.set_gpr(31, 0x08A4426Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4426Cu) goto L_08A4426C;
    return;
L_08A4426C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44290u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44290u) goto L_08A44290;
    return;
L_08A44290:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A442B8;
      }
      goto L_08A4429C;
    }
L_08A4429C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A442B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A442B0u) goto L_08A442B0;
    return;
L_08A442B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A442CC;
      }
      goto L_08A442B8;
    }
L_08A442B8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21820)));
    ctx.set_gpr(31, 0x08A442CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A442CCu) goto L_08A442CC;
    return;
L_08A442CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44460;
      }
      goto L_08A442D8;
    }
L_08A442D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A442E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A442E4u) goto L_08A442E4;
    return;
L_08A442E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A442F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A442F0u) goto L_08A442F0;
    return;
L_08A442F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44304u) goto L_08A44304;
    return;
L_08A44304:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44318;
      }
      goto L_08A44310;
    }
L_08A44310:
    ctx.set_gpr(31, 0x08A44318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44318u) goto L_08A44318;
    return;
L_08A44318:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44330u) goto L_08A44330;
    return;
L_08A44330:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44348u) goto L_08A44348;
    return;
L_08A44348:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44378;
      }
      goto L_08A44354;
    }
L_08A44354:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A44378;
      }
      goto L_08A44364;
    }
L_08A44364:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08A44370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44370u) goto L_08A44370;
    return;
L_08A44370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44400;
      }
      goto L_08A44378;
    }
L_08A44378:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A44384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44384u) goto L_08A44384;
    return;
L_08A44384:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A44390u) goto L_08A44390;
    return;
L_08A44390:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A443A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A443A4u) goto L_08A443A4;
    return;
L_08A443A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A443B8;
      }
      goto L_08A443B0;
    }
L_08A443B0:
    ctx.set_gpr(31, 0x08A443B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A443B8u) goto L_08A443B8;
    return;
L_08A443B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A443D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A443D0u) goto L_08A443D0;
    return;
L_08A443D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A443E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A443E8u) goto L_08A443E8;
    return;
L_08A443E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44400u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44400u) goto L_08A44400;
    return;
L_08A44400:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4440Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4440Cu) goto L_08A4440C;
    return;
L_08A4440C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A44418u) goto L_08A44418;
    return;
L_08A44418:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4442Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4442Cu) goto L_08A4442C;
    return;
L_08A4442C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44440;
      }
      goto L_08A44438;
    }
L_08A44438:
    ctx.set_gpr(31, 0x08A44440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44440u) goto L_08A44440;
    return;
L_08A44440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44460u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44460u) goto L_08A44460;
    return;
L_08A44460:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A444C8;
      }
      goto L_08A444A4;
    }
L_08A444A4:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A444C4;
      }
      goto L_08A444BC;
    }
L_08A444BC:
    ctx.set_gpr(31, 0x08A444C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A444C4u) goto L_08A444C4;
    return;
L_08A444C4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A444C8;
L_08A444C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A444A4;
      }
      goto L_08A444D4;
    }
L_08A444D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A444F8;
      }
      goto L_08A444E4;
    }
L_08A444E4:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A444F8;
L_08A444F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A444E4;
      }
      goto L_08A44504;
    }
L_08A44504:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44540;
      }
      goto L_08A4451C;
    }
L_08A4451C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4453C;
      }
      goto L_08A44534;
    }
L_08A44534:
    ctx.set_gpr(31, 0x08A4453Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4453Cu) goto L_08A4453C;
    return;
L_08A4453C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A44540;
L_08A44540:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4451C;
      }
      goto L_08A4454C;
    }
L_08A4454C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44570;
      }
      goto L_08A4455C;
    }
L_08A4455C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A44570;
L_08A44570:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4455C;
      }
      goto L_08A4457C;
    }
L_08A4457C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A44594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44594u) goto L_08A44594;
    return;
L_08A44594:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A445A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A445A4u) goto L_08A445A4;
    return;
L_08A445A4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A445B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A445B4u) goto L_08A445B4;
    return;
L_08A445B4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A445C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A445C4u) goto L_08A445C4;
    return;
L_08A445C4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A445D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A445D4u) goto L_08A445D4;
    return;
L_08A445D4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A445E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A445E4u) goto L_08A445E4;
    return;
L_08A445E4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A445F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A445F4u) goto L_08A445F4;
    return;
L_08A445F4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A44604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44604u) goto L_08A44604;
    return;
L_08A44604:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A44614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44614u) goto L_08A44614;
    return;
L_08A44614:
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
L_08A44634:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4468C;
      }
      goto L_08A44678;
    }
L_08A44678:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4468Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4468Cu) goto L_08A4468C;
    return;
L_08A4468C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A446A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A446A4u) goto L_08A446A4;
    return;
L_08A446A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A446D0;
      }
      goto L_08A446B8;
    }
L_08A446B8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A446C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A446C8u) goto L_08A446C8;
    return;
L_08A446C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A448D0;
      }
      goto L_08A446D0;
    }
L_08A446D0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A446F0;
      }
      goto L_08A446DC;
    }
L_08A446DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A446F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A446F0u) goto L_08A446F0;
    return;
L_08A446F0:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A448A8;
      }
      goto L_08A446FC;
    }
L_08A446FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(30, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A447A8;
      }
      goto L_08A44728;
    }
L_08A44728:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A44768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A44768u) goto L_08A44768;
    return;
L_08A44768:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A44780;
      }
      goto L_08A44778;
    }
L_08A44778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A44780;
L_08A44780:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A44790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44790u) goto L_08A44790;
    return;
L_08A44790:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A447A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A447A4u) goto L_08A447A4;
    return;
L_08A447A4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A447A8;
L_08A447A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44728;
      }
      goto L_08A447B8;
    }
L_08A447B8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A447C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A447C8u) goto L_08A447C8;
    return;
L_08A447C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[30]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4489C;
      }
      goto L_08A447E8;
    }
L_08A447E8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A44824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A44824u) goto L_08A44824;
    return;
L_08A44824:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44860;
      }
      goto L_08A4484C;
    }
L_08A4484C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A44860;
      }
      goto L_08A44854;
    }
L_08A44854:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A44860u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44860u) goto L_08A44860;
    return;
L_08A44860:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4486Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4486Cu) goto L_08A4486C;
    return;
L_08A4486C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A44884;
      }
      goto L_08A4487C;
    }
L_08A4487C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A44884;
L_08A44884:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A44898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A44898u) goto L_08A44898;
    return;
L_08A44898:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A4489C;
L_08A4489C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A447E8;
      }
      goto L_08A448A4;
    }
L_08A448A4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A448A8;
L_08A448A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A446FC;
      }
      goto L_08A448B8;
    }
L_08A448B8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A448D0;
      }
      goto L_08A448C4;
    }
L_08A448C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A448D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A448D0u) goto L_08A448D0;
    return;
L_08A448D0:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A44920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44920u) goto L_08A44920;
    return;
L_08A44920:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A44938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44938u) goto L_08A44938;
    return;
L_08A44938:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44950;
      }
      goto L_08A44944;
    }
L_08A44944:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A44950u);
    // nop
    goto L_08A44B94;
L_08A44950:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A44984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44984u) goto L_08A44984;
    return;
L_08A44984:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4499C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A449AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A449C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A449C8u) goto L_08A449C8;
    return;
L_08A449C8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A449E0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A449F0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44A00:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44A10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44A38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44A38u) goto L_08A44A38;
    return;
L_08A44A38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44A50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44A50u) goto L_08A44A50;
    return;
L_08A44A50:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44A68u) goto L_08A44A68;
    return;
L_08A44A68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44B74;
      }
      goto L_08A44A7C;
    }
L_08A44A7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A44A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44A88u) goto L_08A44A88;
    return;
L_08A44A88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44A94u) goto L_08A44A94;
    return;
L_08A44A94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A44AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44AA8u) goto L_08A44AA8;
    return;
L_08A44AA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A44AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44AB8u) goto L_08A44AB8;
    return;
L_08A44AB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44AE0;
      }
      goto L_08A44AD4;
    }
L_08A44AD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A44AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A44AE0u) goto L_08A44AE0;
    return;
L_08A44AE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A44AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44AFCu) goto L_08A44AFC;
    return;
L_08A44AFC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44B30;
      }
      goto L_08A44B08;
    }
L_08A44B08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A44B14u);
    // nop
    goto L_08A44B94;
L_08A44B14:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44B30;
      }
      goto L_08A44B20;
    }
L_08A44B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A44B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 130u, 0x088D09C8u>(ctx, &aot_mem) && ctx.pc == 0x08A44B30u) goto L_08A44B30;
    return;
L_08A44B30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A44B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44B40u) goto L_08A44B40;
    return;
L_08A44B40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A44B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44B54u) goto L_08A44B54;
    return;
L_08A44B54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A44B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44B64u) goto L_08A44B64;
    return;
L_08A44B64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A44B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A44B74u) goto L_08A44B74;
    return;
L_08A44B74:
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
L_08A44B8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A44B94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C8C;
      }
      goto L_08A44BDC;
    }
L_08A44BDC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A44BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44BFCu) goto L_08A44BFC;
    return;
L_08A44BFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C88;
      }
      goto L_08A44C08;
    }
L_08A44C08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C1C;
      }
      goto L_08A44C14;
    }
L_08A44C14:
    ctx.set_gpr(31, 0x08A44C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44C1Cu) goto L_08A44C1C;
    return;
L_08A44C1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C30;
      }
      goto L_08A44C28;
    }
L_08A44C28:
    ctx.set_gpr(31, 0x08A44C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44C30u) goto L_08A44C30;
    return;
L_08A44C30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C44;
      }
      goto L_08A44C3C;
    }
L_08A44C3C:
    ctx.set_gpr(31, 0x08A44C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44C44u) goto L_08A44C44;
    return;
L_08A44C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C58;
      }
      goto L_08A44C50;
    }
L_08A44C50:
    ctx.set_gpr(31, 0x08A44C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44C58u) goto L_08A44C58;
    return;
L_08A44C58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C6C;
      }
      goto L_08A44C64;
    }
L_08A44C64:
    ctx.set_gpr(31, 0x08A44C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44C6Cu) goto L_08A44C6C;
    return;
L_08A44C6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44C80;
      }
      goto L_08A44C78;
    }
L_08A44C78:
    ctx.set_gpr(31, 0x08A44C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44C80u) goto L_08A44C80;
    return;
L_08A44C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A450A4;
      }
      goto L_08A44C88;
    }
L_08A44C88:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A44C8C;
L_08A44C8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44BDC;
      }
      goto L_08A44C98;
    }
L_08A44C98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44DE4;
      }
      goto L_08A44CA8;
    }
L_08A44CA8:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44DD8;
      }
      goto L_08A44CB4;
    }
L_08A44CB4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A44CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44CC0u) goto L_08A44CC0;
    return;
L_08A44CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x08A44CCCu) goto L_08A44CCC;
    return;
L_08A44CCC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A44CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 415u, 0x089A1BD8u>(ctx, &aot_mem) && ctx.pc == 0x08A44CF0u) goto L_08A44CF0;
    return;
L_08A44CF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44DB0;
      }
      goto L_08A44CF8;
    }
L_08A44CF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A44D94;
      }
      goto L_08A44D00;
    }
L_08A44D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44D14;
      }
      goto L_08A44D0C;
    }
L_08A44D0C:
    ctx.set_gpr(31, 0x08A44D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44D14u) goto L_08A44D14;
    return;
L_08A44D14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44D28;
      }
      goto L_08A44D20;
    }
L_08A44D20:
    ctx.set_gpr(31, 0x08A44D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44D28u) goto L_08A44D28;
    return;
L_08A44D28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44D3C;
      }
      goto L_08A44D34;
    }
L_08A44D34:
    ctx.set_gpr(31, 0x08A44D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44D3Cu) goto L_08A44D3C;
    return;
L_08A44D3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44D50;
      }
      goto L_08A44D48;
    }
L_08A44D48:
    ctx.set_gpr(31, 0x08A44D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44D50u) goto L_08A44D50;
    return;
L_08A44D50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44D64;
      }
      goto L_08A44D5C;
    }
L_08A44D5C:
    ctx.set_gpr(31, 0x08A44D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44D64u) goto L_08A44D64;
    return;
L_08A44D64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44D78;
      }
      goto L_08A44D70;
    }
L_08A44D70:
    ctx.set_gpr(31, 0x08A44D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44D78u) goto L_08A44D78;
    return;
L_08A44D78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44D8C;
      }
      goto L_08A44D84;
    }
L_08A44D84:
    ctx.set_gpr(31, 0x08A44D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44D8Cu) goto L_08A44D8C;
    return;
L_08A44D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A450A4;
      }
      goto L_08A44D94;
    }
L_08A44D94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44DE4;
      }
      goto L_08A44DA0;
    }
L_08A44DA0:
    ctx.set_gpr(31, 0x08A44DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44DA8u) goto L_08A44DA8;
    return;
L_08A44DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44DE4;
      }
      goto L_08A44DB0;
    }
L_08A44DB0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A44DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A44DC0u) goto L_08A44DC0;
    return;
L_08A44DC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44DD4;
      }
      goto L_08A44DCC;
    }
L_08A44DCC:
    ctx.set_gpr(31, 0x08A44DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A44DD4u) goto L_08A44DD4;
    return;
L_08A44DD4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A44DD8;
L_08A44DD8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44CB4;
      }
      goto L_08A44DE4;
    }
L_08A44DE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A44E38;
      }
      goto L_08A44E30;
    }
L_08A44E30:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08A44E38;
L_08A44E38:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(21, ctx.lo);
    ctx.set_gpr(31, 0x08A44E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44E50u) goto L_08A44E50;
    return;
L_08A44E50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A44E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A44E5Cu) goto L_08A44E5C;
    return;
L_08A44E5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A44E74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A44E74u) goto L_08A44E74;
    return;
L_08A44E74:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A44E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A44E8Cu) goto L_08A44E8C;
    return;
L_08A44E8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A44EC0u);
    // nop
    goto L_08A450CC;
L_08A44EC0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A44ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44ECCu) goto L_08A44ECC;
    return;
L_08A44ECC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x08A44ED8u) goto L_08A44ED8;
    return;
L_08A44ED8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22272));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44EF8;
      }
      goto L_08A44EEC;
    }
L_08A44EEC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44F48;
      }
      goto L_08A44EF8;
    }
L_08A44EF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44F30;
      }
      goto L_08A44F08;
    }
L_08A44F08:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A44F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A44F14u) goto L_08A44F14;
    return;
L_08A44F14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44F28;
      }
      goto L_08A44F1C;
    }
L_08A44F1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A44F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A44F28u) goto L_08A44F28;
    return;
L_08A44F28:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A44F30;
L_08A44F30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22272));
    ctx.set_gpr(31, 0x08A44F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A44F48u) goto L_08A44F48;
    return;
L_08A44F48:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A44F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 139u, 0x089A0894u>(ctx, &aot_mem) && ctx.pc == 0x08A44F5Cu) goto L_08A44F5C;
    return;
L_08A44F5C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44F88;
      }
      goto L_08A44F6C;
    }
L_08A44F6C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44F88;
      }
      goto L_08A44F84;
    }
L_08A44F84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A44F88;
L_08A44F88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A44FB4;
      }
      goto L_08A44F90;
    }
L_08A44F90:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A44FB4;
      }
      goto L_08A44FA8;
    }
L_08A44FA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A44FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44FB4u) goto L_08A44FB4;
    return;
L_08A44FB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A44FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 255u, 0x089A508Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44FD4u) goto L_08A44FD4;
    return;
L_08A44FD4:
    ctx.set_gpr(31, 0x08A44FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A44FDCu) goto L_08A44FDC;
    return;
L_08A44FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A44FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A44FE8u) goto L_08A44FE8;
    return;
L_08A44FE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A45000u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A45000u) goto L_08A45000;
    return;
L_08A45000:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A45014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 12u, 0x088D00D4u>(ctx, &aot_mem) && ctx.pc == 0x08A45014u) goto L_08A45014;
    return;
L_08A45014:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4502C;
      }
      goto L_08A45024;
    }
L_08A45024:
    ctx.set_gpr(31, 0x08A4502Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4502Cu) goto L_08A4502C;
    return;
L_08A4502C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45040;
      }
      goto L_08A45038;
    }
L_08A45038:
    ctx.set_gpr(31, 0x08A45040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A45040u) goto L_08A45040;
    return;
L_08A45040:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45054;
      }
      goto L_08A4504C;
    }
L_08A4504C:
    ctx.set_gpr(31, 0x08A45054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A45054u) goto L_08A45054;
    return;
L_08A45054:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45068;
      }
      goto L_08A45060;
    }
L_08A45060:
    ctx.set_gpr(31, 0x08A45068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A45068u) goto L_08A45068;
    return;
L_08A45068:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4507C;
      }
      goto L_08A45074;
    }
L_08A45074:
    ctx.set_gpr(31, 0x08A4507Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4507Cu) goto L_08A4507C;
    return;
L_08A4507C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45090;
      }
      goto L_08A45088;
    }
L_08A45088:
    ctx.set_gpr(31, 0x08A45090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A45090u) goto L_08A45090;
    return;
L_08A45090:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A450A4;
      }
      goto L_08A4509C;
    }
L_08A4509C:
    ctx.set_gpr(31, 0x08A450A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A450A4u) goto L_08A450A4;
    return;
L_08A450A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A450CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A45138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45138u) goto L_08A45138;
    return;
L_08A45138:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A45144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A45144u) goto L_08A45144;
    return;
L_08A45144:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4515Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4515Cu) goto L_08A4515C;
    return;
L_08A4515C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A45174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A45174u) goto L_08A45174;
    return;
L_08A45174:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45378;
      }
      goto L_08A45180;
    }
L_08A45180:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45368;
      }
      goto L_08A451BC;
    }
L_08A451BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[3];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45364;
      }
      goto L_08A45210;
    }
L_08A45210:
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4525C;
      }
      goto L_08A45234;
    }
L_08A45234:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A4525C;
L_08A4525C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45234;
      }
      goto L_08A45268;
    }
L_08A45268:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(22, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[22]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A452A4u);
    // nop
    goto L_08A45644;
L_08A452A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A452C4;
      }
      goto L_08A452B8;
    }
L_08A452B8:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45330;
      }
      goto L_08A452C4;
    }
L_08A452C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A452D8;
      }
      goto L_08A452CC;
    }
L_08A452CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45330;
      }
      goto L_08A452D8;
    }
L_08A452D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A452F0;
      }
      goto L_08A452E4;
    }
L_08A452E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45330;
      }
      goto L_08A452F0;
    }
L_08A452F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A45308;
      }
      goto L_08A452FC;
    }
L_08A452FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45330;
      }
      goto L_08A45308;
    }
L_08A45308:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A45320;
      }
      goto L_08A45314;
    }
L_08A45314:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45330;
      }
      goto L_08A45320;
    }
L_08A45320:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A45330;
      }
      goto L_08A4532C;
    }
L_08A4532C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_08A45330;
L_08A45330:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45350;
      }
      goto L_08A45338;
    }
L_08A45338:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45364;
      }
      goto L_08A45350;
    }
L_08A45350:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A45364u);
    // nop
    goto L_08A457F4;
L_08A45364:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A45368;
L_08A45368:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A451BC;
      }
      goto L_08A45374;
    }
L_08A45374:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A45378;
L_08A45378:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45180;
      }
      goto L_08A45384;
    }
L_08A45384:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A455D4;
      }
      goto L_08A45390;
    }
L_08A45390:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A455C4;
      }
      goto L_08A4539C;
    }
L_08A4539C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(22, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A455C0;
      }
      goto L_08A453C8;
    }
L_08A453C8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A45434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A45434u) goto L_08A45434;
    return;
L_08A45434:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45500;
      }
      goto L_08A45444;
    }
L_08A45444:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A454FC;
      }
      goto L_08A4545C;
    }
L_08A4545C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[19]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A454FC;
      }
      goto L_08A45470;
    }
L_08A45470:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.hi);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A454FC;
      }
      goto L_08A45488;
    }
L_08A45488:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A454F0;
      }
      goto L_08A45498;
    }
L_08A45498:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A454C0;
      }
      goto L_08A454B0;
    }
L_08A454B0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A454D8;
      }
      goto L_08A454C0;
    }
L_08A454C0:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A454D8;
L_08A454D8:
    ctx.set_gpr(5, ctx.gpr[7] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A454F0;
L_08A454F0:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45498;
      }
      goto L_08A454FC;
    }
L_08A454FC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A45500;
L_08A45500:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45444;
      }
      goto L_08A4550C;
    }
L_08A4550C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A455C0;
      }
      goto L_08A45514;
    }
L_08A45514:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45540;
      }
      goto L_08A45520;
    }
L_08A45520:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A45540;
L_08A45540:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45520;
      }
      goto L_08A4554C;
    }
L_08A4554C:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A455B4;
      }
      goto L_08A45558;
    }
L_08A45558:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4558C;
      }
      goto L_08A4557C;
    }
L_08A4557C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A455A0;
      }
      goto L_08A4558C;
    }
L_08A4558C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08A455A0;
L_08A455A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A455B4;
L_08A455B4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45558;
      }
      goto L_08A455C0;
    }
L_08A455C0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A455C4;
L_08A455C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4539C;
      }
      goto L_08A455D0;
    }
L_08A455D0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A455D4;
L_08A455D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45390;
      }
      goto L_08A455E0;
    }
L_08A455E0:
    ctx.set_gpr(31, 0x08A455E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A455E8u) goto L_08A455E8;
    return;
L_08A455E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A455F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A455F4u) goto L_08A455F4;
    return;
L_08A455F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4560Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4560Cu) goto L_08A4560C;
    return;
L_08A4560C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A45644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A456A8;
      }
      goto L_08A45670;
    }
L_08A45670:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A456A4;
      }
      goto L_08A45694;
    }
L_08A45694:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A456A4;
L_08A456A4:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A456A8;
L_08A456A8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45670;
      }
      goto L_08A456B4;
    }
L_08A456B4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45720;
      }
      goto L_08A456CC;
    }
L_08A456CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45720;
      }
      goto L_08A456E0;
    }
L_08A456E0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45704;
      }
      goto L_08A456F8;
    }
L_08A456F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A45704;
    }
L_08A45704:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A45714;
    }
L_08A45714:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A45720;
    }
L_08A45720:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45788;
      }
      goto L_08A45734;
    }
L_08A45734:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45788;
      }
      goto L_08A45748;
    }
L_08A45748:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4576C;
      }
      goto L_08A45760;
    }
L_08A45760:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A4576C;
    }
L_08A4576C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A4577C;
    }
L_08A4577C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A45788;
    }
L_08A45788:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A457A0;
    }
L_08A457A0:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A457B0;
    }
L_08A457B0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A457D4;
      }
      goto L_08A457C8;
    }
L_08A457C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A457D4;
    }
L_08A457D4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A457E8;
      }
      goto L_08A457E4;
    }
L_08A457E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    goto L_08A457E8;
L_08A457E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A457F4:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45824;
      }
      goto L_08A45818;
    }
L_08A45818:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45940;
      }
      goto L_08A45824;
    }
L_08A45824:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) && ctx.fpr[0] == ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45868;
      }
      goto L_08A4583C;
    }
L_08A4583C:
    ctx.set_gpr(5, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[2];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A45868;
L_08A45868:
    ctx.set_gpr(5, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22284)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22284)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22284)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45908;
      }
      goto L_08A458E4;
    }
L_08A458E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(12, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45920;
      }
      goto L_08A45908;
    }
L_08A45908:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(12, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A45920;
L_08A45920:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(13, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45C04;
      }
      goto L_08A45940;
    }
L_08A45940:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45958;
      }
      goto L_08A4594C;
    }
L_08A4594C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45AD4;
      }
      goto L_08A45958;
    }
L_08A45958:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A459A0;
      }
      goto L_08A45970;
    }
L_08A45970:
    ctx.set_gpr(5, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A459A0;
L_08A459A0:
    ctx.set_gpr(5, 49024u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A459E0;
      }
      goto L_08A459D4;
    }
L_08A459D4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A459E0;
L_08A459E0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22288)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22288)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22288)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45A64;
      }
      goto L_08A45A40;
    }
L_08A45A40:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(13, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45A7C;
      }
      goto L_08A45A64;
    }
L_08A45A64:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(13, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A45A7C;
L_08A45A7C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45AB4;
      }
      goto L_08A45A88;
    }
L_08A45A88:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(12, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45C04;
      }
      goto L_08A45AB4;
    }
L_08A45AB4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(12, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45C04;
      }
      goto L_08A45AD4;
    }
L_08A45AD4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45AEC;
      }
      goto L_08A45AE0;
    }
L_08A45AE0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45C04;
      }
      goto L_08A45AEC;
    }
L_08A45AEC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A45B34;
      }
      goto L_08A45B04;
    }
L_08A45B04:
    ctx.set_gpr(5, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A45B34;
L_08A45B34:
    ctx.set_gpr(5, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22292)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22292)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22292)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A45BD4;
      }
      goto L_08A45BB0;
    }
L_08A45BB0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(13, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45BEC;
      }
      goto L_08A45BD4;
    }
L_08A45BD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(13, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A45BEC;
L_08A45BEC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(12, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A45C04;
L_08A45C04:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[13] + ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45C3C;
      }
      goto L_08A45C28;
    }
L_08A45C28:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A45C3C;
L_08A45C3C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45C28;
      }
      goto L_08A45C48;
    }
L_08A45C48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A45C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21776)));
    ctx.set_gpr(31, 0x08A45C6Cu);
    // nop
    goto L_08A45F78;
L_08A45C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A45C7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A45C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A45C8Cu) goto L_08A45C8C;
    return;
L_08A45C8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A45C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A45C98u) goto L_08A45C98;
    return;
L_08A45C98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A45CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 362u, 0x08A0DE90u>(ctx, &aot_mem) && ctx.pc == 0x08A45CA4u) goto L_08A45CA4;
    return;
L_08A45CA4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21776), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A45CBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21776)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45CF8;
      }
      goto L_08A45CD4;
    }
L_08A45CD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45CF8;
      }
      goto L_08A45CF0;
    }
L_08A45CF0:
    ctx.set_gpr(31, 0x08A45CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A45CF8u) goto L_08A45CF8;
    return;
L_08A45CF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A45D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A45D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 419u, 0x08A364D4u>(ctx, &aot_mem) && ctx.pc == 0x08A45D20u) goto L_08A45D20;
    return;
L_08A45D20:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(564), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(568), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A45D3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A45D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 376u, 0x08A36134u>(ctx, &aot_mem) && ctx.pc == 0x08A45D5Cu) goto L_08A45D5C;
    return;
L_08A45D5C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A45F4C;
      }
      goto L_08A45D64;
    }
L_08A45D64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A45D88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A45D88u) goto L_08A45D88;
    return;
L_08A45D88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45DBCu) goto L_08A45DBC;
    return;
L_08A45DBC:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45DE0u) goto L_08A45DE0;
    return;
L_08A45DE0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45E04u) goto L_08A45E04;
    return;
L_08A45E04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45E28u) goto L_08A45E28;
    return;
L_08A45E28:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45E4Cu) goto L_08A45E4C;
    return;
L_08A45E4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45E70u) goto L_08A45E70;
    return;
L_08A45E70:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45E98u) goto L_08A45E98;
    return;
L_08A45E98:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45EBCu) goto L_08A45EBC;
    return;
L_08A45EBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45EE0u) goto L_08A45EE0;
    return;
L_08A45EE0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45F04u) goto L_08A45F04;
    return;
L_08A45F04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45F28u) goto L_08A45F28;
    return;
L_08A45F28:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x08A45F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45F4Cu) goto L_08A45F4C;
    return;
L_08A45F4C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21776)));
    ctx.set_gpr(31, 0x08A45F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A45F60u) goto L_08A45F60;
    return;
L_08A45F60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A45F78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A45F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 361u, 0x08A35E48u>(ctx, &aot_mem) && ctx.pc == 0x08A45F98u) goto L_08A45F98;
    return;
L_08A45F98:
    ctx.set_gpr(31, 0x08A45FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 474u, 0x08A125B4u>(ctx, &aot_mem) && ctx.pc == 0x08A45FA0u) goto L_08A45FA0;
    return;
L_08A45FA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A45FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45FB0u) goto L_08A45FB0;
    return;
L_08A45FB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A45FD0;
      }
      goto L_08A45FB8;
    }
L_08A45FB8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32316));
    ctx.set_gpr(31, 0x08A45FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A45FD0u) goto L_08A45FD0;
    return;
L_08A45FD0:
    ctx.set_gpr(31, 0x08A45FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 318u, 0x08A118A8u>(ctx, &aot_mem) && ctx.pc == 0x08A45FD8u) goto L_08A45FD8;
    return;
L_08A45FD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A45FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A45FE8u) goto L_08A45FE8;
    return;
L_08A45FE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46008;
      }
      goto L_08A45FF0;
    }
L_08A45FF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30692));
    ctx.set_gpr(31, 0x08A46008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A46008u) goto L_08A46008;
    return;
L_08A46008:
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
L_08A46020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46048;
      }
      goto L_08A46038;
    }
L_08A46038:
    ctx.set_gpr(2, 2212u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30776));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46088;
      }
      goto L_08A46048;
    }
L_08A46048:
    ctx.set_gpr(2, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46064;
      }
      goto L_08A46054;
    }
L_08A46054:
    ctx.set_gpr(2, 2212u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32316));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46088;
      }
      goto L_08A46064;
    }
L_08A46064:
    ctx.set_gpr(2, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46080;
      }
      goto L_08A46070;
    }
L_08A46070:
    ctx.set_gpr(2, 2213u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31880));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46088;
      }
      goto L_08A46080;
    }
L_08A46080:
    ctx.set_gpr(2, 2213u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30824));
    goto L_08A46088;
L_08A46088:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22296)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4614C;
      }
      goto L_08A46098;
    }
L_08A46098:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4612C;
      }
      goto L_08A460A4;
    }
L_08A460A4:
    ctx.set_gpr(7, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2212u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(30776));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A460F4;
      }
      goto L_08A460C4;
    }
L_08A460C4:
    ctx.set_gpr(3, 2212u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32316));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A460F4;
      }
      goto L_08A460D4;
    }
L_08A460D4:
    ctx.set_gpr(3, 2213u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-31880));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A460F4;
      }
      goto L_08A460E4;
    }
L_08A460E4:
    ctx.set_gpr(3, 2213u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-30824));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A46128;
      }
      goto L_08A460F4;
    }
L_08A460F4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21776)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46128;
      }
      goto L_08A46108;
    }
L_08A46108:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A46128;
      }
      goto L_08A46110;
    }
L_08A46110:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46128;
      }
      goto L_08A4611C;
    }
L_08A4611C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A46128;
L_08A46128:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A4612C;
L_08A4612C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21776)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A460A4;
      }
      goto L_08A46144;
    }
L_08A46144:
    ctx.set_gpr(3, 2229u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(22296), ctx.gpr[2]);
    goto L_08A4614C;
L_08A4614C:
    ctx.set_gpr(31, 0x08A46154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 491u, 0x08A36A94u>(ctx, &aot_mem) && ctx.pc == 0x08A46154u) goto L_08A46154;
    return;
L_08A46154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A46174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 522u, 0x08A36D94u>(ctx, &aot_mem) && ctx.pc == 0x08A46174u) goto L_08A46174;
    return;
L_08A46174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_fpr_bits(23, ctx.fpr_bits(13));
    ctx.set_fpr_bits(22, ctx.fpr_bits(14));
    ctx.set_fpr_bits(21, ctx.fpr_bits(15));
    ctx.set_fpr_bits(20, ctx.fpr_bits(16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A461E0;
      }
      goto L_08A461C8;
    }
L_08A461C8:
    ctx.set_gpr(31, 0x08A461D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 384u, 0x089BE350u>(ctx, &aot_mem) && ctx.pc == 0x08A461D0u) goto L_08A461D0;
    return;
L_08A461D0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A461E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A461E0u) goto L_08A461E0;
    return;
L_08A461E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4624C;
      }
      goto L_08A461EC;
    }
L_08A461EC:
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_fpr_bits(14, ctx.fpr_bits(22));
    ctx.set_fpr_bits(15, ctx.fpr_bits(21));
    ctx.set_fpr_bits(16, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A46210u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A46210u) goto L_08A46210;
    return;
L_08A46210:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(31, 0x08A46224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x08A46224u) goto L_08A46224;
    return;
L_08A46224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08A46238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x08A46238u) goto L_08A46238;
    return;
L_08A46238:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(31, 0x08A4624Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x08A4624Cu) goto L_08A4624C;
    return;
L_08A4624C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A46274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A4628Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 404u, 0x08A36344u>(ctx, &aot_mem) && ctx.pc == 0x08A4628Cu) goto L_08A4628C;
    return;
L_08A4628C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A462AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A462C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 406u, 0x08A36368u>(ctx, &aot_mem) && ctx.pc == 0x08A462C4u) goto L_08A462C4;
    return;
L_08A462C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A462E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_fpr_bits(23, ctx.fpr_bits(13));
    ctx.set_fpr_bits(22, ctx.fpr_bits(14));
    ctx.set_fpr_bits(21, ctx.fpr_bits(15));
    ctx.set_fpr_bits(20, ctx.fpr_bits(16));
    ctx.set_gpr(31, 0x08A46324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 408u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A46324u) goto L_08A46324;
    return;
L_08A46324:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_fpr_bits(14, ctx.fpr_bits(22));
    ctx.set_fpr_bits(15, ctx.fpr_bits(21));
    ctx.set_fpr_bits(16, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A46344u);
    // nop
    goto L_08A46184;
L_08A46344:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4636C:
    ctx.set_vfpu_scalar_bits(4u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(36u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits(68u, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_value, 100u, 1u); }
    ctx.set_vfpu_scalar_bits(5u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(37u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits(69u, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits(0u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(32u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits(64u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits(96u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits(1u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits(33u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_vfpu_scalar_bits(65u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits(97u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 5u, 3u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 4u, 3u, 1u);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 5u, 3u); }
    ctx.set_vfpu_scalar_bits(2u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits(34u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits(66u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits(98u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.set_vfpu_scalar_bits(3u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.set_vfpu_scalar_bits(35u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_vfpu_scalar_bits(67u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.set_vfpu_scalar_bits(99u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.execute_vfpu_vscl(8u, 0u, 5u, 4u);
    ctx.execute_vfpu_vscl(9u, 1u, 37u, 4u);
    ctx.execute_vfpu_vscl(10u, 2u, 69u, 4u);
    ctx.execute_vfpu_vdot(12u, 32u, 4u, 4u);
    ctx.execute_vfpu_vdot(44u, 33u, 4u, 4u);
    ctx.execute_vfpu_vdot(76u, 34u, 4u, 4u);
    ctx.execute_vfpu_vdot(108u, 35u, 4u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 12u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 10u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 13u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 12u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 9u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 14u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 12u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 8u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 16u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 13u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 9u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 15u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 13u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 8u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 17u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 14u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 8u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 18u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 15u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 8u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 19u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 47u, 4u); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 51u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 44u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 20u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 48u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 21u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 44u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 22u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 48u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 23u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 45u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 24u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 49u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 25u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 45u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 26u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 49u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 27u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 46u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 28u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 50u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 29u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 47u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 46u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 30u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 51u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 50u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 31u, 4u); }
    ctx.execute_vfpu_vminmax(0u, 52u, 53u, 4u, false);
    ctx.execute_vfpu_vminmax(4u, 52u, 53u, 4u, true);
    ctx.execute_vfpu_vminmax(1u, 56u, 57u, 4u, false);
    ctx.execute_vfpu_vminmax(5u, 56u, 57u, 4u, true);
    ctx.execute_vfpu_vminmax(2u, 60u, 61u, 4u, false);
    ctx.execute_vfpu_vminmax(6u, 60u, 61u, 4u, true);
    ctx.execute_vfpu_vminmax(0u, 0u, 54u, 4u, false);
    ctx.execute_vfpu_vminmax(4u, 4u, 54u, 4u, true);
    ctx.execute_vfpu_vminmax(1u, 1u, 58u, 4u, false);
    ctx.execute_vfpu_vminmax(5u, 5u, 58u, 4u, true);
    ctx.execute_vfpu_vminmax(2u, 2u, 62u, 4u, false);
    ctx.execute_vfpu_vminmax(6u, 6u, 62u, 4u, true);
    ctx.execute_vfpu_vminmax(0u, 0u, 55u, 4u, false);
    ctx.execute_vfpu_vminmax(4u, 4u, 55u, 4u, true);
    ctx.execute_vfpu_vminmax(1u, 1u, 59u, 4u, false);
    ctx.execute_vfpu_vminmax(5u, 5u, 59u, 4u, true);
    ctx.execute_vfpu_vminmax(2u, 2u, 63u, 4u, false);
    ctx.execute_vfpu_vminmax(6u, 6u, 63u, 4u, true);
    ctx.execute_vfpu_vminmax(32u, 32u, 33u, 3u, false);
    ctx.execute_vfpu_vminmax(34u, 34u, 35u, 3u, false);
    ctx.execute_vfpu_vminmax(36u, 36u, 37u, 3u, true);
    ctx.execute_vfpu_vminmax(38u, 38u, 39u, 3u, true);
    ctx.execute_vfpu_vminmax(32u, 32u, 34u, 3u, true);
    ctx.execute_vfpu_vminmax(36u, 36u, 38u, 3u, true);
    ctx.execute_vfpu_vminmax(8u, 0u, 1u, 1u, true);
    ctx.execute_vfpu_vminmax(40u, 4u, 5u, 1u, true);
    ctx.execute_vfpu_vminmax(8u, 8u, 2u, 1u, true);
    ctx.execute_vfpu_vminmax(40u, 40u, 6u, 1u, true);
    rt.unsupported(0x08A464ACu, 0x20080001u, "unknown not lowered yet"); return;
L_08A464C4:
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08A464D8;
      }
      goto L_08A464CC;
    }
L_08A464CC:
    rt.unsupported(0x08A464CCu, 0x20080002u, "unknown not lowered yet"); return;
L_08A464D8:
    rt.unsupported(0x08A464D8u, 0x20080000u, "unknown not lowered yet"); return;
L_08A464DC:
    ctx.set_gpr(2, ctx.gpr[8] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A464E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[19] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[19];
    ctx.fpr[18] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[18];
    ctx.fpr[17] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[17];
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(16, 0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(26, 0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(25, 0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(31, 0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(30, 0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[11] + ctx.fpr[8];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[5] + ctx.fpr[8];
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[5] + ctx.fpr[8];
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[8] + ctx.fpr[5];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[4] + ctx.fpr[5];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[5] + ctx.fpr[4];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.fpr[21] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[11] = ctx.fpr[14] + ctx.fpr[31];
    ctx.fpr[10] = ctx.fpr[13] + ctx.fpr[30];
    ctx.fpr[9] = ctx.fpr[12] + ctx.fpr[23];
    ctx.fpr[20] = ctx.fpr[21] + ctx.fpr[22];
    ctx.fpr[8] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[7] = ctx.fpr[13] + ctx.fpr[25];
    ctx.fpr[6] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[19] = ctx.fpr[21] + ctx.fpr[15];
    ctx.fpr[5] = ctx.fpr[31] + ctx.fpr[8];
    ctx.fpr[4] = ctx.fpr[30] + ctx.fpr[7];
    ctx.fpr[3] = ctx.fpr[23] + ctx.fpr[6];
    ctx.fpr[18] = ctx.fpr[22] + ctx.fpr[19];
    ctx.fpr[2] = ctx.fpr[14] + ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[13] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[17] = ctx.fpr[21] + ctx.fpr[16];
    ctx.fpr[29] = ctx.fpr[31] + ctx.fpr[2];
    ctx.fpr[28] = ctx.fpr[30] + ctx.fpr[1];
    ctx.fpr[27] = ctx.fpr[23] + ctx.fpr[0];
    ctx.fpr[16] = ctx.fpr[22] + ctx.fpr[17];
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[2];
    ctx.fpr[25] = ctx.fpr[25] + ctx.fpr[1];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[0];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[31] = ctx.fpr[31] + ctx.fpr[26];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[25];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[23] = ctx.fpr[23] + ctx.fpr[24];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[15];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(103)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(107)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(111)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(115)));
    ctx.set_gpr(7, ctx.gpr[7] << 24u);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(7, 0u < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[7] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(119)));
    ctx.set_gpr(7, ctx.gpr[7] << 24u);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(7, 0u < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(123)));
    ctx.set_gpr(7, ctx.gpr[7] << 24u);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(7, 0u < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A46780;
      }
      goto L_08A46774;
    }
L_08A46774:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47500;
      }
      goto L_08A46780;
    }
L_08A46780:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    ctx.set_fpr_bits(23, ctx.fpr_bits(21) ^ 0x80000000u);
    ctx.fpr[21] = ctx.fpr[23] - ctx.fpr[14];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    ctx.fpr[21] = ctx.fpr[14] + ctx.fpr[23];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    ctx.fpr[21] = ctx.fpr[23] - ctx.fpr[13];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    ctx.fpr[21] = ctx.fpr[13] + ctx.fpr[23];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    ctx.fpr[21] = ctx.fpr[23] - ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    ctx.fpr[21] = ctx.fpr[12] + ctx.fpr[23];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 26u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(20) ^ 0x80000000u);
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[11];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[20] = ctx.fpr[11] + ctx.fpr[22];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 30u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[10];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 29u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[20] = ctx.fpr[10] + ctx.fpr[22];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 28u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[9];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 27u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[20] = ctx.fpr[9] + ctx.fpr[22];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 26u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(19) ^ 0x80000000u);
    ctx.fpr[19] = ctx.fpr[21] - ctx.fpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[19] = ctx.fpr[8] + ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 30u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[19] = ctx.fpr[21] - ctx.fpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 29u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[19] = ctx.fpr[7] + ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 28u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[19] = ctx.fpr[21] - ctx.fpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 27u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[19] = ctx.fpr[6] + ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 26u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(18) ^ 0x80000000u);
    ctx.fpr[18] = ctx.fpr[20] - ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[18] = ctx.fpr[5] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 30u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[18] = ctx.fpr[20] - ctx.fpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 29u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[18] = ctx.fpr[4] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 28u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[18] = ctx.fpr[20] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 27u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[18] = ctx.fpr[3] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 26u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_fpr_bits(19, ctx.fpr_bits(17) ^ 0x80000000u);
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[17] = ctx.fpr[2] + ctx.fpr[19];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 30u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 29u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[17] = ctx.fpr[1] + ctx.fpr[19];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 28u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 27u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[17] = ctx.fpr[0] + ctx.fpr[19];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 26u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_fpr_bits(18, ctx.fpr_bits(16) ^ 0x80000000u);
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[29];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[16] = ctx.fpr[29] + ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 30u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[28];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 29u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[16] = ctx.fpr[28] + ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 28u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[27];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 27u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[16] = ctx.fpr[27] + ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 26u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_fpr_bits(17, ctx.fpr_bits(15) ^ 0x80000000u);
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[26];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[15] = ctx.fpr[26] + ctx.fpr[17];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 30u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[25];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 29u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[15] = ctx.fpr[25] + ctx.fpr[17];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 28u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[24];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 27u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[17];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 26u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpr_bits(16, ctx.fpr_bits(15) ^ 0x80000000u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(31));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(31));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 30u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(30));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 29u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(30));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 28u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 27u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] >> 26u);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A46E20;
      }
      goto L_08A46E14;
    }
L_08A46E14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47500;
      }
      goto L_08A46E20;
    }
L_08A46E20:
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A46E38;
      }
      goto L_08A46E2C;
    }
L_08A46E2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47500;
      }
      goto L_08A46E38;
    }
L_08A46E38:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22300)));
    ctx.set_gpr(4, 16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = ctx.fpr[15] - ctx.fpr[30];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.set_fpr_bits(30, ctx.fpr_bits(30) & 0x7FFFFFFFu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32416)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[31] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[31] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A474FC;
      }
      goto L_08A46E78;
    }
L_08A46E78:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[23] - ctx.fpr[14];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    ctx.set_gpr(5, ctx.gpr[4] & 255u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[23];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] >> 30u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] & 255u);
    ctx.fpr[14] = ctx.fpr[23] - ctx.fpr[13];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] >> 29u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] & 255u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[23];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] & 255u);
    ctx.fpr[13] = ctx.fpr[23] - ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] >> 27u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] & 255u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[23];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] >> 26u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[22] - ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[9] = ctx.fpr[12] + ctx.fpr[22];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[9] = ctx.fpr[22] - ctx.fpr[11];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[9] = ctx.fpr[11] + ctx.fpr[22];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[9] = ctx.fpr[22] - ctx.fpr[10];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[22];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 26u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[21] - ctx.fpr[9];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[6] = ctx.fpr[9] + ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[6] = ctx.fpr[21] - ctx.fpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[6] = ctx.fpr[8] + ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[6] = ctx.fpr[21] - ctx.fpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[6] = ctx.fpr[7] + ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 26u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[20] - ctx.fpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[3] = ctx.fpr[6] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[3] = ctx.fpr[20] - ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[3] = ctx.fpr[5] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[3] = ctx.fpr[20] - ctx.fpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 26u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[19] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[19];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[19] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[19] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[19];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 26u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[29]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[27]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[18] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[18] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[18] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 26u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[17] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[17];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[17] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[17];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[17] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[17];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 26u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[16] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 30u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[16] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 29u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 28u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[16] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] >> 27u);
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 26u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A474FC;
      }
      goto L_08A474F0;
    }
L_08A474F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47500;
      }
      goto L_08A474FC;
    }
L_08A474FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A47500;
L_08A47500:
    ctx.fpr[31] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[29] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4753C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22300)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(1, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32416)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A47580;
      }
      goto L_08A47570;
    }
L_08A47570:
    ctx.set_gpr(31, 0x08A47578u);
    // nop
    goto L_08A4636C;
L_08A47578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47588;
      }
      goto L_08A47580;
    }
L_08A47580:
    ctx.set_gpr(31, 0x08A47588u);
    // nop
    goto L_08A464E8;
L_08A47588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A47608;
      }
      goto L_08A475F0;
    }
L_08A475F0:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47634;
      }
      goto L_08A47608;
    }
L_08A47608:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47630;
      }
      goto L_08A47614;
    }
L_08A47614:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47634;
      }
      goto L_08A47630;
    }
L_08A47630:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A47634;
L_08A47634:
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A47668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A47668u) goto L_08A47668;
    return;
L_08A47668:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A47678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 697u, 0x089F7E44u>(ctx, &aot_mem) && ctx.pc == 0x08A47678u) goto L_08A47678;
    return;
L_08A47678:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4768Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 675u, 0x089FF398u>(ctx, &aot_mem) && ctx.pc == 0x08A4768Cu) goto L_08A4768C;
    return;
L_08A4768C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A476A0;
      }
      goto L_08A47694;
    }
L_08A47694:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A476B0;
      }
      goto L_08A476A0;
    }
L_08A476A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A476B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 675u, 0x089FF398u>(ctx, &aot_mem) && ctx.pc == 0x08A476B0u) goto L_08A476B0;
    return;
L_08A476B0:
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
L_08A476CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A4775C;
      }
      goto L_08A47744;
    }
L_08A47744:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47788;
      }
      goto L_08A4775C;
    }
L_08A4775C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47784;
      }
      goto L_08A47768;
    }
L_08A47768:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47788;
      }
      goto L_08A47784;
    }
L_08A47784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A47788;
L_08A47788:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A47798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 13u, 0x089FC128u>(ctx, &aot_mem) && ctx.pc == 0x08A47798u) goto L_08A47798;
    return;
L_08A47798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A477A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 107u, 0x089FC808u>(ctx, &aot_mem) && ctx.pc == 0x08A477A8u) goto L_08A477A8;
    return;
L_08A477A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47800;
      }
      goto L_08A477B0;
    }
L_08A477B0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47800;
      }
      goto L_08A477BC;
    }
L_08A477BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(581)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A477F0;
      }
      goto L_08A477C8;
    }
L_08A477C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A477E8u);
    // nop
    goto L_08A47598;
L_08A477E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47810;
      }
      goto L_08A477F0;
    }
L_08A477F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A47800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 323u, 0x089F9620u>(ctx, &aot_mem) && ctx.pc == 0x08A47800u) goto L_08A47800;
    return;
L_08A47800:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    goto L_08A47810;
L_08A47810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47ABC;
      }
      goto L_08A47870;
    }
L_08A47870:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21796)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21800), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21796), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A478B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A478B8u) goto L_08A478B8;
    return;
L_08A478B8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A478F4;
      }
      goto L_08A478C0;
    }
L_08A478C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A478F4;
      }
      goto L_08A478DC;
    }
L_08A478DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A478ECu);
    // nop
    goto L_08A476CC;
L_08A478EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47ABC;
      }
      goto L_08A478F4;
    }
L_08A478F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(581)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47918;
      }
      goto L_08A47900;
    }
L_08A47900:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A47910u);
    // nop
    goto L_08A47598;
L_08A47910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47ABC;
      }
      goto L_08A47918;
    }
L_08A47918:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A47944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A47944u) goto L_08A47944;
    return;
L_08A47944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A47968;
      }
      goto L_08A47954;
    }
L_08A47954:
    ctx.set_gpr(31, 0x08A4795Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 146u, 0x08A38C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4795Cu) goto L_08A4795C;
    return;
L_08A4795C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4798C;
      }
      goto L_08A47968;
    }
L_08A47968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47988;
      }
      goto L_08A47974;
    }
L_08A47974:
    ctx.set_gpr(31, 0x08A4797Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4797Cu) goto L_08A4797C;
    return;
L_08A4797C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4798C;
      }
      goto L_08A47988;
    }
L_08A47988:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A4798C;
L_08A4798C:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A479BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A479BCu) goto L_08A479BC;
    return;
L_08A479BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A479E0;
      }
      goto L_08A479CC;
    }
L_08A479CC:
    ctx.set_gpr(31, 0x08A479D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 146u, 0x08A38C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A479D4u) goto L_08A479D4;
    return;
L_08A479D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47A04;
      }
      goto L_08A479E0;
    }
L_08A479E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47A00;
      }
      goto L_08A479EC;
    }
L_08A479EC:
    ctx.set_gpr(31, 0x08A479F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A479F4u) goto L_08A479F4;
    return;
L_08A479F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47A04;
      }
      goto L_08A47A00;
    }
L_08A47A00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A47A04;
L_08A47A04:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47A28;
      }
      goto L_08A47A1C;
    }
L_08A47A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A47A28;
L_08A47A28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A47A4C;
      }
      goto L_08A47A30;
    }
L_08A47A30:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(500));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A47A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A47A44u) goto L_08A47A44;
    return;
L_08A47A44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(564), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(568), ctx.gpr[20]);
    goto L_08A47A4C;
L_08A47A4C:
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A47A6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A47A6Cu) goto L_08A47A6C;
    return;
L_08A47A6C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A47AA8;
      }
      goto L_08A47A74;
    }
L_08A47A74:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A47AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A47AA8u) goto L_08A47AA8;
    return;
L_08A47AA8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(500));
    ctx.set_gpr(31, 0x08A47ABCu);
    // nop
    goto L_08A4753C;
L_08A47ABC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A47CFC;
      }
      goto L_08A47AC8;
    }
L_08A47AC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A47C80;
      }
      goto L_08A47AD4;
    }
L_08A47AD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A47B08;
      }
      goto L_08A47AE0;
    }
L_08A47AE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A47B08;
      }
      goto L_08A47AEC;
    }
L_08A47AEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47AFC;
      }
      goto L_08A47AF4;
    }
L_08A47AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF4;
      }
      goto L_08A47AFC;
    }
L_08A47AFC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF8;
      }
      goto L_08A47B08;
    }
L_08A47B08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21784)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21780)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21784), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21780), ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A47B78u);
    // nop
    goto L_08A47E30;
L_08A47B78:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A47B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A47B98u) goto L_08A47B98;
    return;
L_08A47B98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A47BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A47BA8u) goto L_08A47BA8;
    return;
L_08A47BA8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A47BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47BBCu) goto L_08A47BBC;
    return;
L_08A47BBC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A47BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A47BD0u) goto L_08A47BD0;
    return;
L_08A47BD0:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A47BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A47BE8u) goto L_08A47BE8;
    return;
L_08A47BE8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A47BFCu);
    // nop
    goto L_08A47E24;
L_08A47BFC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A47C18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A47C18u) goto L_08A47C18;
    return;
L_08A47C18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A47C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A47C2Cu) goto L_08A47C2C;
    return;
L_08A47C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x08A47C40u);
    // nop
    goto L_08A47E30;
L_08A47C40:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A47C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47C60u) goto L_08A47C60;
    return;
L_08A47C60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A47C74;
      }
      goto L_08A47C6C;
    }
L_08A47C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF8;
      }
      goto L_08A47C74;
    }
L_08A47C74:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF8;
      }
      goto L_08A47C80;
    }
L_08A47C80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788), ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A47CC0u);
    // nop
    goto L_08A47E24;
L_08A47CC0:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A47CDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A47CDCu) goto L_08A47CDC;
    return;
L_08A47CDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A47CF0;
      }
      goto L_08A47CE8;
    }
L_08A47CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF8;
      }
      goto L_08A47CF0;
    }
L_08A47CF0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF8;
      }
      goto L_08A47CFC;
    }
L_08A47CFC:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A47D14u);
    // nop
    goto L_08A47E30;
L_08A47D14:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A47D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A47D34u) goto L_08A47D34;
    return;
L_08A47D34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A47D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A47D44u) goto L_08A47D44;
    return;
L_08A47D44:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A47D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47D58u) goto L_08A47D58;
    return;
L_08A47D58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A47D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A47D6Cu) goto L_08A47D6C;
    return;
L_08A47D6C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A47D80u);
    // nop
    goto L_08A47E24;
L_08A47D80:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A47D9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A47D9Cu) goto L_08A47D9C;
    return;
L_08A47D9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x08A47DB4u);
    // nop
    goto L_08A47E30;
L_08A47DB4:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A47DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47DD4u) goto L_08A47DD4;
    return;
L_08A47DD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A47DE8;
      }
      goto L_08A47DE0;
    }
L_08A47DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF8;
      }
      goto L_08A47DE8;
    }
L_08A47DE8:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47DF8;
      }
      goto L_08A47DF4;
    }
L_08A47DF4:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A47DF8;
L_08A47DF8:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
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
L_08A47E24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47E30:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A47E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 3u, 0x08A48010u>(ctx, &aot_mem); return;
      }
      goto L_08A47E74;
    }
L_08A47E74:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A47E90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A47E90u) goto L_08A47E90;
    return;
L_08A47E90:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 3u, 0x08A48010u>(ctx, &aot_mem); return;
      }
      goto L_08A47E98;
    }
L_08A47E98:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21796)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21800), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21796), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A47EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A47EF0u) goto L_08A47EF0;
    return;
L_08A47EF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A47F14;
      }
      goto L_08A47F00;
    }
L_08A47F00:
    ctx.set_gpr(31, 0x08A47F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 146u, 0x08A38C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47F08u) goto L_08A47F08;
    return;
L_08A47F08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47F38;
      }
      goto L_08A47F14;
    }
L_08A47F14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47F34;
      }
      goto L_08A47F20;
    }
L_08A47F20:
    ctx.set_gpr(31, 0x08A47F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47F28u) goto L_08A47F28;
    return;
L_08A47F28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47F38;
      }
      goto L_08A47F34;
    }
L_08A47F34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A47F38;
L_08A47F38:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A47F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A47F68u) goto L_08A47F68;
    return;
L_08A47F68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A47F8C;
      }
      goto L_08A47F78;
    }
L_08A47F78:
    ctx.set_gpr(31, 0x08A47F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 146u, 0x08A38C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47F80u) goto L_08A47F80;
    return;
L_08A47F80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47FB0;
      }
      goto L_08A47F8C;
    }
L_08A47F8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47FAC;
      }
      goto L_08A47F98;
    }
L_08A47F98:
    ctx.set_gpr(31, 0x08A47FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A47FA0u) goto L_08A47FA0;
    return;
L_08A47FA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47FB0;
      }
      goto L_08A47FAC;
    }
L_08A47FAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A47FB0;
L_08A47FB0:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A47FD4;
      }
      goto L_08A47FC8;
    }
L_08A47FC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A47FD4;
L_08A47FD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A47FF8;
      }
      goto L_08A47FDC;
    }
L_08A47FDC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(500));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A47FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A47FF0u) goto L_08A47FF0;
    return;
L_08A47FF0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(564), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(568), ctx.gpr[20]);
    goto L_08A47FF8;
L_08A47FF8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.pc = 0x08A48000u; return;
}

void recomp_unit_0144(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0144_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_144(Runtime &runtime) {
    runtime.register_generated_unit(144u, 0x08A44000u, 16384u, &recomp_unit_0144, &recomp_unit_0144_entry);
    runtime.register_function(0x08A44000u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4400Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44038u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4404Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44058u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4406Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44078u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44080u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44098u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A440B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A440BCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A440C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A440DCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A440E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A440F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44108u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44120u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4412Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44138u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4414Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44158u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44160u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44184u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44190u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A441A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A441B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A441BCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A441D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A441DCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A441E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A441FCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44214u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4422Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44238u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44244u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44258u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44264u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4426Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44290u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4429Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A442B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A442B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A442CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A442D8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A442E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A442F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44304u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44310u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44318u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44330u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44348u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44354u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44364u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44370u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44378u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44384u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44390u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A443A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A443B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A443B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A443D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A443E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44400u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4440Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44418u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4442Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44438u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44440u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44460u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44474u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A444A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A444BCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A444C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A444C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A444D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A444E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A444F8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44504u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4451Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44534u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4453Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44540u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4454Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4455Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44570u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4457Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44594u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A445A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A445B4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A445C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A445D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A445E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A445F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44604u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44614u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44634u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44678u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4468Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A446A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A446B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A446C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A446D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A446DCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A446F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A446FCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44728u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44768u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44778u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44780u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44790u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A447A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A447A8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A447B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A447C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A447E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44824u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4484Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44854u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44860u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4486Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4487Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44884u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44898u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4489Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A448A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A448A8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A448B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A448C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A448D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44904u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44920u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44938u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44944u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44950u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44968u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44984u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4499Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A449ACu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A449C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A449E0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A449F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A00u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A10u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A38u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A50u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A68u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A7Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A88u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44A94u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44AA8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44AB8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44AD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44AE0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44AFCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B08u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B20u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B30u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B40u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B54u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B64u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B74u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B8Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44B94u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44BDCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44BFCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C08u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C1Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C30u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C3Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C44u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C50u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C58u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C64u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C6Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C78u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C80u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C88u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C8Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44C98u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44CA8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44CB4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44CC0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44CCCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44CF0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44CF8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D00u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D0Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D20u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D34u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D3Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D48u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D50u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D5Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D64u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D70u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D78u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D84u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D8Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44D94u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DA0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DA8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DB0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DC0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DCCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DD8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44DE4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44E30u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44E38u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44E50u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44E5Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44E74u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44E8Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44EC0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44ECCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44ED8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44EECu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44EF8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F08u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F1Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F30u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F48u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F5Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F6Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F84u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F88u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44F90u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44FA8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44FB4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44FD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44FDCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A44FE8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45000u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45014u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45024u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4502Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45038u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45040u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4504Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45054u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45060u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45068u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45074u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4507Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45088u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45090u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4509Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A450A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A450CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45138u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45144u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4515Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45174u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45180u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A451BCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45210u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45234u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4525Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45268u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452D8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A452FCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45308u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45314u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45320u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4532Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45330u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45338u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45350u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45364u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45368u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45374u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45378u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45384u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45390u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4539Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A453C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45434u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45444u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4545Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45470u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45488u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45498u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A454B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A454C0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A454D8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A454F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A454FCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45500u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4550Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45514u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45520u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45540u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4554Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45558u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4557Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4558Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455A0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455B4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455C0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455E0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A455F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4560Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45644u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45670u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45694u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A456A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A456A8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A456B4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A456CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A456E0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A456F8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45704u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45714u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45720u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45734u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45748u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45760u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4576Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4577Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45788u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A457A0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A457B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A457C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A457D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A457E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A457E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A457F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45818u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45824u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4583Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45868u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A458E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45908u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45920u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45940u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4594Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45958u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45970u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A459A0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A459D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A459E0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45A40u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45A64u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45A7Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45A88u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45AB4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45AD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45AE0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45AECu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45B04u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45B34u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45BB0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45BD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45BECu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C04u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C3Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C48u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C50u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C6Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C7Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C8Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45C98u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45CA4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45CBCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45CD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45CF0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45CF8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45D08u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45D20u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45D3Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45D5Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45D64u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45D88u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45DBCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45DE0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45E04u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45E28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45E4Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45E70u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45E98u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45EBCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45EE0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45F04u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45F28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45F4Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45F60u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45F78u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45F98u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45FA0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45FB0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45FB8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45FD0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45FD8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45FE8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A45FF0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46008u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46020u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46038u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46048u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46054u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46064u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46070u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46080u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46088u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46098u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A460A4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A460C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A460D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A460E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A460F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46108u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46110u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4611Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46128u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4612Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46144u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4614Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46154u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46164u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46174u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46184u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A461C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A461D0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A461E0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A461ECu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46210u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46224u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46238u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4624Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46274u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4628Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A462ACu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A462C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A462E4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46324u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46344u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4636Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A464C4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A464CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A464D8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A464DCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A464E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46774u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46780u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46E14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46E20u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46E2Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46E38u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A46E78u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A474F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A474FCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47500u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4753Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47570u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47578u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47580u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47588u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47598u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A475F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47608u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47614u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47630u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47634u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47668u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47678u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4768Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47694u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A476A0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A476B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A476CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47744u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4775Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47768u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47784u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47788u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47798u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A477A8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A477B0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A477BCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A477C8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A477E8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A477F0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47800u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47810u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47838u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47870u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A478B8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A478C0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A478DCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A478ECu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A478F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47900u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47910u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47918u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47944u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47954u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4795Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47968u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47974u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4797Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47988u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A4798Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A479BCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A479CCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A479D4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A479E0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A479ECu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A479F4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A00u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A04u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A1Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A30u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A44u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A4Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A6Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47A74u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47AA8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47ABCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47AC8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47AD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47AE0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47AECu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47AF4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47AFCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47B08u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47B78u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47B98u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47BA8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47BBCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47BD0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47BE8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47BFCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47C18u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47C2Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47C40u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47C60u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47C6Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47C74u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47C80u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47CC0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47CDCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47CE8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47CF0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47CFCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47D14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47D34u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47D44u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47D58u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47D6Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47D80u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47D9Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47DB4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47DD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47DE0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47DE8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47DF4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47DF8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47E24u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47E30u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47E3Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47E74u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47E90u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47E98u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47EF0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F00u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F08u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F14u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F20u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F28u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F34u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F38u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F68u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F78u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F80u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F8Cu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47F98u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FA0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FACu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FB0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FC8u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FD4u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FDCu, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FF0u, &recomp_unit_0144, "recomp_unit_0144");
    runtime.register_function(0x08A47FF8u, &recomp_unit_0144, "recomp_unit_0144");
}
} // namespace psprecomp
