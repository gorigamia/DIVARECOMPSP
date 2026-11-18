#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0118[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 10,
    0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 19, 0, 0, 0, 20, 0, 0, 21, 22, 0, 0,
    0, 23, 0, 0, 24, 25, 0, 0, 0, 26, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0,
    51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55,
    0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 0, 85,
    0, 0, 86, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 96, 0, 0, 97,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146,
    147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 170, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    181, 0, 0, 182, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214,
    0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0,
    0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 250, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0,
    0, 257, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 297, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0,
    312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322,
    0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 332, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 348, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0,
    0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 393, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0,
    0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 450,
    451, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0,
    457, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0,
    463, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0,
    480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 499, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 509, 0, 0, 510,
    0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528,
    0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533,
    0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0,
    0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0,
    0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 571, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575,
};
void recomp_unit_0118_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089DC000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0118[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DC000;
    case 2u: goto L_089DC038;
    case 3u: goto L_089DC044;
    case 4u: goto L_089DC048;
    case 5u: goto L_089DC090;
    case 6u: goto L_089DC0B4;
    case 7u: goto L_089DC0CC;
    case 8u: goto L_089DC0D8;
    case 9u: goto L_089DC0F0;
    case 10u: goto L_089DC0FC;
    case 11u: goto L_089DC108;
    case 12u: goto L_089DC10C;
    case 13u: goto L_089DC158;
    case 14u: goto L_089DC17C;
    case 15u: goto L_089DC1A0;
    case 16u: goto L_089DC1B8;
    case 17u: goto L_089DC1C4;
    case 18u: goto L_089DC1D0;
    case 19u: goto L_089DC1D4;
    case 20u: goto L_089DC1E4;
    case 21u: goto L_089DC1F0;
    case 22u: goto L_089DC1F4;
    case 23u: goto L_089DC204;
    case 24u: goto L_089DC210;
    case 25u: goto L_089DC214;
    case 26u: goto L_089DC224;
    case 27u: goto L_089DC230;
    case 28u: goto L_089DC234;
    case 29u: goto L_089DC294;
    case 30u: goto L_089DC2BC;
    case 31u: goto L_089DC320;
    case 32u: goto L_089DC32C;
    case 33u: goto L_089DC338;
    case 34u: goto L_089DC33C;
    case 35u: goto L_089DC388;
    case 36u: goto L_089DC39C;
    case 37u: goto L_089DC3FC;
    case 38u: goto L_089DC414;
    case 39u: goto L_089DC418;
    case 40u: goto L_089DC420;
    case 41u: goto L_089DC42C;
    case 42u: goto L_089DC430;
    case 43u: goto L_089DC478;
    case 44u: goto L_089DC49C;
    case 45u: goto L_089DC500;
    case 46u: goto L_089DC50C;
    case 47u: goto L_089DC55C;
    case 48u: goto L_089DC580;
    case 49u: goto L_089DC5E8;
    case 50u: goto L_089DC5F4;
    case 51u: goto L_089DC600;
    case 52u: goto L_089DC604;
    case 53u: goto L_089DC650;
    case 54u: goto L_089DC674;
    case 55u: goto L_089DC67C;
    case 56u: goto L_089DC68C;
    case 57u: goto L_089DC694;
    case 58u: goto L_089DC6A0;
    case 59u: goto L_089DC6C0;
    case 60u: goto L_089DC6E4;
    case 61u: goto L_089DC704;
    case 62u: goto L_089DC714;
    case 63u: goto L_089DC72C;
    case 64u: goto L_089DC738;
    case 65u: goto L_089DC750;
    case 66u: goto L_089DC75C;
    case 67u: goto L_089DC768;
    case 68u: goto L_089DC8B8;
    case 69u: goto L_089DC918;
    case 70u: goto L_089DC954;
    case 71u: goto L_089DC99C;
    case 72u: goto L_089DCAA0;
    case 73u: goto L_089DCB24;
    case 74u: goto L_089DCB60;
    case 75u: goto L_089DCB68;
    case 76u: goto L_089DCB70;
    case 77u: goto L_089DCB9C;
    case 78u: goto L_089DCBA4;
    case 79u: goto L_089DCBB0;
    case 80u: goto L_089DCBC8;
    case 81u: goto L_089DCBD4;
    case 82u: goto L_089DCBE0;
    case 83u: goto L_089DCBE8;
    case 84u: goto L_089DCBF0;
    case 85u: goto L_089DCBFC;
    case 86u: goto L_089DCC08;
    case 87u: goto L_089DCC0C;
    case 88u: goto L_089DCC1C;
    case 89u: goto L_089DCC28;
    case 90u: goto L_089DCC34;
    case 91u: goto L_089DCC40;
    case 92u: goto L_089DCC48;
    case 93u: goto L_089DCC54;
    case 94u: goto L_089DCC60;
    case 95u: goto L_089DCC6C;
    case 96u: goto L_089DCC70;
    case 97u: goto L_089DCC7C;
    case 98u: goto L_089DCC8C;
    case 99u: goto L_089DCCFC;
    case 100u: goto L_089DCD04;
    case 101u: goto L_089DCD14;
    case 102u: goto L_089DCD1C;
    case 103u: goto L_089DCD2C;
    case 104u: goto L_089DCD50;
    case 105u: goto L_089DCDC8;
    case 106u: goto L_089DCDE8;
    case 107u: goto L_089DCDF4;
    case 108u: goto L_089DCE18;
    case 109u: goto L_089DCE24;
    case 110u: goto L_089DCE40;
    case 111u: goto L_089DCE5C;
    case 112u: goto L_089DCE7C;
    case 113u: goto L_089DCE84;
    case 114u: goto L_089DCE98;
    case 115u: goto L_089DCEA8;
    case 116u: goto L_089DCEC0;
    case 117u: goto L_089DCEE0;
    case 118u: goto L_089DCEF8;
    case 119u: goto L_089DCF0C;
    case 120u: goto L_089DCF18;
    case 121u: goto L_089DCF3C;
    case 122u: goto L_089DCF54;
    case 123u: goto L_089DCF6C;
    case 124u: goto L_089DCFF0;
    case 125u: goto L_089DCFFC;
    case 126u: goto L_089DD018;
    case 127u: goto L_089DD034;
    case 128u: goto L_089DD058;
    case 129u: goto L_089DD070;
    case 130u: goto L_089DD088;
    case 131u: goto L_089DD0A4;
    case 132u: goto L_089DD0B0;
    case 133u: goto L_089DD0C4;
    case 134u: goto L_089DD0FC;
    case 135u: goto L_089DD104;
    case 136u: goto L_089DD10C;
    case 137u: goto L_089DD120;
    case 138u: goto L_089DD138;
    case 139u: goto L_089DD144;
    case 140u: goto L_089DD154;
    case 141u: goto L_089DD174;
    case 142u: goto L_089DD188;
    case 143u: goto L_089DD1A4;
    case 144u: goto L_089DD1C8;
    case 145u: goto L_089DD1E0;
    case 146u: goto L_089DD1FC;
    case 147u: goto L_089DD200;
    case 148u: goto L_089DD220;
    case 149u: goto L_089DD240;
    case 150u: goto L_089DD25C;
    case 151u: goto L_089DD2AC;
    case 152u: goto L_089DD2BC;
    case 153u: goto L_089DD2D4;
    case 154u: goto L_089DD2DC;
    case 155u: goto L_089DD304;
    case 156u: goto L_089DD310;
    case 157u: goto L_089DD338;
    case 158u: goto L_089DD350;
    case 159u: goto L_089DD368;
    case 160u: goto L_089DD374;
    case 161u: goto L_089DD394;
    case 162u: goto L_089DD3B8;
    case 163u: goto L_089DD3D4;
    case 164u: goto L_089DD3F0;
    case 165u: goto L_089DD3FC;
    case 166u: goto L_089DD408;
    case 167u: goto L_089DD42C;
    case 168u: goto L_089DD44C;
    case 169u: goto L_089DD470;
    case 170u: goto L_089DD494;
    case 171u: goto L_089DD498;
    case 172u: goto L_089DD4A4;
    case 173u: goto L_089DD4BC;
    case 174u: goto L_089DD4C8;
    case 175u: goto L_089DD4F0;
    case 176u: goto L_089DD51C;
    case 177u: goto L_089DD520;
    case 178u: goto L_089DD52C;
    case 179u: goto L_089DD560;
    case 180u: goto L_089DD574;
    case 181u: goto L_089DD580;
    case 182u: goto L_089DD58C;
    case 183u: goto L_089DD590;
    case 184u: goto L_089DD598;
    case 185u: goto L_089DD5CC;
    case 186u: goto L_089DD5DC;
    case 187u: goto L_089DD5F4;
    case 188u: goto L_089DD614;
    case 189u: goto L_089DD630;
    case 190u: goto L_089DD638;
    case 191u: goto L_089DD64C;
    case 192u: goto L_089DD668;
    case 193u: goto L_089DD69C;
    case 194u: goto L_089DD6AC;
    case 195u: goto L_089DD6C4;
    case 196u: goto L_089DD6E0;
    case 197u: goto L_089DD6E8;
    case 198u: goto L_089DD6FC;
    case 199u: goto L_089DD718;
    case 200u: goto L_089DD748;
    case 201u: goto L_089DD764;
    case 202u: goto L_089DD780;
    case 203u: goto L_089DD788;
    case 204u: goto L_089DD790;
    case 205u: goto L_089DD7AC;
    case 206u: goto L_089DD7DC;
    case 207u: goto L_089DD7F8;
    case 208u: goto L_089DD814;
    case 209u: goto L_089DD81C;
    case 210u: goto L_089DD824;
    case 211u: goto L_089DD840;
    case 212u: goto L_089DD85C;
    case 213u: goto L_089DD874;
    case 214u: goto L_089DD87C;
    case 215u: goto L_089DD884;
    case 216u: goto L_089DD894;
    case 217u: goto L_089DD8B0;
    case 218u: goto L_089DD8C8;
    case 219u: goto L_089DD8D0;
    case 220u: goto L_089DD8D8;
    case 221u: goto L_089DD8E8;
    case 222u: goto L_089DD924;
    case 223u: goto L_089DD948;
    case 224u: goto L_089DD96C;
    case 225u: goto L_089DD974;
    case 226u: goto L_089DD9A4;
    case 227u: goto L_089DD9C4;
    case 228u: goto L_089DD9CC;
    case 229u: goto L_089DD9FC;
    case 230u: goto L_089DDA1C;
    case 231u: goto L_089DDA24;
    case 232u: goto L_089DDA2C;
    case 233u: goto L_089DDA50;
    case 234u: goto L_089DDA6C;
    case 235u: goto L_089DDA8C;
    case 236u: goto L_089DDA94;
    case 237u: goto L_089DDA9C;
    case 238u: goto L_089DDAAC;
    case 239u: goto L_089DDAC8;
    case 240u: goto L_089DDAE8;
    case 241u: goto L_089DDAF0;
    case 242u: goto L_089DDAF8;
    case 243u: goto L_089DDB08;
    case 244u: goto L_089DDB18;
    case 245u: goto L_089DDB20;
    case 246u: goto L_089DDB30;
    case 247u: goto L_089DDB3C;
    case 248u: goto L_089DDB4C;
    case 249u: goto L_089DDB58;
    case 250u: goto L_089DDB5C;
    case 251u: goto L_089DDB64;
    case 252u: goto L_089DDB90;
    case 253u: goto L_089DDC44;
    case 254u: goto L_089DDC64;
    case 255u: goto L_089DDC70;
    case 256u: goto L_089DDC78;
    case 257u: goto L_089DDC84;
    case 258u: goto L_089DDC9C;
    case 259u: goto L_089DDCA4;
    case 260u: goto L_089DDCB0;
    case 261u: goto L_089DDCB8;
    case 262u: goto L_089DDCD4;
    case 263u: goto L_089DDCEC;
    case 264u: goto L_089DDCF8;
    case 265u: goto L_089DDD1C;
    case 266u: goto L_089DDD28;
    case 267u: goto L_089DDD30;
    case 268u: goto L_089DDD58;
    case 269u: goto L_089DDD84;
    case 270u: goto L_089DDDB4;
    case 271u: goto L_089DDDC4;
    case 272u: goto L_089DDDD0;
    case 273u: goto L_089DDDEC;
    case 274u: goto L_089DDDF8;
    case 275u: goto L_089DDE04;
    case 276u: goto L_089DDE20;
    case 277u: goto L_089DDE2C;
    case 278u: goto L_089DDE40;
    case 279u: goto L_089DDE84;
    case 280u: goto L_089DDEA4;
    case 281u: goto L_089DDEF0;
    case 282u: goto L_089DDF20;
    case 283u: goto L_089DDF30;
    case 284u: goto L_089DDF44;
    case 285u: goto L_089DDF4C;
    case 286u: goto L_089DDF60;
    case 287u: goto L_089DDF6C;
    case 288u: goto L_089DDF98;
    case 289u: goto L_089DDF9C;
    case 290u: goto L_089DDFBC;
    case 291u: goto L_089DDFCC;
    case 292u: goto L_089DDFEC;
    case 293u: goto L_089DE014;
    case 294u: goto L_089DE020;
    case 295u: goto L_089DE02C;
    case 296u: goto L_089DE060;
    case 297u: goto L_089DE064;
    case 298u: goto L_089DE094;
    case 299u: goto L_089DE0A4;
    case 300u: goto L_089DE0B8;
    case 301u: goto L_089DE0C0;
    case 302u: goto L_089DE0D4;
    case 303u: goto L_089DE0E0;
    case 304u: goto L_089DE10C;
    case 305u: goto L_089DE110;
    case 306u: goto L_089DE130;
    case 307u: goto L_089DE13C;
    case 308u: goto L_089DE148;
    case 309u: goto L_089DE158;
    case 310u: goto L_089DE164;
    case 311u: goto L_089DE174;
    case 312u: goto L_089DE180;
    case 313u: goto L_089DE18C;
    case 314u: goto L_089DE19C;
    case 315u: goto L_089DE1B4;
    case 316u: goto L_089DE1BC;
    case 317u: goto L_089DE1DC;
    case 318u: goto L_089DE20C;
    case 319u: goto L_089DE238;
    case 320u: goto L_089DE240;
    case 321u: goto L_089DE270;
    case 322u: goto L_089DE27C;
    case 323u: goto L_089DE288;
    case 324u: goto L_089DE29C;
    case 325u: goto L_089DE2A8;
    case 326u: goto L_089DE2C0;
    case 327u: goto L_089DE2F4;
    case 328u: goto L_089DE300;
    case 329u: goto L_089DE3A8;
    case 330u: goto L_089DE3D0;
    case 331u: goto L_089DE3F8;
    case 332u: goto L_089DE404;
    case 333u: goto L_089DE40C;
    case 334u: goto L_089DE418;
    case 335u: goto L_089DE424;
    case 336u: goto L_089DE45C;
    case 337u: goto L_089DE468;
    case 338u: goto L_089DE488;
    case 339u: goto L_089DE4B0;
    case 340u: goto L_089DE4D0;
    case 341u: goto L_089DE500;
    case 342u: goto L_089DE520;
    case 343u: goto L_089DE528;
    case 344u: goto L_089DE534;
    case 345u: goto L_089DE53C;
    case 346u: goto L_089DE58C;
    case 347u: goto L_089DE5AC;
    case 348u: goto L_089DE5B0;
    case 349u: goto L_089DE5C0;
    case 350u: goto L_089DE5C8;
    case 351u: goto L_089DE5D0;
    case 352u: goto L_089DE614;
    case 353u: goto L_089DE644;
    case 354u: goto L_089DE67C;
    case 355u: goto L_089DE6A8;
    case 356u: goto L_089DE6D8;
    case 357u: goto L_089DE6E8;
    case 358u: goto L_089DE6F4;
    case 359u: goto L_089DE710;
    case 360u: goto L_089DE71C;
    case 361u: goto L_089DE728;
    case 362u: goto L_089DE744;
    case 363u: goto L_089DE750;
    case 364u: goto L_089DE764;
    case 365u: goto L_089DE7AC;
    case 366u: goto L_089DE7DC;
    case 367u: goto L_089DE7F8;
    case 368u: goto L_089DE804;
    case 369u: goto L_089DE80C;
    case 370u: goto L_089DE904;
    case 371u: goto L_089DE90C;
    case 372u: goto L_089DE914;
    case 373u: goto L_089DE944;
    case 374u: goto L_089DE970;
    case 375u: goto L_089DE9D8;
    case 376u: goto L_089DE9F4;
    case 377u: goto L_089DEA08;
    case 378u: goto L_089DEA14;
    case 379u: goto L_089DEA20;
    case 380u: goto L_089DEA30;
    case 381u: goto L_089DEA8C;
    case 382u: goto L_089DEA98;
    case 383u: goto L_089DEAA0;
    case 384u: goto L_089DEAAC;
    case 385u: goto L_089DEAC4;
    case 386u: goto L_089DEAD0;
    case 387u: goto L_089DEAEC;
    case 388u: goto L_089DEB64;
    case 389u: goto L_089DEB90;
    case 390u: goto L_089DEBA4;
    case 391u: goto L_089DEBBC;
    case 392u: goto L_089DEBC4;
    case 393u: goto L_089DEBD0;
    case 394u: goto L_089DEBD4;
    case 395u: goto L_089DEBE0;
    case 396u: goto L_089DEBE8;
    case 397u: goto L_089DEBF8;
    case 398u: goto L_089DEC08;
    case 399u: goto L_089DEC10;
    case 400u: goto L_089DEC20;
    case 401u: goto L_089DEC28;
    case 402u: goto L_089DEC30;
    case 403u: goto L_089DEC78;
    case 404u: goto L_089DEC80;
    case 405u: goto L_089DEC90;
    case 406u: goto L_089DECA0;
    case 407u: goto L_089DECE0;
    case 408u: goto L_089DECEC;
    case 409u: goto L_089DED34;
    case 410u: goto L_089DED44;
    case 411u: goto L_089DED70;
    case 412u: goto L_089DED90;
    case 413u: goto L_089DEDC8;
    case 414u: goto L_089DEDE0;
    case 415u: goto L_089DEE00;
    case 416u: goto L_089DEE2C;
    case 417u: goto L_089DEE3C;
    case 418u: goto L_089DEE48;
    case 419u: goto L_089DEECC;
    case 420u: goto L_089DEED8;
    case 421u: goto L_089DEF4C;
    case 422u: goto L_089DEF58;
    case 423u: goto L_089DEFD8;
    case 424u: goto L_089DEFEC;
    case 425u: goto L_089DF008;
    case 426u: goto L_089DF034;
    case 427u: goto L_089DF04C;
    case 428u: goto L_089DF058;
    case 429u: goto L_089DF060;
    case 430u: goto L_089DF06C;
    case 431u: goto L_089DF100;
    case 432u: goto L_089DF10C;
    case 433u: goto L_089DF118;
    case 434u: goto L_089DF124;
    case 435u: goto L_089DF128;
    case 436u: goto L_089DF140;
    case 437u: goto L_089DF15C;
    case 438u: goto L_089DF168;
    case 439u: goto L_089DF1AC;
    case 440u: goto L_089DF1C0;
    case 441u: goto L_089DF210;
    case 442u: goto L_089DF218;
    case 443u: goto L_089DF238;
    case 444u: goto L_089DF24C;
    case 445u: goto L_089DF260;
    case 446u: goto L_089DF288;
    case 447u: goto L_089DF2AC;
    case 448u: goto L_089DF2D8;
    case 449u: goto L_089DF2F0;
    case 450u: goto L_089DF2FC;
    case 451u: goto L_089DF300;
    case 452u: goto L_089DF304;
    case 453u: goto L_089DF30C;
    case 454u: goto L_089DF338;
    case 455u: goto L_089DF360;
    case 456u: goto L_089DF368;
    case 457u: goto L_089DF380;
    case 458u: goto L_089DF384;
    case 459u: goto L_089DF38C;
    case 460u: goto L_089DF3B8;
    case 461u: goto L_089DF3E0;
    case 462u: goto L_089DF3E8;
    case 463u: goto L_089DF400;
    case 464u: goto L_089DF404;
    case 465u: goto L_089DF40C;
    case 466u: goto L_089DF4C0;
    case 467u: goto L_089DF4D0;
    case 468u: goto L_089DF4F8;
    case 469u: goto L_089DF508;
    case 470u: goto L_089DF530;
    case 471u: goto L_089DF538;
    case 472u: goto L_089DF544;
    case 473u: goto L_089DF578;
    case 474u: goto L_089DF5A0;
    case 475u: goto L_089DF5C8;
    case 476u: goto L_089DF5D0;
    case 477u: goto L_089DF5DC;
    case 478u: goto L_089DF5E8;
    case 479u: goto L_089DF5F4;
    case 480u: goto L_089DF600;
    case 481u: goto L_089DF60C;
    case 482u: goto L_089DF618;
    case 483u: goto L_089DF624;
    case 484u: goto L_089DF630;
    case 485u: goto L_089DF64C;
    case 486u: goto L_089DF650;
    case 487u: goto L_089DF678;
    case 488u: goto L_089DF700;
    case 489u: goto L_089DF70C;
    case 490u: goto L_089DF730;
    case 491u: goto L_089DF74C;
    case 492u: goto L_089DF750;
    case 493u: goto L_089DF764;
    case 494u: goto L_089DF7AC;
    case 495u: goto L_089DF7B8;
    case 496u: goto L_089DF7C0;
    case 497u: goto L_089DF7C8;
    case 498u: goto L_089DF7D8;
    case 499u: goto L_089DF7DC;
    case 500u: goto L_089DF814;
    case 501u: goto L_089DF820;
    case 502u: goto L_089DF82C;
    case 503u: goto L_089DF834;
    case 504u: goto L_089DF884;
    case 505u: goto L_089DF894;
    case 506u: goto L_089DF8C4;
    case 507u: goto L_089DF8E0;
    case 508u: goto L_089DF8E8;
    case 509u: goto L_089DF8F0;
    case 510u: goto L_089DF8FC;
    case 511u: goto L_089DF904;
    case 512u: goto L_089DF910;
    case 513u: goto L_089DF928;
    case 514u: goto L_089DF92C;
    case 515u: goto L_089DF948;
    case 516u: goto L_089DF954;
    case 517u: goto L_089DF994;
    case 518u: goto L_089DF99C;
    case 519u: goto L_089DF9A8;
    case 520u: goto L_089DF9E8;
    case 521u: goto L_089DF9F0;
    case 522u: goto L_089DFA30;
    case 523u: goto L_089DFA38;
    case 524u: goto L_089DFA48;
    case 525u: goto L_089DFA4C;
    case 526u: goto L_089DFA54;
    case 527u: goto L_089DFA60;
    case 528u: goto L_089DFA7C;
    case 529u: goto L_089DFA90;
    case 530u: goto L_089DFAA4;
    case 531u: goto L_089DFAEC;
    case 532u: goto L_089DFAF4;
    case 533u: goto L_089DFAFC;
    case 534u: goto L_089DFB08;
    case 535u: goto L_089DFB14;
    case 536u: goto L_089DFB60;
    case 537u: goto L_089DFB74;
    case 538u: goto L_089DFB88;
    case 539u: goto L_089DFBB4;
    case 540u: goto L_089DFBBC;
    case 541u: goto L_089DFBFC;
    case 542u: goto L_089DFC0C;
    case 543u: goto L_089DFC18;
    case 544u: goto L_089DFC24;
    case 545u: goto L_089DFC50;
    case 546u: goto L_089DFC90;
    case 547u: goto L_089DFC98;
    case 548u: goto L_089DFCA4;
    case 549u: goto L_089DFCDC;
    case 550u: goto L_089DFCE4;
    case 551u: goto L_089DFD24;
    case 552u: goto L_089DFD2C;
    case 553u: goto L_089DFD34;
    case 554u: goto L_089DFD5C;
    case 555u: goto L_089DFDA0;
    case 556u: goto L_089DFDBC;
    case 557u: goto L_089DFDD4;
    case 558u: goto L_089DFDDC;
    case 559u: goto L_089DFDE8;
    case 560u: goto L_089DFE28;
    case 561u: goto L_089DFE38;
    case 562u: goto L_089DFE78;
    case 563u: goto L_089DFE84;
    case 564u: goto L_089DFEC4;
    case 565u: goto L_089DFEE0;
    case 566u: goto L_089DFEEC;
    case 567u: goto L_089DFF2C;
    case 568u: goto L_089DFF34;
    case 569u: goto L_089DFF3C;
    case 570u: goto L_089DFF44;
    case 571u: goto L_089DFF84;
    case 572u: goto L_089DFF8C;
    case 573u: goto L_089DFF98;
    case 574u: goto L_089DFFD8;
    case 575u: goto L_089DFFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DC000:
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(-27560), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] | 16u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(-27556), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[6] | 32u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC038:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32166)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC048;
      }
      goto L_089DC044;
    }
L_089DC044:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089DC048;
L_089DC048:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28336)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(4, ctx.gpr[3] | 4u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC090:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28336)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC0B4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(652), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC0CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(652)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC0D8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC0F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(648)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC0FC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32165)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC10C;
      }
      goto L_089DC108;
    }
L_089DC108:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089DC10C;
L_089DC10C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28360)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28360), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC158:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28360)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC17C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(720), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(721), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(722), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(723), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC1B8;
      }
      goto L_089DC1A0;
    }
L_089DC1A0:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DC1A0;
      }
      goto L_089DC1B8;
    }
L_089DC1B8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC1D0;
      }
      goto L_089DC1C4;
    }
L_089DC1C4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC1D4;
      }
      goto L_089DC1D0;
    }
L_089DC1D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    goto L_089DC1D4;
L_089DC1D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(721)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC1F0;
      }
      goto L_089DC1E4;
    }
L_089DC1E4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC1F4;
      }
      goto L_089DC1F0;
    }
L_089DC1F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    goto L_089DC1F4;
L_089DC1F4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(722)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC210;
      }
      goto L_089DC204;
    }
L_089DC204:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC214;
      }
      goto L_089DC210;
    }
L_089DC210:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    goto L_089DC214;
L_089DC214:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(723)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC230;
      }
      goto L_089DC224;
    }
L_089DC224:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC234;
      }
      goto L_089DC230;
    }
L_089DC230:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    goto L_089DC234;
L_089DC234:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27544), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27543), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27542), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420)));
    ctx.set_gpr(5, ctx.gpr[3] | 256u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27540), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, ctx.gpr[5] | 512u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC294:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(721)));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(722)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(723)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC2BC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(724), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28872));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28152)));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28152), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC320:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC32C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32164)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC33C;
      }
      goto L_089DC338;
    }
L_089DC338:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089DC33C;
L_089DC33C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28356)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28356), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(3, 8192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC39C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28864));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27852)));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27852), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27432)));
    ctx.set_gpr(3, 2048u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27432), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC3FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27852)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DC418;
      }
      goto L_089DC414;
    }
L_089DC414:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089DC418;
L_089DC418:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC420:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32163)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC430;
      }
      goto L_089DC42C;
    }
L_089DC42C:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089DC430;
L_089DC430:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28332)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(4, ctx.gpr[3] | 8u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC478:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28332)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC49C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(656), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28856));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27584)));
    ctx.set_gpr(4, ctx.gpr[4] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27584), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC50C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27548)));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27548), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420)));
    ctx.set_gpr(4, ctx.gpr[3] | 128u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC55C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27548)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC580:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(432), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(432)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29204));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28252)));
    ctx.set_gpr(4, ctx.gpr[4] & 3u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28252), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC5E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(432)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC5F4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32162)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC604;
      }
      goto L_089DC600;
    }
L_089DC600:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089DC604;
L_089DC604:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28348)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28348), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC650:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28348)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC674:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC67C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC68C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC694:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089DC6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089DC6C0u) goto L_089DC6C0;
    return;
L_089DC6C0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC6E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(31, 0x089DC704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 308u, 0x08A037E4u>(ctx, &aot_mem) && ctx.pc == 0x089DC704u) goto L_089DC704;
    return;
L_089DC704:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC714:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC72C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC738:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC750:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC75C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(836), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(792)));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28824));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(832)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28736));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27580)));
    ctx.set_gpr(4, ctx.gpr[4] & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27580), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27580)));
    ctx.set_gpr(3, ctx.gpr[4] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-241));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27580), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27579)));
    ctx.set_gpr(4, ctx.gpr[6] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27579), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27576)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(6, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27576), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420)));
    ctx.set_gpr(5, ctx.gpr[3] | 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27572)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27572), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[5] | 2u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420), ctx.gpr[4]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC8B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27652)));
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(7, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27652), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(6, ctx.gpr[3] | 8192u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC954;
      }
      goto L_089DC918;
    }
L_089DC918:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27648)));
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27648), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] | 16384u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[5]);
    goto L_089DC954;
L_089DC954:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27644)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27644), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(4, ctx.gpr[3] | 32768u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC99C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28680));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(620)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(608)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(612)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28712));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27592)));
    ctx.set_gpr(8, ctx.gpr[4] & 7u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[8]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27592), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27591), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27590), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[8] | ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-27588)));
    ctx.set_gpr(8, ctx.gpr[7] & 7u);
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[8]);
    ctx.set_gpr(7, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-27588), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-27587)));
    ctx.set_gpr(7, ctx.gpr[6] & 7u);
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-27587), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-27586)));
    ctx.set_gpr(5, ctx.gpr[5] & 7u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27586), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, 8192u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCAA0:
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(648)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28712));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27596)));
    ctx.set_gpr(4, ctx.gpr[4] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27595), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27594), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, 2048u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCB24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCD1C;
      }
      goto L_089DCB60;
    }
L_089DCB60:
    ctx.set_gpr(31, 0x089DCB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089DCB68u) goto L_089DCB68;
    return;
L_089DCB68:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCBA4;
      }
      goto L_089DCB70;
    }
L_089DCB70:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28452), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28451), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089DCB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 179u, 0x089D0DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DCB9Cu) goto L_089DCB9C;
    return;
L_089DCB9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCD2C;
      }
      goto L_089DCBA4;
    }
L_089DCBA4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DCD04;
      }
      goto L_089DCBB0;
    }
L_089DCBB0:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DCC0C;
      }
      goto L_089DCBC8;
    }
L_089DCBC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DCC08;
      }
      goto L_089DCBD4;
    }
L_089DCBD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DCBFC;
      }
      goto L_089DCBE0;
    }
L_089DCBE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DCBF0;
      }
      goto L_089DCBE8;
    }
L_089DCBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC0C;
      }
      goto L_089DCBF0;
    }
L_089DCBF0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC0C;
      }
      goto L_089DCBFC;
    }
L_089DCBFC:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC0C;
      }
      goto L_089DCC08;
    }
L_089DCC08:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_089DCC0C;
L_089DCC0C:
    ctx.set_gpr(4, ctx.gpr[17] & 240u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DCC6C;
      }
      goto L_089DCC1C;
    }
L_089DCC1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DCC60;
      }
      goto L_089DCC28;
    }
L_089DCC28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DCC54;
      }
      goto L_089DCC34;
    }
L_089DCC34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DCC48;
      }
      goto L_089DCC40;
    }
L_089DCC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC70;
      }
      goto L_089DCC48;
    }
L_089DCC48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC70;
      }
      goto L_089DCC54;
    }
L_089DCC54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC70;
      }
      goto L_089DCC60;
    }
L_089DCC60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC70;
      }
      goto L_089DCC6C;
    }
L_089DCC6C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089DCC70;
L_089DCC70:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32160)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC8C;
      }
      goto L_089DCC7C;
    }
L_089DCC7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27088)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27084)));
    goto L_089DCC8C;
L_089DCC8C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28448), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28447), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28446)));
    ctx.set_gpr(4, ctx.gpr[6] & 3u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28446), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28446)));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-13));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28446), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089DCCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 179u, 0x089D0DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DCCFCu) goto L_089DCCFC;
    return;
L_089DCCFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCD2C;
      }
      goto L_089DCD04;
    }
L_089DCD04:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12584));
    ctx.set_gpr(31, 0x089DCD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x089DCD14u) goto L_089DCD14;
    return;
L_089DCD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCD2C;
      }
      goto L_089DCD1C;
    }
L_089DCD1C:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12584));
    ctx.set_gpr(31, 0x089DCD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x089DCD2Cu) goto L_089DCD2C;
    return;
L_089DCD2C:
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
L_089DCD50:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28256)));
    ctx.set_gpr(4, ctx.gpr[4] & 127u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28256), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28255)));
    ctx.set_gpr(4, ctx.gpr[6] & 127u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28255), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCDC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089DCDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 662u, 0x089B3D5Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCDE8u) goto L_089DCDE8;
    return;
L_089DCDE8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089DCDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089DCDF4u) goto L_089DCDF4;
    return;
L_089DCDF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13916));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(396));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DCE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089DCE18u) goto L_089DCE18;
    return;
L_089DCE18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(31, 0x089DCE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089DCE24u) goto L_089DCE24;
    return;
L_089DCE24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DCE40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCE40u) goto L_089DCE40;
    return;
L_089DCE40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
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
L_089DCE5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089DCE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 35u, 0x089B4318u>(ctx, &aot_mem) && ctx.pc == 0x089DCE7Cu) goto L_089DCE7C;
    return;
L_089DCE7C:
    ctx.set_gpr(31, 0x089DCE84u);
    // nop
    ctx.pc = 0x08B0DEB4u;
    return;
L_089DCE84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD018;
      }
      goto L_089DCE98;
    }
L_089DCE98:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DCEA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCEA8u) goto L_089DCEA8;
    return;
L_089DCEA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCF0C;
      }
      goto L_089DCEC0;
    }
L_089DCEC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DCEE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCEE0u) goto L_089DCEE0;
    return;
L_089DCEE0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DCEF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCEF8u) goto L_089DCEF8;
    return;
L_089DCEF8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD018;
      }
      goto L_089DCF0C;
    }
L_089DCF0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089DCF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCF18u) goto L_089DCF18;
    return;
L_089DCF18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DCF3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCF3Cu) goto L_089DCF3C;
    return;
L_089DCF3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] >> 1u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCFF0;
      }
      goto L_089DCF54;
    }
L_089DCF54:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089DCF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 58u, 0x089B4544u>(ctx, &aot_mem) && ctx.pc == 0x089DCF6Cu) goto L_089DCF6C;
    return;
L_089DCF6C:
    ctx.set_gpr(4, ctx.gpr[17] << 1u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089DCFF0;
L_089DCFF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCF54;
      }
      goto L_089DCFFC;
    }
L_089DCFFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD018u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD018u) goto L_089DD018;
    return;
L_089DD018:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_089DD034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD058u) goto L_089DD058;
    return;
L_089DD058:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD0A4;
      }
      goto L_089DD070;
    }
L_089DD070:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(864)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD088u) goto L_089DD088;
    return;
L_089DD088:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD0A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD0A4u) goto L_089DD0A4;
    return;
L_089DD0A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DD0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 49u, 0x089B4440u>(ctx, &aot_mem) && ctx.pc == 0x089DD0B0u) goto L_089DD0B0;
    return;
L_089DD0B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD0C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD10C;
      }
      goto L_089DD0FC;
    }
L_089DD0FC:
    ctx.set_gpr(31, 0x089DD104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 74u, 0x089B46C8u>(ctx, &aot_mem) && ctx.pc == 0x089DD104u) goto L_089DD104;
    return;
L_089DD104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD220;
      }
      goto L_089DD10C;
    }
L_089DD10C:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD120u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD120u) goto L_089DD120;
    return;
L_089DD120:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD200;
      }
      goto L_089DD138;
    }
L_089DD138:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD200;
      }
      goto L_089DD144;
    }
L_089DD144:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DD1C8;
      }
      goto L_089DD154;
    }
L_089DD154:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089DD174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD174u) goto L_089DD174;
    return;
L_089DD174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089DD188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD188u) goto L_089DD188;
    return;
L_089DD188:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089DD1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD1A4u) goto L_089DD1A4;
    return;
L_089DD1A4:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089DD1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD1C8u) goto L_089DD1C8;
    return;
L_089DD1C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(864)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD1E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD1E0u) goto L_089DD1E0;
    return;
L_089DD1E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD1FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD1FCu) goto L_089DD1FC;
    return;
L_089DD1FC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    goto L_089DD200;
L_089DD200:
    ctx.set_gpr(7, ctx.gpr[16] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4102));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD220u) goto L_089DD220;
    return;
L_089DD220:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD240:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD25C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089DD2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089DD2ACu) goto L_089DD2AC;
    return;
L_089DD2AC:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DD2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089DD2BCu) goto L_089DD2BC;
    return;
L_089DD2BC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD2D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD2D4u) goto L_089DD2D4;
    return;
L_089DD2D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD310;
      }
      goto L_089DD2DC;
    }
L_089DD2DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-17));
    ctx.set_gpr(2, ctx.gpr[16] & ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] | 4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089DD304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 5u, 0x089B4084u>(ctx, &aot_mem) && ctx.pc == 0x089DD304u) goto L_089DD304;
    return;
L_089DD304:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD52C;
      }
      goto L_089DD310;
    }
L_089DD310:
    ctx.set_gpr(22, ctx.gpr[18] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DD350;
      }
      goto L_089DD338;
    }
L_089DD338:
    ctx.set_gpr(2, 65520u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_089DD350;
L_089DD350:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD374;
      }
      goto L_089DD368;
    }
L_089DD368:
    ctx.set_gpr(16, ctx.gpr[16] | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD394;
      }
      goto L_089DD374;
    }
L_089DD374:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-241));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | 32u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3841));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | 512u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_089DD394;
L_089DD394:
    ctx.set_gpr(7, ctx.gpr[16] | 16u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD3B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD3B8u) goto L_089DD3B8;
    return;
L_089DD3B8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD3FC;
      }
      goto L_089DD3D4;
    }
L_089DD3D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DD3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 680u, 0x089B3F48u>(ctx, &aot_mem) && ctx.pc == 0x089DD3F0u) goto L_089DD3F0;
    return;
L_089DD3F0:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD4A4;
      }
      goto L_089DD3FC;
    }
L_089DD3FC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD498;
      }
      goto L_089DD408;
    }
L_089DD408:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD42Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD42Cu) goto L_089DD42C;
    return;
L_089DD42C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD44Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD44Cu) goto L_089DD44C;
    return;
L_089DD44C:
    ctx.set_gpr(23, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD470u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD470u) goto L_089DD470;
    return;
L_089DD470:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD494u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD494u) goto L_089DD494;
    return;
L_089DD494:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_089DD498;
L_089DD498:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD408;
      }
      goto L_089DD4A4;
    }
L_089DD4A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD52C;
      }
      goto L_089DD4BC;
    }
L_089DD4BC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD520;
      }
      goto L_089DD4C8;
    }
L_089DD4C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD4F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD4F0u) goto L_089DD4F0;
    return;
L_089DD4F0:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD51Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD51Cu) goto L_089DD51C;
    return;
L_089DD51C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089DD520;
L_089DD520:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD4C8;
      }
      goto L_089DD52C;
    }
L_089DD52C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_089DD560:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD580;
      }
      goto L_089DD574;
    }
L_089DD574:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD58C;
      }
      goto L_089DD580;
    }
L_089DD580:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD590;
      }
      goto L_089DD58C;
    }
L_089DD58C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089DD590;
L_089DD590:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD638;
      }
      goto L_089DD5CC;
    }
L_089DD5CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD5DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD5DCu) goto L_089DD5DC;
    return;
L_089DD5DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD638;
      }
      goto L_089DD5F4;
    }
L_089DD5F4:
    ctx.set_gpr(17, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD614u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD614u) goto L_089DD614;
    return;
L_089DD614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD630u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD630u) goto L_089DD630;
    return;
L_089DD630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD64C;
      }
      goto L_089DD638;
    }
L_089DD638:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DD64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 106u, 0x089B4BE0u>(ctx, &aot_mem) && ctx.pc == 0x089DD64Cu) goto L_089DD64C;
    return;
L_089DD64C:
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
L_089DD668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD6E8;
      }
      goto L_089DD69C;
    }
L_089DD69C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD6ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD6ACu) goto L_089DD6AC;
    return;
L_089DD6AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD6E8;
      }
      goto L_089DD6C4;
    }
L_089DD6C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD6E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD6E0u) goto L_089DD6E0;
    return;
L_089DD6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD6FC;
      }
      goto L_089DD6E8;
    }
L_089DD6E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DD6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 112u, 0x089B4C70u>(ctx, &aot_mem) && ctx.pc == 0x089DD6FCu) goto L_089DD6FC;
    return;
L_089DD6FC:
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
L_089DD718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD788;
      }
      goto L_089DD748;
    }
L_089DD748:
    ctx.set_gpr(16, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD764u) goto L_089DD764;
    return;
L_089DD764:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD780u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD780u) goto L_089DD780;
    return;
L_089DD780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD790;
      }
      goto L_089DD788;
    }
L_089DD788:
    ctx.set_gpr(31, 0x089DD790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 117u, 0x089B4CF4u>(ctx, &aot_mem) && ctx.pc == 0x089DD790u) goto L_089DD790;
    return;
L_089DD790:
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
L_089DD7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD81C;
      }
      goto L_089DD7DC;
    }
L_089DD7DC:
    ctx.set_gpr(16, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD7F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD7F8u) goto L_089DD7F8;
    return;
L_089DD7F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD814u) goto L_089DD814;
    return;
L_089DD814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD824;
      }
      goto L_089DD81C;
    }
L_089DD81C:
    ctx.set_gpr(31, 0x089DD824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 125u, 0x089B4D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD824u) goto L_089DD824;
    return;
L_089DD824:
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
L_089DD840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD87C;
      }
      goto L_089DD85C;
    }
L_089DD85C:
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD874u) goto L_089DD874;
    return;
L_089DD874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD884;
      }
      goto L_089DD87C;
    }
L_089DD87C:
    ctx.set_gpr(31, 0x089DD884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 133u, 0x089B4E44u>(ctx, &aot_mem) && ctx.pc == 0x089DD884u) goto L_089DD884;
    return;
L_089DD884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD8D0;
      }
      goto L_089DD8B0;
    }
L_089DD8B0:
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD8C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD8C8u) goto L_089DD8C8;
    return;
L_089DD8C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD8D8;
      }
      goto L_089DD8D0;
    }
L_089DD8D0:
    ctx.set_gpr(31, 0x089DD8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 138u, 0x089B4E94u>(ctx, &aot_mem) && ctx.pc == 0x089DD8D8u) goto L_089DD8D8;
    return;
L_089DD8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD8E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA24;
      }
      goto L_089DD924;
    }
L_089DD924:
    ctx.set_gpr(20, ctx.gpr[6] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD948u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD948u) goto L_089DD948;
    return;
L_089DD948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD96Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD96Cu) goto L_089DD96C;
    return;
L_089DD96C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DD9CC;
      }
      goto L_089DD974;
    }
L_089DD974:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD9A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD9A4u) goto L_089DD9A4;
    return;
L_089DD9A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD9C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD9C4u) goto L_089DD9C4;
    return;
L_089DD9C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA2C;
      }
      goto L_089DD9CC;
    }
L_089DD9CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DD9FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DD9FCu) goto L_089DD9FC;
    return;
L_089DD9FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DDA1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DDA1Cu) goto L_089DDA1C;
    return;
L_089DDA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA2C;
      }
      goto L_089DDA24;
    }
L_089DDA24:
    ctx.set_gpr(31, 0x089DDA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 143u, 0x089B4EE4u>(ctx, &aot_mem) && ctx.pc == 0x089DDA2Cu) goto L_089DDA2C;
    return;
L_089DDA2C:
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
L_089DDA50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA94;
      }
      goto L_089DDA6C;
    }
L_089DDA6C:
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DDA8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DDA8Cu) goto L_089DDA8C;
    return;
L_089DDA8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA9C;
      }
      goto L_089DDA94;
    }
L_089DDA94:
    ctx.set_gpr(31, 0x089DDA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 159u, 0x089B50E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDA9Cu) goto L_089DDA9C;
    return;
L_089DDA9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDAAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDAF0;
      }
      goto L_089DDAC8;
    }
L_089DDAC8:
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DDAE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DDAE8u) goto L_089DDAE8;
    return;
L_089DDAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDAF8;
      }
      goto L_089DDAF0;
    }
L_089DDAF0:
    ctx.set_gpr(31, 0x089DDAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 167u, 0x089B5170u>(ctx, &aot_mem) && ctx.pc == 0x089DDAF8u) goto L_089DDAF8;
    return;
L_089DDAF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDB08:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DDB58;
      }
      goto L_089DDB18;
    }
L_089DDB18:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDB4C;
      }
      goto L_089DDB20;
    }
L_089DDB20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DDB3C;
      }
      goto L_089DDB30;
    }
L_089DDB30:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDB5C;
      }
      goto L_089DDB3C;
    }
L_089DDB3C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDB58;
      }
      goto L_089DDB4C;
    }
L_089DDB4C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDB5C;
      }
      goto L_089DDB58;
    }
L_089DDB58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089DDB5C;
L_089DDB5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDB64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089DDB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089DDB90u) goto L_089DDB90;
    return;
L_089DDB90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27920)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27916)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27764)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27760)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27756)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27776)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27772)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27768)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDC44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DDCB8;
      }
      goto L_089DDC64;
    }
L_089DDC64:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDCA4;
      }
      goto L_089DDC70;
    }
L_089DDC70:
    ctx.set_gpr(31, 0x089DDC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDC78u) goto L_089DDC78;
    return;
L_089DDC78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089DDC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089DDC84u) goto L_089DDC84;
    return;
L_089DDC84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DDC9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DDC9Cu) goto L_089DDC9C;
    return;
L_089DDC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDCB8;
      }
      goto L_089DDCA4;
    }
L_089DDCA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDCB8;
      }
      goto L_089DDCB0;
    }
L_089DDCB0:
    ctx.set_gpr(31, 0x089DDCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089DDCB8u) goto L_089DDCB8;
    return;
L_089DDCB8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089DDCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089DDCD4u) goto L_089DDCD4;
    return;
L_089DDCD4:
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
L_089DDCEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDD1C;
      }
      goto L_089DDCF8;
    }
L_089DDCF8:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_089DDD1C;
L_089DDD1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DDCF8;
      }
      goto L_089DDD28;
    }
L_089DDD28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDD30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089DDE40;
      }
      goto L_089DDD58;
    }
L_089DDD58:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089DDD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 433u, 0x08929E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDD84u) goto L_089DDD84;
    return;
L_089DDD84:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x089DDDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089DDDB4u) goto L_089DDDB4;
    return;
L_089DDDB4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDDF8;
      }
      goto L_089DDDC4;
    }
L_089DDDC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089DDDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089DDDD0u) goto L_089DDDD0;
    return;
L_089DDDD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DDDECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DDDECu) goto L_089DDDEC;
    return;
L_089DDDEC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089DDDF8;
L_089DDDF8:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDE20;
      }
      goto L_089DDE04;
    }
L_089DDE04:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089DDE20;
L_089DDE20:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DDE04;
      }
      goto L_089DDE2C;
    }
L_089DDE2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089DDE40;
L_089DDE40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x089DDE84u);
    // nop
    goto L_089DDB64;
L_089DDE84:
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
L_089DDEA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089DDEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 312u, 0x089CA1B8u>(ctx, &aot_mem) && ctx.pc == 0x089DDEF0u) goto L_089DDEF0;
    return;
L_089DDEF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DDF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 133u, 0x089BCCB4u>(ctx, &aot_mem) && ctx.pc == 0x089DDF20u) goto L_089DDF20;
    return;
L_089DDF20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089DDF30u);
    // nop
    goto L_089DDC44;
L_089DDF30:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDFBC;
      }
      goto L_089DDF44;
    }
L_089DDF44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DDFBC;
      }
      goto L_089DDF4C;
    }
L_089DDF4C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DDF9C;
      }
      goto L_089DDF60;
    }
L_089DDF60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DDF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089DDF6Cu) goto L_089DDF6C;
    return;
L_089DDF6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DDF98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DDF98u) goto L_089DDF98;
    return;
L_089DDF98:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089DDF9C;
L_089DDF9C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_089DDFBC;
L_089DDFBC:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DDEF0;
      }
      goto L_089DDFCC;
    }
L_089DDFCC:
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
L_089DDFEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089DE014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089DE014u) goto L_089DE014;
    return;
L_089DE014:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DE020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 83u, 0x089C8820u>(ctx, &aot_mem) && ctx.pc == 0x089DE020u) goto L_089DE020;
    return;
L_089DE020:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DE02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 89u, 0x089C88B0u>(ctx, &aot_mem) && ctx.pc == 0x089DE02Cu) goto L_089DE02C;
    return;
L_089DE02C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE164;
      }
      goto L_089DE060;
    }
L_089DE060:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089DE064;
L_089DE064:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DE094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 133u, 0x089BCCB4u>(ctx, &aot_mem) && ctx.pc == 0x089DE094u) goto L_089DE094;
    return;
L_089DE094:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089DE0A4u);
    // nop
    goto L_089DDC44;
L_089DE0A4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE130;
      }
      goto L_089DE0B8;
    }
L_089DE0B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DE130;
      }
      goto L_089DE0C0;
    }
L_089DE0C0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DE110;
      }
      goto L_089DE0D4;
    }
L_089DE0D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DE0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089DE0E0u) goto L_089DE0E0;
    return;
L_089DE0E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DE10Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DE10Cu) goto L_089DE10C;
    return;
L_089DE10C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089DE110;
L_089DE110:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089DE130;
L_089DE130:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DE064;
      }
      goto L_089DE13C;
    }
L_089DE13C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DE148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 133u, 0x089BCCB4u>(ctx, &aot_mem) && ctx.pc == 0x089DE148u) goto L_089DE148;
    return;
L_089DE148:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089DE158u);
    // nop
    goto L_089DDC44;
L_089DE158:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DE164u);
    // nop
    goto L_089DDB64;
L_089DE164:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(856)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DE1BC;
      }
      goto L_089DE174;
    }
L_089DE174:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DE180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x089BCDF4u>(ctx, &aot_mem) && ctx.pc == 0x089DE180u) goto L_089DE180;
    return;
L_089DE180:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089DE18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 615u, 0x0899B418u>(ctx, &aot_mem) && ctx.pc == 0x089DE18Cu) goto L_089DE18C;
    return;
L_089DE18C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089DE19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE19Cu) goto L_089DE19C;
    return;
L_089DE19C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(836)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DE1B4u);
    // nop
    goto L_089DEDE0;
L_089DE1B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(472), ctx.gpr[3]);
    goto L_089DE1BC;
L_089DE1BC:
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
L_089DE1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DE614;
      }
      goto L_089DE20C;
    }
L_089DE20C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE5C8;
      }
      goto L_089DE238;
    }
L_089DE238:
    ctx.set_gpr(31, 0x089DE240u);
    // nop
    goto L_089DDCEC;
L_089DE240:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(856)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DE4B0;
      }
      goto L_089DE270;
    }
L_089DE270:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DE27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089DE27Cu) goto L_089DE27C;
    return;
L_089DE27C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DE288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DE288u) goto L_089DE288;
    return;
L_089DE288:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(31, 0x089DE29Cu);
    // nop
    goto L_089DF764;
L_089DE29C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DE2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DE2A8u) goto L_089DE2A8;
    return;
L_089DE2A8:
    ctx.set_gpr(3, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089DE2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DE2C0u) goto L_089DE2C0;
    return;
L_089DE2C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089DE2F4u);
    // nop
    goto L_089DF40C;
L_089DE2F4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DE45C;
      }
      goto L_089DE300;
    }
L_089DE300:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DE3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DE3A8u) goto L_089DE3A8;
    return;
L_089DE3A8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DE3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DE3D0u) goto L_089DE3D0;
    return;
L_089DE3D0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DE3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DE3F8u) goto L_089DE3F8;
    return;
L_089DE3F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DE40C;
      }
      goto L_089DE404;
    }
L_089DE404:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DE424;
      }
      goto L_089DE40C;
    }
L_089DE40C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE45C;
      }
      goto L_089DE418;
    }
L_089DE418:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE45C;
      }
      goto L_089DE424;
    }
L_089DE424:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DE45C;
L_089DE45C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DE468u);
    // nop
    goto L_089DF140;
L_089DE468:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(472), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(31, 0x089DE488u);
    // nop
    goto L_089DDCEC;
L_089DE488:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE4D0;
      }
      goto L_089DE4B0;
    }
L_089DE4B0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27008)));
    ctx.set_gpr(3, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27008), ctx.gpr[4]);
    goto L_089DE4D0;
L_089DE4D0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27008)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27020)));
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089DE500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 97u, 0x089E07D0u>(ctx, &aot_mem) && ctx.pc == 0x089DE500u) goto L_089DE500;
    return;
L_089DE500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[19] ^ ctx.gpr[2]);
    ctx.set_gpr(4, 0u < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DE528;
      }
      goto L_089DE520;
    }
L_089DE520:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DE534;
      }
      goto L_089DE528;
    }
L_089DE528:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DE5D0;
      }
      goto L_089DE534;
    }
L_089DE534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE5B0;
      }
      goto L_089DE53C;
    }
L_089DE53C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    ctx.set_gpr(4, ctx.gpr[6] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE5AC;
      }
      goto L_089DE58C;
    }
L_089DE58C:
    ctx.set_gpr(2, (ctx.gpr[6] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    ctx.set_gpr(2, 2048u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089DE5AC;
L_089DE5AC:
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    goto L_089DE5B0;
L_089DE5B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DE53C;
      }
      goto L_089DE5C0;
    }
L_089DE5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE5D0;
      }
      goto L_089DE5C8;
    }
L_089DE5C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089DE5D0;
L_089DE5D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28304)));
    ctx.set_gpr(3, 0u & 127u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28304), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, ctx.gpr[2] | 1024u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(436), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089DE614u);
    // nop
    ctx.pc = 0x08B0DEB4u;
    return;
L_089DE614:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(440)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089DE764;
      }
      goto L_089DE67C;
    }
L_089DE67C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089DE6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 433u, 0x08929E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE6A8u) goto L_089DE6A8;
    return;
L_089DE6A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x089DE6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089DE6D8u) goto L_089DE6D8;
    return;
L_089DE6D8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE71C;
      }
      goto L_089DE6E8;
    }
L_089DE6E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DE6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089DE6F4u) goto L_089DE6F4;
    return;
L_089DE6F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DE710u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DE710u) goto L_089DE710;
    return;
L_089DE710:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089DE71C;
L_089DE71C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE744;
      }
      goto L_089DE728;
    }
L_089DE728:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089DE744;
L_089DE744:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DE728;
      }
      goto L_089DE750;
    }
L_089DE750:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089DE764;
L_089DE764:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(31, 0x089DE7ACu);
    // nop
    goto L_089DDCEC;
L_089DE7AC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089DE7DCu);
    // nop
    goto L_089DDB64;
L_089DE7DC:
    ctx.set_gpr(17, ctx.gpr[17] << 10u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089DE7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 85u, 0x089E06D4u>(ctx, &aot_mem) && ctx.pc == 0x089DE7F8u) goto L_089DE7F8;
    return;
L_089DE7F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DE80C;
      }
      goto L_089DE804;
    }
L_089DE804:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089DE80C;
L_089DE80C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-140));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 2048u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089DE904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 97u, 0x089E07D0u>(ctx, &aot_mem) && ctx.pc == 0x089DE904u) goto L_089DE904;
    return;
L_089DE904:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DE914;
      }
      goto L_089DE90C;
    }
L_089DE90C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089DE914;
L_089DE914:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
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
L_089DE944:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE970:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(9, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(10, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089DE9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 84u, 0x089D0564u>(ctx, &aot_mem) && ctx.pc == 0x089DE9D8u) goto L_089DE9D8;
    return;
L_089DE9D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DE9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089DE9F4u) goto L_089DE9F4;
    return;
L_089DE9F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA14;
      }
      goto L_089DEA08;
    }
L_089DEA08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(856)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089DEA14;
L_089DEA14:
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEAD0;
      }
      goto L_089DEA20;
    }
L_089DEA20:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x089DEA30u);
    // nop
    goto L_089DF1C0;
L_089DEA30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[9] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DEAC4;
      }
      goto L_089DEA8C;
    }
L_089DEA8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEAC4;
      }
      goto L_089DEA98;
    }
L_089DEA98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DEAC4;
      }
      goto L_089DEAA0;
    }
L_089DEAA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEAC4;
      }
      goto L_089DEAAC;
    }
L_089DEAAC:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_089DEAC4;
L_089DEAC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[16]);
    goto L_089DEAD0;
L_089DEAD0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DEAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 169u, 0x089D0BECu>(ctx, &aot_mem) && ctx.pc == 0x089DEAECu) goto L_089DEAEC;
    return;
L_089DEAEC:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27048)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27044)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27048), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27044), ctx.gpr[3]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27040)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27036)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27040), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27036), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DEB90;
      }
      goto L_089DEB64;
    }
L_089DEB64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(472), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(748), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DEB90;
L_089DEB90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DED44;
      }
      goto L_089DEBA4;
    }
L_089DEBA4:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DEBBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DEBBCu) goto L_089DEBBC;
    return;
L_089DEBBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEBD4;
      }
      goto L_089DEBC4;
    }
L_089DEBC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEBD4;
      }
      goto L_089DEBD0;
    }
L_089DEBD0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089DEBD4;
L_089DEBD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEC28;
      }
      goto L_089DEBE0;
    }
L_089DEBE0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DEBF8;
      }
      goto L_089DEBE8;
    }
L_089DEBE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DEC10;
      }
      goto L_089DEBF8;
    }
L_089DEBF8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089DEC08u);
    // nop
    goto L_089DF764;
L_089DEC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DED44;
      }
      goto L_089DEC10;
    }
L_089DEC10:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089DEC20u);
    // nop
    goto L_089DED70;
L_089DEC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DED44;
      }
      goto L_089DEC28;
    }
L_089DEC28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DEC30;
    }
L_089DEC30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DEC78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DEC78u) goto L_089DEC78;
    return;
L_089DEC78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DED44;
      }
      goto L_089DEC80;
    }
L_089DEC80:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x089DEC90u);
    // nop
    goto L_089DED70;
L_089DEC90:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089DECE0;
      }
      goto L_089DECA0;
    }
L_089DECA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27064)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27060)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27064), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27060), ctx.gpr[3]);
    goto L_089DECE0;
L_089DECE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089DED44;
      }
      goto L_089DECEC;
    }
L_089DECEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27056)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27052)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27056), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27052), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DED44;
      }
      goto L_089DED34;
    }
L_089DED34:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089DED44u);
    // nop
    goto L_089DED70;
L_089DED44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_089DED70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089DED90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DED90u) goto L_089DED90;
    return;
L_089DED90:
    ctx.set_gpr(3, (ctx.gpr[17] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DEDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DEDC8u) goto L_089DEDC8;
    return;
L_089DEDC8:
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
L_089DEDE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DF124;
      }
      goto L_089DEE00;
    }
L_089DEE00:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF100;
      }
      goto L_089DEE2C;
    }
L_089DEE2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(856)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DEF58;
      }
      goto L_089DEE3C;
    }
L_089DEE3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEED8;
      }
      goto L_089DEE48;
    }
L_089DEE48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEFD8;
      }
      goto L_089DEECC;
    }
L_089DEECC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEFD8;
      }
      goto L_089DEED8;
    }
L_089DEED8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEFD8;
      }
      goto L_089DEF4C;
    }
L_089DEF4C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEFD8;
      }
      goto L_089DEF58;
    }
L_089DEF58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27920)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27916)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27764)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27760)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27756)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DEFD8;
L_089DEFD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DEFECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DEFECu) goto L_089DEFEC;
    return;
L_089DEFEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(492)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(500), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(31, 0x089DF008u);
    // nop
    goto L_089DDCEC;
L_089DF008:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF06C;
      }
      goto L_089DF034;
    }
L_089DF034:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089DF04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 85u, 0x089E06D4u>(ctx, &aot_mem) && ctx.pc == 0x089DF04Cu) goto L_089DF04C;
    return;
L_089DF04C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF060;
      }
      goto L_089DF058;
    }
L_089DF058:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(440), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089DF060;
L_089DF060:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_089DF06C;
L_089DF06C:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27032));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(884));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF118;
      }
      goto L_089DF100;
    }
L_089DF100:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x089DF10Cu);
    // nop
    goto L_089DF1C0;
L_089DF10C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF128;
      }
      goto L_089DF118;
    }
L_089DF118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF128;
      }
      goto L_089DF124;
    }
L_089DF124:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089DF128;
L_089DF128:
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
L_089DF140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DF1AC;
      }
      goto L_089DF15C;
    }
L_089DF15C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(31, 0x089DF168u);
    // nop
    goto L_089DDCEC;
L_089DF168:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27008)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27020)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(492), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    goto L_089DF1AC;
L_089DF1AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF1C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF288;
      }
      goto L_089DF210;
    }
L_089DF210:
    ctx.set_gpr(31, 0x089DF218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DF218u) goto L_089DF218;
    return;
L_089DF218:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[16]))));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF24C;
      }
      goto L_089DF238;
    }
L_089DF238:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF260;
      }
      goto L_089DF24C;
    }
L_089DF24C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089DF260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF260u) goto L_089DF260;
    return;
L_089DF260:
    ctx.set_gpr(4, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    goto L_089DF288;
L_089DF288:
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
L_089DF2AC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF304;
      }
      goto L_089DF2D8;
    }
L_089DF2D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF2FC;
      }
      goto L_089DF2F0;
    }
L_089DF2F0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF300;
      }
      goto L_089DF2FC;
    }
L_089DF2FC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089DF300;
L_089DF300:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_089DF304;
L_089DF304:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF30C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DF360;
      }
      goto L_089DF338;
    }
L_089DF338:
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF368;
      }
      goto L_089DF360;
    }
L_089DF360:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089DF368;
L_089DF368:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF384;
      }
      goto L_089DF380;
    }
L_089DF380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_089DF384;
L_089DF384:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF38C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DF3E0;
      }
      goto L_089DF3B8;
    }
L_089DF3B8:
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF3E8;
      }
      goto L_089DF3E0;
    }
L_089DF3E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089DF3E8;
L_089DF3E8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF404;
      }
      goto L_089DF400;
    }
L_089DF400:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_089DF404;
L_089DF404:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF40C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089DF4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF4C0u) goto L_089DF4C0;
    return;
L_089DF4C0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DF538;
      }
      goto L_089DF4D0;
    }
L_089DF4D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089DF4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF4F8u) goto L_089DF4F8;
    return;
L_089DF4F8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DF538;
      }
      goto L_089DF508;
    }
L_089DF508:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DF530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF530u) goto L_089DF530;
    return;
L_089DF530:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    goto L_089DF538;
L_089DF538:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DF64C;
      }
      goto L_089DF544;
    }
L_089DF544:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[20] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DF578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF578u) goto L_089DF578;
    return;
L_089DF578:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DF5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF5A0u) goto L_089DF5A0;
    return;
L_089DF5A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DF5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF5C8u) goto L_089DF5C8;
    return;
L_089DF5C8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF5E8;
      }
      goto L_089DF5D0;
    }
L_089DF5D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DF5E8;
      }
      goto L_089DF5DC;
    }
L_089DF5DC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF650;
      }
      goto L_089DF5E8;
    }
L_089DF5E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DF600;
      }
      goto L_089DF5F4;
    }
L_089DF5F4:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF650;
      }
      goto L_089DF600;
    }
L_089DF600:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF618;
      }
      goto L_089DF60C;
    }
L_089DF60C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF64C;
      }
      goto L_089DF618;
    }
L_089DF618:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF630;
      }
      goto L_089DF624;
    }
L_089DF624:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF64C;
      }
      goto L_089DF630;
    }
L_089DF630:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF650;
      }
      goto L_089DF64C;
    }
L_089DF64C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089DF650;
L_089DF650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF678:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089DF700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF700u) goto L_089DF700;
    return;
L_089DF700:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DF74C;
      }
      goto L_089DF70C;
    }
L_089DF70C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089DF730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF730u) goto L_089DF730;
    return;
L_089DF730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF750;
      }
      goto L_089DF74C;
    }
L_089DF74C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_089DF750;
L_089DF750:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
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
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DF7ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF7ACu) goto L_089DF7AC;
    return;
L_089DF7AC:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF7C0;
      }
      goto L_089DF7B8;
    }
L_089DF7B8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(840)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_089DF7C0;
L_089DF7C0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF7DC;
      }
      goto L_089DF7C8;
    }
L_089DF7C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DF7DC;
      }
      goto L_089DF7D8;
    }
L_089DF7D8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089DF7DC;
L_089DF7DC:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF820;
      }
      goto L_089DF814;
    }
L_089DF814:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089DF820;
L_089DF820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 13u, 0x089E0114u>(ctx, &aot_mem); return;
      }
      goto L_089DF82C;
    }
L_089DF82C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF884;
      }
      goto L_089DF834;
    }
L_089DF834:
    ctx.set_gpr(2, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DF884u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF884u) goto L_089DF884;
    return;
L_089DF884:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 8u, 0x089E00D0u>(ctx, &aot_mem); return;
      }
      goto L_089DF894;
    }
L_089DF894:
    ctx.set_gpr(5, ctx.gpr[23] << 4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(21, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[8] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DF8C4;
    }
L_089DF8C4:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28648));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DF8E0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF8FC;
      }
      goto L_089DF8E8;
    }
L_089DF8E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF8FC;
      }
      goto L_089DF8F0;
    }
L_089DF8F0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DF8FC;
    }
L_089DF8FC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF99C;
      }
      goto L_089DF904;
    }
L_089DF904:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DF928;
      }
      goto L_089DF910;
    }
L_089DF910:
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF92C;
      }
      goto L_089DF928;
    }
L_089DF928:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(60));
    goto L_089DF92C;
L_089DF92C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DF948u);
    // nop
    ctx.pc = 0x08B0DECCu;
    return;
L_089DF948:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DF954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DF954u) goto L_089DF954;
    return;
L_089DF954:
    ctx.set_gpr(3, (ctx.gpr[18] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(30, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[18] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DF994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DF994u) goto L_089DF994;
    return;
L_089DF994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF9E8;
      }
      goto L_089DF99C;
    }
L_089DF99C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DF9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DF9A8u) goto L_089DF9A8;
    return;
L_089DF9A8:
    ctx.set_gpr(3, (ctx.gpr[18] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(30, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[18] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DF9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DF9E8u) goto L_089DF9E8;
    return;
L_089DF9E8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFA4C;
      }
      goto L_089DF9F0;
    }
L_089DF9F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DFA30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DFA30u) goto L_089DFA30;
    return;
L_089DFA30:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFA4C;
      }
      goto L_089DFA38;
    }
L_089DFA38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DFA4C;
      }
      goto L_089DFA48;
    }
L_089DFA48:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089DFA4C;
L_089DFA4C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFA54;
    }
L_089DFA54:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DFA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DFA60u) goto L_089DFA60;
    return;
L_089DFA60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFA90;
      }
      goto L_089DFA7C;
    }
L_089DFA7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFAA4;
      }
      goto L_089DFA90;
    }
L_089DFA90:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089DFAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFAA4u) goto L_089DFAA4;
    return;
L_089DFAA4:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, (ctx.gpr[18] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[30]);
    ctx.set_gpr(2, 2304u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DFAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DFAECu) goto L_089DFAEC;
    return;
L_089DFAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFAF4;
    }
L_089DFAF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFB08;
      }
      goto L_089DFAFC;
    }
L_089DFAFC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFB08;
    }
L_089DFB08:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DFB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DFB14u) goto L_089DFB14;
    return;
L_089DFB14:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, (ctx.gpr[18] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFB74;
      }
      goto L_089DFB60;
    }
L_089DFB60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFB88;
      }
      goto L_089DFB74;
    }
L_089DFB74:
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089DFB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFB88u) goto L_089DFB88;
    return;
L_089DFB88:
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089DFBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DFBB4u) goto L_089DFBB4;
    return;
L_089DFBB4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFBBC;
    }
L_089DFBBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DFBFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DFBFCu) goto L_089DFBFC;
    return;
L_089DFBFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFC0C;
    }
L_089DFC0C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFC18;
    }
L_089DFC18:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFC24;
    }
L_089DFC24:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DFC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DFC50u) goto L_089DFC50;
    return;
L_089DFC50:
    ctx.set_gpr(3, (ctx.gpr[2] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2304u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFC90;
    }
L_089DFC90:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFC98;
    }
L_089DFC98:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DFCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DFCA4u) goto L_089DFCA4;
    return;
L_089DFCA4:
    ctx.set_gpr(3, (ctx.gpr[18] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DFCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DFCDCu) goto L_089DFCDC;
    return;
L_089DFCDC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFCE4;
    }
L_089DFCE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DFD24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DFD24u) goto L_089DFD24;
    return;
L_089DFD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFD2C;
    }
L_089DFD2C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFD34;
    }
L_089DFD34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[9] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFEE0;
      }
      goto L_089DFD5C;
    }
L_089DFD5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089DFDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 612u, 0x089CB908u>(ctx, &aot_mem) && ctx.pc == 0x089DFDA0u) goto L_089DFDA0;
    return;
L_089DFDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089DFDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 308u, 0x08A037E4u>(ctx, &aot_mem) && ctx.pc == 0x089DFDBCu) goto L_089DFDBC;
    return;
L_089DFDBC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DFDD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DFDD4u) goto L_089DFDD4;
    return;
L_089DFDD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFDDC;
    }
L_089DFDDC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DFDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DFDE8u) goto L_089DFDE8;
    return;
L_089DFDE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DFE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DFE28u) goto L_089DFE28;
    return;
L_089DFE28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DFE78;
      }
      goto L_089DFE38;
    }
L_089DFE38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27064)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27060)));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-27064), ctx.gpr[6]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-27060), ctx.gpr[5]);
    goto L_089DFE78;
L_089DFE78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DFEC4;
      }
      goto L_089DFE84;
    }
L_089DFE84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052), ctx.gpr[4]);
    goto L_089DFEC4;
L_089DFEC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFEE0;
    }
L_089DFEE0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DFEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DFEECu) goto L_089DFEEC;
    return;
L_089DFEEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DFF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DFF2Cu) goto L_089DFF2C;
    return;
L_089DFF2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFF34;
    }
L_089DFF34:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFF3C;
    }
L_089DFF3C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 5u, 0x089E0088u>(ctx, &aot_mem); return;
      }
      goto L_089DFF44;
    }
L_089DFF44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DFF84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DFF84u) goto L_089DFF84;
    return;
L_089DFF84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 7u, 0x089E00CCu>(ctx, &aot_mem); return;
      }
      goto L_089DFF8C;
    }
L_089DFF8C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089DFF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089DFF98u) goto L_089DFF98;
    return;
L_089DFF98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089DFFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089DFFD8u) goto L_089DFFD8;
    return;
L_089DFFD8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 2u, 0x089E0024u>(ctx, &aot_mem); return;
      }
      goto L_089DFFE4;
    }
L_089DFFE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.pc = 0x089E0000u; return;
}

void recomp_unit_0118(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0118_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_118(Runtime &runtime) {
    runtime.register_generated_unit(118u, 0x089DC000u, 16384u, &recomp_unit_0118, &recomp_unit_0118_entry);
    runtime.register_function(0x089DC000u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC038u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC044u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC048u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC090u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC108u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC158u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC17Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC204u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC210u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC214u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC224u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC230u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC234u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC294u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC320u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC32Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC338u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC33Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC388u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC39Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC414u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC418u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC420u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC42Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC430u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC478u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC49Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC500u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC50Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC55Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC580u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC600u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC604u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC650u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC674u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC67Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC68Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC694u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC704u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC714u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC72Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC738u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC750u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC75Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC768u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC918u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC954u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC99Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD018u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD034u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD058u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD070u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD088u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD104u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD120u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD138u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD144u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD154u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD174u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD188u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD200u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD220u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD240u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD25Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD304u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD310u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD338u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD350u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD368u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD374u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD394u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD408u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD42Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD44Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD470u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD494u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD498u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD51Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD520u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD52Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD560u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD574u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD580u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD58Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD598u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD614u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD630u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD638u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD64Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD668u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD69Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD718u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD748u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD780u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD788u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD790u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD814u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD81Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD824u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD840u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD85Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD874u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD87Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD884u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD894u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD924u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD948u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD96Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD974u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE014u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE020u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE02Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE060u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE064u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE094u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE110u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE130u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE13Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE148u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE158u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE164u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE174u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE180u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE18Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE19Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE20Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE238u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE240u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE270u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE27Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE288u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE29Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE300u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE404u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE40Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE418u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE424u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE45Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE468u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE488u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE500u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE520u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE528u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE534u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE53Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE58Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE614u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE644u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE67Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE710u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE71Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE728u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE744u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE750u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE804u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE80Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE904u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE90Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE914u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE944u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE970u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEECCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEED8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF008u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF034u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF04Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF058u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF060u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF06Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF100u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF118u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF124u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF128u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF140u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF15Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF168u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF210u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF218u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF238u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF24Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF260u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF288u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF300u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF304u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF30Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF338u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF360u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF368u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF380u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF384u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF38Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF400u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF404u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF40Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF508u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF530u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF538u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF544u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF578u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF600u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF60Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF618u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF624u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF630u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF64Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF650u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF678u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF700u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF70Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF730u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF74Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF750u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF814u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF820u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF82Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF834u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF884u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF894u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF904u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF910u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF928u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF92Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF948u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF954u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF994u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF99Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFE4u, &recomp_unit_0118, "recomp_unit_0118");
}
} // namespace psprecomp
