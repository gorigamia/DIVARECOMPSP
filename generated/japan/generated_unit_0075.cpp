#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0075[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 15, 0, 0, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 59,
    0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0,
    96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159,
    0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 213, 0, 214, 215, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0,
    274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0,
    313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 319, 0, 0, 320, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 333,
    0, 0, 334, 0, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 345, 0, 0, 346, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0,
    366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 399, 0,
    0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0,
    0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 424, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 430, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 441, 0, 0, 0, 442, 443, 0, 0, 444, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0,
    466, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 473, 0, 0, 474,
    0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 480, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483,
    0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490,
    0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0,
    506, 0, 507, 0, 0, 0, 0, 508, 0, 509, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519,
    0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 523, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0,
    528, 0, 529, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0,
    0, 536, 0, 0, 0, 0, 0, 537, 0, 538, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 544, 0, 0,
    545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 549, 550, 0, 0, 551, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0,
    0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 558, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 0, 562, 0,
    563, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 571, 572,
    0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 582, 583, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586,
    0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0,
    0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0,
    0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0,
    604, 0, 605, 0, 0, 0, 606, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 621, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0,
    628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 636, 0,
    637, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0,
    644, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 0,
    0, 0, 658, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 666, 0,
    667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0,
    0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 684, 0, 0,
    0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 687, 0, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692, 0, 693,
    0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 701, 0, 0,
    0, 0, 702, 0, 0, 703, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 0, 710, 0,
    711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 714, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0,
    0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0,
    0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 736, 0, 737,
};
void recomp_unit_0075_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08930000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0075[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08930000;
    case 2u: goto L_08930010;
    case 3u: goto L_08930018;
    case 4u: goto L_08930024;
    case 5u: goto L_08930048;
    case 6u: goto L_08930050;
    case 7u: goto L_08930058;
    case 8u: goto L_08930070;
    case 9u: goto L_08930090;
    case 10u: goto L_089300A0;
    case 11u: goto L_0893014C;
    case 12u: goto L_08930250;
    case 13u: goto L_0893025C;
    case 14u: goto L_08930280;
    case 15u: goto L_08930284;
    case 16u: goto L_08930298;
    case 17u: goto L_0893029C;
    case 18u: goto L_089302A8;
    case 19u: goto L_089302D0;
    case 20u: goto L_089302DC;
    case 21u: goto L_089302E4;
    case 22u: goto L_089302E8;
    case 23u: goto L_089302FC;
    case 24u: goto L_08930318;
    case 25u: goto L_08930324;
    case 26u: goto L_08930330;
    case 27u: goto L_08930378;
    case 28u: goto L_08930384;
    case 29u: goto L_08930390;
    case 30u: goto L_08930398;
    case 31u: goto L_089303B0;
    case 32u: goto L_089303B8;
    case 33u: goto L_089303BC;
    case 34u: goto L_089303C4;
    case 35u: goto L_089303CC;
    case 36u: goto L_089303F4;
    case 37u: goto L_0893040C;
    case 38u: goto L_0893041C;
    case 39u: goto L_08930440;
    case 40u: goto L_08930458;
    case 41u: goto L_0893046C;
    case 42u: goto L_08930488;
    case 43u: goto L_089304B4;
    case 44u: goto L_089304D0;
    case 45u: goto L_089304E4;
    case 46u: goto L_08930504;
    case 47u: goto L_08930510;
    case 48u: goto L_08930530;
    case 49u: goto L_0893053C;
    case 50u: goto L_08930544;
    case 51u: goto L_08930554;
    case 52u: goto L_0893056C;
    case 53u: goto L_0893057C;
    case 54u: goto L_089305B0;
    case 55u: goto L_089305BC;
    case 56u: goto L_089305C4;
    case 57u: goto L_089305D8;
    case 58u: goto L_089305F4;
    case 59u: goto L_089305FC;
    case 60u: goto L_0893060C;
    case 61u: goto L_08930618;
    case 62u: goto L_08930624;
    case 63u: goto L_08930630;
    case 64u: goto L_08930648;
    case 65u: goto L_08930658;
    case 66u: goto L_08930670;
    case 67u: goto L_08930678;
    case 68u: goto L_08930688;
    case 69u: goto L_08930694;
    case 70u: goto L_089306B0;
    case 71u: goto L_089306D0;
    case 72u: goto L_08930728;
    case 73u: goto L_08930734;
    case 74u: goto L_08930748;
    case 75u: goto L_08930750;
    case 76u: goto L_0893075C;
    case 77u: goto L_08930774;
    case 78u: goto L_0893078C;
    case 79u: goto L_089307C4;
    case 80u: goto L_089307E4;
    case 81u: goto L_089307F4;
    case 82u: goto L_0893082C;
    case 83u: goto L_08930888;
    case 84u: goto L_08930894;
    case 85u: goto L_089308A8;
    case 86u: goto L_089308B0;
    case 87u: goto L_089308C4;
    case 88u: goto L_089308DC;
    case 89u: goto L_08930914;
    case 90u: goto L_08930934;
    case 91u: goto L_08930944;
    case 92u: goto L_0893097C;
    case 93u: goto L_089309D8;
    case 94u: goto L_089309E4;
    case 95u: goto L_089309F8;
    case 96u: goto L_08930A00;
    case 97u: goto L_08930A14;
    case 98u: goto L_08930A4C;
    case 99u: goto L_08930A70;
    case 100u: goto L_08930A80;
    case 101u: goto L_08930AB8;
    case 102u: goto L_08930B14;
    case 103u: goto L_08930B20;
    case 104u: goto L_08930B34;
    case 105u: goto L_08930B3C;
    case 106u: goto L_08930B50;
    case 107u: goto L_08930B68;
    case 108u: goto L_08930BA4;
    case 109u: goto L_08930BC8;
    case 110u: goto L_08930BD8;
    case 111u: goto L_08930C10;
    case 112u: goto L_08930C6C;
    case 113u: goto L_08930C78;
    case 114u: goto L_08930C8C;
    case 115u: goto L_08930C94;
    case 116u: goto L_08930CA8;
    case 117u: goto L_08930CE8;
    case 118u: goto L_08930D0C;
    case 119u: goto L_08930D1C;
    case 120u: goto L_08930D54;
    case 121u: goto L_08930DA8;
    case 122u: goto L_08930DB8;
    case 123u: goto L_08930DC0;
    case 124u: goto L_08930DCC;
    case 125u: goto L_08930DE4;
    case 126u: goto L_08930DFC;
    case 127u: goto L_08930E34;
    case 128u: goto L_08930E58;
    case 129u: goto L_08930E68;
    case 130u: goto L_08930E84;
    case 131u: goto L_08930E90;
    case 132u: goto L_08930EA4;
    case 133u: goto L_08930EAC;
    case 134u: goto L_08930EC0;
    case 135u: goto L_08930ED8;
    case 136u: goto L_08930F10;
    case 137u: goto L_08930F34;
    case 138u: goto L_08930F44;
    case 139u: goto L_08930F7C;
    case 140u: goto L_08930FD0;
    case 141u: goto L_08930FE0;
    case 142u: goto L_08930FE8;
    case 143u: goto L_08930FF4;
    case 144u: goto L_0893100C;
    case 145u: goto L_08931048;
    case 146u: goto L_0893106C;
    case 147u: goto L_0893107C;
    case 148u: goto L_0893109C;
    case 149u: goto L_089310A8;
    case 150u: goto L_089310BC;
    case 151u: goto L_089310C4;
    case 152u: goto L_089310D8;
    case 153u: goto L_08931114;
    case 154u: goto L_08931138;
    case 155u: goto L_08931148;
    case 156u: goto L_08931180;
    case 157u: goto L_089311DC;
    case 158u: goto L_089311E8;
    case 159u: goto L_089311FC;
    case 160u: goto L_08931204;
    case 161u: goto L_08931210;
    case 162u: goto L_08931228;
    case 163u: goto L_08931240;
    case 164u: goto L_08931278;
    case 165u: goto L_0893129C;
    case 166u: goto L_089312AC;
    case 167u: goto L_089312E4;
    case 168u: goto L_08931340;
    case 169u: goto L_0893134C;
    case 170u: goto L_08931360;
    case 171u: goto L_08931368;
    case 172u: goto L_08931374;
    case 173u: goto L_0893138C;
    case 174u: goto L_089313C4;
    case 175u: goto L_089313E8;
    case 176u: goto L_089313F8;
    case 177u: goto L_08931430;
    case 178u: goto L_0893148C;
    case 179u: goto L_08931498;
    case 180u: goto L_089314A0;
    case 181u: goto L_089314A8;
    case 182u: goto L_089314B0;
    case 183u: goto L_089314C4;
    case 184u: goto L_089314D8;
    case 185u: goto L_089314E8;
    case 186u: goto L_089314FC;
    case 187u: goto L_08931504;
    case 188u: goto L_08931518;
    case 189u: goto L_08931530;
    case 190u: goto L_08931570;
    case 191u: goto L_08931594;
    case 192u: goto L_089315A4;
    case 193u: goto L_089315DC;
    case 194u: goto L_08931634;
    case 195u: goto L_08931640;
    case 196u: goto L_08931648;
    case 197u: goto L_08931650;
    case 198u: goto L_08931658;
    case 199u: goto L_0893166C;
    case 200u: goto L_08931680;
    case 201u: goto L_08931690;
    case 202u: goto L_089316A4;
    case 203u: goto L_089316AC;
    case 204u: goto L_089316C0;
    case 205u: goto L_08931700;
    case 206u: goto L_08931724;
    case 207u: goto L_08931734;
    case 208u: goto L_0893176C;
    case 209u: goto L_089317C8;
    case 210u: goto L_089317D0;
    case 211u: goto L_089317D8;
    case 212u: goto L_089317F0;
    case 213u: goto L_08931804;
    case 214u: goto L_0893180C;
    case 215u: goto L_08931810;
    case 216u: goto L_08931814;
    case 217u: goto L_08931820;
    case 218u: goto L_08931834;
    case 219u: goto L_0893183C;
    case 220u: goto L_08931850;
    case 221u: goto L_0893188C;
    case 222u: goto L_089318B0;
    case 223u: goto L_089318C0;
    case 224u: goto L_089318F4;
    case 225u: goto L_08931950;
    case 226u: goto L_0893195C;
    case 227u: goto L_08931970;
    case 228u: goto L_08931978;
    case 229u: goto L_0893198C;
    case 230u: goto L_089319A4;
    case 231u: goto L_089319DC;
    case 232u: goto L_089319FC;
    case 233u: goto L_08931A0C;
    case 234u: goto L_08931A44;
    case 235u: goto L_08931A94;
    case 236u: goto L_08931AA4;
    case 237u: goto L_08931AAC;
    case 238u: goto L_08931AC0;
    case 239u: goto L_08931AF8;
    case 240u: goto L_08931B18;
    case 241u: goto L_08931B28;
    case 242u: goto L_08931B40;
    case 243u: goto L_08931B70;
    case 244u: goto L_08931BC0;
    case 245u: goto L_08931BD0;
    case 246u: goto L_08931BD8;
    case 247u: goto L_08931BEC;
    case 248u: goto L_08931C24;
    case 249u: goto L_08931C44;
    case 250u: goto L_08931C54;
    case 251u: goto L_08931C6C;
    case 252u: goto L_08931C9C;
    case 253u: goto L_08931CB8;
    case 254u: goto L_08931CC0;
    case 255u: goto L_08931CCC;
    case 256u: goto L_08931CE4;
    case 257u: goto L_08931D10;
    case 258u: goto L_08931D18;
    case 259u: goto L_08931D24;
    case 260u: goto L_08931D3C;
    case 261u: goto L_08931D50;
    case 262u: goto L_08931D74;
    case 263u: goto L_08931D88;
    case 264u: goto L_08931DAC;
    case 265u: goto L_08931DC0;
    case 266u: goto L_08931E34;
    case 267u: goto L_08931EAC;
    case 268u: goto L_08931F1C;
    case 269u: goto L_08931F38;
    case 270u: goto L_08931F44;
    case 271u: goto L_08931F58;
    case 272u: goto L_08931F6C;
    case 273u: goto L_08931F74;
    case 274u: goto L_08931F80;
    case 275u: goto L_08931F94;
    case 276u: goto L_08931FA0;
    case 277u: goto L_08931FB4;
    case 278u: goto L_08931FC0;
    case 279u: goto L_08931FD4;
    case 280u: goto L_08931FDC;
    case 281u: goto L_08931FF4;
    case 282u: goto L_08932008;
    case 283u: goto L_08932010;
    case 284u: goto L_0893201C;
    case 285u: goto L_08932064;
    case 286u: goto L_089320B4;
    case 287u: goto L_089320DC;
    case 288u: goto L_089320E8;
    case 289u: goto L_089320F0;
    case 290u: goto L_0893210C;
    case 291u: goto L_08932118;
    case 292u: goto L_08932134;
    case 293u: goto L_08932160;
    case 294u: goto L_08932168;
    case 295u: goto L_08932174;
    case 296u: goto L_08932188;
    case 297u: goto L_089321AC;
    case 298u: goto L_089321C4;
    case 299u: goto L_089321D0;
    case 300u: goto L_089321D8;
    case 301u: goto L_089321EC;
    case 302u: goto L_08932204;
    case 303u: goto L_08932218;
    case 304u: goto L_0893222C;
    case 305u: goto L_0893223C;
    case 306u: goto L_08932258;
    case 307u: goto L_08932288;
    case 308u: goto L_08932294;
    case 309u: goto L_089322A8;
    case 310u: goto L_089322D8;
    case 311u: goto L_089322E0;
    case 312u: goto L_089322F0;
    case 313u: goto L_08932300;
    case 314u: goto L_08932314;
    case 315u: goto L_08932334;
    case 316u: goto L_08932340;
    case 317u: goto L_08932348;
    case 318u: goto L_08932354;
    case 319u: goto L_08932358;
    case 320u: goto L_08932364;
    case 321u: goto L_08932368;
    case 322u: goto L_08932390;
    case 323u: goto L_089323BC;
    case 324u: goto L_089323F0;
    case 325u: goto L_08932400;
    case 326u: goto L_08932428;
    case 327u: goto L_0893242C;
    case 328u: goto L_08932438;
    case 329u: goto L_08932448;
    case 330u: goto L_08932454;
    case 331u: goto L_08932464;
    case 332u: goto L_0893246C;
    case 333u: goto L_0893247C;
    case 334u: goto L_08932488;
    case 335u: goto L_0893249C;
    case 336u: goto L_089324A0;
    case 337u: goto L_089324C4;
    case 338u: goto L_089324CC;
    case 339u: goto L_089324E8;
    case 340u: goto L_089324F4;
    case 341u: goto L_08932500;
    case 342u: goto L_08932520;
    case 343u: goto L_08932528;
    case 344u: goto L_08932534;
    case 345u: goto L_08932538;
    case 346u: goto L_08932544;
    case 347u: goto L_08932548;
    case 348u: goto L_08932560;
    case 349u: goto L_08932578;
    case 350u: goto L_089325A8;
    case 351u: goto L_089325B4;
    case 352u: goto L_089325E4;
    case 353u: goto L_089325F0;
    case 354u: goto L_08932614;
    case 355u: goto L_08932620;
    case 356u: goto L_08932634;
    case 357u: goto L_0893264C;
    case 358u: goto L_0893266C;
    case 359u: goto L_08932690;
    case 360u: goto L_0893269C;
    case 361u: goto L_089326C0;
    case 362u: goto L_089326CC;
    case 363u: goto L_089326E0;
    case 364u: goto L_089326EC;
    case 365u: goto L_089326F8;
    case 366u: goto L_08932700;
    case 367u: goto L_0893270C;
    case 368u: goto L_08932718;
    case 369u: goto L_08932734;
    case 370u: goto L_08932750;
    case 371u: goto L_08932760;
    case 372u: goto L_0893277C;
    case 373u: goto L_0893278C;
    case 374u: goto L_08932798;
    case 375u: goto L_089327B8;
    case 376u: goto L_089327D0;
    case 377u: goto L_089327F4;
    case 378u: goto L_08932800;
    case 379u: goto L_08932828;
    case 380u: goto L_0893283C;
    case 381u: goto L_0893284C;
    case 382u: goto L_08932858;
    case 383u: goto L_08932864;
    case 384u: goto L_0893287C;
    case 385u: goto L_08932890;
    case 386u: goto L_0893289C;
    case 387u: goto L_089328A4;
    case 388u: goto L_089328AC;
    case 389u: goto L_089328C4;
    case 390u: goto L_089328C8;
    case 391u: goto L_089328E8;
    case 392u: goto L_0893290C;
    case 393u: goto L_08932918;
    case 394u: goto L_08932924;
    case 395u: goto L_0893294C;
    case 396u: goto L_08932954;
    case 397u: goto L_0893296C;
    case 398u: goto L_08932974;
    case 399u: goto L_08932978;
    case 400u: goto L_08932984;
    case 401u: goto L_08932990;
    case 402u: goto L_08932998;
    case 403u: goto L_089329B0;
    case 404u: goto L_089329B8;
    case 405u: goto L_089329BC;
    case 406u: goto L_089329D8;
    case 407u: goto L_08932A08;
    case 408u: goto L_08932A14;
    case 409u: goto L_08932A3C;
    case 410u: goto L_08932A44;
    case 411u: goto L_08932A4C;
    case 412u: goto L_08932A64;
    case 413u: goto L_08932A70;
    case 414u: goto L_08932A90;
    case 415u: goto L_08932A9C;
    case 416u: goto L_08932AA8;
    case 417u: goto L_08932AC8;
    case 418u: goto L_08932AE0;
    case 419u: goto L_08932AF0;
    case 420u: goto L_08932AF8;
    case 421u: goto L_08932B1C;
    case 422u: goto L_08932B44;
    case 423u: goto L_08932B5C;
    case 424u: goto L_08932B60;
    case 425u: goto L_08932B70;
    case 426u: goto L_08932B8C;
    case 427u: goto L_08932B94;
    case 428u: goto L_08932BA0;
    case 429u: goto L_08932BC8;
    case 430u: goto L_08932BCC;
    case 431u: goto L_08932BD4;
    case 432u: goto L_08932BDC;
    case 433u: goto L_08932BE8;
    case 434u: goto L_08932C0C;
    case 435u: goto L_08932C10;
    case 436u: goto L_08932C18;
    case 437u: goto L_08932C40;
    case 438u: goto L_08932C4C;
    case 439u: goto L_08932C58;
    case 440u: goto L_08932C80;
    case 441u: goto L_08932C88;
    case 442u: goto L_08932C98;
    case 443u: goto L_08932C9C;
    case 444u: goto L_08932CA8;
    case 445u: goto L_08932CAC;
    case 446u: goto L_08932CCC;
    case 447u: goto L_08932CF8;
    case 448u: goto L_08932D04;
    case 449u: goto L_08932D2C;
    case 450u: goto L_08932D3C;
    case 451u: goto L_08932D5C;
    case 452u: goto L_08932D7C;
    case 453u: goto L_08932DA4;
    case 454u: goto L_08932DBC;
    case 455u: goto L_08932DC0;
    case 456u: goto L_08932DD0;
    case 457u: goto L_08932DEC;
    case 458u: goto L_08932E04;
    case 459u: goto L_08932E10;
    case 460u: goto L_08932E38;
    case 461u: goto L_08932E44;
    case 462u: goto L_08932E50;
    case 463u: goto L_08932E58;
    case 464u: goto L_08932E60;
    case 465u: goto L_08932E78;
    case 466u: goto L_08932E80;
    case 467u: goto L_08932E84;
    case 468u: goto L_08932E98;
    case 469u: goto L_08932EB0;
    case 470u: goto L_08932EBC;
    case 471u: goto L_08932EE0;
    case 472u: goto L_08932EEC;
    case 473u: goto L_08932EF0;
    case 474u: goto L_08932EFC;
    case 475u: goto L_08932F04;
    case 476u: goto L_08932F0C;
    case 477u: goto L_08932F24;
    case 478u: goto L_08932F2C;
    case 479u: goto L_08932F40;
    case 480u: goto L_08932F48;
    case 481u: goto L_08932F4C;
    case 482u: goto L_08932F60;
    case 483u: goto L_08932F7C;
    case 484u: goto L_08932F88;
    case 485u: goto L_08932FB0;
    case 486u: goto L_08932FBC;
    case 487u: goto L_08932FC4;
    case 488u: goto L_08932FE4;
    case 489u: goto L_08932FF4;
    case 490u: goto L_08932FFC;
    case 491u: goto L_08933004;
    case 492u: goto L_0893301C;
    case 493u: goto L_08933024;
    case 494u: goto L_08933028;
    case 495u: goto L_08933040;
    case 496u: goto L_0893305C;
    case 497u: goto L_08933068;
    case 498u: goto L_08933090;
    case 499u: goto L_08933098;
    case 500u: goto L_089330B8;
    case 501u: goto L_089330C8;
    case 502u: goto L_089330CC;
    case 503u: goto L_089330D8;
    case 504u: goto L_089330E0;
    case 505u: goto L_089330E8;
    case 506u: goto L_08933100;
    case 507u: goto L_08933108;
    case 508u: goto L_0893311C;
    case 509u: goto L_08933124;
    case 510u: goto L_08933128;
    case 511u: goto L_08933140;
    case 512u: goto L_0893315C;
    case 513u: goto L_08933168;
    case 514u: goto L_08933198;
    case 515u: goto L_089331A8;
    case 516u: goto L_089331B4;
    case 517u: goto L_089331CC;
    case 518u: goto L_089331F0;
    case 519u: goto L_089331FC;
    case 520u: goto L_08933208;
    case 521u: goto L_08933230;
    case 522u: goto L_08933238;
    case 523u: goto L_08933244;
    case 524u: goto L_08933248;
    case 525u: goto L_08933254;
    case 526u: goto L_08933260;
    case 527u: goto L_08933268;
    case 528u: goto L_08933280;
    case 529u: goto L_08933288;
    case 530u: goto L_0893328C;
    case 531u: goto L_089332A8;
    case 532u: goto L_089332CC;
    case 533u: goto L_089332D8;
    case 534u: goto L_089332F0;
    case 535u: goto L_089332F8;
    case 536u: goto L_08933304;
    case 537u: goto L_0893331C;
    case 538u: goto L_08933324;
    case 539u: goto L_08933328;
    case 540u: goto L_08933334;
    case 541u: goto L_0893335C;
    case 542u: goto L_08933364;
    case 543u: goto L_08933370;
    case 544u: goto L_08933374;
    case 545u: goto L_08933380;
    case 546u: goto L_0893338C;
    case 547u: goto L_089333AC;
    case 548u: goto L_089333B4;
    case 549u: goto L_089333C0;
    case 550u: goto L_089333C4;
    case 551u: goto L_089333D0;
    case 552u: goto L_089333D4;
    case 553u: goto L_089333F0;
    case 554u: goto L_08933408;
    case 555u: goto L_08933414;
    case 556u: goto L_08933438;
    case 557u: goto L_08933440;
    case 558u: goto L_08933444;
    case 559u: goto L_08933450;
    case 560u: goto L_08933458;
    case 561u: goto L_08933460;
    case 562u: goto L_08933478;
    case 563u: goto L_08933480;
    case 564u: goto L_08933484;
    case 565u: goto L_08933498;
    case 566u: goto L_089334C4;
    case 567u: goto L_089334CC;
    case 568u: goto L_089334D8;
    case 569u: goto L_089334E8;
    case 570u: goto L_089334F0;
    case 571u: goto L_089334F8;
    case 572u: goto L_089334FC;
    case 573u: goto L_08933518;
    case 574u: goto L_08933520;
    case 575u: goto L_0893353C;
    case 576u: goto L_08933558;
    case 577u: goto L_08933584;
    case 578u: goto L_0893358C;
    case 579u: goto L_08933598;
    case 580u: goto L_089335A8;
    case 581u: goto L_089335B0;
    case 582u: goto L_089335B8;
    case 583u: goto L_089335BC;
    case 584u: goto L_089335D8;
    case 585u: goto L_089335E0;
    case 586u: goto L_089335FC;
    case 587u: goto L_08933618;
    case 588u: goto L_0893363C;
    case 589u: goto L_08933644;
    case 590u: goto L_08933650;
    case 591u: goto L_08933660;
    case 592u: goto L_08933670;
    case 593u: goto L_08933678;
    case 594u: goto L_08933694;
    case 595u: goto L_089336AC;
    case 596u: goto L_089336E0;
    case 597u: goto L_089336EC;
    case 598u: goto L_08933710;
    case 599u: goto L_0893371C;
    case 600u: goto L_08933728;
    case 601u: goto L_08933748;
    case 602u: goto L_08933754;
    case 603u: goto L_08933774;
    case 604u: goto L_08933780;
    case 605u: goto L_08933788;
    case 606u: goto L_08933798;
    case 607u: goto L_0893379C;
    case 608u: goto L_089337A8;
    case 609u: goto L_089337D0;
    case 610u: goto L_0893380C;
    case 611u: goto L_08933820;
    case 612u: goto L_0893382C;
    case 613u: goto L_08933838;
    case 614u: goto L_08933848;
    case 615u: goto L_08933854;
    case 616u: goto L_08933864;
    case 617u: goto L_08933870;
    case 618u: goto L_08933890;
    case 619u: goto L_089338B0;
    case 620u: goto L_089338BC;
    case 621u: goto L_089338C0;
    case 622u: goto L_089338C4;
    case 623u: goto L_089338D0;
    case 624u: goto L_08933900;
    case 625u: goto L_0893393C;
    case 626u: goto L_08933948;
    case 627u: goto L_08933974;
    case 628u: goto L_08933980;
    case 629u: goto L_0893399C;
    case 630u: goto L_089339A8;
    case 631u: goto L_089339B0;
    case 632u: goto L_089339BC;
    case 633u: goto L_089339C4;
    case 634u: goto L_089339D8;
    case 635u: goto L_089339EC;
    case 636u: goto L_089339F8;
    case 637u: goto L_08933A00;
    case 638u: goto L_08933A08;
    case 639u: goto L_08933A18;
    case 640u: goto L_08933A38;
    case 641u: goto L_08933A4C;
    case 642u: goto L_08933A54;
    case 643u: goto L_08933A68;
    case 644u: goto L_08933A80;
    case 645u: goto L_08933A8C;
    case 646u: goto L_08933AA0;
    case 647u: goto L_08933AB0;
    case 648u: goto L_08933AC4;
    case 649u: goto L_08933ACC;
    case 650u: goto L_08933AE0;
    case 651u: goto L_08933AE8;
    case 652u: goto L_08933B38;
    case 653u: goto L_08933B44;
    case 654u: goto L_08933B4C;
    case 655u: goto L_08933B58;
    case 656u: goto L_08933B60;
    case 657u: goto L_08933B74;
    case 658u: goto L_08933B88;
    case 659u: goto L_08933B94;
    case 660u: goto L_08933B9C;
    case 661u: goto L_08933BA4;
    case 662u: goto L_08933BB4;
    case 663u: goto L_08933BD8;
    case 664u: goto L_08933BE4;
    case 665u: goto L_08933BEC;
    case 666u: goto L_08933BF8;
    case 667u: goto L_08933C00;
    case 668u: goto L_08933C14;
    case 669u: goto L_08933C28;
    case 670u: goto L_08933C34;
    case 671u: goto L_08933C3C;
    case 672u: goto L_08933C44;
    case 673u: goto L_08933C54;
    case 674u: goto L_08933C78;
    case 675u: goto L_08933C84;
    case 676u: goto L_08933C8C;
    case 677u: goto L_08933C98;
    case 678u: goto L_08933CA0;
    case 679u: goto L_08933CB4;
    case 680u: goto L_08933CC8;
    case 681u: goto L_08933CD4;
    case 682u: goto L_08933CDC;
    case 683u: goto L_08933CE4;
    case 684u: goto L_08933CF4;
    case 685u: goto L_08933D18;
    case 686u: goto L_08933D24;
    case 687u: goto L_08933D2C;
    case 688u: goto L_08933D38;
    case 689u: goto L_08933D40;
    case 690u: goto L_08933D54;
    case 691u: goto L_08933D68;
    case 692u: goto L_08933D74;
    case 693u: goto L_08933D7C;
    case 694u: goto L_08933D84;
    case 695u: goto L_08933D94;
    case 696u: goto L_08933DB8;
    case 697u: goto L_08933DC4;
    case 698u: goto L_08933DCC;
    case 699u: goto L_08933DD8;
    case 700u: goto L_08933DE0;
    case 701u: goto L_08933DF4;
    case 702u: goto L_08933E08;
    case 703u: goto L_08933E14;
    case 704u: goto L_08933E1C;
    case 705u: goto L_08933E24;
    case 706u: goto L_08933E34;
    case 707u: goto L_08933E58;
    case 708u: goto L_08933E64;
    case 709u: goto L_08933E6C;
    case 710u: goto L_08933E78;
    case 711u: goto L_08933E80;
    case 712u: goto L_08933E94;
    case 713u: goto L_08933EA8;
    case 714u: goto L_08933EB4;
    case 715u: goto L_08933EBC;
    case 716u: goto L_08933EC4;
    case 717u: goto L_08933ED4;
    case 718u: goto L_08933EF8;
    case 719u: goto L_08933F04;
    case 720u: goto L_08933F0C;
    case 721u: goto L_08933F18;
    case 722u: goto L_08933F20;
    case 723u: goto L_08933F34;
    case 724u: goto L_08933F48;
    case 725u: goto L_08933F54;
    case 726u: goto L_08933F5C;
    case 727u: goto L_08933F64;
    case 728u: goto L_08933F74;
    case 729u: goto L_08933F98;
    case 730u: goto L_08933FA4;
    case 731u: goto L_08933FAC;
    case 732u: goto L_08933FB8;
    case 733u: goto L_08933FC0;
    case 734u: goto L_08933FD4;
    case 735u: goto L_08933FE8;
    case 736u: goto L_08933FF4;
    case 737u: goto L_08933FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08930000:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930010u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930010u) goto L_08930010;
    return;
L_08930010:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08930018;
L_08930018:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 925u, 0x0892FFA8u>(ctx, &aot_mem); return;
      }
      goto L_08930024;
    }
L_08930024:
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
L_08930048:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930050:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930090;
      }
      goto L_08930070;
    }
L_08930070:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08930090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 457u, 0x0892A068u>(ctx, &aot_mem) && ctx.pc == 0x08930090u) goto L_08930090;
    return;
L_08930090:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089300A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893014C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0893025C;
      }
      goto L_08930250;
    }
L_08930250:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_0893025C;
L_0893025C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930284;
      }
      goto L_08930280;
    }
L_08930280:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    goto L_08930284;
L_08930284:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893029C;
      }
      goto L_08930298;
    }
L_08930298:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    goto L_0893029C;
L_0893029C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089302A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089302D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089302D0u) goto L_089302D0;
    return;
L_089302D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089302DCu);
    // nop
    goto L_08932258;
L_089302DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089302E8;
      }
      goto L_089302E4;
    }
L_089302E4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089302E8;
L_089302E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089302FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089302FCu) goto L_089302FC;
    return;
L_089302FC:
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
L_08930318:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930324:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089303C4;
      }
      goto L_08930378;
    }
L_08930378:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089303BC;
      }
      goto L_08930384;
    }
L_08930384:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08930390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08930390u) goto L_08930390;
    return;
L_08930390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089303BC;
      }
      goto L_08930398;
    }
L_08930398:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089303B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089303B0u) goto L_089303B0;
    return;
L_089303B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089303BC;
      }
      goto L_089303B8;
    }
L_089303B8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_089303BC;
L_089303BC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-4));
    goto L_089303C4;
L_089303C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08930378;
      }
      goto L_089303CC;
    }
L_089303CC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089303F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893040Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893040Cu) goto L_0893040C;
    return;
L_0893040C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893041C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08930440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08930440u) goto L_08930440;
    return;
L_08930440:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930458u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930458u) goto L_08930458;
    return;
L_08930458:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893046Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0893046Cu) goto L_0893046C;
    return;
L_0893046C:
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
L_08930488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089304B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089304B4u) goto L_089304B4;
    return;
L_089304B4:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089304D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089304D0u) goto L_089304D0;
    return;
L_089304D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089304E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089304E4u) goto L_089304E4;
    return;
L_089304E4:
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
L_08930504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930510:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930544;
      }
      goto L_08930530;
    }
L_08930530:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893053Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0893053Cu) goto L_0893053C;
    return;
L_0893053C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08930554;
      }
      goto L_08930544;
    }
L_08930544:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08930554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08930554u) goto L_08930554;
    return;
L_08930554:
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
L_0893056C:
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-7552), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893057C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089305B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089305B0u) goto L_089305B0;
    return;
L_089305B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089306B0;
      }
      goto L_089305BC;
    }
L_089305BC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089305D8;
      }
      goto L_089305C4;
    }
L_089305C4:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-7552)));
    ctx.set_gpr(3, ctx.gpr[19] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089305FC;
      }
      goto L_089305D8;
    }
L_089305D8:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089305F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089305F4u) goto L_089305F4;
    return;
L_089305F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089306B0;
      }
      goto L_089305FC;
    }
L_089305FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08930630;
      }
      goto L_0893060C;
    }
L_0893060C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08930630;
      }
      goto L_08930618;
    }
L_08930618:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08930630;
      }
      goto L_08930624;
    }
L_08930624:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089306B0;
      }
      goto L_08930630;
    }
L_08930630:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930648u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930648u) goto L_08930648;
    return;
L_08930648:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089306B0;
      }
      goto L_08930658;
    }
L_08930658:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930670u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930670u) goto L_08930670;
    return;
L_08930670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089306B0;
      }
      goto L_08930678;
    }
L_08930678:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08930694;
      }
      goto L_08930688;
    }
L_08930688:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089306B0;
      }
      goto L_08930694;
    }
L_08930694:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089306B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089306B0u) goto L_089306B0;
    return;
L_089306B0:
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
L_089306D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930728u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930728u) goto L_08930728;
    return;
L_08930728:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089307F4;
      }
      goto L_08930734;
    }
L_08930734:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930748u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930748u) goto L_08930748;
    return;
L_08930748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089307F4;
      }
      goto L_08930750;
    }
L_08930750:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0893075Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x0893075Cu) goto L_0893075C;
    return;
L_0893075C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930774u) goto L_08930774;
    return;
L_08930774:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893078Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893078Cu) goto L_0893078C;
    return;
L_0893078C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089307C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x089307C4u) goto L_089307C4;
    return;
L_089307C4:
    ctx.set_gpr(7, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089307E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089307E4u) goto L_089307E4;
    return;
L_089307E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089307F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x089307F4u) goto L_089307F4;
    return;
L_089307F4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893082C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930888u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930888u) goto L_08930888;
    return;
L_08930888:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930944;
      }
      goto L_08930894;
    }
L_08930894:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089308A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089308A8u) goto L_089308A8;
    return;
L_089308A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930944;
      }
      goto L_089308B0;
    }
L_089308B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089308C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089308C4u) goto L_089308C4;
    return;
L_089308C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089308DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089308DCu) goto L_089308DC;
    return;
L_089308DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08930914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08930914u) goto L_08930914;
    return;
L_08930914:
    ctx.set_gpr(7, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930934u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930934u) goto L_08930934;
    return;
L_08930934:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08930944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08930944u) goto L_08930944;
    return;
L_08930944:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893097C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089309D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089309D8u) goto L_089309D8;
    return;
L_089309D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930A80;
      }
      goto L_089309E4;
    }
L_089309E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089309F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089309F8u) goto L_089309F8;
    return;
L_089309F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930A80;
      }
      goto L_08930A00;
    }
L_08930A00:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930A14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930A14u) goto L_08930A14;
    return;
L_08930A14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08930A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08930A4Cu) goto L_08930A4C;
    return;
L_08930A4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930A70u) goto L_08930A70;
    return;
L_08930A70:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08930A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08930A80u) goto L_08930A80;
    return;
L_08930A80:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930AB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930B14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930B14u) goto L_08930B14;
    return;
L_08930B14:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BD8;
      }
      goto L_08930B20;
    }
L_08930B20:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930B34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930B34u) goto L_08930B34;
    return;
L_08930B34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BD8;
      }
      goto L_08930B3C;
    }
L_08930B3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930B50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930B50u) goto L_08930B50;
    return;
L_08930B50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930B68u) goto L_08930B68;
    return;
L_08930B68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08930BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08930BA4u) goto L_08930BA4;
    return;
L_08930BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930BC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930BC8u) goto L_08930BC8;
    return;
L_08930BC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08930BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08930BD8u) goto L_08930BD8;
    return;
L_08930BD8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930C10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930C6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930C6Cu) goto L_08930C6C;
    return;
L_08930C6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D1C;
      }
      goto L_08930C78;
    }
L_08930C78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930C8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930C8Cu) goto L_08930C8C;
    return;
L_08930C8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D1C;
      }
      goto L_08930C94;
    }
L_08930C94:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930CA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930CA8u) goto L_08930CA8;
    return;
L_08930CA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[22] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08930CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08930CE8u) goto L_08930CE8;
    return;
L_08930CE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930D0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930D0Cu) goto L_08930D0C;
    return;
L_08930D0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08930D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08930D1Cu) goto L_08930D1C;
    return;
L_08930D1C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930D54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E68;
      }
      goto L_08930DA8;
    }
L_08930DA8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930DB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930DB8u) goto L_08930DB8;
    return;
L_08930DB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E68;
      }
      goto L_08930DC0;
    }
L_08930DC0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08930DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08930DCCu) goto L_08930DCC;
    return;
L_08930DCC:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930DE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930DE4u) goto L_08930DE4;
    return;
L_08930DE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930DFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930DFCu) goto L_08930DFC;
    return;
L_08930DFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08930E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08930E34u) goto L_08930E34;
    return;
L_08930E34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930E58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930E58u) goto L_08930E58;
    return;
L_08930E58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08930E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08930E68u) goto L_08930E68;
    return;
L_08930E68:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930E84u) goto L_08930E84;
    return;
L_08930E84:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930F44;
      }
      goto L_08930E90;
    }
L_08930E90:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930EA4u) goto L_08930EA4;
    return;
L_08930EA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930F44;
      }
      goto L_08930EAC;
    }
L_08930EAC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930EC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930EC0u) goto L_08930EC0;
    return;
L_08930EC0:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930ED8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930ED8u) goto L_08930ED8;
    return;
L_08930ED8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08930F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08930F10u) goto L_08930F10;
    return;
L_08930F10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930F34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930F34u) goto L_08930F34;
    return;
L_08930F34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08930F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08930F44u) goto L_08930F44;
    return;
L_08930F44:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893107C;
      }
      goto L_08930FD0;
    }
L_08930FD0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08930FE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930FE0u) goto L_08930FE0;
    return;
L_08930FE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893107C;
      }
      goto L_08930FE8;
    }
L_08930FE8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08930FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08930FF4u) goto L_08930FF4;
    return;
L_08930FF4:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893100Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893100Cu) goto L_0893100C;
    return;
L_0893100C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08931048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08931048u) goto L_08931048;
    return;
L_08931048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893106Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893106Cu) goto L_0893106C;
    return;
L_0893106C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0893107Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0893107Cu) goto L_0893107C;
    return;
L_0893107C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893109Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893109Cu) goto L_0893109C;
    return;
L_0893109C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931148;
      }
      goto L_089310A8;
    }
L_089310A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089310BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089310BCu) goto L_089310BC;
    return;
L_089310BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931148;
      }
      goto L_089310C4;
    }
L_089310C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089310D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089310D8u) goto L_089310D8;
    return;
L_089310D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08931114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08931114u) goto L_08931114;
    return;
L_08931114:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931138u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931138u) goto L_08931138;
    return;
L_08931138:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08931148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08931148u) goto L_08931148;
    return;
L_08931148:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[11]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089311DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089311DCu) goto L_089311DC;
    return;
L_089311DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089312AC;
      }
      goto L_089311E8;
    }
L_089311E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089311FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089311FCu) goto L_089311FC;
    return;
L_089311FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089312AC;
      }
      goto L_08931204;
    }
L_08931204:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08931210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08931210u) goto L_08931210;
    return;
L_08931210:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931228u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931228u) goto L_08931228;
    return;
L_08931228:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931240u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931240u) goto L_08931240;
    return;
L_08931240:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08931278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08931278u) goto L_08931278;
    return;
L_08931278:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893129Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893129Cu) goto L_0893129C;
    return;
L_0893129C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089312ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x089312ACu) goto L_089312AC;
    return;
L_089312AC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089312E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931340u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931340u) goto L_08931340;
    return;
L_08931340:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089313F8;
      }
      goto L_0893134C;
    }
L_0893134C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931360u) goto L_08931360;
    return;
L_08931360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089313F8;
      }
      goto L_08931368;
    }
L_08931368:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08931374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08931374u) goto L_08931374;
    return;
L_08931374:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893138Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893138Cu) goto L_0893138C;
    return;
L_0893138C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089313C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x089313C4u) goto L_089313C4;
    return;
L_089313C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089313E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089313E8u) goto L_089313E8;
    return;
L_089313E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089313F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x089313F8u) goto L_089313F8;
    return;
L_089313F8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[11]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893148Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893148Cu) goto L_0893148C;
    return;
L_0893148C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089315A4;
      }
      goto L_08931498;
    }
L_08931498:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089315A4;
      }
      goto L_089314A0;
    }
L_089314A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089315A4;
      }
      goto L_089314A8;
    }
L_089314A8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089315A4;
      }
      goto L_089314B0;
    }
L_089314B0:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089314D8;
      }
      goto L_089314C4;
    }
L_089314C4:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089314D8;
L_089314D8:
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089314C4;
      }
      goto L_089314E8;
    }
L_089314E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089314FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089314FCu) goto L_089314FC;
    return;
L_089314FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089315A4;
      }
      goto L_08931504;
    }
L_08931504:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931518u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931518u) goto L_08931518;
    return;
L_08931518:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931530u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931530u) goto L_08931530;
    return;
L_08931530:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[23] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08931570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08931570u) goto L_08931570;
    return;
L_08931570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931594u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931594u) goto L_08931594;
    return;
L_08931594:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089315A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x089315A4u) goto L_089315A4;
    return;
L_089315A4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089315DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931634u) goto L_08931634;
    return;
L_08931634:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931734;
      }
      goto L_08931640;
    }
L_08931640:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931734;
      }
      goto L_08931648;
    }
L_08931648:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931734;
      }
      goto L_08931650;
    }
L_08931650:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931734;
      }
      goto L_08931658;
    }
L_08931658:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931680;
      }
      goto L_0893166C;
    }
L_0893166C:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08931680;
L_08931680:
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893166C;
      }
      goto L_08931690;
    }
L_08931690:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089316A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089316A4u) goto L_089316A4;
    return;
L_089316A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931734;
      }
      goto L_089316AC;
    }
L_089316AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089316C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089316C0u) goto L_089316C0;
    return;
L_089316C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[23] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08931700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08931700u) goto L_08931700;
    return;
L_08931700:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931724u) goto L_08931724;
    return;
L_08931724:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08931734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08931734u) goto L_08931734;
    return;
L_08931734:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893176C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[11]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089317C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089317C8u) goto L_089317C8;
    return;
L_089317C8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089318C0;
      }
      goto L_089317D0;
    }
L_089317D0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089318C0;
      }
      goto L_089317D8;
    }
L_089317D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931814;
      }
      goto L_089317F0;
    }
L_089317F0:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931810;
      }
      goto L_08931804;
    }
L_08931804:
    ctx.set_gpr(31, 0x0893180Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x0893180Cu) goto L_0893180C;
    return;
L_0893180C:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08931810;
L_08931810:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08931814;
L_08931814:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089317F0;
      }
      goto L_08931820;
    }
L_08931820:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931834u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931834u) goto L_08931834;
    return;
L_08931834:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089318C0;
      }
      goto L_0893183C;
    }
L_0893183C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931850u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931850u) goto L_08931850;
    return;
L_08931850:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[22] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0893188Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x0893188Cu) goto L_0893188C;
    return;
L_0893188C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089318B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089318B0u) goto L_089318B0;
    return;
L_089318B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089318C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x089318C0u) goto L_089318C0;
    return;
L_089318C0:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089318F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931950u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931950u) goto L_08931950;
    return;
L_08931950:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931A0C;
      }
      goto L_0893195C;
    }
L_0893195C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931970u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931970u) goto L_08931970;
    return;
L_08931970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931A0C;
      }
      goto L_08931978;
    }
L_08931978:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893198Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893198Cu) goto L_0893198C;
    return;
L_0893198C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089319A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089319A4u) goto L_089319A4;
    return;
L_089319A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089319DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x089319DCu) goto L_089319DC;
    return;
L_089319DC:
    ctx.set_gpr(7, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089319FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089319FCu) goto L_089319FC;
    return;
L_089319FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08931A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08931A0Cu) goto L_08931A0C;
    return;
L_08931A0C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931B28;
      }
      goto L_08931A94;
    }
L_08931A94:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931AA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931AA4u) goto L_08931AA4;
    return;
L_08931AA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931B28;
      }
      goto L_08931AAC;
    }
L_08931AAC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931AC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931AC0u) goto L_08931AC0;
    return;
L_08931AC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08931AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08931AF8u) goto L_08931AF8;
    return;
L_08931AF8:
    ctx.set_gpr(7, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931B18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931B18u) goto L_08931B18;
    return;
L_08931B18:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08931B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08931B28u) goto L_08931B28;
    return;
L_08931B28:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931B40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931B40u) goto L_08931B40;
    return;
L_08931B40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931B70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931C54;
      }
      goto L_08931BC0;
    }
L_08931BC0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931BD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931BD0u) goto L_08931BD0;
    return;
L_08931BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931C54;
      }
      goto L_08931BD8;
    }
L_08931BD8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931BECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931BECu) goto L_08931BEC;
    return;
L_08931BEC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08931C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08931C24u) goto L_08931C24;
    return;
L_08931C24:
    ctx.set_gpr(7, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931C44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931C44u) goto L_08931C44;
    return;
L_08931C44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08931C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08931C54u) goto L_08931C54;
    return;
L_08931C54:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931C6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931C6Cu) goto L_08931C6C;
    return;
L_08931C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931C9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08931CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1040u, 0x0893FE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08931CB8u) goto L_08931CB8;
    return;
L_08931CB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931CCC;
      }
      goto L_08931CC0;
    }
L_08931CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08931CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1005u, 0x0893FB70u>(ctx, &aot_mem) && ctx.pc == 0x08931CCCu) goto L_08931CCC;
    return;
L_08931CCC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30816), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08931CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1023u, 0x0893FCB8u>(ctx, &aot_mem) && ctx.pc == 0x08931CE4u) goto L_08931CE4;
    return;
L_08931CE4:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08931D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1040u, 0x0893FE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08931D10u) goto L_08931D10;
    return;
L_08931D10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931D24;
      }
      goto L_08931D18;
    }
L_08931D18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08931D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1005u, 0x0893FB70u>(ctx, &aot_mem) && ctx.pc == 0x08931D24u) goto L_08931D24;
    return;
L_08931D24:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30820), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08931D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1023u, 0x0893FCB8u>(ctx, &aot_mem) && ctx.pc == 0x08931D3Cu) goto L_08931D3C;
    return;
L_08931D3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30816)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08931D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1009u, 0x0893FBE4u>(ctx, &aot_mem) && ctx.pc == 0x08931D74u) goto L_08931D74;
    return;
L_08931D74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30820)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08931D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 1009u, 0x0893FBE4u>(ctx, &aot_mem) && ctx.pc == 0x08931D88u) goto L_08931D88;
    return;
L_08931D88:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30816), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30820), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(496)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931DACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931DACu) goto L_08931DAC;
    return;
L_08931DAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 65472u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, 0u | 65535u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08931E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08931E34u) goto L_08931E34;
    return;
L_08931E34:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11072)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11076)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30808)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08931EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08931EACu) goto L_08931EAC;
    return;
L_08931EAC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32672)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32672)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931F1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08931F38u);
    // nop
    goto L_089320B4;
L_08931F38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931F74;
      }
      goto L_08931F44;
    }
L_08931F44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(440)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931F58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931F58u) goto L_08931F58;
    return;
L_08931F58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(420)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931F6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931F6Cu) goto L_08931F6C;
    return;
L_08931F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931F94;
      }
      goto L_08931F74;
    }
L_08931F74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931F94;
      }
      goto L_08931F80;
    }
L_08931F80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(420)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931F94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931F94u) goto L_08931F94;
    return;
L_08931F94:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931FB4;
      }
      goto L_08931FA0;
    }
L_08931FA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931FB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931FB4u) goto L_08931FB4;
    return;
L_08931FB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931FDC;
      }
      goto L_08931FC0;
    }
L_08931FC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931FD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931FD4u) goto L_08931FD4;
    return;
L_08931FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931FF4;
      }
      goto L_08931FDC;
    }
L_08931FDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08931FF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931FF4u) goto L_08931FF4;
    return;
L_08931FF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932008:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932064;
      }
      goto L_08932010;
    }
L_08932010:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932064;
      }
      goto L_0893201C;
    }
L_0893201C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30836)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30836), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30852)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30852), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30868)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30868), ctx.gpr[5]);
    goto L_08932064;
L_08932064:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089320B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(31, 0x089320DCu);
    // nop
    goto L_08932390;
L_089320DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932118;
      }
      goto L_089320E8;
    }
L_089320E8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932118;
      }
      goto L_089320F0;
    }
L_089320F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932118;
      }
      goto L_0893210C;
    }
L_0893210C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08932118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08932118u) goto L_08932118;
    return;
L_08932118:
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
L_08932134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089321D0;
      }
      goto L_08932160;
    }
L_08932160:
    ctx.set_gpr(31, 0x08932168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 430u, 0x0892DD74u>(ctx, &aot_mem) && ctx.pc == 0x08932168u) goto L_08932168;
    return;
L_08932168:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08932174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x08932174u) goto L_08932174;
    return;
L_08932174:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(2, 4u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08932188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08932188u) goto L_08932188;
    return;
L_08932188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7532));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089321ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x089321ACu) goto L_089321AC;
    return;
L_089321AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089321D0;
      }
      goto L_089321C4;
    }
L_089321C4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089321D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089321D0u) goto L_089321D0;
    return;
L_089321D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893223C;
      }
      goto L_089321D8;
    }
L_089321D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(153));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089321ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089321ECu) goto L_089321EC;
    return;
L_089321EC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932218;
      }
      goto L_08932204;
    }
L_08932204:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893222C;
      }
      goto L_08932218;
    }
L_08932218:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0893222Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893222Cu) goto L_0893222C;
    return;
L_0893222C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_0893223C;
L_0893223C:
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
L_08932258:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932294;
      }
      goto L_08932288;
    }
L_08932288:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932368;
      }
      goto L_08932294;
    }
L_08932294:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932358;
      }
      goto L_089322A8;
    }
L_089322A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089322D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089322D8u) goto L_089322D8;
    return;
L_089322D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932348;
      }
      goto L_089322E0;
    }
L_089322E0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(153));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08932340;
      }
      goto L_089322F0;
    }
L_089322F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932334;
      }
      goto L_08932300;
    }
L_08932300:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932314u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932314u) goto L_08932314;
    return;
L_08932314:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7504));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08932334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x08932334u) goto L_08932334;
    return;
L_08932334:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932368;
      }
      goto L_08932340;
    }
L_08932340:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08932348;
L_08932348:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089322E0;
      }
      goto L_08932354;
    }
L_08932354:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08932358;
L_08932358:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089322A8;
      }
      goto L_08932364;
    }
L_08932364:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08932368;
L_08932368:
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
L_08932390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089324A0;
      }
      goto L_089323BC;
    }
L_089323BC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 8192u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089323F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089323F0u) goto L_089323F0;
    return;
L_089323F0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(148), 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893242C;
      }
      goto L_08932400;
    }
L_08932400:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932428u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932428u) goto L_08932428;
    return;
L_08932428:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893242C;
L_0893242C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932400;
      }
      goto L_08932438;
    }
L_08932438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932454;
      }
      goto L_08932448;
    }
L_08932448:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932464;
      }
      goto L_08932454;
    }
L_08932454:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08932464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08932464u) goto L_08932464;
    return;
L_08932464:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893247C;
      }
      goto L_0893246C;
    }
L_0893246C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, ctx.gpr[2] | 8192u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932488;
      }
      goto L_0893247C;
    }
L_0893247C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08932488;
L_08932488:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893249Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893249Cu) goto L_0893249C;
    return;
L_0893249C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    goto L_089324A0;
L_089324A0:
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
L_089324C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089324CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932544;
      }
      goto L_089324E8;
    }
L_089324E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932544;
      }
      goto L_089324F4;
    }
L_089324F4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932538;
      }
      goto L_08932500;
    }
L_08932500:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08932520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08932520u) goto L_08932520;
    return;
L_08932520:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932534;
      }
      goto L_08932528;
    }
L_08932528:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932548;
      }
      goto L_08932534;
    }
L_08932534:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08932538;
L_08932538:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932500;
      }
      goto L_08932544;
    }
L_08932544:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08932548;
L_08932548:
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
L_08932560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08932578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08932578u) goto L_08932578;
    return;
L_08932578:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4632));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30888)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089325B4;
      }
      goto L_089325A8;
    }
L_089325A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089325B4;
L_089325B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 65472u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3900));
    ctx.set_gpr(31, 0x089325E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089325E4u) goto L_089325E4;
    return;
L_089325E4:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932614;
      }
      goto L_089325F0;
    }
L_089325F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08932614;
L_08932614:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089325F0;
      }
      goto L_08932620;
    }
L_08932620:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932634u) goto L_08932634;
    return;
L_08932634:
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
L_0893264C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932718;
      }
      goto L_0893266C;
    }
L_0893266C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4632));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3900));
    ctx.set_gpr(31, 0x08932690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08932690u) goto L_08932690;
    return;
L_08932690:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089326C0;
      }
      goto L_0893269C;
    }
L_0893269C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089326C0;
L_089326C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893269C;
      }
      goto L_089326CC;
    }
L_089326CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089326E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089326E0u) goto L_089326E0;
    return;
L_089326E0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932700;
      }
      goto L_089326EC;
    }
L_089326EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932700;
      }
      goto L_089326F8;
    }
L_089326F8:
    ctx.set_gpr(31, 0x08932700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08932700u) goto L_08932700;
    return;
L_08932700:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08932718;
      }
      goto L_0893270C;
    }
L_0893270C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08932718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 165u, 0x0893CA60u>(ctx, &aot_mem) && ctx.pc == 0x08932718u) goto L_08932718;
    return;
L_08932718:
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
L_08932734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30892)));
    ctx.set_gpr(31, 0x08932750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 731u, 0x08927300u>(ctx, &aot_mem) && ctx.pc == 0x08932750u) goto L_08932750;
    return;
L_08932750:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30892)));
    ctx.set_gpr(31, 0x0893277Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 724u, 0x089272A0u>(ctx, &aot_mem) && ctx.pc == 0x0893277Cu) goto L_0893277C;
    return;
L_0893277C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893278C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x089327B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089327B8u) goto L_089327B8;
    return;
L_089327B8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089327D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089328C8;
      }
      goto L_089327F4;
    }
L_089327F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089328C8;
      }
      goto L_08932800;
    }
L_08932800:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089328C8;
      }
      goto L_08932828;
    }
L_08932828:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932864;
      }
      goto L_0893283C;
    }
L_0893283C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08932864;
      }
      goto L_0893284C;
    }
L_0893284C:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08932858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08932858u) goto L_08932858;
    return;
L_08932858:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089328C8;
      }
      goto L_08932864;
    }
L_08932864:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 1024u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893289C;
      }
      goto L_0893287C;
    }
L_0893287C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932890u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932890u) goto L_08932890;
    return;
L_08932890:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089328C8;
      }
      goto L_0893289C;
    }
L_0893289C:
    ctx.set_gpr(31, 0x089328A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x089328A4u) goto L_089328A4;
    return;
L_089328A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089328C8;
      }
      goto L_089328AC;
    }
L_089328AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089328C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089328C4u) goto L_089328C4;
    return;
L_089328C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_089328C8;
L_089328C8:
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
L_089328E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089329B8;
      }
      goto L_0893290C;
    }
L_0893290C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089329B8;
      }
      goto L_08932918;
    }
L_08932918:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932978;
      }
      goto L_08932924;
    }
L_08932924:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893294Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893294Cu) goto L_0893294C;
    return;
L_0893294C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932974;
      }
      goto L_08932954;
    }
L_08932954:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893296Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893296Cu) goto L_0893296C;
    return;
L_0893296C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089329BC;
      }
      goto L_08932974;
    }
L_08932974:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08932978;
L_08932978:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932924;
      }
      goto L_08932984;
    }
L_08932984:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08932990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08932990u) goto L_08932990;
    return;
L_08932990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089329B8;
      }
      goto L_08932998;
    }
L_08932998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089329B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089329B0u) goto L_089329B0;
    return;
L_089329B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089329BC;
      }
      goto L_089329B8;
    }
L_089329B8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089329BC;
L_089329BC:
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
L_089329D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932AF8;
      }
      goto L_08932A08;
    }
L_08932A08:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932AF8;
      }
      goto L_08932A14;
    }
L_08932A14:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932A44;
      }
      goto L_08932A3C;
    }
L_08932A3C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08932AF8;
      }
      goto L_08932A44;
    }
L_08932A44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932A64;
      }
      goto L_08932A4C;
    }
L_08932A4C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932A64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932A64u) goto L_08932A64;
    return;
L_08932A64:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932AF8;
      }
      goto L_08932A70;
    }
L_08932A70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932A90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932A90u) goto L_08932A90;
    return;
L_08932A90:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932AE0;
      }
      goto L_08932A9C;
    }
L_08932A9C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08932AA8u);
    // nop
    goto L_0893278C;
L_08932AA8:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08932AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08932AC8u) goto L_08932AC8;
    return;
L_08932AC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932AE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932AE0u) goto L_08932AE0;
    return;
L_08932AE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932AF8;
      }
      goto L_08932AF0;
    }
L_08932AF0:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    goto L_08932AF8;
L_08932AF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932B1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932B60;
      }
      goto L_08932B44;
    }
L_08932B44:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932B5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932B5Cu) goto L_08932B5C;
    return;
L_08932B5C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08932B60;
L_08932B60:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(75));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08932B44;
      }
      goto L_08932B70;
    }
L_08932B70:
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
L_08932B8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932BC8;
      }
      goto L_08932B94;
    }
L_08932B94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932BC8;
      }
      goto L_08932BA0;
    }
L_08932BA0:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932BCC;
      }
      goto L_08932BC8;
    }
L_08932BC8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08932BCC;
L_08932BCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932BD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932C0C;
      }
      goto L_08932BDC;
    }
L_08932BDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932C0C;
      }
      goto L_08932BE8;
    }
L_08932BE8:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932C10;
      }
      goto L_08932C0C;
    }
L_08932C0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08932C10;
L_08932C10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932C18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932CA8;
      }
      goto L_08932C40;
    }
L_08932C40:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932CA8;
      }
      goto L_08932C4C;
    }
L_08932C4C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932C9C;
      }
      goto L_08932C58;
    }
L_08932C58:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08932C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08932C80u) goto L_08932C80;
    return;
L_08932C80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932C98;
      }
      goto L_08932C88;
    }
L_08932C88:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932CAC;
      }
      goto L_08932C98;
    }
L_08932C98:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08932C9C;
L_08932C9C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932C58;
      }
      goto L_08932CA8;
    }
L_08932CA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08932CAC;
L_08932CAC:
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
L_08932CCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932D5C;
      }
      goto L_08932CF8;
    }
L_08932CF8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932D5C;
      }
      goto L_08932D04;
    }
L_08932D04:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932D3C;
      }
      goto L_08932D2C;
    }
L_08932D2C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932D3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932D3Cu) goto L_08932D3C;
    return;
L_08932D3C:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    goto L_08932D5C;
L_08932D5C:
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
L_08932D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932DC0;
      }
      goto L_08932DA4;
    }
L_08932DA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932DBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932DBCu) goto L_08932DBC;
    return;
L_08932DBC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08932DC0;
L_08932DC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(75));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08932DA4;
      }
      goto L_08932DD0;
    }
L_08932DD0:
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
L_08932DEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932E80;
      }
      goto L_08932E04;
    }
L_08932E04:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E80;
      }
      goto L_08932E10;
    }
L_08932E10:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E50;
      }
      goto L_08932E38;
    }
L_08932E38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E50;
      }
      goto L_08932E44;
    }
L_08932E44:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E84;
      }
      goto L_08932E50;
    }
L_08932E50:
    ctx.set_gpr(31, 0x08932E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08932E58u) goto L_08932E58;
    return;
L_08932E58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E80;
      }
      goto L_08932E60;
    }
L_08932E60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932E78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932E78u) goto L_08932E78;
    return;
L_08932E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E84;
      }
      goto L_08932E80;
    }
L_08932E80:
    ctx.set_gpr(2, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_08932E84;
L_08932E84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932F48;
      }
      goto L_08932EB0;
    }
L_08932EB0:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932EF0;
      }
      goto L_08932EBC;
    }
L_08932EBC:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08932EEC;
      }
      goto L_08932EE0;
    }
L_08932EE0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932F4C;
      }
      goto L_08932EEC;
    }
L_08932EEC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08932EF0;
L_08932EF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932EBC;
      }
      goto L_08932EFC;
    }
L_08932EFC:
    ctx.set_gpr(31, 0x08932F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08932F04u) goto L_08932F04;
    return;
L_08932F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932F2C;
      }
      goto L_08932F0C;
    }
L_08932F0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932F24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932F24u) goto L_08932F24;
    return;
L_08932F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932F40;
      }
      goto L_08932F2C;
    }
L_08932F2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08932F40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932F40u) goto L_08932F40;
    return;
L_08932F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932F4C;
      }
      goto L_08932F48;
    }
L_08932F48:
    ctx.set_gpr(2, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_08932F4C;
L_08932F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08933024;
      }
      goto L_08932F7C;
    }
L_08932F7C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933024;
      }
      goto L_08932F88;
    }
L_08932F88:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932FF4;
      }
      goto L_08932FB0;
    }
L_08932FB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932FF4;
      }
      goto L_08932FBC;
    }
L_08932FBC:
    ctx.set_gpr(31, 0x08932FC4u);
    // nop
    goto L_0893278C;
L_08932FC4:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30896));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08932FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08932FE4u) goto L_08932FE4;
    return;
L_08932FE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30896));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933028;
      }
      goto L_08932FF4;
    }
L_08932FF4:
    ctx.set_gpr(31, 0x08932FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08932FFCu) goto L_08932FFC;
    return;
L_08932FFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933024;
      }
      goto L_08933004;
    }
L_08933004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893301Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893301Cu) goto L_0893301C;
    return;
L_0893301C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933028;
      }
      goto L_08933024;
    }
L_08933024:
    ctx.set_gpr(2, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_08933028;
L_08933028:
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
L_08933040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933124;
      }
      goto L_0893305C;
    }
L_0893305C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089330CC;
      }
      goto L_08933068;
    }
L_08933068:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089330C8;
      }
      goto L_08933090;
    }
L_08933090:
    ctx.set_gpr(31, 0x08933098u);
    // nop
    goto L_0893278C;
L_08933098:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30896));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6488));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089330B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x089330B8u) goto L_089330B8;
    return;
L_089330B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30896));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933128;
      }
      goto L_089330C8;
    }
L_089330C8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089330CC;
L_089330CC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933068;
      }
      goto L_089330D8;
    }
L_089330D8:
    ctx.set_gpr(31, 0x089330E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x089330E0u) goto L_089330E0;
    return;
L_089330E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933108;
      }
      goto L_089330E8;
    }
L_089330E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933100u) goto L_08933100;
    return;
L_08933100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893311C;
      }
      goto L_08933108;
    }
L_08933108:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893311Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893311Cu) goto L_0893311C;
    return;
L_0893311C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933128;
      }
      goto L_08933124;
    }
L_08933124:
    ctx.set_gpr(2, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_08933128;
L_08933128:
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
L_08933140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089331B4;
      }
      goto L_0893315C;
    }
L_0893315C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089331B4;
      }
      goto L_08933168;
    }
L_08933168:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08933198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08933198u) goto L_08933198;
    return;
L_08933198:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089331B4;
      }
      goto L_089331A8;
    }
L_089331A8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089331B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x089331B4u) goto L_089331B4;
    return;
L_089331B4:
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
L_089331CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933288;
      }
      goto L_089331F0;
    }
L_089331F0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933288;
      }
      goto L_089331FC;
    }
L_089331FC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933248;
      }
      goto L_08933208;
    }
L_08933208:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08933230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08933230u) goto L_08933230;
    return;
L_08933230:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933244;
      }
      goto L_08933238;
    }
L_08933238:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893328C;
      }
      goto L_08933244;
    }
L_08933244:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08933248;
L_08933248:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933208;
      }
      goto L_08933254;
    }
L_08933254:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08933260u) goto L_08933260;
    return;
L_08933260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933288;
      }
      goto L_08933268;
    }
L_08933268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933280u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933280u) goto L_08933280;
    return;
L_08933280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893328C;
      }
      goto L_08933288;
    }
L_08933288:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0893328C;
L_0893328C:
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
L_089332A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089333D0;
      }
      goto L_089332CC;
    }
L_089332CC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089333D0;
      }
      goto L_089332D8;
    }
L_089332D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6480));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x089332F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x089332F0u) goto L_089332F0;
    return;
L_089332F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933304;
      }
      goto L_089332F8;
    }
L_089332F8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933328;
      }
      goto L_08933304;
    }
L_08933304:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6460));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x0893331Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0893331Cu) goto L_0893331C;
    return;
L_0893331C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933328;
      }
      goto L_08933324;
    }
L_08933324:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    goto L_08933328;
L_08933328:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933374;
      }
      goto L_08933334;
    }
L_08933334:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0893335Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0893335Cu) goto L_0893335C;
    return;
L_0893335C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933370;
      }
      goto L_08933364;
    }
L_08933364:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089333D4;
      }
      goto L_08933370;
    }
L_08933370:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08933374;
L_08933374:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933334;
      }
      goto L_08933380;
    }
L_08933380:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089333C4;
      }
      goto L_0893338C;
    }
L_0893338C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6788));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089333ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089333ACu) goto L_089333AC;
    return;
L_089333AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089333C0;
      }
      goto L_089333B4;
    }
L_089333B4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089333D4;
      }
      goto L_089333C0;
    }
L_089333C0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089333C4;
L_089333C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893338C;
      }
      goto L_089333D0;
    }
L_089333D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089333D4;
L_089333D4:
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
L_089333F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933480;
      }
      goto L_08933408;
    }
L_08933408:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933444;
      }
      goto L_08933414;
    }
L_08933414:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08933440;
      }
      goto L_08933438;
    }
L_08933438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933484;
      }
      goto L_08933440;
    }
L_08933440:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08933444;
L_08933444:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933414;
      }
      goto L_08933450;
    }
L_08933450:
    ctx.set_gpr(31, 0x08933458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 105u, 0x0893C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08933458u) goto L_08933458;
    return;
L_08933458:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933480;
      }
      goto L_08933460;
    }
L_08933460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933478u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933478u) goto L_08933478;
    return;
L_08933478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933484;
      }
      goto L_08933480;
    }
L_08933480:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08933484;
L_08933484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089334E8;
      }
      goto L_089334C4;
    }
L_089334C4:
    ctx.set_gpr(31, 0x089334CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089334CCu) goto L_089334CC;
    return;
L_089334CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089334D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 480u, 0x088EE8C4u>(ctx, &aot_mem) && ctx.pc == 0x089334D8u) goto L_089334D8;
    return;
L_089334D8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089334E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089334E8u) goto L_089334E8;
    return;
L_089334E8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089334FC;
      }
      goto L_089334F0;
    }
L_089334F0:
    ctx.set_gpr(31, 0x089334F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089334F8u) goto L_089334F8;
    return;
L_089334F8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    goto L_089334FC;
L_089334FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933518u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933518u) goto L_08933518;
    return;
L_08933518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893353C;
      }
      goto L_08933520;
    }
L_08933520:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0893353Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893353Cu) goto L_0893353C;
    return;
L_0893353C:
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
L_08933558:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089335A8;
      }
      goto L_08933584;
    }
L_08933584:
    ctx.set_gpr(31, 0x0893358Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0893358Cu) goto L_0893358C;
    return;
L_0893358C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 480u, 0x088EE8C4u>(ctx, &aot_mem) && ctx.pc == 0x08933598u) goto L_08933598;
    return;
L_08933598:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089335A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089335A8u) goto L_089335A8;
    return;
L_089335A8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089335BC;
      }
      goto L_089335B0;
    }
L_089335B0:
    ctx.set_gpr(31, 0x089335B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089335B8u) goto L_089335B8;
    return;
L_089335B8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    goto L_089335BC;
L_089335BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089335D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089335D8u) goto L_089335D8;
    return;
L_089335D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089335FC;
      }
      goto L_089335E0;
    }
L_089335E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089335FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089335FCu) goto L_089335FC;
    return;
L_089335FC:
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
L_08933618:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933660;
      }
      goto L_0893363C;
    }
L_0893363C:
    ctx.set_gpr(31, 0x08933644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08933644u) goto L_08933644;
    return;
L_08933644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 480u, 0x088EE8C4u>(ctx, &aot_mem) && ctx.pc == 0x08933650u) goto L_08933650;
    return;
L_08933650:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08933660u) goto L_08933660;
    return;
L_08933660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08933670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 461u, 0x0893DBB8u>(ctx, &aot_mem) && ctx.pc == 0x08933670u) goto L_08933670;
    return;
L_08933670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933694;
      }
      goto L_08933678;
    }
L_08933678:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933694u) goto L_08933694;
    return;
L_08933694:
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
L_089336AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089336E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 249u, 0x0893D014u>(ctx, &aot_mem) && ctx.pc == 0x089336E0u) goto L_089336E0;
    return;
L_089336E0:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893379C;
      }
      goto L_089336EC;
    }
L_089336EC:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933798;
      }
      goto L_08933710;
    }
L_08933710:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0893371Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0893371Cu) goto L_0893371C;
    return;
L_0893371C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 378u, 0x088EE1DCu>(ctx, &aot_mem) && ctx.pc == 0x08933728u) goto L_08933728;
    return;
L_08933728:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933748u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933748u) goto L_08933748;
    return;
L_08933748:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08933788;
      }
      goto L_08933754;
    }
L_08933754:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933798;
      }
      goto L_08933774;
    }
L_08933774:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08933780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08933780u) goto L_08933780;
    return;
L_08933780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933798;
      }
      goto L_08933788;
    }
L_08933788:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08933798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 240u, 0x0893CF68u>(ctx, &aot_mem) && ctx.pc == 0x08933798u) goto L_08933798;
    return;
L_08933798:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0893379C;
L_0893379C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089336EC;
      }
      goto L_089337A8;
    }
L_089337A8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089337D0:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0893380Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 238u, 0x0893CF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893380Cu) goto L_0893380C;
    return;
L_0893380C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933848;
      }
      goto L_08933820;
    }
L_08933820:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0893382Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0893382Cu) goto L_0893382C;
    return;
L_0893382C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 480u, 0x088EE8C4u>(ctx, &aot_mem) && ctx.pc == 0x08933838u) goto L_08933838;
    return;
L_08933838:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08933848u) goto L_08933848;
    return;
L_08933848:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089338C4;
      }
      goto L_08933854;
    }
L_08933854:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 239u, 0x0893CF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08933864u) goto L_08933864;
    return;
L_08933864:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089338C0;
      }
      goto L_08933870;
    }
L_08933870:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933890u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933890u) goto L_08933890;
    return;
L_08933890:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089338B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089338B0u) goto L_089338B0;
    return;
L_089338B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089338C0;
      }
      goto L_089338BC;
    }
L_089338BC:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_089338C0;
L_089338C0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089338C4;
L_089338C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933854;
      }
      goto L_089338D0;
    }
L_089338D0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08933900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 38u, 0x08934224u>(ctx, &aot_mem); return;
      }
      goto L_0893393C;
    }
L_0893393C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 38u, 0x08934224u>(ctx, &aot_mem); return;
      }
      goto L_08933948;
    }
L_08933948:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08933974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08933974u) goto L_08933974;
    return;
L_08933974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 25u, 0x08934164u>(ctx, &aot_mem); return;
      }
      goto L_08933980;
    }
L_08933980:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(21, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089339C4;
      }
      goto L_0893399C;
    }
L_0893399C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089339A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089339A8u) goto L_089339A8;
    return;
L_089339A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089339BC;
      }
      goto L_089339B0;
    }
L_089339B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089339BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089339BCu) goto L_089339BC;
    return;
L_089339BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089339C4;
L_089339C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089339D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089339D8u) goto L_089339D8;
    return;
L_089339D8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933A00;
      }
      goto L_089339EC;
    }
L_089339EC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089339F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089339F8u) goto L_089339F8;
    return;
L_089339F8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933A00;
L_08933A00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933A18;
      }
      goto L_08933A08;
    }
L_08933A08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933A18u) goto L_08933A18;
    return;
L_08933A18:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933AE8;
      }
      goto L_08933A38;
    }
L_08933A38:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(336)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933A4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933A4Cu) goto L_08933A4C;
    return;
L_08933A4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933AB0;
      }
      goto L_08933A54;
    }
L_08933A54:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933A68u) goto L_08933A68;
    return;
L_08933A68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(336)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933A80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933A80u) goto L_08933A80;
    return;
L_08933A80:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933AE8;
      }
      goto L_08933A8C;
    }
L_08933A8C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933AA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933AA0u) goto L_08933AA0;
    return;
L_08933AA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08933AE8;
      }
      goto L_08933AB0;
    }
L_08933AB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933AC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933AC4u) goto L_08933AC4;
    return;
L_08933AC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933AE8;
      }
      goto L_08933ACC;
    }
L_08933ACC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08933AE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933AE0u) goto L_08933AE0;
    return;
L_08933AE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08933AE8;
L_08933AE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933B60;
      }
      goto L_08933B38;
    }
L_08933B38:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933B44u) goto L_08933B44;
    return;
L_08933B44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933B58;
      }
      goto L_08933B4C;
    }
L_08933B4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933B58u) goto L_08933B58;
    return;
L_08933B58:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933B60;
L_08933B60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933B74u) goto L_08933B74;
    return;
L_08933B74:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933B9C;
      }
      goto L_08933B88;
    }
L_08933B88:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08933B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933B94u) goto L_08933B94;
    return;
L_08933B94:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933B9C;
L_08933B9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933BB4;
      }
      goto L_08933BA4;
    }
L_08933BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933BB4u) goto L_08933BB4;
    return;
L_08933BB4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933C00;
      }
      goto L_08933BD8;
    }
L_08933BD8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933BE4u) goto L_08933BE4;
    return;
L_08933BE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933BF8;
      }
      goto L_08933BEC;
    }
L_08933BEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933BF8u) goto L_08933BF8;
    return;
L_08933BF8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933C00;
L_08933C00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933C14u) goto L_08933C14;
    return;
L_08933C14:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933C3C;
      }
      goto L_08933C28;
    }
L_08933C28:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08933C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933C34u) goto L_08933C34;
    return;
L_08933C34:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933C3C;
L_08933C3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933C54;
      }
      goto L_08933C44;
    }
L_08933C44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933C54u) goto L_08933C54;
    return;
L_08933C54:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933CA0;
      }
      goto L_08933C78;
    }
L_08933C78:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933C84u) goto L_08933C84;
    return;
L_08933C84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933C98;
      }
      goto L_08933C8C;
    }
L_08933C8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933C98u) goto L_08933C98;
    return;
L_08933C98:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933CA0;
L_08933CA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933CB4u) goto L_08933CB4;
    return;
L_08933CB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933CDC;
      }
      goto L_08933CC8;
    }
L_08933CC8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08933CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933CD4u) goto L_08933CD4;
    return;
L_08933CD4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933CDC;
L_08933CDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933CF4;
      }
      goto L_08933CE4;
    }
L_08933CE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933CF4u) goto L_08933CF4;
    return;
L_08933CF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933D40;
      }
      goto L_08933D18;
    }
L_08933D18:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933D24u) goto L_08933D24;
    return;
L_08933D24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933D38;
      }
      goto L_08933D2C;
    }
L_08933D2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933D38u) goto L_08933D38;
    return;
L_08933D38:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933D40;
L_08933D40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933D54u) goto L_08933D54;
    return;
L_08933D54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933D7C;
      }
      goto L_08933D68;
    }
L_08933D68:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08933D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933D74u) goto L_08933D74;
    return;
L_08933D74:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933D7C;
L_08933D7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933D94;
      }
      goto L_08933D84;
    }
L_08933D84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933D94u) goto L_08933D94;
    return;
L_08933D94:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933DE0;
      }
      goto L_08933DB8;
    }
L_08933DB8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933DC4u) goto L_08933DC4;
    return;
L_08933DC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933DD8;
      }
      goto L_08933DCC;
    }
L_08933DCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933DD8u) goto L_08933DD8;
    return;
L_08933DD8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933DE0;
L_08933DE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933DF4u) goto L_08933DF4;
    return;
L_08933DF4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933E1C;
      }
      goto L_08933E08;
    }
L_08933E08:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08933E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933E14u) goto L_08933E14;
    return;
L_08933E14:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933E1C;
L_08933E1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933E34;
      }
      goto L_08933E24;
    }
L_08933E24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933E34u) goto L_08933E34;
    return;
L_08933E34:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933E80;
      }
      goto L_08933E58;
    }
L_08933E58:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933E64u) goto L_08933E64;
    return;
L_08933E64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933E78;
      }
      goto L_08933E6C;
    }
L_08933E6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933E78u) goto L_08933E78;
    return;
L_08933E78:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933E80;
L_08933E80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933E94u) goto L_08933E94;
    return;
L_08933E94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933EBC;
      }
      goto L_08933EA8;
    }
L_08933EA8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08933EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933EB4u) goto L_08933EB4;
    return;
L_08933EB4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933EBC;
L_08933EBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933ED4;
      }
      goto L_08933EC4;
    }
L_08933EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933ED4u) goto L_08933ED4;
    return;
L_08933ED4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933F20;
      }
      goto L_08933EF8;
    }
L_08933EF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933F04u) goto L_08933F04;
    return;
L_08933F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933F18;
      }
      goto L_08933F0C;
    }
L_08933F0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933F18u) goto L_08933F18;
    return;
L_08933F18:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933F20;
L_08933F20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933F34u) goto L_08933F34;
    return;
L_08933F34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933F5C;
      }
      goto L_08933F48;
    }
L_08933F48:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08933F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933F54u) goto L_08933F54;
    return;
L_08933F54:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933F5C;
L_08933F5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933F74;
      }
      goto L_08933F64;
    }
L_08933F64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08933F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08933F74u) goto L_08933F74;
    return;
L_08933F74:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933FC0;
      }
      goto L_08933F98;
    }
L_08933F98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08933FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08933FA4u) goto L_08933FA4;
    return;
L_08933FA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933FB8;
      }
      goto L_08933FAC;
    }
L_08933FAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08933FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08933FB8u) goto L_08933FB8;
    return;
L_08933FB8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08933FC0;
L_08933FC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08933FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08933FD4u) goto L_08933FD4;
    return;
L_08933FD4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933FFC;
      }
      goto L_08933FE8;
    }
L_08933FE8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08933FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08933FF4u) goto L_08933FF4;
    return;
L_08933FF4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08933FFC;
L_08933FFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 2u, 0x08934014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 1u, 0x08934004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0075(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0075_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_75(Runtime &runtime) {
    runtime.register_generated_unit(75u, 0x08930000u, 16384u, &recomp_unit_0075, &recomp_unit_0075_entry);
    runtime.register_function(0x08930000u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930010u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930018u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930024u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930048u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930050u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930058u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930070u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930090u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089300A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893014Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930250u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893025Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930280u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930284u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930298u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893029Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930318u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930324u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930330u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930378u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930384u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930390u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930398u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893040Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893041Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930440u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930458u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893046Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930488u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930504u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930510u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930530u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893053Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930544u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930554u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893056Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893057Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893060Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930618u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930624u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930630u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930648u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930658u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930670u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930678u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930688u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930694u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930728u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930734u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930748u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930750u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893075Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930774u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893078Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089307C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089307E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089307F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893082Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930888u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930894u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930914u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930934u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930944u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893097Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930ED8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893100Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931048u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893106Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893107Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893109Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931114u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931138u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931148u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931180u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931204u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931210u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931228u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931240u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931278u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893129Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931340u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893134Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931360u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931368u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931374u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893138Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931430u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893148Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931498u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931504u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931518u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931530u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931570u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931594u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931634u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931640u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931648u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931650u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931658u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893166Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931680u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931690u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931700u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931724u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931734u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893176Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931804u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893180Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931810u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931814u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931820u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931834u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893183Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931850u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893188Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931950u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893195Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931970u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931978u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893198Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932008u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932010u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893201Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932064u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893210Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932118u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932134u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932160u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932168u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932174u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932188u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932204u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932218u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893222Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893223Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932258u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932288u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932294u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932300u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932314u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932334u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932340u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932348u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932354u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932358u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932364u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932368u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932390u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932400u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932428u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893242Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932438u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932448u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932454u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932464u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893246Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893247Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932488u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893249Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932500u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932520u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932528u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932534u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932538u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932544u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932548u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932560u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932578u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932614u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932620u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932634u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893264Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893266Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932690u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893269Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932700u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893270Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932718u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932734u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932750u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932760u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893277Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893278Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932798u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932800u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932828u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893283Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893284Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932858u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932864u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893287Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932890u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893289Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893290Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932918u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932924u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893294Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932954u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893296Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932974u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932978u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932984u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932990u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932998u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DBCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EBCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FBCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933004u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893301Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933024u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933028u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933040u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893305Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933068u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933090u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933098u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089330B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089330C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089330CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089330D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089330E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089330E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933100u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933108u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893311Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933124u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933128u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933140u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893315Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933168u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933198u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933208u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933230u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933238u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933244u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933248u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933254u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933260u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933268u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933280u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933288u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893328Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933304u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893331Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933324u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933328u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933334u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893335Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933364u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933370u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933374u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933380u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893338Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933408u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933414u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933438u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933440u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933444u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933450u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933458u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933460u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933478u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933480u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933484u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933498u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933518u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933520u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893353Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933558u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933584u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893358Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933598u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933618u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893363Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933644u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933650u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933660u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933670u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933678u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933694u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089336ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089336E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089336ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933710u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893371Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933728u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933748u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933754u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933774u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933780u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933788u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933798u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893379Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893380Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933820u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893382Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933838u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933848u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933854u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933864u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933870u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933890u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933900u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893393Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933948u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933974u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933980u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893399Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933ACCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EBCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933ED4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FFCu, &recomp_unit_0075, "recomp_unit_0075");
}
} // namespace psprecomp
