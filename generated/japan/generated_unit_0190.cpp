#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0190[4091] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0,
    0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25,
    0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46,
    0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 55, 56, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 69, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0,
    86, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99,
    0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0,
    0, 111, 112, 0, 0, 113, 114, 0, 0, 115, 0, 0, 0, 116, 117, 0, 118, 119, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 124, 0, 125, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0,
    136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145,
    0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 168, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 217, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0,
    223, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 289, 0, 0, 290, 0, 0,
    0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0,
    0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388,
    0, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 399, 400, 0,
    0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0,
    406, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 414, 415, 0, 0, 416, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 421, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 431, 432,
    0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 447, 0,
    0, 448, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0,
    456, 0, 457, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 466, 467, 0, 0, 468,
    0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0,
    477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 482, 0,
    0, 0, 0, 483, 0, 0, 484, 485, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 490, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 494,
    0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0, 501, 0, 502, 0, 0, 0,
    503, 0, 504, 0, 0, 0, 505, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 510, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 514, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0,
    520, 0, 521, 0, 522, 0, 523, 524, 0, 0, 0, 525, 526, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 535, 536, 0, 537, 538, 0, 0, 0, 0, 0, 539, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 545, 546, 547, 0, 0,
    0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 552, 0, 0, 553, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 561,
    0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 572, 0, 573, 0, 0,
    574, 0, 0, 0, 575, 576, 577, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0,
    0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0,
    0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0,
    0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0,
    0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 622,
    0, 0, 623, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 634,
    0, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    641, 0, 0, 0, 642, 0, 643, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 647, 0, 648, 0, 0, 649, 0, 650, 0, 651, 0, 652, 0,
    0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 0, 664,
    0, 665, 0, 666, 0, 667, 0, 0, 668, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676, 0,
    677, 0, 678, 0, 0, 0, 679, 0, 680, 681, 682, 0, 683, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 690,
    691, 692, 0, 693, 0, 0, 694, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 706,
    0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0,
    718, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    733, 0, 0, 0, 734, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 739, 0, 740, 0, 0, 741, 0, 742, 0, 743, 0, 744,
    0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 748, 0, 749, 0, 0, 750, 0, 751, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0,
    0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 0, 760, 761, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0,
    767, 0, 768, 0, 769, 0, 770, 0, 0, 0, 771, 0, 772, 773, 774, 0, 775, 0, 0, 776, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 0, 780,
    781, 0, 0, 782, 783, 0, 784, 0, 785, 786, 0, 787, 0, 0, 788, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 794, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 0, 0,
    0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 805, 0, 0,
    0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 810, 0, 811, 0, 0,
    812, 0, 813, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0,
    0, 0, 0, 0, 820, 821, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823,
    0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 829, 0, 830,
};
void recomp_unit_0190_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AFC000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0190[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AFC000;
    case 2u: goto L_08AFC010;
    case 3u: goto L_08AFC018;
    case 4u: goto L_08AFC024;
    case 5u: goto L_08AFC060;
    case 6u: goto L_08AFC088;
    case 7u: goto L_08AFC0A8;
    case 8u: goto L_08AFC0B4;
    case 9u: goto L_08AFC0BC;
    case 10u: goto L_08AFC0C4;
    case 11u: goto L_08AFC0E4;
    case 12u: goto L_08AFC0F8;
    case 13u: goto L_08AFC108;
    case 14u: goto L_08AFC110;
    case 15u: goto L_08AFC120;
    case 16u: goto L_08AFC12C;
    case 17u: goto L_08AFC138;
    case 18u: goto L_08AFC140;
    case 19u: goto L_08AFC170;
    case 20u: goto L_08AFC1A0;
    case 21u: goto L_08AFC1D0;
    case 22u: goto L_08AFC1D8;
    case 23u: goto L_08AFC1E0;
    case 24u: goto L_08AFC1EC;
    case 25u: goto L_08AFC1FC;
    case 26u: goto L_08AFC208;
    case 27u: goto L_08AFC210;
    case 28u: goto L_08AFC21C;
    case 29u: goto L_08AFC22C;
    case 30u: goto L_08AFC23C;
    case 31u: goto L_08AFC244;
    case 32u: goto L_08AFC250;
    case 33u: goto L_08AFC260;
    case 34u: goto L_08AFC26C;
    case 35u: goto L_08AFC274;
    case 36u: goto L_08AFC280;
    case 37u: goto L_08AFC290;
    case 38u: goto L_08AFC2E0;
    case 39u: goto L_08AFC2E8;
    case 40u: goto L_08AFC2F4;
    case 41u: goto L_08AFC318;
    case 42u: goto L_08AFC320;
    case 43u: goto L_08AFC328;
    case 44u: goto L_08AFC334;
    case 45u: goto L_08AFC368;
    case 46u: goto L_08AFC37C;
    case 47u: goto L_08AFC384;
    case 48u: goto L_08AFC38C;
    case 49u: goto L_08AFC398;
    case 50u: goto L_08AFC3AC;
    case 51u: goto L_08AFC3B4;
    case 52u: goto L_08AFC3BC;
    case 53u: goto L_08AFC3C8;
    case 54u: goto L_08AFC3DC;
    case 55u: goto L_08AFC3E0;
    case 56u: goto L_08AFC3E4;
    case 57u: goto L_08AFC3E8;
    case 58u: goto L_08AFC418;
    case 59u: goto L_08AFC42C;
    case 60u: goto L_08AFC450;
    case 61u: goto L_08AFC454;
    case 62u: goto L_08AFC464;
    case 63u: goto L_08AFC478;
    case 64u: goto L_08AFC4A4;
    case 65u: goto L_08AFC4B8;
    case 66u: goto L_08AFC4E0;
    case 67u: goto L_08AFC4EC;
    case 68u: goto L_08AFC4F4;
    case 69u: goto L_08AFC4F8;
    case 70u: goto L_08AFC508;
    case 71u: goto L_08AFC51C;
    case 72u: goto L_08AFC528;
    case 73u: goto L_08AFC530;
    case 74u: goto L_08AFC54C;
    case 75u: goto L_08AFC55C;
    case 76u: goto L_08AFC578;
    case 77u: goto L_08AFC5B4;
    case 78u: goto L_08AFC5C8;
    case 79u: goto L_08AFC5F4;
    case 80u: goto L_08AFC608;
    case 81u: goto L_08AFC634;
    case 82u: goto L_08AFC644;
    case 83u: goto L_08AFC658;
    case 84u: goto L_08AFC66C;
    case 85u: goto L_08AFC678;
    case 86u: goto L_08AFC680;
    case 87u: goto L_08AFC690;
    case 88u: goto L_08AFC69C;
    case 89u: goto L_08AFC6A4;
    case 90u: goto L_08AFC6D4;
    case 91u: goto L_08AFC6DC;
    case 92u: goto L_08AFC6EC;
    case 93u: goto L_08AFC6F8;
    case 94u: goto L_08AFC708;
    case 95u: goto L_08AFC710;
    case 96u: goto L_08AFC730;
    case 97u: goto L_08AFC738;
    case 98u: goto L_08AFC768;
    case 99u: goto L_08AFC77C;
    case 100u: goto L_08AFC78C;
    case 101u: goto L_08AFC798;
    case 102u: goto L_08AFC7A0;
    case 103u: goto L_08AFC7A8;
    case 104u: goto L_08AFC7B4;
    case 105u: goto L_08AFC7BC;
    case 106u: goto L_08AFC7CC;
    case 107u: goto L_08AFC7D8;
    case 108u: goto L_08AFC7E0;
    case 109u: goto L_08AFC7F0;
    case 110u: goto L_08AFC7F8;
    case 111u: goto L_08AFC804;
    case 112u: goto L_08AFC808;
    case 113u: goto L_08AFC814;
    case 114u: goto L_08AFC818;
    case 115u: goto L_08AFC824;
    case 116u: goto L_08AFC834;
    case 117u: goto L_08AFC838;
    case 118u: goto L_08AFC840;
    case 119u: goto L_08AFC844;
    case 120u: goto L_08AFC84C;
    case 121u: goto L_08AFC854;
    case 122u: goto L_08AFC860;
    case 123u: goto L_08AFC86C;
    case 124u: goto L_08AFC870;
    case 125u: goto L_08AFC878;
    case 126u: goto L_08AFC880;
    case 127u: goto L_08AFC8A8;
    case 128u: goto L_08AFC8B4;
    case 129u: goto L_08AFC8C0;
    case 130u: goto L_08AFC8CC;
    case 131u: goto L_08AFC8D8;
    case 132u: goto L_08AFC8E0;
    case 133u: goto L_08AFC8E8;
    case 134u: goto L_08AFC8F0;
    case 135u: goto L_08AFC8F8;
    case 136u: goto L_08AFC900;
    case 137u: goto L_08AFC908;
    case 138u: goto L_08AFC910;
    case 139u: goto L_08AFC918;
    case 140u: goto L_08AFC920;
    case 141u: goto L_08AFC928;
    case 142u: goto L_08AFC92C;
    case 143u: goto L_08AFC960;
    case 144u: goto L_08AFC970;
    case 145u: goto L_08AFC97C;
    case 146u: goto L_08AFC984;
    case 147u: goto L_08AFC994;
    case 148u: goto L_08AFC9A0;
    case 149u: goto L_08AFC9A8;
    case 150u: goto L_08AFC9DC;
    case 151u: goto L_08AFC9E0;
    case 152u: goto L_08AFC9F0;
    case 153u: goto L_08AFCA44;
    case 154u: goto L_08AFCA64;
    case 155u: goto L_08AFCA6C;
    case 156u: goto L_08AFCA74;
    case 157u: goto L_08AFCA94;
    case 158u: goto L_08AFCAA4;
    case 159u: goto L_08AFCAB0;
    case 160u: goto L_08AFCAB8;
    case 161u: goto L_08AFCACC;
    case 162u: goto L_08AFCAEC;
    case 163u: goto L_08AFCB1C;
    case 164u: goto L_08AFCB24;
    case 165u: goto L_08AFCB2C;
    case 166u: goto L_08AFCB4C;
    case 167u: goto L_08AFCB60;
    case 168u: goto L_08AFCB64;
    case 169u: goto L_08AFCB70;
    case 170u: goto L_08AFCB90;
    case 171u: goto L_08AFCB98;
    case 172u: goto L_08AFCBA4;
    case 173u: goto L_08AFCBB4;
    case 174u: goto L_08AFCBC0;
    case 175u: goto L_08AFCBC8;
    case 176u: goto L_08AFCBD4;
    case 177u: goto L_08AFCBE4;
    case 178u: goto L_08AFCC0C;
    case 179u: goto L_08AFCC14;
    case 180u: goto L_08AFCC20;
    case 181u: goto L_08AFCC30;
    case 182u: goto L_08AFCC3C;
    case 183u: goto L_08AFCC44;
    case 184u: goto L_08AFCC50;
    case 185u: goto L_08AFCC60;
    case 186u: goto L_08AFCC98;
    case 187u: goto L_08AFCCA0;
    case 188u: goto L_08AFCCAC;
    case 189u: goto L_08AFCCD8;
    case 190u: goto L_08AFCCE0;
    case 191u: goto L_08AFCCE8;
    case 192u: goto L_08AFCCF4;
    case 193u: goto L_08AFCD20;
    case 194u: goto L_08AFCD28;
    case 195u: goto L_08AFCD30;
    case 196u: goto L_08AFCD54;
    case 197u: goto L_08AFCD74;
    case 198u: goto L_08AFCD7C;
    case 199u: goto L_08AFCD84;
    case 200u: goto L_08AFCDA8;
    case 201u: goto L_08AFCDC8;
    case 202u: goto L_08AFCDFC;
    case 203u: goto L_08AFCE60;
    case 204u: goto L_08AFCE68;
    case 205u: goto L_08AFCE70;
    case 206u: goto L_08AFCE90;
    case 207u: goto L_08AFCEA0;
    case 208u: goto L_08AFCEAC;
    case 209u: goto L_08AFCEB4;
    case 210u: goto L_08AFCEC8;
    case 211u: goto L_08AFCEE8;
    case 212u: goto L_08AFCF18;
    case 213u: goto L_08AFCF20;
    case 214u: goto L_08AFCF28;
    case 215u: goto L_08AFCF48;
    case 216u: goto L_08AFCF5C;
    case 217u: goto L_08AFCF60;
    case 218u: goto L_08AFCF6C;
    case 219u: goto L_08AFCF7C;
    case 220u: goto L_08AFCF8C;
    case 221u: goto L_08AFCFEC;
    case 222u: goto L_08AFCFF4;
    case 223u: goto L_08AFD000;
    case 224u: goto L_08AFD008;
    case 225u: goto L_08AFD010;
    case 226u: goto L_08AFD01C;
    case 227u: goto L_08AFD024;
    case 228u: goto L_08AFD030;
    case 229u: goto L_08AFD154;
    case 230u: goto L_08AFD15C;
    case 231u: goto L_08AFD180;
    case 232u: goto L_08AFD19C;
    case 233u: goto L_08AFD1A4;
    case 234u: goto L_08AFD1AC;
    case 235u: goto L_08AFD1D0;
    case 236u: goto L_08AFD1EC;
    case 237u: goto L_08AFD1F4;
    case 238u: goto L_08AFD1FC;
    case 239u: goto L_08AFD220;
    case 240u: goto L_08AFD238;
    case 241u: goto L_08AFD240;
    case 242u: goto L_08AFD248;
    case 243u: goto L_08AFD26C;
    case 244u: goto L_08AFD288;
    case 245u: goto L_08AFD290;
    case 246u: goto L_08AFD298;
    case 247u: goto L_08AFD2BC;
    case 248u: goto L_08AFD2D8;
    case 249u: goto L_08AFD2E0;
    case 250u: goto L_08AFD2E8;
    case 251u: goto L_08AFD30C;
    case 252u: goto L_08AFD328;
    case 253u: goto L_08AFD330;
    case 254u: goto L_08AFD338;
    case 255u: goto L_08AFD35C;
    case 256u: goto L_08AFD378;
    case 257u: goto L_08AFD384;
    case 258u: goto L_08AFD38C;
    case 259u: goto L_08AFD394;
    case 260u: goto L_08AFD3B4;
    case 261u: goto L_08AFD3D0;
    case 262u: goto L_08AFD3E0;
    case 263u: goto L_08AFD3E8;
    case 264u: goto L_08AFD3F0;
    case 265u: goto L_08AFD414;
    case 266u: goto L_08AFD430;
    case 267u: goto L_08AFD438;
    case 268u: goto L_08AFD440;
    case 269u: goto L_08AFD464;
    case 270u: goto L_08AFD480;
    case 271u: goto L_08AFD84C;
    case 272u: goto L_08AFD8A0;
    case 273u: goto L_08AFD934;
    case 274u: goto L_08AFD980;
    case 275u: goto L_08AFD9E8;
    case 276u: goto L_08AFD9F0;
    case 277u: goto L_08AFD9F8;
    case 278u: goto L_08AFDA18;
    case 279u: goto L_08AFDA28;
    case 280u: goto L_08AFDA34;
    case 281u: goto L_08AFDA3C;
    case 282u: goto L_08AFDA50;
    case 283u: goto L_08AFDA70;
    case 284u: goto L_08AFDAA0;
    case 285u: goto L_08AFDAA8;
    case 286u: goto L_08AFDAB0;
    case 287u: goto L_08AFDAD0;
    case 288u: goto L_08AFDAE4;
    case 289u: goto L_08AFDAE8;
    case 290u: goto L_08AFDAF4;
    case 291u: goto L_08AFDB04;
    case 292u: goto L_08AFDB14;
    case 293u: goto L_08AFDB48;
    case 294u: goto L_08AFDB50;
    case 295u: goto L_08AFDB58;
    case 296u: goto L_08AFDB78;
    case 297u: goto L_08AFDB88;
    case 298u: goto L_08AFDB98;
    case 299u: goto L_08AFDBA0;
    case 300u: goto L_08AFDBC0;
    case 301u: goto L_08AFDBD0;
    case 302u: goto L_08AFDBE0;
    case 303u: goto L_08AFDBE8;
    case 304u: goto L_08AFDC08;
    case 305u: goto L_08AFDC18;
    case 306u: goto L_08AFDC28;
    case 307u: goto L_08AFDC30;
    case 308u: goto L_08AFDC50;
    case 309u: goto L_08AFDC60;
    case 310u: goto L_08AFDC84;
    case 311u: goto L_08AFDC94;
    case 312u: goto L_08AFDC9C;
    case 313u: goto L_08AFDCA4;
    case 314u: goto L_08AFDCC4;
    case 315u: goto L_08AFDCD4;
    case 316u: goto L_08AFDCE4;
    case 317u: goto L_08AFDCEC;
    case 318u: goto L_08AFDD0C;
    case 319u: goto L_08AFDD1C;
    case 320u: goto L_08AFDD3C;
    case 321u: goto L_08AFDD88;
    case 322u: goto L_08AFDD90;
    case 323u: goto L_08AFDD9C;
    case 324u: goto L_08AFDDA4;
    case 325u: goto L_08AFDDAC;
    case 326u: goto L_08AFDDB8;
    case 327u: goto L_08AFDDC0;
    case 328u: goto L_08AFDDCC;
    case 329u: goto L_08AFDEFC;
    case 330u: goto L_08AFDF04;
    case 331u: goto L_08AFDF28;
    case 332u: goto L_08AFDF44;
    case 333u: goto L_08AFDF4C;
    case 334u: goto L_08AFDF54;
    case 335u: goto L_08AFDF78;
    case 336u: goto L_08AFDF94;
    case 337u: goto L_08AFDF9C;
    case 338u: goto L_08AFDFA4;
    case 339u: goto L_08AFDFC8;
    case 340u: goto L_08AFDFE0;
    case 341u: goto L_08AFDFE8;
    case 342u: goto L_08AFDFF0;
    case 343u: goto L_08AFE014;
    case 344u: goto L_08AFE030;
    case 345u: goto L_08AFE038;
    case 346u: goto L_08AFE040;
    case 347u: goto L_08AFE064;
    case 348u: goto L_08AFE080;
    case 349u: goto L_08AFE088;
    case 350u: goto L_08AFE090;
    case 351u: goto L_08AFE0B4;
    case 352u: goto L_08AFE0D0;
    case 353u: goto L_08AFE0D8;
    case 354u: goto L_08AFE0E0;
    case 355u: goto L_08AFE104;
    case 356u: goto L_08AFE120;
    case 357u: goto L_08AFE32C;
    case 358u: goto L_08AFE370;
    case 359u: goto L_08AFE380;
    case 360u: goto L_08AFE388;
    case 361u: goto L_08AFE390;
    case 362u: goto L_08AFE3B0;
    case 363u: goto L_08AFE3C8;
    case 364u: goto L_08AFE3DC;
    case 365u: goto L_08AFE42C;
    case 366u: goto L_08AFE448;
    case 367u: goto L_08AFE484;
    case 368u: goto L_08AFE494;
    case 369u: goto L_08AFE4A4;
    case 370u: goto L_08AFE4C8;
    case 371u: goto L_08AFE4D4;
    case 372u: goto L_08AFE4E0;
    case 373u: goto L_08AFE4EC;
    case 374u: goto L_08AFE4F8;
    case 375u: goto L_08AFE504;
    case 376u: goto L_08AFE50C;
    case 377u: goto L_08AFE514;
    case 378u: goto L_08AFE51C;
    case 379u: goto L_08AFE524;
    case 380u: goto L_08AFE52C;
    case 381u: goto L_08AFE534;
    case 382u: goto L_08AFE53C;
    case 383u: goto L_08AFE544;
    case 384u: goto L_08AFE54C;
    case 385u: goto L_08AFE554;
    case 386u: goto L_08AFE558;
    case 387u: goto L_08AFE56C;
    case 388u: goto L_08AFE57C;
    case 389u: goto L_08AFE588;
    case 390u: goto L_08AFE590;
    case 391u: goto L_08AFE598;
    case 392u: goto L_08AFE5A4;
    case 393u: goto L_08AFE5AC;
    case 394u: goto L_08AFE5BC;
    case 395u: goto L_08AFE5C8;
    case 396u: goto L_08AFE5D0;
    case 397u: goto L_08AFE5E0;
    case 398u: goto L_08AFE5E8;
    case 399u: goto L_08AFE5F4;
    case 400u: goto L_08AFE5F8;
    case 401u: goto L_08AFE604;
    case 402u: goto L_08AFE648;
    case 403u: goto L_08AFE664;
    case 404u: goto L_08AFE670;
    case 405u: goto L_08AFE678;
    case 406u: goto L_08AFE680;
    case 407u: goto L_08AFE68C;
    case 408u: goto L_08AFE694;
    case 409u: goto L_08AFE6A4;
    case 410u: goto L_08AFE6B0;
    case 411u: goto L_08AFE6B8;
    case 412u: goto L_08AFE6C8;
    case 413u: goto L_08AFE6D0;
    case 414u: goto L_08AFE6DC;
    case 415u: goto L_08AFE6E0;
    case 416u: goto L_08AFE6EC;
    case 417u: goto L_08AFE6F8;
    case 418u: goto L_08AFE720;
    case 419u: goto L_08AFE764;
    case 420u: goto L_08AFE780;
    case 421u: goto L_08AFE78C;
    case 422u: goto L_08AFE794;
    case 423u: goto L_08AFE79C;
    case 424u: goto L_08AFE7A8;
    case 425u: goto L_08AFE7B0;
    case 426u: goto L_08AFE7C0;
    case 427u: goto L_08AFE7CC;
    case 428u: goto L_08AFE7D4;
    case 429u: goto L_08AFE7E4;
    case 430u: goto L_08AFE7EC;
    case 431u: goto L_08AFE7F8;
    case 432u: goto L_08AFE7FC;
    case 433u: goto L_08AFE808;
    case 434u: goto L_08AFE814;
    case 435u: goto L_08AFE83C;
    case 436u: goto L_08AFE870;
    case 437u: goto L_08AFE88C;
    case 438u: goto L_08AFE898;
    case 439u: goto L_08AFE8A0;
    case 440u: goto L_08AFE8A8;
    case 441u: goto L_08AFE8B4;
    case 442u: goto L_08AFE8BC;
    case 443u: goto L_08AFE8CC;
    case 444u: goto L_08AFE8D8;
    case 445u: goto L_08AFE8E0;
    case 446u: goto L_08AFE8F0;
    case 447u: goto L_08AFE8F8;
    case 448u: goto L_08AFE904;
    case 449u: goto L_08AFE908;
    case 450u: goto L_08AFE914;
    case 451u: goto L_08AFE934;
    case 452u: goto L_08AFE93C;
    case 453u: goto L_08AFE944;
    case 454u: goto L_08AFE96C;
    case 455u: goto L_08AFE974;
    case 456u: goto L_08AFE980;
    case 457u: goto L_08AFE988;
    case 458u: goto L_08AFE990;
    case 459u: goto L_08AFE99C;
    case 460u: goto L_08AFE9A4;
    case 461u: goto L_08AFE9B4;
    case 462u: goto L_08AFE9C0;
    case 463u: goto L_08AFE9C8;
    case 464u: goto L_08AFE9D8;
    case 465u: goto L_08AFE9E0;
    case 466u: goto L_08AFE9EC;
    case 467u: goto L_08AFE9F0;
    case 468u: goto L_08AFE9FC;
    case 469u: goto L_08AFEA18;
    case 470u: goto L_08AFEA44;
    case 471u: goto L_08AFEA70;
    case 472u: goto L_08AFEACC;
    case 473u: goto L_08AFEADC;
    case 474u: goto L_08AFEAE4;
    case 475u: goto L_08AFEAEC;
    case 476u: goto L_08AFEAF8;
    case 477u: goto L_08AFEB00;
    case 478u: goto L_08AFEB1C;
    case 479u: goto L_08AFEB5C;
    case 480u: goto L_08AFEB64;
    case 481u: goto L_08AFEB70;
    case 482u: goto L_08AFEB78;
    case 483u: goto L_08AFEB8C;
    case 484u: goto L_08AFEB98;
    case 485u: goto L_08AFEB9C;
    case 486u: goto L_08AFEBA4;
    case 487u: goto L_08AFEBAC;
    case 488u: goto L_08AFEBB8;
    case 489u: goto L_08AFEBC0;
    case 490u: goto L_08AFEBC8;
    case 491u: goto L_08AFEBCC;
    case 492u: goto L_08AFEBE8;
    case 493u: goto L_08AFEBF8;
    case 494u: goto L_08AFEBFC;
    case 495u: goto L_08AFEC10;
    case 496u: goto L_08AFEC2C;
    case 497u: goto L_08AFEC3C;
    case 498u: goto L_08AFEC44;
    case 499u: goto L_08AFEC50;
    case 500u: goto L_08AFEC58;
    case 501u: goto L_08AFEC68;
    case 502u: goto L_08AFEC70;
    case 503u: goto L_08AFEC80;
    case 504u: goto L_08AFEC88;
    case 505u: goto L_08AFEC98;
    case 506u: goto L_08AFEC9C;
    case 507u: goto L_08AFECA4;
    case 508u: goto L_08AFECDC;
    case 509u: goto L_08AFECE4;
    case 510u: goto L_08AFED0C;
    case 511u: goto L_08AFED10;
    case 512u: goto L_08AFED18;
    case 513u: goto L_08AFED44;
    case 514u: goto L_08AFED48;
    case 515u: goto L_08AFED50;
    case 516u: goto L_08AFED64;
    case 517u: goto L_08AFEDA0;
    case 518u: goto L_08AFEDEC;
    case 519u: goto L_08AFEDF4;
    case 520u: goto L_08AFEE00;
    case 521u: goto L_08AFEE08;
    case 522u: goto L_08AFEE10;
    case 523u: goto L_08AFEE18;
    case 524u: goto L_08AFEE1C;
    case 525u: goto L_08AFEE2C;
    case 526u: goto L_08AFEE30;
    case 527u: goto L_08AFEE3C;
    case 528u: goto L_08AFEE44;
    case 529u: goto L_08AFEE60;
    case 530u: goto L_08AFEEA0;
    case 531u: goto L_08AFEEA8;
    case 532u: goto L_08AFEEB4;
    case 533u: goto L_08AFEEBC;
    case 534u: goto L_08AFEEC4;
    case 535u: goto L_08AFEECC;
    case 536u: goto L_08AFEED0;
    case 537u: goto L_08AFEED8;
    case 538u: goto L_08AFEEDC;
    case 539u: goto L_08AFEEF4;
    case 540u: goto L_08AFEF3C;
    case 541u: goto L_08AFEF48;
    case 542u: goto L_08AFEF54;
    case 543u: goto L_08AFEF5C;
    case 544u: goto L_08AFEF64;
    case 545u: goto L_08AFEF6C;
    case 546u: goto L_08AFEF70;
    case 547u: goto L_08AFEF74;
    case 548u: goto L_08AFEF84;
    case 549u: goto L_08AFEFA8;
    case 550u: goto L_08AFEFB4;
    case 551u: goto L_08AFEFBC;
    case 552u: goto L_08AFEFC8;
    case 553u: goto L_08AFEFD4;
    case 554u: goto L_08AFEFD8;
    case 555u: goto L_08AFEFE0;
    case 556u: goto L_08AFF034;
    case 557u: goto L_08AFF044;
    case 558u: goto L_08AFF050;
    case 559u: goto L_08AFF05C;
    case 560u: goto L_08AFF068;
    case 561u: goto L_08AFF07C;
    case 562u: goto L_08AFF088;
    case 563u: goto L_08AFF094;
    case 564u: goto L_08AFF0A0;
    case 565u: goto L_08AFF0A8;
    case 566u: goto L_08AFF0B0;
    case 567u: goto L_08AFF0B8;
    case 568u: goto L_08AFF0C0;
    case 569u: goto L_08AFF0CC;
    case 570u: goto L_08AFF0DC;
    case 571u: goto L_08AFF0E4;
    case 572u: goto L_08AFF0EC;
    case 573u: goto L_08AFF0F4;
    case 574u: goto L_08AFF100;
    case 575u: goto L_08AFF110;
    case 576u: goto L_08AFF114;
    case 577u: goto L_08AFF118;
    case 578u: goto L_08AFF120;
    case 579u: goto L_08AFF12C;
    case 580u: goto L_08AFF154;
    case 581u: goto L_08AFF18C;
    case 582u: goto L_08AFF194;
    case 583u: goto L_08AFF19C;
    case 584u: goto L_08AFF1BC;
    case 585u: goto L_08AFF1CC;
    case 586u: goto L_08AFF1DC;
    case 587u: goto L_08AFF1E4;
    case 588u: goto L_08AFF204;
    case 589u: goto L_08AFF214;
    case 590u: goto L_08AFF224;
    case 591u: goto L_08AFF22C;
    case 592u: goto L_08AFF24C;
    case 593u: goto L_08AFF25C;
    case 594u: goto L_08AFF264;
    case 595u: goto L_08AFF26C;
    case 596u: goto L_08AFF28C;
    case 597u: goto L_08AFF29C;
    case 598u: goto L_08AFF2B4;
    case 599u: goto L_08AFF2D4;
    case 600u: goto L_08AFF30C;
    case 601u: goto L_08AFF314;
    case 602u: goto L_08AFF31C;
    case 603u: goto L_08AFF33C;
    case 604u: goto L_08AFF354;
    case 605u: goto L_08AFF368;
    case 606u: goto L_08AFF388;
    case 607u: goto L_08AFF3C4;
    case 608u: goto L_08AFF3EC;
    case 609u: goto L_08AFF3F8;
    case 610u: goto L_08AFF404;
    case 611u: goto L_08AFF40C;
    case 612u: goto L_08AFF414;
    case 613u: goto L_08AFF420;
    case 614u: goto L_08AFF428;
    case 615u: goto L_08AFF434;
    case 616u: goto L_08AFF43C;
    case 617u: goto L_08AFF448;
    case 618u: goto L_08AFF450;
    case 619u: goto L_08AFF45C;
    case 620u: goto L_08AFF468;
    case 621u: goto L_08AFF474;
    case 622u: goto L_08AFF47C;
    case 623u: goto L_08AFF488;
    case 624u: goto L_08AFF490;
    case 625u: goto L_08AFF49C;
    case 626u: goto L_08AFF4A8;
    case 627u: goto L_08AFF4B4;
    case 628u: goto L_08AFF4C0;
    case 629u: goto L_08AFF4CC;
    case 630u: goto L_08AFF4D4;
    case 631u: goto L_08AFF4E0;
    case 632u: goto L_08AFF4E8;
    case 633u: goto L_08AFF4F4;
    case 634u: goto L_08AFF4FC;
    case 635u: goto L_08AFF508;
    case 636u: goto L_08AFF510;
    case 637u: goto L_08AFF51C;
    case 638u: goto L_08AFF524;
    case 639u: goto L_08AFF550;
    case 640u: goto L_08AFF558;
    case 641u: goto L_08AFF580;
    case 642u: goto L_08AFF590;
    case 643u: goto L_08AFF598;
    case 644u: goto L_08AFF5A0;
    case 645u: goto L_08AFF5AC;
    case 646u: goto L_08AFF5C8;
    case 647u: goto L_08AFF5CC;
    case 648u: goto L_08AFF5D4;
    case 649u: goto L_08AFF5E0;
    case 650u: goto L_08AFF5E8;
    case 651u: goto L_08AFF5F0;
    case 652u: goto L_08AFF5F8;
    case 653u: goto L_08AFF60C;
    case 654u: goto L_08AFF618;
    case 655u: goto L_08AFF620;
    case 656u: goto L_08AFF62C;
    case 657u: goto L_08AFF634;
    case 658u: goto L_08AFF63C;
    case 659u: goto L_08AFF644;
    case 660u: goto L_08AFF64C;
    case 661u: goto L_08AFF658;
    case 662u: goto L_08AFF664;
    case 663u: goto L_08AFF670;
    case 664u: goto L_08AFF67C;
    case 665u: goto L_08AFF684;
    case 666u: goto L_08AFF68C;
    case 667u: goto L_08AFF694;
    case 668u: goto L_08AFF6A0;
    case 669u: goto L_08AFF6A4;
    case 670u: goto L_08AFF6AC;
    case 671u: goto L_08AFF6BC;
    case 672u: goto L_08AFF6C4;
    case 673u: goto L_08AFF6D8;
    case 674u: goto L_08AFF6E4;
    case 675u: goto L_08AFF6F0;
    case 676u: goto L_08AFF6F8;
    case 677u: goto L_08AFF700;
    case 678u: goto L_08AFF708;
    case 679u: goto L_08AFF718;
    case 680u: goto L_08AFF720;
    case 681u: goto L_08AFF724;
    case 682u: goto L_08AFF728;
    case 683u: goto L_08AFF730;
    case 684u: goto L_08AFF73C;
    case 685u: goto L_08AFF744;
    case 686u: goto L_08AFF74C;
    case 687u: goto L_08AFF760;
    case 688u: goto L_08AFF76C;
    case 689u: goto L_08AFF774;
    case 690u: goto L_08AFF77C;
    case 691u: goto L_08AFF780;
    case 692u: goto L_08AFF784;
    case 693u: goto L_08AFF78C;
    case 694u: goto L_08AFF798;
    case 695u: goto L_08AFF79C;
    case 696u: goto L_08AFF7C8;
    case 697u: goto L_08AFF7D0;
    case 698u: goto L_08AFF80C;
    case 699u: goto L_08AFF834;
    case 700u: goto L_08AFF840;
    case 701u: goto L_08AFF84C;
    case 702u: goto L_08AFF854;
    case 703u: goto L_08AFF85C;
    case 704u: goto L_08AFF868;
    case 705u: goto L_08AFF870;
    case 706u: goto L_08AFF87C;
    case 707u: goto L_08AFF884;
    case 708u: goto L_08AFF890;
    case 709u: goto L_08AFF89C;
    case 710u: goto L_08AFF8A8;
    case 711u: goto L_08AFF8B4;
    case 712u: goto L_08AFF8C0;
    case 713u: goto L_08AFF8C8;
    case 714u: goto L_08AFF8D4;
    case 715u: goto L_08AFF8DC;
    case 716u: goto L_08AFF8E8;
    case 717u: goto L_08AFF8F4;
    case 718u: goto L_08AFF900;
    case 719u: goto L_08AFF90C;
    case 720u: goto L_08AFF918;
    case 721u: goto L_08AFF920;
    case 722u: goto L_08AFF92C;
    case 723u: goto L_08AFF938;
    case 724u: goto L_08AFF944;
    case 725u: goto L_08AFF94C;
    case 726u: goto L_08AFF958;
    case 727u: goto L_08AFF960;
    case 728u: goto L_08AFF96C;
    case 729u: goto L_08AFF974;
    case 730u: goto L_08AFF9A0;
    case 731u: goto L_08AFF9AC;
    case 732u: goto L_08AFF9D4;
    case 733u: goto L_08AFFA00;
    case 734u: goto L_08AFFA10;
    case 735u: goto L_08AFFA1C;
    case 736u: goto L_08AFFA24;
    case 737u: goto L_08AFFA30;
    case 738u: goto L_08AFFA4C;
    case 739u: goto L_08AFFA50;
    case 740u: goto L_08AFFA58;
    case 741u: goto L_08AFFA64;
    case 742u: goto L_08AFFA6C;
    case 743u: goto L_08AFFA74;
    case 744u: goto L_08AFFA7C;
    case 745u: goto L_08AFFA90;
    case 746u: goto L_08AFFA9C;
    case 747u: goto L_08AFFAA4;
    case 748u: goto L_08AFFAB0;
    case 749u: goto L_08AFFAB8;
    case 750u: goto L_08AFFAC4;
    case 751u: goto L_08AFFACC;
    case 752u: goto L_08AFFAD4;
    case 753u: goto L_08AFFAE0;
    case 754u: goto L_08AFFAEC;
    case 755u: goto L_08AFFAF8;
    case 756u: goto L_08AFFB04;
    case 757u: goto L_08AFFB0C;
    case 758u: goto L_08AFFB14;
    case 759u: goto L_08AFFB20;
    case 760u: goto L_08AFFB2C;
    case 761u: goto L_08AFFB30;
    case 762u: goto L_08AFFB38;
    case 763u: goto L_08AFFB48;
    case 764u: goto L_08AFFB50;
    case 765u: goto L_08AFFB64;
    case 766u: goto L_08AFFB74;
    case 767u: goto L_08AFFB80;
    case 768u: goto L_08AFFB88;
    case 769u: goto L_08AFFB90;
    case 770u: goto L_08AFFB98;
    case 771u: goto L_08AFFBA8;
    case 772u: goto L_08AFFBB0;
    case 773u: goto L_08AFFBB4;
    case 774u: goto L_08AFFBB8;
    case 775u: goto L_08AFFBC0;
    case 776u: goto L_08AFFBCC;
    case 777u: goto L_08AFFBD4;
    case 778u: goto L_08AFFBDC;
    case 779u: goto L_08AFFBF0;
    case 780u: goto L_08AFFBFC;
    case 781u: goto L_08AFFC00;
    case 782u: goto L_08AFFC0C;
    case 783u: goto L_08AFFC10;
    case 784u: goto L_08AFFC18;
    case 785u: goto L_08AFFC20;
    case 786u: goto L_08AFFC24;
    case 787u: goto L_08AFFC2C;
    case 788u: goto L_08AFFC38;
    case 789u: goto L_08AFFC3C;
    case 790u: goto L_08AFFC68;
    case 791u: goto L_08AFFC90;
    case 792u: goto L_08AFFCB8;
    case 793u: goto L_08AFFCC0;
    case 794u: goto L_08AFFCCC;
    case 795u: goto L_08AFFCD4;
    case 796u: goto L_08AFFCE0;
    case 797u: goto L_08AFFCE8;
    case 798u: goto L_08AFFCF0;
    case 799u: goto L_08AFFD04;
    case 800u: goto L_08AFFD28;
    case 801u: goto L_08AFFD30;
    case 802u: goto L_08AFFD38;
    case 803u: goto L_08AFFD4C;
    case 804u: goto L_08AFFD70;
    case 805u: goto L_08AFFD74;
    case 806u: goto L_08AFFD88;
    case 807u: goto L_08AFFDB0;
    case 808u: goto L_08AFFDD8;
    case 809u: goto L_08AFFDE0;
    case 810u: goto L_08AFFDEC;
    case 811u: goto L_08AFFDF4;
    case 812u: goto L_08AFFE00;
    case 813u: goto L_08AFFE08;
    case 814u: goto L_08AFFE10;
    case 815u: goto L_08AFFE24;
    case 816u: goto L_08AFFE48;
    case 817u: goto L_08AFFE50;
    case 818u: goto L_08AFFE58;
    case 819u: goto L_08AFFE6C;
    case 820u: goto L_08AFFE90;
    case 821u: goto L_08AFFE94;
    case 822u: goto L_08AFFEA8;
    case 823u: goto L_08AFFEFC;
    case 824u: goto L_08AFFF20;
    case 825u: goto L_08AFFF2C;
    case 826u: goto L_08AFFF4C;
    case 827u: goto L_08AFFFAC;
    case 828u: goto L_08AFFFDC;
    case 829u: goto L_08AFFFE0;
    case 830u: goto L_08AFFFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AFC000:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AFC018;
    }
    goto L_08AFC010;
L_08AFC010:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(720), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFC018;
L_08AFC018:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AFC060u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AFC84C;
L_08AFC060:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(22, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08AFC3E8;
    }
    goto L_08AFC088;
L_08AFC088:
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC108;
      }
      goto L_08AFC0A8;
    }
L_08AFC0A8:
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-384));
    goto L_08AFC0B4;
L_08AFC0B4:
    ctx.set_gpr(31, 0x08AFC0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC0BCu) goto L_08AFC0BC;
    return;
L_08AFC0BC:
    ctx.set_gpr(31, 0x08AFC0C4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC0C4u) goto L_08AFC0C4;
    return;
L_08AFC0C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFC0E4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC0E4u) goto L_08AFC0E4;
    return;
L_08AFC0E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC0F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFC0F8u) goto L_08AFC0F8;
    return;
L_08AFC0F8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFC0B4;
      }
      goto L_08AFC108;
    }
L_08AFC108:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC3E4;
      }
      goto L_08AFC110;
    }
L_08AFC110:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AFC1A0;
      }
      goto L_08AFC120;
    }
L_08AFC120:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[20] == ctx.gpr[2]) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
        goto L_08AFC170;
    }
    goto L_08AFC12C;
L_08AFC12C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[20] == ctx.gpr[2]) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
        goto L_08AFC140;
    }
    goto L_08AFC138;
L_08AFC138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC1D0;
      }
      goto L_08AFC140;
    }
L_08AFC140:
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-336)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-312)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AFC1D0;
      }
      goto L_08AFC170;
    }
L_08AFC170:
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-384)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AFC1D0;
      }
      goto L_08AFC1A0;
    }
L_08AFC1A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-288)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-360)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AFC1D0;
L_08AFC1D0:
    ctx.set_gpr(31, 0x08AFC1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1D8u) goto L_08AFC1D8;
    return;
L_08AFC1D8:
    ctx.set_gpr(31, 0x08AFC1E0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1E0u) goto L_08AFC1E0;
    return;
L_08AFC1E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC1ECu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1ECu) goto L_08AFC1EC;
    return;
L_08AFC1EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC1FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1FCu) goto L_08AFC1FC;
    return;
L_08AFC1FC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFC208u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC208u) goto L_08AFC208;
    return;
L_08AFC208:
    ctx.set_gpr(31, 0x08AFC210u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC210u) goto L_08AFC210;
    return;
L_08AFC210:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC21Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC21Cu) goto L_08AFC21C;
    return;
L_08AFC21C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC22Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFC22Cu) goto L_08AFC22C;
    return;
L_08AFC22C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AFC23Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC23Cu) goto L_08AFC23C;
    return;
L_08AFC23C:
    ctx.set_gpr(31, 0x08AFC244u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC244u) goto L_08AFC244;
    return;
L_08AFC244:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC250u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC250u) goto L_08AFC250;
    return;
L_08AFC250:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC260u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFC260u) goto L_08AFC260;
    return;
L_08AFC260:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFC26Cu);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC26Cu) goto L_08AFC26C;
    return;
L_08AFC26C:
    ctx.set_gpr(31, 0x08AFC274u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC274u) goto L_08AFC274;
    return;
L_08AFC274:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC280u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC280u) goto L_08AFC280;
    return;
L_08AFC280:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC290u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFC290u) goto L_08AFC290;
    return;
L_08AFC290:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, 16384u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(30, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-25));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AFC2E0u);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC2E0u) goto L_08AFC2E0;
    return;
L_08AFC2E0:
    ctx.set_gpr(31, 0x08AFC2E8u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC2E8u) goto L_08AFC2E8;
    return;
L_08AFC2E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC2F4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC2F4u) goto L_08AFC2F4;
    return;
L_08AFC2F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFC318u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFC318u) goto L_08AFC318;
    return;
L_08AFC318:
    ctx.set_gpr(31, 0x08AFC320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC320u) goto L_08AFC320;
    return;
L_08AFC320:
    ctx.set_gpr(31, 0x08AFC328u);
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC328u) goto L_08AFC328;
    return;
L_08AFC328:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC334u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC334u) goto L_08AFC334;
    return;
L_08AFC334:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(7, 16768u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[30]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AFC368u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFC368u) goto L_08AFC368;
    return;
L_08AFC368:
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08AFC3E0;
    }
    goto L_08AFC37C;
L_08AFC37C:
    ctx.set_gpr(31, 0x08AFC384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC384u) goto L_08AFC384;
    return;
L_08AFC384:
    ctx.set_gpr(31, 0x08AFC38Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC38Cu) goto L_08AFC38C;
    return;
L_08AFC38C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AFC398u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC398u) goto L_08AFC398;
    return;
L_08AFC398:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFC3ACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFC3ACu) goto L_08AFC3AC;
    return;
L_08AFC3AC:
    ctx.set_gpr(31, 0x08AFC3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3B4u) goto L_08AFC3B4;
    return;
L_08AFC3B4:
    ctx.set_gpr(31, 0x08AFC3BCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3BCu) goto L_08AFC3BC;
    return;
L_08AFC3BC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AFC3C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3C8u) goto L_08AFC3C8;
    return;
L_08AFC3C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC3DCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFC3DCu) goto L_08AFC3DC;
    return;
L_08AFC3DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08AFC3E0;
L_08AFC3E0:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_08AFC3E4;
L_08AFC3E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AFC3E8;
L_08AFC3E8:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFC42Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AFC84C;
L_08AFC42C:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AFC454;
    }
    goto L_08AFC450;
L_08AFC450:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(280)));
    goto L_08AFC454;
L_08AFC454:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFC478u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AFC84C;
L_08AFC478:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFC4B8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AFC84C;
L_08AFC4B8:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AFC4F8;
    }
    goto L_08AFC4E0;
L_08AFC4E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFC4F4;
      }
      goto L_08AFC4EC;
    }
L_08AFC4EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AFC4F8;
      }
      goto L_08AFC4F4;
    }
L_08AFC4F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFC4F8;
L_08AFC4F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFC51Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AFC84C;
L_08AFC51C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
        goto L_08AFC530;
    }
    goto L_08AFC528;
L_08AFC528:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFC54C;
      }
      goto L_08AFC530;
    }
L_08AFC530:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFC54C;
L_08AFC54C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC55C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AFC578u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AFC84C;
L_08AFC578:
    ctx.set_gpr(4, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC5B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFC5C8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AFC84C;
L_08AFC5C8:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC5F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFC608u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AFC84C;
L_08AFC608:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC634:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AFC644u);
    // nop
    goto L_08AFC84C;
L_08AFC644:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AFC66Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC66Cu) goto L_08AFC66C;
    return;
L_08AFC66C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC678u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC678u) goto L_08AFC678;
    return;
L_08AFC678:
    ctx.set_gpr(31, 0x08AFC680u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC680u) goto L_08AFC680;
    return;
L_08AFC680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFC690u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFC690u) goto L_08AFC690;
    return;
L_08AFC690:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFC6D4;
      }
      goto L_08AFC69C;
    }
L_08AFC69C:
    ctx.set_gpr(31, 0x08AFC6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC6A4u) goto L_08AFC6A4;
    return;
L_08AFC6A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16130u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, ctx.gpr[2] | 36700u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AFC6D4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AFC6D4u) goto L_08AFC6D4;
    return;
L_08AFC6D4:
    ctx.set_gpr(31, 0x08AFC6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC6DCu) goto L_08AFC6DC;
    return;
L_08AFC6DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFC6ECu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFC6ECu) goto L_08AFC6EC;
    return;
L_08AFC6EC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFC6F8u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC6F8u) goto L_08AFC6F8;
    return;
L_08AFC6F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFC708u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFC708u) goto L_08AFC708;
    return;
L_08AFC708:
    ctx.set_gpr(31, 0x08AFC710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC710u) goto L_08AFC710;
    return;
L_08AFC710:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFC730u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(81));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFC730u) goto L_08AFC730;
    return;
L_08AFC730:
    ctx.set_gpr(31, 0x08AFC738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC738u) goto L_08AFC738;
    return;
L_08AFC738:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(7, 17392u << 16u);
    ctx.set_gpr(3, 16640u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AFC768u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFC768u) goto L_08AFC768;
    return;
L_08AFC768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC77C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AFC78Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC78Cu) goto L_08AFC78C;
    return;
L_08AFC78C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC798u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFC798u) goto L_08AFC798;
    return;
L_08AFC798:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AFC808;
    }
    goto L_08AFC7A0;
L_08AFC7A0:
    ctx.set_gpr(31, 0x08AFC7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7A8u) goto L_08AFC7A8;
    return;
L_08AFC7A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC7B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7B4u) goto L_08AFC7B4;
    return;
L_08AFC7B4:
    ctx.set_gpr(31, 0x08AFC7BCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7BCu) goto L_08AFC7BC;
    return;
L_08AFC7BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFC7CCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7CCu) goto L_08AFC7CC;
    return;
L_08AFC7CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFC7F0;
      }
      goto L_08AFC7D8;
    }
L_08AFC7D8:
    ctx.set_gpr(31, 0x08AFC7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7E0u) goto L_08AFC7E0;
    return;
L_08AFC7E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AFC7F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7F0u) goto L_08AFC7F0;
    return;
L_08AFC7F0:
    ctx.set_gpr(31, 0x08AFC7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC7F8u) goto L_08AFC7F8;
    return;
L_08AFC7F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC804u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AFC804u) goto L_08AFC804;
    return;
L_08AFC804:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFC808;
L_08AFC808:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC814:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AFC818;
L_08AFC818:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
        goto L_08AFC838;
    }
    goto L_08AFC824;
L_08AFC824:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_08AFC818;
      }
      goto L_08AFC834;
    }
L_08AFC834:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    goto L_08AFC838;
L_08AFC838:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC844;
      }
      goto L_08AFC840;
    }
L_08AFC840:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AFC844;
L_08AFC844:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC84C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFC854;
L_08AFC854:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
        goto L_08AFC870;
    }
    goto L_08AFC860;
L_08AFC860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFC878;
      }
      goto L_08AFC86C;
    }
L_08AFC86C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08AFC870;
L_08AFC870:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-360));
      if (branch_taken) {
          goto L_08AFC854;
      }
      goto L_08AFC878;
    }
L_08AFC878:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AFC920;
      }
      goto L_08AFC8A8;
    }
L_08AFC8A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFC910;
      }
      goto L_08AFC8B4;
    }
L_08AFC8B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFC900;
      }
      goto L_08AFC8C0;
    }
L_08AFC8C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFC8F0;
      }
      goto L_08AFC8CC;
    }
L_08AFC8CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFC8E0;
      }
      goto L_08AFC8D8;
    }
L_08AFC8D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
      if (branch_taken) {
          goto L_08AFC92C;
      }
      goto L_08AFC8E0;
    }
L_08AFC8E0:
    ctx.set_gpr(31, 0x08AFC8E8u);
    // nop
    goto L_08AFC9F0;
L_08AFC8E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC928;
      }
      goto L_08AFC8F0;
    }
L_08AFC8F0:
    ctx.set_gpr(31, 0x08AFC8F8u);
    // nop
    goto L_08AFCDFC;
L_08AFC8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC928;
      }
      goto L_08AFC900;
    }
L_08AFC900:
    ctx.set_gpr(31, 0x08AFC908u);
    // nop
    goto L_08AFD980;
L_08AFC908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC928;
      }
      goto L_08AFC910;
    }
L_08AFC910:
    ctx.set_gpr(31, 0x08AFC918u);
    // nop
    goto L_08AFE42C;
L_08AFC918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC928;
      }
      goto L_08AFC920;
    }
L_08AFC920:
    ctx.set_gpr(31, 0x08AFC928u);
    // nop
    goto L_08AFE484;
L_08AFC928:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    goto L_08AFC92C;
L_08AFC92C:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AFC970u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFC970u) goto L_08AFC970;
    return;
L_08AFC970:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFC97Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(263));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC97Cu) goto L_08AFC97C;
    return;
L_08AFC97C:
    ctx.set_gpr(31, 0x08AFC984u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC984u) goto L_08AFC984;
    return;
L_08AFC984:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFC994u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFC994u) goto L_08AFC994;
    return;
L_08AFC994:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AFC9E0;
    }
    goto L_08AFC9A0;
L_08AFC9A0:
    ctx.set_gpr(31, 0x08AFC9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFC9A8u) goto L_08AFC9A8;
    return;
L_08AFC9A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17312u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2696)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(31, 0x08AFC9DCu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AFC9DCu) goto L_08AFC9DC;
    return;
L_08AFC9DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFC9E0;
L_08AFC9E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC9F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AFCA44u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    goto L_08AFECE4;
L_08AFCA44:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(19, ctx.gpr[2] << 3u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-2568));
    goto L_08AFCA64;
L_08AFCA64:
    ctx.set_gpr(31, 0x08AFCA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCA6Cu) goto L_08AFCA6C;
    return;
L_08AFCA6C:
    ctx.set_gpr(31, 0x08AFCA74u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCA74u) goto L_08AFCA74;
    return;
L_08AFCA74:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCA94u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCA94u) goto L_08AFCA94;
    return;
L_08AFCA94:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFCAA4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFCAA4u) goto L_08AFCAA4;
    return;
L_08AFCAA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AFCB64;
    }
    goto L_08AFCAB0;
L_08AFCAB0:
    ctx.set_gpr(31, 0x08AFCAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCAB8u) goto L_08AFCAB8;
    return;
L_08AFCAB8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCACCu);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCACCu) goto L_08AFCACC;
    return;
L_08AFCACC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCAECu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCAECu) goto L_08AFCAEC;
    return;
L_08AFCAEC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AFCB1Cu);
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AFCB1Cu) goto L_08AFCB1C;
    return;
L_08AFCB1C:
    ctx.set_gpr(31, 0x08AFCB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCB24u) goto L_08AFCB24;
    return;
L_08AFCB24:
    ctx.set_gpr(31, 0x08AFCB2Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCB2Cu) goto L_08AFCB2C;
    return;
L_08AFCB2C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCB4Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCB4Cu) goto L_08AFCB4C;
    return;
L_08AFCB4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFCB60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFCB60u) goto L_08AFCB60;
    return;
L_08AFCB60:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AFCB64;
L_08AFCB64:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFCA64;
      }
      goto L_08AFCB70;
    }
L_08AFCB70:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1944)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCB90u);
    ctx.set_gpr(21, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCB90u) goto L_08AFCB90;
    return;
L_08AFCB90:
    ctx.set_gpr(31, 0x08AFCB98u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCB98u) goto L_08AFCB98;
    return;
L_08AFCB98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCBA4u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBA4u) goto L_08AFCBA4;
    return;
L_08AFCBA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCBB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBB4u) goto L_08AFCBB4;
    return;
L_08AFCBB4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCBC0u);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBC0u) goto L_08AFCBC0;
    return;
L_08AFCBC0:
    ctx.set_gpr(31, 0x08AFCBC8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBC8u) goto L_08AFCBC8;
    return;
L_08AFCBC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCBD4u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBD4u) goto L_08AFCBD4;
    return;
L_08AFCBD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCBE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFCBE4u) goto L_08AFCBE4;
    return;
L_08AFCBE4:
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1992)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCC0Cu);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC0Cu) goto L_08AFCC0C;
    return;
L_08AFCC0C:
    ctx.set_gpr(31, 0x08AFCC14u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC14u) goto L_08AFCC14;
    return;
L_08AFCC14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCC20u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC20u) goto L_08AFCC20;
    return;
L_08AFCC20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCC30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC30u) goto L_08AFCC30;
    return;
L_08AFCC30:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCC3Cu);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC3Cu) goto L_08AFCC3C;
    return;
L_08AFCC3C:
    ctx.set_gpr(31, 0x08AFCC44u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC44u) goto L_08AFCC44;
    return;
L_08AFCC44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCC50u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC50u) goto L_08AFCC50;
    return;
L_08AFCC50:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFCC60u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC60u) goto L_08AFCC60;
    return;
L_08AFCC60:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[18]);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[17]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[21] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(31, 0x08AFCC98u);
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC98u) goto L_08AFCC98;
    return;
L_08AFCC98:
    ctx.set_gpr(31, 0x08AFCCA0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCA0u) goto L_08AFCCA0;
    return;
L_08AFCCA0:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AFCCACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCACu) goto L_08AFCCAC;
    return;
L_08AFCCAC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17056u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[21];
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08AFCCD8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCD8u) goto L_08AFCCD8;
    return;
L_08AFCCD8:
    ctx.set_gpr(31, 0x08AFCCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCE0u) goto L_08AFCCE0;
    return;
L_08AFCCE0:
    ctx.set_gpr(31, 0x08AFCCE8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCE8u) goto L_08AFCCE8;
    return;
L_08AFCCE8:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFCCF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCF4u) goto L_08AFCCF4;
    return;
L_08AFCCF4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 17056u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08AFCD20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD20u) goto L_08AFCD20;
    return;
L_08AFCD20:
    ctx.set_gpr(31, 0x08AFCD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD28u) goto L_08AFCD28;
    return;
L_08AFCD28:
    ctx.set_gpr(31, 0x08AFCD30u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD30u) goto L_08AFCD30;
    return;
L_08AFCD30:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1920)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCD54u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD54u) goto L_08AFCD54;
    return;
L_08AFCD54:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17244u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[21];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFCD74u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD74u) goto L_08AFCD74;
    return;
L_08AFCD74:
    ctx.set_gpr(31, 0x08AFCD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD7Cu) goto L_08AFCD7C;
    return;
L_08AFCD7C:
    ctx.set_gpr(31, 0x08AFCD84u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD84u) goto L_08AFCD84;
    return;
L_08AFCD84:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1968)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCDA8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCDA8u) goto L_08AFCDA8;
    return;
L_08AFCDA8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17244u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFCDC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFCDC8u) goto L_08AFCDC8;
    return;
L_08AFCDC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCDFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-2640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[22] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(20, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[2] << 3u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1872));
    goto L_08AFCE60;
L_08AFCE60:
    ctx.set_gpr(31, 0x08AFCE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCE68u) goto L_08AFCE68;
    return;
L_08AFCE68:
    ctx.set_gpr(31, 0x08AFCE70u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCE70u) goto L_08AFCE70;
    return;
L_08AFCE70:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCE90u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCE90u) goto L_08AFCE90;
    return;
L_08AFCE90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFCEA0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFCEA0u) goto L_08AFCEA0;
    return;
L_08AFCEA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08AFCF60;
    }
    goto L_08AFCEAC;
L_08AFCEAC:
    ctx.set_gpr(31, 0x08AFCEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCEB4u) goto L_08AFCEB4;
    return;
L_08AFCEB4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCEC8u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCEC8u) goto L_08AFCEC8;
    return;
L_08AFCEC8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCEE8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCEE8u) goto L_08AFCEE8;
    return;
L_08AFCEE8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AFCF18u);
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF18u) goto L_08AFCF18;
    return;
L_08AFCF18:
    ctx.set_gpr(31, 0x08AFCF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF20u) goto L_08AFCF20;
    return;
L_08AFCF20:
    ctx.set_gpr(31, 0x08AFCF28u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF28u) goto L_08AFCF28;
    return;
L_08AFCF28:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFCF48u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF48u) goto L_08AFCF48;
    return;
L_08AFCF48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFCF5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFCF5Cu) goto L_08AFCF5C;
    return;
L_08AFCF5C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AFCF60;
L_08AFCF60:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 53 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFCE60;
      }
      goto L_08AFCF6C;
    }
L_08AFCF6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AFCF7Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(1368));
    goto L_08AFF154;
L_08AFCF7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AFCF8Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_08AFF154;
L_08AFCF8C:
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1720)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1728)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1736)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1724)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1748)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AFCFF4;
      }
      goto L_08AFCFEC;
    }
L_08AFCFEC:
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFCFF4;
L_08AFCFF4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD008;
      }
      goto L_08AFD000;
    }
L_08AFD000:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFD008;
L_08AFD008:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AFD01C;
    }
    goto L_08AFD010;
L_08AFD010:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AFD01C;
L_08AFD01C:
    ctx.set_gpr(31, 0x08AFD024u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 71u, 0x08B005D0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD024u) goto L_08AFD024;
    return;
L_08AFD024:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AFD030u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AFED18;
L_08AFD030:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1720)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1736)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1524)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(23, ctx.gpr[17] - ctx.gpr[4]);
    ctx.set_gpr(4, 16848u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[2] = ctx.fpr[3] - ctx.fpr[2];
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1728)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1748)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1724)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_gpr(30, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1696)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1712)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1704)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1528)));
    ctx.fpr[6] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1376)));
    ctx.set_fpr_bits(7, ctx.fpu_float_to_word(ctx.fpr[6], 1u));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[17] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-13));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1584)));
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(7)));
    ctx.fpr[23] = ctx.fpr[4] / ctx.fpr[3];
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.fpr[25] = ctx.fpr[3] / ctx.fpr[6];
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.fpr[24] = ctx.fpr[3] / ctx.fpr[5];
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = ctx.fpr[3] / ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[21] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08AFD154u);
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD154u) goto L_08AFD154;
    return;
L_08AFD154:
    ctx.set_gpr(31, 0x08AFD15Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD15Cu) goto L_08AFD15C;
    return;
L_08AFD15C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-792)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD180u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD180u) goto L_08AFD180;
    return;
L_08AFD180:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFD19Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD19Cu) goto L_08AFD19C;
    return;
L_08AFD19C:
    ctx.set_gpr(31, 0x08AFD1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1A4u) goto L_08AFD1A4;
    return;
L_08AFD1A4:
    ctx.set_gpr(31, 0x08AFD1ACu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1ACu) goto L_08AFD1AC;
    return;
L_08AFD1AC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-744)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD1D0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1D0u) goto L_08AFD1D0;
    return;
L_08AFD1D0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFD1ECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(24));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1ECu) goto L_08AFD1EC;
    return;
L_08AFD1EC:
    ctx.set_gpr(31, 0x08AFD1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1F4u) goto L_08AFD1F4;
    return;
L_08AFD1F4:
    ctx.set_gpr(31, 0x08AFD1FCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1FCu) goto L_08AFD1FC;
    return;
L_08AFD1FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-720)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD220u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD220u) goto L_08AFD220;
    return;
L_08AFD220:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x08AFD238u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(24));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD238u) goto L_08AFD238;
    return;
L_08AFD238:
    ctx.set_gpr(31, 0x08AFD240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD240u) goto L_08AFD240;
    return;
L_08AFD240:
    ctx.set_gpr(31, 0x08AFD248u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD248u) goto L_08AFD248;
    return;
L_08AFD248:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-696)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD26Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD26Cu) goto L_08AFD26C;
    return;
L_08AFD26C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(24));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFD288u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD288u) goto L_08AFD288;
    return;
L_08AFD288:
    ctx.set_gpr(31, 0x08AFD290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD290u) goto L_08AFD290;
    return;
L_08AFD290:
    ctx.set_gpr(31, 0x08AFD298u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD298u) goto L_08AFD298;
    return;
L_08AFD298:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD2BCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD2BCu) goto L_08AFD2BC;
    return;
L_08AFD2BC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFD2D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD2D8u) goto L_08AFD2D8;
    return;
L_08AFD2D8:
    ctx.set_gpr(31, 0x08AFD2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD2E0u) goto L_08AFD2E0;
    return;
L_08AFD2E0:
    ctx.set_gpr(31, 0x08AFD2E8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD2E8u) goto L_08AFD2E8;
    return;
L_08AFD2E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1440)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD30Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD30Cu) goto L_08AFD30C;
    return;
L_08AFD30C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFD328u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD328u) goto L_08AFD328;
    return;
L_08AFD328:
    ctx.set_gpr(31, 0x08AFD330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD330u) goto L_08AFD330;
    return;
L_08AFD330:
    ctx.set_gpr(31, 0x08AFD338u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD338u) goto L_08AFD338;
    return;
L_08AFD338:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-864)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD35Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD35Cu) goto L_08AFD35C;
    return;
L_08AFD35C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFD378u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD378u) goto L_08AFD378;
    return;
L_08AFD378:
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1872));
    goto L_08AFD384;
L_08AFD384:
    ctx.set_gpr(31, 0x08AFD38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD38Cu) goto L_08AFD38C;
    return;
L_08AFD38C:
    ctx.set_gpr(31, 0x08AFD394u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD394u) goto L_08AFD394;
    return;
L_08AFD394:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD3B4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD3B4u) goto L_08AFD3B4;
    return;
L_08AFD3B4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFD3D0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD3D0u) goto L_08AFD3D0;
    return;
L_08AFD3D0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFD384;
      }
      goto L_08AFD3E0;
    }
L_08AFD3E0:
    ctx.set_gpr(31, 0x08AFD3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD3E8u) goto L_08AFD3E8;
    return;
L_08AFD3E8:
    ctx.set_gpr(31, 0x08AFD3F0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD3F0u) goto L_08AFD3F0;
    return;
L_08AFD3F0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1800)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD414u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD414u) goto L_08AFD414;
    return;
L_08AFD414:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFD430u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD430u) goto L_08AFD430;
    return;
L_08AFD430:
    ctx.set_gpr(31, 0x08AFD438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD438u) goto L_08AFD438;
    return;
L_08AFD438:
    ctx.set_gpr(31, 0x08AFD440u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD440u) goto L_08AFD440;
    return;
L_08AFD440:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1824)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFD464u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD464u) goto L_08AFD464;
    return;
L_08AFD464:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFD480u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD480u) goto L_08AFD480;
    return;
L_08AFD480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[19] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1728)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[23] - ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[11] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1748)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, ctx.gpr[30] - ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.set_gpr(18, 16720u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[10] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[21] = ctx.fpr[3] / ctx.fpr[10];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(20, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1704)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(14, 16576u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(17, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[17] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(13, ctx.gpr[15] - ctx.gpr[4]);
    ctx.set_gpr(12, ctx.gpr[15] - ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.set_gpr(11, ctx.gpr[19] - ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[19] - ctx.gpr[3]);
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(7, ctx.gpr[9] - ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[3]);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1584)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.set_gpr(5, ctx.gpr[21] - ctx.gpr[4]);
    ctx.set_gpr(4, 16776u << 16u);
    ctx.fpr[20] = ctx.fpr[3] / ctx.fpr[10];
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(21, 0u + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[9] = ctx.fpr[12] + ctx.fpr[2];
    ctx.fpr[3] = ctx.fpr[21] + ctx.fpr[9];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = ctx.fpr[2] + ctx.fpr[9];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(19)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[9] = ctx.fpr[11] + ctx.fpr[1];
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[9];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[19] = ctx.fpr[3] + ctx.fpr[19];
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(7)));
    ctx.fpr[3] = ctx.fpr[19] - ctx.fpr[3];
    ctx.fpr[7] = ctx.fpr[3] - ctx.fpr[10];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[9];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(15)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(8)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[20];
    ctx.fpr[9] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[9] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(9)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[15] = ctx.fpr[2] + ctx.fpr[3];
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[9] = ctx.fpr[0] - ctx.fpr[9];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[10];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[8] = ctx.fpr[20] + ctx.fpr[11];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[10];
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = ctx.fpr[8] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[2] = ctx.fpr[0] / ctx.fpr[10];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[11] - ctx.fpr[0];
    ctx.fpr[5] = ctx.fpr[0] - ctx.fpr[6];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(18)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[1] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(17)));
    ctx.fpr[0] = ctx.fpr[11] - ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[11] - ctx.fpr[0];
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[6];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[3] = ctx.fpr[0] / ctx.fpr[10];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[2] = ctx.fpr[0] / ctx.fpr[10];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(16)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(14)));
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[10];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    ctx.fpr[16] = ctx.fpr[13] / ctx.fpr[10];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    ctx.fpr[13] = ctx.fpr[8] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[10];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[9] = ctx.fpr[9] - ctx.fpr[10];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[10];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.fpr[8] = ctx.fpr[8] - ctx.fpr[13];
    ctx.fpr[8] = ctx.fpr[14] + ctx.fpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(8)));
    ctx.fpr[13] = ctx.fpr[8] / ctx.fpr[10];
    ctx.fpr[8] = ctx.fpr[16] / ctx.fpr[10];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[10];
    ctx.fpr[10] = ctx.fpr[16] + ctx.fpr[15];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.fpr[10] = ctx.fpr[12] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.fpr[10] = ctx.fpr[12] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.fpr[10] = ctx.fpr[5] + ctx.fpr[3];
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = ctx.fpr[5] + ctx.fpr[2];
    ctx.fpr[2] = ctx.fpr[4] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = ctx.fpr[9] + ctx.fpr[1];
    ctx.fpr[8] = ctx.fpr[15] - ctx.fpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = ctx.fpr[7] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = ctx.fpr[9] + ctx.fpr[0];
    ctx.fpr[8] = ctx.fpr[6] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[7] + ctx.fpr[0];
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[11];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AFD84C;
L_08AFD84C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 7 ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(25));
    ctx.fpr[2] = ctx.fpr[6] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[8] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(216)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(700), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFD84C;
      }
      goto L_08AFD8A0;
    }
L_08AFD8A0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, 49520u << 16u);
    ctx.set_gpr(2, ctx.gpr[8] - ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.fpr[3] = ctx.fpr[1] / ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[4];
    ctx.fpr[1] = ctx.fpr[6] - ctx.fpr[1];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[8];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[3] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08AFD934u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AFF2D4;
L_08AFD934:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(2640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD980:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-832));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[23] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(19, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(30, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-600));
    goto L_08AFD9E8;
L_08AFD9E8:
    ctx.set_gpr(31, 0x08AFD9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFD9F0u) goto L_08AFD9F0;
    return;
L_08AFD9F0:
    ctx.set_gpr(31, 0x08AFD9F8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFD9F8u) goto L_08AFD9F8;
    return;
L_08AFD9F8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDA18u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDA18u) goto L_08AFDA18;
    return;
L_08AFDA18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFDA28u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFDA28u) goto L_08AFDA28;
    return;
L_08AFDA28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AFDAE8;
    }
    goto L_08AFDA34;
L_08AFDA34:
    ctx.set_gpr(31, 0x08AFDA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDA3Cu) goto L_08AFDA3C;
    return;
L_08AFDA3C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDA50u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDA50u) goto L_08AFDA50;
    return;
L_08AFDA50:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDA70u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDA70u) goto L_08AFDA70;
    return;
L_08AFDA70:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AFDAA0u);
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AFDAA0u) goto L_08AFDAA0;
    return;
L_08AFDAA0:
    ctx.set_gpr(31, 0x08AFDAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDAA8u) goto L_08AFDAA8;
    return;
L_08AFDAA8:
    ctx.set_gpr(31, 0x08AFDAB0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDAB0u) goto L_08AFDAB0;
    return;
L_08AFDAB0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDAD0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDAD0u) goto L_08AFDAD0;
    return;
L_08AFDAD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFDAE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFDAE4u) goto L_08AFDAE4;
    return;
L_08AFDAE4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AFDAE8;
L_08AFDAE8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFD9E8;
      }
      goto L_08AFDAF4;
    }
L_08AFDAF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AFDB04u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB04u) goto L_08AFDB04;
    return;
L_08AFDB04:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AFDB14u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB14u) goto L_08AFDB14;
    return;
L_08AFDB14:
    ctx.set_gpr(2, ctx.gpr[23] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(19, 2226u << 16u);
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-600));
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    goto L_08AFDB48;
L_08AFDB48:
    ctx.set_gpr(31, 0x08AFDB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB50u) goto L_08AFDB50;
    return;
L_08AFDB50:
    ctx.set_gpr(31, 0x08AFDB58u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB58u) goto L_08AFDB58;
    return;
L_08AFDB58:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDB78u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB78u) goto L_08AFDB78;
    return;
L_08AFDB78:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFDB88u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB88u) goto L_08AFDB88;
    return;
L_08AFDB88:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AFDB98u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDB98u) goto L_08AFDB98;
    return;
L_08AFDB98:
    ctx.set_gpr(31, 0x08AFDBA0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDBA0u) goto L_08AFDBA0;
    return;
L_08AFDBA0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDBC0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDBC0u) goto L_08AFDBC0;
    return;
L_08AFDBC0:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFDBD0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFDBD0u) goto L_08AFDBD0;
    return;
L_08AFDBD0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AFDBE0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDBE0u) goto L_08AFDBE0;
    return;
L_08AFDBE0:
    ctx.set_gpr(31, 0x08AFDBE8u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDBE8u) goto L_08AFDBE8;
    return;
L_08AFDBE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDC08u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC08u) goto L_08AFDC08;
    return;
L_08AFDC08:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFDC18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC18u) goto L_08AFDC18;
    return;
L_08AFDC18:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AFDC28u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC28u) goto L_08AFDC28;
    return;
L_08AFDC28:
    ctx.set_gpr(31, 0x08AFDC30u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC30u) goto L_08AFDC30;
    return;
L_08AFDC30:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDC50u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC50u) goto L_08AFDC50;
    return;
L_08AFDC50:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFDC60u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC60u) goto L_08AFDC60;
    return;
L_08AFDC60:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 22 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFDB48;
      }
      goto L_08AFDC84;
    }
L_08AFDC84:
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-600));
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    goto L_08AFDC94;
L_08AFDC94:
    ctx.set_gpr(31, 0x08AFDC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDC9Cu) goto L_08AFDC9C;
    return;
L_08AFDC9C:
    ctx.set_gpr(31, 0x08AFDCA4u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDCA4u) goto L_08AFDCA4;
    return;
L_08AFDCA4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDCC4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDCC4u) goto L_08AFDCC4;
    return;
L_08AFDCC4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFDCD4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFDCD4u) goto L_08AFDCD4;
    return;
L_08AFDCD4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AFDCE4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDCE4u) goto L_08AFDCE4;
    return;
L_08AFDCE4:
    ctx.set_gpr(31, 0x08AFDCECu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDCECu) goto L_08AFDCEC;
    return;
L_08AFDCEC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDD0Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDD0Cu) goto L_08AFDD0C;
    return;
L_08AFDD0C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFDD1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFDD1Cu) goto L_08AFDD1C;
    return;
L_08AFDD1C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFDC94;
      }
      goto L_08AFDD3C;
    }
L_08AFDD3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AFDD90;
      }
      goto L_08AFDD88;
    }
L_08AFDD88:
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFDD90;
L_08AFDD90:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDDA4;
      }
      goto L_08AFDD9C;
    }
L_08AFDD9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFDDA4;
L_08AFDDA4:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
        goto L_08AFDDB8;
    }
    goto L_08AFDDAC;
L_08AFDDAC:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_08AFDDB8;
L_08AFDDB8:
    ctx.set_gpr(31, 0x08AFDDC0u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 71u, 0x08B005D0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDDC0u) goto L_08AFDDC0;
    return;
L_08AFDDC0:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08AFDDCCu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08AFED50;
L_08AFDDCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[17] - ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(23, ctx.gpr[17] - ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[26] = ctx.fpr[7] / ctx.fpr[6];
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[25] = ctx.fpr[6] / ctx.fpr[5];
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    ctx.fpr[24] = ctx.fpr[5] / ctx.fpr[4];
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    ctx.fpr[23] = ctx.fpr[4] / ctx.fpr[3];
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.fpr[22] = ctx.fpr[3] / ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[21] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08AFDEFCu);
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDEFCu) goto L_08AFDEFC;
    return;
L_08AFDEFC:
    ctx.set_gpr(31, 0x08AFDF04u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF04u) goto L_08AFDF04;
    return;
L_08AFDF04:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-576)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDF28u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF28u) goto L_08AFDF28;
    return;
L_08AFDF28:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFDF44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF44u) goto L_08AFDF44;
    return;
L_08AFDF44:
    ctx.set_gpr(31, 0x08AFDF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF4Cu) goto L_08AFDF4C;
    return;
L_08AFDF4C:
    ctx.set_gpr(31, 0x08AFDF54u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF54u) goto L_08AFDF54;
    return;
L_08AFDF54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-528)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDF78u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF78u) goto L_08AFDF78;
    return;
L_08AFDF78:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(25));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFDF94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF94u) goto L_08AFDF94;
    return;
L_08AFDF94:
    ctx.set_gpr(31, 0x08AFDF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDF9Cu) goto L_08AFDF9C;
    return;
L_08AFDF9C:
    ctx.set_gpr(31, 0x08AFDFA4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDFA4u) goto L_08AFDFA4;
    return;
L_08AFDFA4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-504)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFDFC8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDFC8u) goto L_08AFDFC8;
    return;
L_08AFDFC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x08AFDFE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDFE0u) goto L_08AFDFE0;
    return;
L_08AFDFE0:
    ctx.set_gpr(31, 0x08AFDFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDFE8u) goto L_08AFDFE8;
    return;
L_08AFDFE8:
    ctx.set_gpr(31, 0x08AFDFF0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFDFF0u) goto L_08AFDFF0;
    return;
L_08AFDFF0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-480)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE014u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE014u) goto L_08AFE014;
    return;
L_08AFE014:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFE030u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE030u) goto L_08AFE030;
    return;
L_08AFE030:
    ctx.set_gpr(31, 0x08AFE038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE038u) goto L_08AFE038;
    return;
L_08AFE038:
    ctx.set_gpr(31, 0x08AFE040u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE040u) goto L_08AFE040;
    return;
L_08AFE040:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-432)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE064u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE064u) goto L_08AFE064;
    return;
L_08AFE064:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFE080u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE080u) goto L_08AFE080;
    return;
L_08AFE080:
    ctx.set_gpr(31, 0x08AFE088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE088u) goto L_08AFE088;
    return;
L_08AFE088:
    ctx.set_gpr(31, 0x08AFE090u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE090u) goto L_08AFE090;
    return;
L_08AFE090:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-144)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE0B4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE0B4u) goto L_08AFE0B4;
    return;
L_08AFE0B4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFE0D0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE0D0u) goto L_08AFE0D0;
    return;
L_08AFE0D0:
    ctx.set_gpr(31, 0x08AFE0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE0D8u) goto L_08AFE0D8;
    return;
L_08AFE0D8:
    ctx.set_gpr(31, 0x08AFE0E0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE0E0u) goto L_08AFE0E0;
    return;
L_08AFE0E0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-168)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE104u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE104u) goto L_08AFE104;
    return;
L_08AFE104:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFE120u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE120u) goto L_08AFE120;
    return;
L_08AFE120:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(8, ctx.gpr[23] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.set_gpr(9, ctx.gpr[19] - ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[0] / ctx.fpr[2];
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(6, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(3, 16448u << 16u);
    ctx.set_gpr(5, ctx.gpr[22] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[15] = ctx.fpr[0] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[14] = ctx.fpr[0] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[0] / ctx.fpr[2];
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[11] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(11)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[4] + ctx.fpr[11];
    ctx.fpr[11] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.fpr[11] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[11] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(11)));
    ctx.fpr[11] = ctx.fpr[11] + ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    ctx.fpr[10] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(10)));
    ctx.fpr[11] = ctx.fpr[3] + ctx.fpr[10];
    ctx.fpr[10] = ctx.fpr[15] + ctx.fpr[11];
    ctx.fpr[9] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(9)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.fpr[10] = ctx.fpr[4] + ctx.fpr[9];
    ctx.fpr[9] = ctx.fpr[14] + ctx.fpr[10];
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.fpr[9] = ctx.fpr[3] + ctx.fpr[8];
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(7)));
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[7];
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[11];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[4] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[9];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[3] = ctx.fpr[0] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[4];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[3] + ctx.fpr[2];
    ctx.fpr[8] = ctx.fpr[13] + ctx.fpr[9];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(8)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[8] = ctx.fpr[8] + ctx.fpr[10];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    goto L_08AFE32C;
L_08AFE32C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[11]) < 9 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFE32C;
      }
      goto L_08AFE370;
    }
L_08AFE370:
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-264));
    goto L_08AFE380;
L_08AFE380:
    ctx.set_gpr(31, 0x08AFE388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE388u) goto L_08AFE388;
    return;
L_08AFE388:
    ctx.set_gpr(31, 0x08AFE390u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE390u) goto L_08AFE390;
    return;
L_08AFE390:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE3B0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE3B0u) goto L_08AFE3B0;
    return;
L_08AFE3B0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE3C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFE3C8u) goto L_08AFE3C8;
    return;
L_08AFE3C8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 22 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFE380;
      }
      goto L_08AFE3DC;
    }
L_08AFE3DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(832));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE42C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AFE448u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_08AFD980;
L_08AFE448:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AFE494u);
    // nop
    goto L_08AFD980;
L_08AFE494:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AFE4C8u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_08AFE56C;
L_08AFE4C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AFE54C;
    }
    goto L_08AFE4D4;
L_08AFE4D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AFE53C;
    }
    goto L_08AFE4E0;
L_08AFE4E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AFE52C;
    }
    goto L_08AFE4EC;
L_08AFE4EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AFE51C;
    }
    goto L_08AFE4F8;
L_08AFE4F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AFE50C;
    }
    goto L_08AFE504;
L_08AFE504:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFE558;
      }
      goto L_08AFE50C;
    }
L_08AFE50C:
    ctx.set_gpr(31, 0x08AFE514u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AFE604;
L_08AFE514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE554;
      }
      goto L_08AFE51C;
    }
L_08AFE51C:
    ctx.set_gpr(31, 0x08AFE524u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AFE720;
L_08AFE524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE554;
      }
      goto L_08AFE52C;
    }
L_08AFE52C:
    ctx.set_gpr(31, 0x08AFE534u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AFE83C;
L_08AFE534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE554;
      }
      goto L_08AFE53C;
    }
L_08AFE53C:
    ctx.set_gpr(31, 0x08AFE544u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AFE934;
L_08AFE544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE554;
      }
      goto L_08AFE54C;
    }
L_08AFE54C:
    ctx.set_gpr(31, 0x08AFE554u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AFE93C;
L_08AFE554:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFE558;
L_08AFE558:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE56C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AFE57Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE57Cu) goto L_08AFE57C;
    return;
L_08AFE57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE588u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(263));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFE588u) goto L_08AFE588;
    return;
L_08AFE588:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AFE5F8;
    }
    goto L_08AFE590;
L_08AFE590:
    ctx.set_gpr(31, 0x08AFE598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE598u) goto L_08AFE598;
    return;
L_08AFE598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE5A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(263));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE5A4u) goto L_08AFE5A4;
    return;
L_08AFE5A4:
    ctx.set_gpr(31, 0x08AFE5ACu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE5ACu) goto L_08AFE5AC;
    return;
L_08AFE5AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFE5BCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE5BCu) goto L_08AFE5BC;
    return;
L_08AFE5BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFE5E0;
      }
      goto L_08AFE5C8;
    }
L_08AFE5C8:
    ctx.set_gpr(31, 0x08AFE5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE5D0u) goto L_08AFE5D0;
    return;
L_08AFE5D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AFE5E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE5E0u) goto L_08AFE5E0;
    return;
L_08AFE5E0:
    ctx.set_gpr(31, 0x08AFE5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE5E8u) goto L_08AFE5E8;
    return;
L_08AFE5E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE5F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(263));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE5F4u) goto L_08AFE5F4;
    return;
L_08AFE5F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFE5F8;
L_08AFE5F8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE604:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[21] << 5u);
    ctx.set_gpr(17, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-2568));
    goto L_08AFE648;
L_08AFE648:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE664u);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE664u) goto L_08AFE664;
    return;
L_08AFE664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE670u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFE670u) goto L_08AFE670;
    return;
L_08AFE670:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AFE6E0;
    }
    goto L_08AFE678;
L_08AFE678:
    ctx.set_gpr(31, 0x08AFE680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE680u) goto L_08AFE680;
    return;
L_08AFE680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE68Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE68Cu) goto L_08AFE68C;
    return;
L_08AFE68C:
    ctx.set_gpr(31, 0x08AFE694u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE694u) goto L_08AFE694;
    return;
L_08AFE694:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFE6A4u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE6A4u) goto L_08AFE6A4;
    return;
L_08AFE6A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFE6C8;
      }
      goto L_08AFE6B0;
    }
L_08AFE6B0:
    ctx.set_gpr(31, 0x08AFE6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE6B8u) goto L_08AFE6B8;
    return;
L_08AFE6B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AFE6C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE6C8u) goto L_08AFE6C8;
    return;
L_08AFE6C8:
    ctx.set_gpr(31, 0x08AFE6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE6D0u) goto L_08AFE6D0;
    return;
L_08AFE6D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE6DCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE6DCu) goto L_08AFE6DC;
    return;
L_08AFE6DC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AFE6E0;
L_08AFE6E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFE648;
      }
      goto L_08AFE6EC;
    }
L_08AFE6EC:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AFE6F8u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_08AFE944;
L_08AFE6F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[21] << 5u);
    ctx.set_gpr(17, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1872));
    goto L_08AFE764;
L_08AFE764:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE780u);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE780u) goto L_08AFE780;
    return;
L_08AFE780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE78Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFE78Cu) goto L_08AFE78C;
    return;
L_08AFE78C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AFE7FC;
    }
    goto L_08AFE794;
L_08AFE794:
    ctx.set_gpr(31, 0x08AFE79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE79Cu) goto L_08AFE79C;
    return;
L_08AFE79C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE7A8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7A8u) goto L_08AFE7A8;
    return;
L_08AFE7A8:
    ctx.set_gpr(31, 0x08AFE7B0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7B0u) goto L_08AFE7B0;
    return;
L_08AFE7B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFE7C0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7C0u) goto L_08AFE7C0;
    return;
L_08AFE7C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFE7E4;
      }
      goto L_08AFE7CC;
    }
L_08AFE7CC:
    ctx.set_gpr(31, 0x08AFE7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7D4u) goto L_08AFE7D4;
    return;
L_08AFE7D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AFE7E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7E4u) goto L_08AFE7E4;
    return;
L_08AFE7E4:
    ctx.set_gpr(31, 0x08AFE7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7ECu) goto L_08AFE7EC;
    return;
L_08AFE7EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE7F8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE7F8u) goto L_08AFE7F8;
    return;
L_08AFE7F8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AFE7FC;
L_08AFE7FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 53 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFE764;
      }
      goto L_08AFE808;
    }
L_08AFE808:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AFE814u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_08AFE944;
L_08AFE814:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE83C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(17, ctx.gpr[2] << 3u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-600));
    goto L_08AFE870;
L_08AFE870:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFE88Cu);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE88Cu) goto L_08AFE88C;
    return;
L_08AFE88C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE898u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFE898u) goto L_08AFE898;
    return;
L_08AFE898:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AFE908;
    }
    goto L_08AFE8A0;
L_08AFE8A0:
    ctx.set_gpr(31, 0x08AFE8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE8A8u) goto L_08AFE8A8;
    return;
L_08AFE8A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE8B4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE8B4u) goto L_08AFE8B4;
    return;
L_08AFE8B4:
    ctx.set_gpr(31, 0x08AFE8BCu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE8BCu) goto L_08AFE8BC;
    return;
L_08AFE8BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFE8CCu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE8CCu) goto L_08AFE8CC;
    return;
L_08AFE8CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFE8F0;
      }
      goto L_08AFE8D8;
    }
L_08AFE8D8:
    ctx.set_gpr(31, 0x08AFE8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE8E0u) goto L_08AFE8E0;
    return;
L_08AFE8E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AFE8F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE8F0u) goto L_08AFE8F0;
    return;
L_08AFE8F0:
    ctx.set_gpr(31, 0x08AFE8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE8F8u) goto L_08AFE8F8;
    return;
L_08AFE8F8:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFE904u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE904u) goto L_08AFE904;
    return;
L_08AFE904:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AFE908;
L_08AFE908:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFE870;
      }
      goto L_08AFE914;
    }
L_08AFE914:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE934:
    // nop
    goto L_08AFE83C;
L_08AFE93C:
    // nop
    goto L_08AFE83C;
L_08AFE944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(164));
    goto L_08AFE96C;
L_08AFE96C:
    ctx.set_gpr(31, 0x08AFE974u);
    ctx.set_gpr(18, ctx.gpr[16] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE974u) goto L_08AFE974;
    return;
L_08AFE974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE980u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFE980u) goto L_08AFE980;
    return;
L_08AFE980:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AFE9F0;
    }
    goto L_08AFE988;
L_08AFE988:
    ctx.set_gpr(31, 0x08AFE990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE990u) goto L_08AFE990;
    return;
L_08AFE990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFE99Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFE99Cu) goto L_08AFE99C;
    return;
L_08AFE99C:
    ctx.set_gpr(31, 0x08AFE9A4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE9A4u) goto L_08AFE9A4;
    return;
L_08AFE9A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFE9B4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE9B4u) goto L_08AFE9B4;
    return;
L_08AFE9B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFE9D8;
      }
      goto L_08AFE9C0;
    }
L_08AFE9C0:
    ctx.set_gpr(31, 0x08AFE9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFE9C8u) goto L_08AFE9C8;
    return;
L_08AFE9C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AFE9D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFE9D8u) goto L_08AFE9D8;
    return;
L_08AFE9D8:
    ctx.set_gpr(31, 0x08AFE9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFE9E0u) goto L_08AFE9E0;
    return;
L_08AFE9E0:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AFE9ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 159u, 0x08B00B90u>(ctx, &aot_mem) && ctx.pc == 0x08AFE9ECu) goto L_08AFE9EC;
    return;
L_08AFE9EC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AFE9F0;
L_08AFE9F0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 263 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE96C;
      }
      goto L_08AFE9FC;
    }
L_08AFE9FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEA18:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(256), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(260), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEA44:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(256), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(260), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEA70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[10]);
    ctx.set_gpr(31, 0x08AFEACCu);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    goto L_08AFC814;
L_08AFEACC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[21] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AFEAE4;
    }
    goto L_08AFEADC;
L_08AFEADC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AFECA4;
      }
      goto L_08AFEAE4;
    }
L_08AFEAE4:
    ctx.set_gpr(31, 0x08AFEAECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AFC84C;
L_08AFEAEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[21] << 4u);
        goto L_08AFEB00;
    }
    goto L_08AFEAF8;
L_08AFEAF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AFECA4;
      }
      goto L_08AFEB00;
    }
L_08AFEB00:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(22, ctx.gpr[2] << 3u);
    ctx.set_gpr(30, ctx.gpr[20] + ctx.gpr[22]);
    ctx.set_gpr(31, 0x08AFEB1Cu);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 702u, 0x08AF2D44u>(ctx, &aot_mem) && ctx.pc == 0x08AFEB1Cu) goto L_08AFEB1C;
    return;
L_08AFEB1C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[21], 1u));
    ctx.set_gpr(3, ctx.gpr[30] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(312), ctx.gpr[23]);
    ctx.set_gpr(31, 0x08AFEB5Cu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 744u, 0x08AF3004u>(ctx, &aot_mem) && ctx.pc == 0x08AFEB5Cu) goto L_08AFEB5C;
    return;
L_08AFEB5C:
    if (static_cast<std::int32_t>(ctx.gpr[19]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
        goto L_08AFEBFC;
    }
    goto L_08AFEB64;
L_08AFEB64:
    ctx.set_gpr(2, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08AFEB70u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(284));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AFEB70u) goto L_08AFEB70;
    return;
L_08AFEB70:
    ctx.set_gpr(31, 0x08AFEB78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AFEB78u) goto L_08AFEB78;
    return;
L_08AFEB78:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] << 2u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AFEB8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFEB8Cu) goto L_08AFEB8C;
    return;
L_08AFEB8C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AFEBF8;
      }
      goto L_08AFEB98;
    }
L_08AFEB98:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AFEB9C;
L_08AFEB9C:
    ctx.set_gpr(31, 0x08AFEBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AFEBA4u) goto L_08AFEBA4;
    return;
L_08AFEBA4:
    ctx.set_gpr(31, 0x08AFEBACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AFEBACu) goto L_08AFEBAC;
    return;
L_08AFEBAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08AFEBB8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AFECDC;
L_08AFEBB8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AFEBCC;
    }
    goto L_08AFEBC0;
L_08AFEBC0:
    ctx.set_gpr(31, 0x08AFEBC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 552u, 0x08AF227Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEBC8u) goto L_08AFEBC8;
    return;
L_08AFEBC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFEBCC;
L_08AFEBCC:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AFEBE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 560u, 0x08AF2344u>(ctx, &aot_mem) && ctx.pc == 0x08AFEBE8u) goto L_08AFEBE8;
    return;
L_08AFEBE8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFEB9C;
      }
      goto L_08AFEBF8;
    }
L_08AFEBF8:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
    goto L_08AFEBFC;
L_08AFEBFC:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[23] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AFEC98;
      }
      goto L_08AFEC10;
    }
L_08AFEC10:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1468));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEC2C:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFEC3Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_08AFC880;
L_08AFEC3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFEC9C;
      }
      goto L_08AFEC44;
    }
L_08AFEC44:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AFEC50u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AFC880;
L_08AFEC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEC98;
      }
      goto L_08AFEC58;
    }
L_08AFEC58:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFEC68u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    goto L_08AFC880;
L_08AFEC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEC98;
      }
      goto L_08AFEC70;
    }
L_08AFEC70:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFEC80u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    goto L_08AFC880;
L_08AFEC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEC98;
      }
      goto L_08AFEC88;
    }
L_08AFEC88:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFEC98u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    goto L_08AFC880;
L_08AFEC98:
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[20]);
    goto L_08AFEC9C;
L_08AFEC9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    goto L_08AFECA4;
L_08AFECA4:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFECDC:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AFECE4:
    ctx.set_gpr(2, 10922u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43691u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[5] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFED10;
      }
      goto L_08AFED0C;
    }
L_08AFED0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    goto L_08AFED10;
L_08AFED10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFED18:
    ctx.set_gpr(2, 20971u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-17));
    ctx.set_gpr(2, ctx.gpr[2] | 34079u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFED48;
      }
      goto L_08AFED44;
    }
L_08AFED44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    goto L_08AFED48;
L_08AFED48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFED50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFED64u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFED64u) goto L_08AFED64;
    return;
L_08AFED64:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-50));
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEDA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_08AFEE2C;
      }
      goto L_08AFEDEC;
    }
L_08AFEDEC:
    ctx.set_gpr(19, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AFEDF4;
L_08AFEDF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AFEE00u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08AFC55C;
L_08AFEE00:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AFEE1C;
    }
    goto L_08AFEE08;
L_08AFEE08:
    ctx.set_gpr(31, 0x08AFEE10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEE10u) goto L_08AFEE10;
    return;
L_08AFEE10:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AFEE30;
    }
    goto L_08AFEE18;
L_08AFEE18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFEE1C;
L_08AFEE1C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AFEDF4;
    }
    goto L_08AFEE2C;
L_08AFEE2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFEE30;
L_08AFEE30:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AFEE44;
    }
    goto L_08AFEE3C;
L_08AFEE3C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AFEE44;
L_08AFEE44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEE60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
        goto L_08AFEEDC;
    }
    goto L_08AFEEA0;
L_08AFEEA0:
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AFEEA8;
L_08AFEEA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AFEEB4u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08AFC55C;
L_08AFEEB4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_08AFEED0;
    }
    goto L_08AFEEBC;
L_08AFEEBC:
    ctx.set_gpr(31, 0x08AFEEC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEEC4u) goto L_08AFEEC4;
    return;
L_08AFEEC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AFEED8;
      }
      goto L_08AFEECC;
    }
L_08AFEECC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08AFEED0;
L_08AFEED0:
    if (static_cast<std::int32_t>(ctx.gpr[18]) >= 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AFEEA8;
    }
    goto L_08AFEED8;
L_08AFEED8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08AFEEDC;
L_08AFEEDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEEF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AFEF84;
      }
      goto L_08AFEF3C;
    }
L_08AFEF3C:
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08AFEF48;
L_08AFEF48:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AFEF54u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08AFC55C;
L_08AFEF54:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AFEF74;
    }
    goto L_08AFEF5C;
L_08AFEF5C:
    ctx.set_gpr(31, 0x08AFEF64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEF64u) goto L_08AFEF64;
    return;
L_08AFEF64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFEF70;
      }
      goto L_08AFEF6C;
    }
L_08AFEF6C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AFEF70;
L_08AFEF70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AFEF74;
L_08AFEF74:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AFEF48;
    }
    goto L_08AFEF84;
L_08AFEF84:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEFA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFEFD8;
      }
      goto L_08AFEFB4;
    }
L_08AFEFB4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(360));
    goto L_08AFEFBC;
L_08AFEFBC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(720), ctx.gpr[6]);
        goto L_08AFEFD8;
    }
    goto L_08AFEFC8;
L_08AFEFC8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-360));
      if (branch_taken) {
          goto L_08AFEFBC;
      }
      goto L_08AFEFD4;
    }
L_08AFEFD4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(720), ctx.gpr[6]);
    goto L_08AFEFD8;
L_08AFEFD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFEFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AFF034u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08AFC5B4;
L_08AFF034:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AFF044u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AFC55C;
L_08AFF044:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF050u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AFF050u) goto L_08AFF050;
    return;
L_08AFF050:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF05Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AFF05Cu) goto L_08AFF05C;
    return;
L_08AFF05C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF068u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF068u) goto L_08AFF068;
    return;
L_08AFF068:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
        goto L_08AFF118;
    }
    goto L_08AFF07C;
L_08AFF07C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF088;
    }
L_08AFF088:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF094;
    }
L_08AFF094:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
        goto L_08AFF0E4;
    }
    goto L_08AFF0A0;
L_08AFF0A0:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
        goto L_08AFF0B0;
    }
    goto L_08AFF0A8;
L_08AFF0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF0B0;
    }
L_08AFF0B0:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[22]);
        goto L_08AFF0C0;
    }
    goto L_08AFF0B8;
L_08AFF0B8:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[22]);
    goto L_08AFF0C0;
L_08AFF0C0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF0CC;
    }
L_08AFF0CC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF0DC;
    }
L_08AFF0DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF0E4;
    }
L_08AFF0E4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[16]);
        goto L_08AFF0F4;
    }
    goto L_08AFF0EC;
L_08AFF0EC:
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[16]);
    goto L_08AFF0F4;
L_08AFF0F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF100;
    }
L_08AFF100:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF110;
    }
L_08AFF110:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08AFF114;
L_08AFF114:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AFF118;
L_08AFF118:
    ctx.set_gpr(31, 0x08AFF120u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 649u, 0x08AF29ACu>(ctx, &aot_mem) && ctx.pc == 0x08AFF120u) goto L_08AFF120;
    return;
L_08AFF120:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFF12Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF12Cu) goto L_08AFF12C;
    return;
L_08AFF12C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    ctx.set_gpr(18, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1872));
    goto L_08AFF18C;
L_08AFF18C:
    ctx.set_gpr(31, 0x08AFF194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF194u) goto L_08AFF194;
    return;
L_08AFF194:
    ctx.set_gpr(31, 0x08AFF19Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFF19Cu) goto L_08AFF19C;
    return;
L_08AFF19C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFF1BCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1BCu) goto L_08AFF1BC;
    return;
L_08AFF1BC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF1CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1CCu) goto L_08AFF1CC;
    return;
L_08AFF1CC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AFF1DCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1DCu) goto L_08AFF1DC;
    return;
L_08AFF1DC:
    ctx.set_gpr(31, 0x08AFF1E4u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1E4u) goto L_08AFF1E4;
    return;
L_08AFF1E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFF204u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF204u) goto L_08AFF204;
    return;
L_08AFF204:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF214u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 483u, 0x08AD2298u>(ctx, &aot_mem) && ctx.pc == 0x08AFF214u) goto L_08AFF214;
    return;
L_08AFF214:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AFF224u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF224u) goto L_08AFF224;
    return;
L_08AFF224:
    ctx.set_gpr(31, 0x08AFF22Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFF22Cu) goto L_08AFF22C;
    return;
L_08AFF22C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFF24Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF24Cu) goto L_08AFF24C;
    return;
L_08AFF24C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF25Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 416u, 0x08AF19BCu>(ctx, &aot_mem) && ctx.pc == 0x08AFF25Cu) goto L_08AFF25C;
    return;
L_08AFF25C:
    ctx.set_gpr(31, 0x08AFF264u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF264u) goto L_08AFF264;
    return;
L_08AFF264:
    ctx.set_gpr(31, 0x08AFF26Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFF26Cu) goto L_08AFF26C;
    return;
L_08AFF26C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFF28Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF28Cu) goto L_08AFF28C;
    return;
L_08AFF28C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFF29Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 177u, 0x08AF0BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF29Cu) goto L_08AFF29C;
    return;
L_08AFF29C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 53 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFF18C;
      }
      goto L_08AFF2B4;
    }
L_08AFF2B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF2D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(19, 2226u << 16u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1872));
    goto L_08AFF30C;
L_08AFF30C:
    ctx.set_gpr(31, 0x08AFF314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF314u) goto L_08AFF314;
    return;
L_08AFF314:
    ctx.set_gpr(31, 0x08AFF31Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFF31Cu) goto L_08AFF31C;
    return;
L_08AFF31C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFF33Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF33Cu) goto L_08AFF33C;
    return;
L_08AFF33C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFF354u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFF354u) goto L_08AFF354;
    return;
L_08AFF354:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < 53 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFF30C;
      }
      goto L_08AFF368;
    }
L_08AFF368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF388:
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AFF798;
      }
      goto L_08AFF3C4;
    }
L_08AFF3C4:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AFF79C;
    }
    goto L_08AFF3EC;
L_08AFF3EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AFF3F8u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(292)));
    goto L_08AFC55C;
L_08AFF3F8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF404u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AFF404u) goto L_08AFF404;
    return;
L_08AFF404:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF798;
      }
      goto L_08AFF40C;
    }
L_08AFF40C:
    ctx.set_gpr(31, 0x08AFF414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF414u) goto L_08AFF414;
    return;
L_08AFF414:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF420u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF420u) goto L_08AFF420;
    return;
L_08AFF420:
    ctx.set_gpr(31, 0x08AFF428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF428u) goto L_08AFF428;
    return;
L_08AFF428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF434u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF434u) goto L_08AFF434;
    return;
L_08AFF434:
    ctx.set_gpr(31, 0x08AFF43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF43Cu) goto L_08AFF43C;
    return;
L_08AFF43C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF448u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF448u) goto L_08AFF448;
    return;
L_08AFF448:
    ctx.set_gpr(31, 0x08AFF450u);
    ctx.set_gpr(30, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF450u) goto L_08AFF450;
    return;
L_08AFF450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF45Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF45Cu) goto L_08AFF45C;
    return;
L_08AFF45C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF468u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF468u) goto L_08AFF468;
    return;
L_08AFF468:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF474u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF474u) goto L_08AFF474;
    return;
L_08AFF474:
    ctx.set_gpr(31, 0x08AFF47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF47Cu) goto L_08AFF47C;
    return;
L_08AFF47C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF488u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF488u) goto L_08AFF488;
    return;
L_08AFF488:
    ctx.set_gpr(31, 0x08AFF490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF490u) goto L_08AFF490;
    return;
L_08AFF490:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF49Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF49Cu) goto L_08AFF49C;
    return;
L_08AFF49C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF4A8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4A8u) goto L_08AFF4A8;
    return;
L_08AFF4A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF4B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4B4u) goto L_08AFF4B4;
    return;
L_08AFF4B4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF4C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4C0u) goto L_08AFF4C0;
    return;
L_08AFF4C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF4CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF4CCu) goto L_08AFF4CC;
    return;
L_08AFF4CC:
    ctx.set_gpr(31, 0x08AFF4D4u);
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4D4u) goto L_08AFF4D4;
    return;
L_08AFF4D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF4E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF4E0u) goto L_08AFF4E0;
    return;
L_08AFF4E0:
    ctx.set_gpr(31, 0x08AFF4E8u);
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4E8u) goto L_08AFF4E8;
    return;
L_08AFF4E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF4F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF4F4u) goto L_08AFF4F4;
    return;
L_08AFF4F4:
    ctx.set_gpr(31, 0x08AFF4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4FCu) goto L_08AFF4FC;
    return;
L_08AFF4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF508u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF508u) goto L_08AFF508;
    return;
L_08AFF508:
    ctx.set_gpr(31, 0x08AFF510u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AFF510u) goto L_08AFF510;
    return;
L_08AFF510:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF51Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 897u, 0x08AF7B74u>(ctx, &aot_mem) && ctx.pc == 0x08AFF51Cu) goto L_08AFF51C;
    return;
L_08AFF51C:
    ctx.set_gpr(31, 0x08AFF524u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AFF524u) goto L_08AFF524;
    return;
L_08AFF524:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AFF550u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AFC418;
L_08AFF550:
    ctx.set_gpr(31, 0x08AFF558u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF558u) goto L_08AFF558;
    return;
L_08AFF558:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFF580u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(252)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 688u, 0x08862B20u>(ctx, &aot_mem) && ctx.pc == 0x08AFF580u) goto L_08AFF580;
    return;
L_08AFF580:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AFF598;
      }
      goto L_08AFF590;
    }
L_08AFF590:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF5CC;
      }
      goto L_08AFF598;
    }
L_08AFF598:
    ctx.set_gpr(31, 0x08AFF5A0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF5A0u) goto L_08AFF5A0;
    return;
L_08AFF5A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF5ACu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF5ACu) goto L_08AFF5AC;
    return;
L_08AFF5AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AFF5C8u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 870u, 0x0884B470u>(ctx, &aot_mem) && ctx.pc == 0x08AFF5C8u) goto L_08AFF5C8;
    return;
L_08AFF5C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08AFF5CC;
L_08AFF5CC:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFF67C;
    }
    goto L_08AFF5D4;
L_08AFF5D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFF5E8;
      }
      goto L_08AFF5E0;
    }
L_08AFF5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AFF784;
      }
      goto L_08AFF5E8;
    }
L_08AFF5E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF5F0;
    }
L_08AFF5F0:
    ctx.set_gpr(31, 0x08AFF5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF5F8u) goto L_08AFF5F8;
    return;
L_08AFF5F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFF60Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF60Cu) goto L_08AFF60C;
    return;
L_08AFF60C:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[17]);
    if (static_cast<std::int32_t>(ctx.gpr[20]) >= 0) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
        goto L_08AFF634;
    }
    goto L_08AFF618;
L_08AFF618:
    ctx.set_gpr(31, 0x08AFF620u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF620u) goto L_08AFF620;
    return;
L_08AFF620:
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFF62Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF62Cu) goto L_08AFF62C;
    return;
L_08AFF62C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF634;
    }
L_08AFF634:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFF644;
    }
    goto L_08AFF63C;
L_08AFF63C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF644;
    }
L_08AFF644:
    ctx.set_gpr(31, 0x08AFF64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF64Cu) goto L_08AFF64C;
    return;
L_08AFF64C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[16]);
        goto L_08AFF664;
    }
    goto L_08AFF658;
L_08AFF658:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF664;
    }
L_08AFF664:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF670;
    }
L_08AFF670:
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF67C;
    }
L_08AFF67C:
    ctx.set_gpr(31, 0x08AFF684u);
    // nop
    goto L_08AFF7C8;
L_08AFF684:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF68C;
    }
L_08AFF68C:
    if (ctx.gpr[30] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFF6A4;
    }
    goto L_08AFF694;
L_08AFF694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08AFF728;
    }
    goto L_08AFF6A0;
L_08AFF6A0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AFF6A4;
L_08AFF6A4:
    ctx.set_gpr(31, 0x08AFF6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF6ACu) goto L_08AFF6AC;
    return;
L_08AFF6AC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF724;
      }
      goto L_08AFF6BC;
    }
L_08AFF6BC:
    ctx.set_gpr(31, 0x08AFF6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF6C4u) goto L_08AFF6C4;
    return;
L_08AFF6C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFF6D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF6D8u) goto L_08AFF6D8;
    return;
L_08AFF6D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AFF6E4u);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF6E4u) goto L_08AFF6E4;
    return;
L_08AFF6E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFF700;
    }
    goto L_08AFF6F0;
L_08AFF6F0:
    ctx.set_gpr(31, 0x08AFF6F8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF6F8u) goto L_08AFF6F8;
    return;
L_08AFF6F8:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AFF700;
L_08AFF700:
    ctx.set_gpr(31, 0x08AFF708u);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF708u) goto L_08AFF708;
    return;
L_08AFF708:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF724;
      }
      goto L_08AFF718;
    }
L_08AFF718:
    ctx.set_gpr(31, 0x08AFF720u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF720u) goto L_08AFF720;
    return;
L_08AFF720:
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[16]);
    goto L_08AFF724;
L_08AFF724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AFF728;
L_08AFF728:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF73C;
      }
      goto L_08AFF730;
    }
L_08AFF730:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF73C;
    }
L_08AFF73C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF744;
    }
L_08AFF744:
    ctx.set_gpr(31, 0x08AFF74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF74Cu) goto L_08AFF74C;
    return;
L_08AFF74C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFF760u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF760u) goto L_08AFF760;
    return;
L_08AFF760:
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[16]);
    if (static_cast<std::int32_t>(ctx.gpr[20]) >= 0) {
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[16]);
        goto L_08AFF774;
    }
    goto L_08AFF76C;
L_08AFF76C:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[16]);
    goto L_08AFF774;
L_08AFF774:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFF780;
      }
      goto L_08AFF77C;
    }
L_08AFF77C:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AFF780;
L_08AFF780:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AFF784;
L_08AFF784:
    ctx.set_gpr(31, 0x08AFF78Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF78Cu) goto L_08AFF78C;
    return;
L_08AFF78C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AFF798u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 649u, 0x08AF29ACu>(ctx, &aot_mem) && ctx.pc == 0x08AFF798u) goto L_08AFF798;
    return;
L_08AFF798:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AFF79C;
L_08AFF79C:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF7C8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF7D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AFFC38;
      }
      goto L_08AFF80C;
    }
L_08AFF80C:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AFFC3C;
    }
    goto L_08AFF834;
L_08AFF834:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AFF840u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(292)));
    goto L_08AFC55C;
L_08AFF840:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF84Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AFF84Cu) goto L_08AFF84C;
    return;
L_08AFF84C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC38;
      }
      goto L_08AFF854;
    }
L_08AFF854:
    ctx.set_gpr(31, 0x08AFF85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF85Cu) goto L_08AFF85C;
    return;
L_08AFF85C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF868u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF868u) goto L_08AFF868;
    return;
L_08AFF868:
    ctx.set_gpr(31, 0x08AFF870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF870u) goto L_08AFF870;
    return;
L_08AFF870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF87Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF87Cu) goto L_08AFF87C;
    return;
L_08AFF87C:
    ctx.set_gpr(31, 0x08AFF884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF884u) goto L_08AFF884;
    return;
L_08AFF884:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF890u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF890u) goto L_08AFF890;
    return;
L_08AFF890:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF89Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF89Cu) goto L_08AFF89C;
    return;
L_08AFF89C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF8A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8A8u) goto L_08AFF8A8;
    return;
L_08AFF8A8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF8B4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8B4u) goto L_08AFF8B4;
    return;
L_08AFF8B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF8C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8C0u) goto L_08AFF8C0;
    return;
L_08AFF8C0:
    ctx.set_gpr(31, 0x08AFF8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8C8u) goto L_08AFF8C8;
    return;
L_08AFF8C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF8D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8D4u) goto L_08AFF8D4;
    return;
L_08AFF8D4:
    ctx.set_gpr(31, 0x08AFF8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8DCu) goto L_08AFF8DC;
    return;
L_08AFF8DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF8E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8E8u) goto L_08AFF8E8;
    return;
L_08AFF8E8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF8F4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8F4u) goto L_08AFF8F4;
    return;
L_08AFF8F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF900u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AFF900u) goto L_08AFF900;
    return;
L_08AFF900:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF90Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF90Cu) goto L_08AFF90C;
    return;
L_08AFF90C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF918u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF918u) goto L_08AFF918;
    return;
L_08AFF918:
    ctx.set_gpr(31, 0x08AFF920u);
    ctx.set_gpr(30, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF920u) goto L_08AFF920;
    return;
L_08AFF920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF92Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF92Cu) goto L_08AFF92C;
    return;
L_08AFF92C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AFF938u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF938u) goto L_08AFF938;
    return;
L_08AFF938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF944u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF944u) goto L_08AFF944;
    return;
L_08AFF944:
    ctx.set_gpr(31, 0x08AFF94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF94Cu) goto L_08AFF94C;
    return;
L_08AFF94C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF958u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF958u) goto L_08AFF958;
    return;
L_08AFF958:
    ctx.set_gpr(31, 0x08AFF960u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AFF960u) goto L_08AFF960;
    return;
L_08AFF960:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFF96Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 897u, 0x08AF7B74u>(ctx, &aot_mem) && ctx.pc == 0x08AFF96Cu) goto L_08AFF96C;
    return;
L_08AFF96C:
    ctx.set_gpr(31, 0x08AFF974u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AFF974u) goto L_08AFF974;
    return;
L_08AFF974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AFF9A0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AFC418;
L_08AFF9A0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AFF9ACu);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF9ACu) goto L_08AFF9AC;
    return;
L_08AFF9AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFF9D4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(248)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 688u, 0x08862B20u>(ctx, &aot_mem) && ctx.pc == 0x08AFF9D4u) goto L_08AFF9D4;
    return;
L_08AFF9D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(31, 0x08AFFA00u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 688u, 0x08862B20u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA00u) goto L_08AFFA00;
    return;
L_08AFFA00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(23, 0u + 0u);
      if (branch_taken) {
          goto L_08AFFA1C;
      }
      goto L_08AFFA10;
    }
L_08AFFA10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA50;
      }
      goto L_08AFFA1C;
    }
L_08AFFA1C:
    ctx.set_gpr(31, 0x08AFFA24u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA24u) goto L_08AFFA24;
    return;
L_08AFFA24:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFFA30u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFA30u) goto L_08AFFA30;
    return;
L_08AFFA30:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFA4Cu);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 870u, 0x0884B470u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA4Cu) goto L_08AFFA4C;
    return;
L_08AFFA4C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    goto L_08AFFA50;
L_08AFFA50:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFFB04;
    }
    goto L_08AFFA58;
L_08AFFA58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFFA6C;
      }
      goto L_08AFFA64;
    }
L_08AFFA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFA6C;
    }
L_08AFFA6C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFA74;
    }
L_08AFFA74:
    ctx.set_gpr(31, 0x08AFFA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFA7Cu) goto L_08AFFA7C;
    return;
L_08AFFA7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFA90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFA90u) goto L_08AFFA90;
    return;
L_08AFFA90:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFFAB8;
      }
      goto L_08AFFA9C;
    }
L_08AFFA9C:
    ctx.set_gpr(31, 0x08AFFAA4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFAA4u) goto L_08AFFAA4;
    return;
L_08AFFAA4:
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AFFAB0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFAB0u) goto L_08AFFAB0;
    return;
L_08AFFAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFAB8;
    }
L_08AFFAB8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFFACC;
    }
    goto L_08AFFAC4;
L_08AFFAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFACC;
    }
L_08AFFACC:
    ctx.set_gpr(31, 0x08AFFAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFAD4u) goto L_08AFFAD4;
    return;
L_08AFFAD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
        goto L_08AFFAEC;
    }
    goto L_08AFFAE0;
L_08AFFAE0:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFAEC;
    }
L_08AFFAEC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFAF8;
    }
L_08AFFAF8:
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFB04;
    }
L_08AFFB04:
    ctx.set_gpr(31, 0x08AFFB0Cu);
    // nop
    goto L_08AFF7C8;
L_08AFFB0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFB14;
    }
L_08AFFB14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFFB30;
    }
    goto L_08AFFB20;
L_08AFFB20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08AFFBB8;
    }
    goto L_08AFFB2C;
L_08AFFB2C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AFFB30;
L_08AFFB30:
    ctx.set_gpr(31, 0x08AFFB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB38u) goto L_08AFFB38;
    return;
L_08AFFB38:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBB4;
      }
      goto L_08AFFB48;
    }
L_08AFFB48:
    ctx.set_gpr(31, 0x08AFFB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB50u) goto L_08AFFB50;
    return;
L_08AFFB50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFB64u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB64u) goto L_08AFFB64;
    return;
L_08AFFB64:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AFFB74u);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB74u) goto L_08AFFB74;
    return;
L_08AFFB74:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AFFB90;
    }
    goto L_08AFFB80;
L_08AFFB80:
    ctx.set_gpr(31, 0x08AFFB88u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB88u) goto L_08AFFB88;
    return;
L_08AFFB88:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AFFB90;
L_08AFFB90:
    ctx.set_gpr(31, 0x08AFFB98u);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB98u) goto L_08AFFB98;
    return;
L_08AFFB98:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBB4;
      }
      goto L_08AFFBA8;
    }
L_08AFFBA8:
    ctx.set_gpr(31, 0x08AFFBB0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFBB0u) goto L_08AFFBB0;
    return;
L_08AFFBB0:
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[17]);
    goto L_08AFFBB4;
L_08AFFBB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08AFFBB8;
L_08AFFBB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBCC;
      }
      goto L_08AFFBC0;
    }
L_08AFFBC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFBCC;
    }
L_08AFFBCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFBD4;
    }
L_08AFFBD4:
    ctx.set_gpr(31, 0x08AFFBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFBDCu) goto L_08AFFBDC;
    return;
L_08AFFBDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFBF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFBF0u) goto L_08AFFBF0;
    return;
L_08AFFBF0:
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFFC00;
      }
      goto L_08AFFBFC;
    }
L_08AFFBFC:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08AFFC00;
L_08AFFC00:
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AFFC10;
      }
      goto L_08AFFC0C;
    }
L_08AFFC0C:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AFFC10;
L_08AFFC10:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
        goto L_08AFFC24;
    }
    goto L_08AFFC18;
L_08AFFC18:
    ctx.set_gpr(31, 0x08AFFC20u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 599u, 0x08AF2608u>(ctx, &aot_mem) && ctx.pc == 0x08AFFC20u) goto L_08AFFC20;
    return;
L_08AFFC20:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AFFC24;
L_08AFFC24:
    ctx.set_gpr(31, 0x08AFFC2Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFC2Cu) goto L_08AFFC2C;
    return;
L_08AFFC2C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AFFC38u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 649u, 0x08AF29ACu>(ctx, &aot_mem) && ctx.pc == 0x08AFFC38u) goto L_08AFFC38;
    return;
L_08AFFC38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AFFC3C;
L_08AFFC3C:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AFFD74;
    }
    goto L_08AFFC90;
L_08AFFC90:
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFFD70;
      }
      goto L_08AFFCB8;
    }
L_08AFFCB8:
    ctx.set_gpr(31, 0x08AFFCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFCC0u) goto L_08AFFCC0;
    return;
L_08AFFCC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFFCCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFFCCCu) goto L_08AFFCCC;
    return;
L_08AFFCCC:
    ctx.set_gpr(31, 0x08AFFCD4u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFCD4u) goto L_08AFFCD4;
    return;
L_08AFFCD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFFCE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFFCE0u) goto L_08AFFCE0;
    return;
L_08AFFCE0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AFFD28;
      }
      goto L_08AFFCE8;
    }
L_08AFFCE8:
    ctx.set_gpr(31, 0x08AFFCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFCF0u) goto L_08AFFCF0;
    return;
L_08AFFCF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFD04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFD04u) goto L_08AFFD04;
    return;
L_08AFFD04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    goto L_08AFFD28;
L_08AFFD28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD70;
      }
      goto L_08AFFD30;
    }
L_08AFFD30:
    ctx.set_gpr(31, 0x08AFFD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFD38u) goto L_08AFFD38;
    return;
L_08AFFD38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFD4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFD4Cu) goto L_08AFFD4C;
    return;
L_08AFFD4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    goto L_08AFFD70;
L_08AFFD70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFFD74;
L_08AFFD74:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFD88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AFFE94;
    }
    goto L_08AFFDB0;
L_08AFFDB0:
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFFE90;
      }
      goto L_08AFFDD8;
    }
L_08AFFDD8:
    ctx.set_gpr(31, 0x08AFFDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFDE0u) goto L_08AFFDE0;
    return;
L_08AFFDE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFFDECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFFDECu) goto L_08AFFDEC;
    return;
L_08AFFDEC:
    ctx.set_gpr(31, 0x08AFFDF4u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFDF4u) goto L_08AFFDF4;
    return;
L_08AFFDF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFFE00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AFFE00u) goto L_08AFFE00;
    return;
L_08AFFE00:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AFFE48;
      }
      goto L_08AFFE08;
    }
L_08AFFE08:
    ctx.set_gpr(31, 0x08AFFE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFE10u) goto L_08AFFE10;
    return;
L_08AFFE10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFE24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFE24u) goto L_08AFFE24;
    return;
L_08AFFE24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    goto L_08AFFE48;
L_08AFFE48:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE90;
      }
      goto L_08AFFE50;
    }
L_08AFFE50:
    ctx.set_gpr(31, 0x08AFFE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFE58u) goto L_08AFFE58;
    return;
L_08AFFE58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFFE6Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFE6Cu) goto L_08AFFE6C;
    return;
L_08AFFE6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    goto L_08AFFE90;
L_08AFFE90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFFE94;
L_08AFFE94:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFEA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 56u, 0x08B00484u>(ctx, &aot_mem); return;
      }
      goto L_08AFFEFC;
    }
L_08AFFEFC:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(312)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 57u, 0x08B00488u>(ctx, &aot_mem); return;
    }
    goto L_08AFFF20;
L_08AFFF20:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AFFF2Cu);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(292)));
    goto L_08AFC55C;
L_08AFFF2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AFFF4Cu);
    ctx.set_gpr(17, ctx.gpr[2] << 3u);
    goto L_08AFF154;
L_08AFFF4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(31, 0x08AFFFACu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFFACu) goto L_08AFFFAC;
    return;
L_08AFFFAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08AFFFE0;
      }
      goto L_08AFFFDC;
    }
L_08AFFFDC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08AFFFE0;
L_08AFFFE0:
    ctx.set_gpr(31, 0x08AFFFE8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AFFFE8u) goto L_08AFFFE8;
    return;
L_08AFFFE8:
    ctx.set_gpr(3, ctx.gpr[23] - ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.pc = 0x08B00000u; return;
}

void recomp_unit_0190(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0190_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_190(Runtime &runtime) {
    runtime.register_generated_unit(190u, 0x08AFC000u, 16384u, &recomp_unit_0190, &recomp_unit_0190_entry);
    runtime.register_function(0x08AFC000u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC024u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC060u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC088u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC108u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC110u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC120u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC12Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC138u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC140u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC170u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC208u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC210u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC21Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC22Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC23Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC244u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC250u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC260u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC26Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC274u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC280u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC290u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC318u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC320u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC328u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC334u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC368u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC37Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC384u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC38Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC398u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC418u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC42Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC450u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC454u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC464u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC478u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC508u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC51Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC528u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC530u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC54Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC55Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC578u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC608u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC634u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC644u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC658u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC66Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC678u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC680u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC690u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC69Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC708u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC710u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC730u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC738u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC768u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC77Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC78Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC798u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC804u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC808u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC814u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC818u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC834u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC838u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC840u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC844u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC84Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC854u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC860u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC86Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC870u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC878u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC880u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC900u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC908u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC910u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC918u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC920u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC928u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC92Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC960u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC970u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC97Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC984u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC994u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCACCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD000u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD008u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD01Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD024u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD030u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD154u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD15Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD180u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD19Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD220u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD238u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD240u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD248u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD26Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD288u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD290u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD298u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD30Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD328u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD330u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD338u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD35Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD378u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD384u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD38Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD394u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD414u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD430u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD438u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD440u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD464u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD480u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD84Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD934u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD980u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE014u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE030u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE038u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE040u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE064u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE080u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE088u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE090u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE104u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE120u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE32Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE370u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE380u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE388u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE390u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE42Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE448u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE484u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE494u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE504u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE50Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE514u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE51Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE524u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE52Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE534u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE53Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE544u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE54Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE554u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE558u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE56Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE57Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE588u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE590u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE598u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE604u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE648u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE664u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE670u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE678u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE680u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE68Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE694u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE720u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE764u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE780u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE78Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE794u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE79Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE808u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE814u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE83Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE870u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE88Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE898u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE904u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE908u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE914u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE934u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE93Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE944u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE974u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE980u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE988u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE990u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE99Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEACCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEADCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEECCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEED0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEED8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF034u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF044u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF050u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF05Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF068u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF07Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF088u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF094u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF100u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF110u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF114u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF118u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF120u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF12Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF154u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF18Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF194u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF19Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF204u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF214u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF224u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF22Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF24Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF25Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF264u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF26Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF28Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF29Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF30Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF314u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF31Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF33Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF354u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF368u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF388u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF404u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF40Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF414u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF420u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF428u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF434u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF43Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF448u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF450u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF45Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF468u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF474u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF47Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF488u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF490u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF49Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF508u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF510u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF51Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF524u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF550u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF558u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF580u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF590u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF598u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF60Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF618u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF620u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF62Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF634u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF63Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF644u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF64Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF658u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF664u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF670u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF67Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF684u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF68Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF694u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF700u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF708u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF718u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF720u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF724u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF728u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF730u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF73Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF744u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF74Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF760u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF76Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF774u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF77Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF780u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF784u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF78Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF798u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF79Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF80Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF834u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF840u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF84Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF854u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF85Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF868u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF870u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF87Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF890u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF89Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF900u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF90Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF918u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF920u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF92Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF938u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF944u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF94Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF958u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF960u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF974u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFACCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFE8u, &recomp_unit_0190, "recomp_unit_0190");
}
} // namespace psprecomp
